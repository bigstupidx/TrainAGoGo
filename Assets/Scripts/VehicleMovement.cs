using UnityEngine;
using System.Collections;


public class VehicleMovement : MonoBehaviour {

	enum VehicleState {
		isOnGround = 1,
		isOnBridge,
		isOutBridge,
	};

	public float m_Speed = 12f;            
	public float m_TurnSpeed = 180;       
	public AudioSource m_MovementAudio;    
	public AudioClip m_EngineIdling;       
	public AudioClip m_EngineDriving;      
	public float m_PitchRange = 0.2f;

	private string m_MovementAxisName;     
	private string m_TurnAxisName;         
	private Rigidbody m_Rigidbody;         
	private float m_MovementInputValue;    
	private float m_TurnInputValue;        
	private float m_OriginalPitch;      

	public int vehicleState;
	private bool isTurnLeft;
	private float k_DirectionCoeffience;
	private float k_TurnCoeffience;
	private float originalTurnValue;
	private float previousTurnValue;	//turn value before each vehicle state
	private float deaccelerateMovementInputValue; // use to deaccelrate velocity of vehicle before turning
	private float deaccelerateSpeedValue;

	private bool isHitCenterBridge;	//check if hit center of bridge

	private Collision collisonObject;
	private Collision collisonRoad;

	private void Awake()
	{
		m_Rigidbody = GetComponent<Rigidbody>();

		vehicleState = (int)VehicleState.isOnGround;

		m_MovementInputValue = 0.1f;
		m_TurnInputValue = 0f;
		deaccelerateMovementInputValue = 0.15f;
		deaccelerateSpeedValue = 10;

		originalTurnValue = transform.rotation.eulerAngles.y;
		previousTurnValue = originalTurnValue;


		if (originalTurnValue != 0f) {
			k_DirectionCoeffience = 1f;
			k_TurnCoeffience = 0.20f;
		} 
		else {
			k_DirectionCoeffience = -1f;
			k_TurnCoeffience = 0.20f;
		}

		isTurnLeft = false;
		isHitCenterBridge = false;
	}

	private void OnEnable ()
	{
		m_Rigidbody.isKinematic = false;
	}


	private void OnDisable ()
	{
		m_Rigidbody.isKinematic = true;
	}


	private void Start()
	{
//		m_MovementAxisName = "VerticalUI";
//		m_TurnAxisName = "HorizontalUI";

//		m_OriginalPitch = m_MovementAudio.pitch;


	}

	private void Update()
	{
		// Store the player's input and make sure the audio for the engine is playing.
//		m_MovementInputValue = Input.GetAxis(m_MovementAxisName);
//		m_TurnInputValue = Input.GetAxis (m_TurnAxisName);

//		Debug.Log ("turnInput = " + m_TurnInputValue);

//		m_MovementInputValue += 0.001f;

//		EngineAudio ();

	}


	private void EngineAudio()
	{
		// Play the correct audio clip based on whether or not the tank is moving and what audio is currently playing.
		if (Mathf.Abs (m_TurnInputValue) < 0.1f && Mathf.Abs (m_MovementInputValue) < 0.1f) {
			if (m_MovementAudio.clip == m_EngineDriving) {
				m_MovementAudio.clip = m_EngineIdling;
				m_MovementAudio.pitch = Random.Range (m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);					
				m_MovementAudio.Play ();
			}
		} else {
			if (m_MovementAudio.clip == m_EngineIdling) {
				m_MovementAudio.clip = m_EngineDriving;
				m_MovementAudio.pitch = Random.Range (m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);					
				m_MovementAudio.Play ();
			}
		}
	}


