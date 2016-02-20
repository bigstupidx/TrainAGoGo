using UnityEngine;
using System.Collections;


public class AIMovementScript : MonoBehaviour {

	enum VehicleState {
		isOnGround = 1,
		isOnBridge,
		isOutBridge,
	};

	public float m_Speed = 12f;            
	public float m_TurnSpeed = 1;       
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

	//values that will be set in the Inspector
	public Transform Target;
	public float RotationSpeed = 0.25f;

	//values for internal use
	private Quaternion _lookRotation;
	private Vector3 _direction;

	private void Awake()
	{
		m_Rigidbody = GetComponent<Rigidbody>();

		vehicleState = (int)VehicleState.isOnGround;
	}

	private void OnEnable ()
	{
		m_Rigidbody.isKinematic = false;
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




		if (vehicleState == (int)VehicleState.isOnBridge) {
			//find the vector pointing from our position to the target
			Target = collisonObject.transform.parent.transform.Find("CenterPoint");



			_direction = (Target.position - transform.position).normalized;

			Debug.Log (_direction);



			//create the rotation we need to be in to look at the target
			_lookRotation = Quaternion.LookRotation(_direction);


			//rotate us over time according to speed until we are in the required rotation
			transform.rotation = Quaternion.Slerp(transform.rotation, _lookRotation, Time.deltaTime * RotationSpeed);
//			m_Rigidbody.MoveRotation(_lookRotation * m_Rigidbody.rotation);

		} 
		else if (vehicleState == (int)VehicleState.isOutBridge) { 


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
			Debug.Log ("Bridge");
			if (vehicleState == (int)VehicleState.isOnGround) {

				vehicleState = (int)VehicleState.isOnBridge;


			} 
		} 
		else if (col.gameObject.tag == "Road") { 
			//vehicle must hit the center of bridge before check collide with other road.

			if (vehicleState == (int)VehicleState.isOnBridge) {
				

			}
		} 
	}
}
