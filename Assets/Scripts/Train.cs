using UnityEngine;

public class Train : MonoBehaviour
{
	private static readonly Quaternion rotationDown   = Quaternion.identity;
	private static readonly Quaternion rotationUp = Quaternion.Euler(0, 180, 0);

	public float speed = 2f;
	private static readonly float min   = 187.4f; //position at bottom
	private static readonly float max   = 255.13f;
	private static readonly float turnDuration = 2.5f;

	// The current direction
	public Direction _direction;

	// The current speed
	private Vector3 _speed;

	// The bridge
	private Transform _bridge;

	// The turning helper
	private CubicBezierMoveHelper _turningHelper = new CubicBezierMoveHelper();

	// True if turning
	private bool _isTurning;

	public AudioSource m_AudioSource;
	public AudioClip m_ClipCrash;

	public Rigidbody m_Rigidbody;

	public Direction Direction
	{
		get
		{
			return _direction;
		}
		set
		{
			_direction = value;

			if (_direction == Direction.Up)
			{
				transform.localRotation = rotationUp;
				_speed.z = speed;
			}
			else if (_direction == Direction.Down)
			{
				transform.localRotation = rotationDown;
				_speed.z = -speed;
			}
			else
			{
				_speed.z = 0;
			}
		}
	}

	public void Turn()
	{
		if (_isTurning || _bridge == null) return;

		if (_direction == Direction.Up)
		{
			if (transform.position.z > _bridge.position.z)
			{
				_bridge = null;
				return;
			}
		}
		else if (_direction == Direction.Down)
		{
			if (transform.position.z < _bridge.position.z)
			{
				_bridge = null;
				return;
			}
		}

		Vector3 control1 = new Vector3 (0f, 3.81f, 0f);//Vector3.zero;
		Vector3 control2 = new Vector3 (0f, 3.81f, 0f);//Vector3.zero;
		Vector3 end = new Vector3 (0f, 3.81f, 0f);//Vector3.zero;

		end.x = 2 * _bridge.position.x - transform.position.x;
		end.z = 2 * _bridge.position.z - transform.position.z;

		control1.x = transform.position.x;
		control1.z = end.z;

		control2.x = end.x;
		control2.z = transform.position.z;

		_turningHelper.Play(transform, control1, control2, end, false, turnDuration);

		_isTurning = true;
	}

	void OnTriggerEnter(Collider other)
	{
		TriggerBehaviour trigger = other.GetComponent<TriggerBehaviour>();

		if (trigger != null)
		{
			switch (trigger.type)
			{
				case TriggerType.Bridge:
				{
					trigger.numberVehicle++;

					_bridge = other.transform;

					Turn();

					break;
				}
				case TriggerType.Train:
				{
					break;
				}
			}
		}
	}

	void OnTriggerExit(Collider other)
	{
		TriggerBehaviour trigger = other.GetComponent<TriggerBehaviour>();

		if (trigger != null)
		{
			switch (trigger.type)
			{
				case TriggerType.Bridge:
				{
					trigger.numberVehicle--;

					GameObject gameManager = GameObject.Find ("GameManager");
					bool isGameOver = gameManager.GetComponent<GameManager> ().isGameOver;

					if (trigger.numberVehicle == 0 && !isGameOver) {
						TouchHandle touchHandle = GameObject.Find ("Panel").GetComponent<TouchHandle> ();
						touchHandle.DestroyBridge (other.transform.parent.gameObject);
						_bridge = null;
					}
						
					break;
				}
				case TriggerType.Train:
				{
					break;
				}
			}
		}
	}

	void OnCollisionEnter(Collision col) {
		TriggerBehaviour trigger = col.transform.GetComponent<TriggerBehaviour>();

		if (col.gameObject.tag == "Vehicle") {
			GameObject gameManager = GameObject.Find ("GameManager");
			gameManager.GetComponent<GameManager> ().OnGameOver ();

			//play crash sound
			m_AudioSource.clip = m_ClipCrash;
			m_AudioSource.Play ();

			//show smoke effect
			gameManager.GetComponent<GameManager> ().m_SmokeEffect.transform.position = transform.position;
			gameManager.GetComponent<GameManager> ().m_SmokeEffect.transform.gameObject.SetActive (true);
		} 
	}

	public void OnDisable ()
	{
		m_Rigidbody.isKinematic = true;
		_speed.z = 0;
	}

	void Update()
	{
		if (_isTurning)
		{
			if (_turningHelper.Update(Time.deltaTime))
			{
				// Fix rotation
				if (_direction == Direction.Up)
				{
					transform.localRotation = rotationUp;
				}
				else if (_direction == Direction.Down)
				{
					transform.localRotation = rotationDown;
				}

				_bridge = null;
				_isTurning = false;
			}
		}
		else
		{
			transform.position += _speed * Time.deltaTime;

			if ((transform.position.z < min && _direction == Direction.Down) || (transform.position.z > max-10 && _direction == Direction.Up))
			{
				//GameManager.Instance.OnTrainFinished(gameObject);
				GameObject gameManager = GameObject.Find ("GameManager");
				gameManager.GetComponent<GameManager> ().score++;

				gameManager.GetComponent<GameManager> ().DestroyVehicle (transform.gameObject);
			}
		}
	}
}