	private void FixedUpdate()
	{
		// Move and turn the tank.
		Move ();
		Turn ();


//		float deltaY = Mathf.Abs (previousTurnValue - transform.rotation.eulerAngles.y);

		if (vehicleState == (int)VehicleState.isOnBridge) {
			if (transform.rotation.eulerAngles.y % 90 == 0f && originalTurnValue != 0) {
				m_TurnInputValue = 0f;
				previousTurnValue = transform.rotation.eulerAngles.y;
			} 
			else {
				if (transform.rotation.eulerAngles.y == originalTurnValue) {
					m_TurnInputValue = 0f;
					previousTurnValue = transform.rotation.eulerAngles.y;
				}
			}
		} 
		else if (vehicleState == (int)VehicleState.isOutBridge) { 
			
			//check upon hitting road after on bridge, check current rotation to original rotation in order to let vehicle whether continuing turn or not.

			if (originalTurnValue != 0f) {
				if ((transform.rotation.eulerAngles.y <= originalTurnValue && !isTurnLeft)
				    || (transform.rotation.eulerAngles.y > originalTurnValue && isTurnLeft)) {
					m_TurnInputValue = 0f;
					previousTurnValue = originalTurnValue;

					//transform it to the same x position with current road
					transform.eulerAngles = new Vector3 (0f, originalTurnValue, 0f);

		
					MeshRenderer roadRender = collisonRoad.gameObject.GetComponent<MeshRenderer> () as MeshRenderer;
					Vector3 center = roadRender.bounds.center;
					transform.position = new Vector3 (center.x, transform.position.y, transform.position.z);

					vehicleState = (int)VehicleState.isOnGround;

					//destroy passed bridge
					Destroy (collisonObject.gameObject.transform.parent.gameObject);
				} 
			} 
			else {
//				Debug.Log ("transform.rotation.eulerAngles.y =" + transform.rotation.eulerAngles.y);
//				Debug.Log ("isTurnLeft = "+isTurnLeft);
				if ((transform.rotation.eulerAngles.y > 340 && transform.rotation.eulerAngles.y < 360 && isTurnLeft)
									|| (transform.rotation.eulerAngles.y <= originalTurnValue && !isTurnLeft)) {
					m_TurnInputValue = 0f;
					previousTurnValue = originalTurnValue;

					//transform it to the same x position with current road
					transform.eulerAngles = new Vector3 (0f, originalTurnValue, 0f);

					MeshRenderer roadRender = collisonRoad.gameObject.GetComponent<MeshRenderer> () as MeshRenderer;
					Vector3 center = roadRender.bounds.center;
					transform.position = new Vector3 (center.x, transform.position.y, transform.position.z);

					vehicleState = (int)VehicleState.isOnGround;

					//destroy passed bridge
					Destroy (collisonObject.gameObject.transform.parent.gameObject);
				}
			}
		}
	}


	private void Move()
	{
		// Adjust the position of the tank based on the player's input.
		Vector3 movement = transform.forward * m_MovementInputValue * m_Speed * Time.deltaTime;

		m_Rigidbody.MovePosition (m_Rigidbody.position - movement);
	}

	private void Turn()
	{
		// Adjust the rotation of the tank based on the player's input.
		float turn = m_TurnInputValue * m_TurnSpeed * Time.deltaTime;

		Quaternion turnRotation = Quaternion.Euler (0f,turn,0f);

		m_Rigidbody.MoveRotation (m_Rigidbody.rotation * turnRotation);
	}

	void OnCollisionEnter(Collision col) {
		if (col.gameObject.tag == "Bridge") {
			collisonObject = col;

			if (vehicleState == (int)VehicleState.isOnGround) {
				
				vehicleState = (int)VehicleState.isOnBridge;

				//decrease velocity of vehicle
				m_MovementInputValue = deaccelerateMovementInputValue;
				m_Speed = deaccelerateSpeedValue;

				//check turn direction depend on vehicle position and bridge position
				float deltaX = transform.position.x - col.transform.position.x;
				float deltaZ = transform.position.z - col.transform.position.z;
//				Debug.Log ("deltaZ = " + deltaX);

				if (originalTurnValue != 0) {
					//dont check collide if bridge is behind vehicle
					if (deltaZ < 0) {
						if (deltaX < 0) {
							//turn right
							m_TurnInputValue = k_TurnCoeffience * k_DirectionCoeffience;

							isTurnLeft = false;
						} else {
							//turn left
							m_TurnInputValue = -(k_TurnCoeffience * k_DirectionCoeffience);

							isTurnLeft = true;
						}
					}
				}
				else {
					//dont check collide if bridge is behind vehicle
					if (deltaZ > 0) {
						if (deltaX > 0) {
							//turn right
							m_TurnInputValue = -(k_TurnCoeffience * k_DirectionCoeffience);

//						Debug.Log ("m_TurnInputValue right = " + m_TurnInputValue);

							isTurnLeft = false;
						} else {
							//turn left
							m_TurnInputValue = (k_TurnCoeffience * k_DirectionCoeffience);

							isTurnLeft = true;
						}
					}
				}
			} 
		} 
		else if (col.gameObject.tag == "Road" && isHitCenterBridge) { 
			//vehicle must hit the center of bridge before check collide with other road.
			collisonRoad = col;

			if (vehicleState == (int)VehicleState.isOnBridge) {

				//reset center of bridge
				isHitCenterBridge = false;

				vehicleState = (int)VehicleState.isOutBridge;

				//decrease velocity of vehicle
				m_MovementInputValue = deaccelerateMovementInputValue;
				m_Speed = deaccelerateSpeedValue;

				if (originalTurnValue != 0) {
					//turn right from bridge, so now turn left
					if (!isTurnLeft) {
						m_TurnInputValue = -(k_TurnCoeffience * k_DirectionCoeffience);
					} else {
						//turn left from bridge, so now turn right
						m_TurnInputValue = k_TurnCoeffience * k_DirectionCoeffience;
					}
				} 
				else {
					if (!isTurnLeft)
						m_TurnInputValue = (k_TurnCoeffience * k_DirectionCoeffience);
					else 
						m_TurnInputValue = -(k_TurnCoeffience * k_DirectionCoeffience);
				}
			}
		} 
		else if (col.gameObject.tag == "BridgePoint") {
			isHitCenterBridge = true;
		}
	}
}
	