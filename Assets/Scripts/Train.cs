using UnityEngine;

public class Train : MonoBehaviour
{
	private static readonly Quaternion rotationUp   = Quaternion.identity;
	private static readonly Quaternion rotationDown = Quaternion.Euler(0, 180, 0);

	private static readonly float speed = 1.0f;
	private static readonly float min   = -1.0f;
	private static readonly float max   = 11.0f;
	private static readonly float turnDuration = 1.0f;

	// The current direction
	private Direction _direction;

	// The current speed
	private Vector3 _speed;

	// The bridge
	private Transform _bridge;

	// The turning helper
	private CubicBezierMoveHelper _turningHelper = new CubicBezierMoveHelper();

	// True if turning
	private bool _isTurning;

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

		Vector3 control1 = Vector3.zero;
		Vector3 control2 = Vector3.zero;
		Vector3 end = Vector3.zero;

		control1.x = transform.position.x;
		control2.x = 2 * _bridge.position.x - transform.position.x;
		control1.z = control2.z = _bridge.position.z;
		end.x = control2.x;
		end.z = 2 * _bridge.position.z - transform.position.z;

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
					_bridge = other.transform;
					break;
				}
				case TriggerType.Train:
				{
					//GameManager.Instance.OnTrainCollided(gameObject, other.gameObject);
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
					_bridge = null;
					break;
				}
				case TriggerType.Train:
				{
					break;
				}
			}
		}
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

			if (transform.position.z < min || transform.position.z > max)
			{
				//GameManager.Instance.OnTrainFinished(gameObject);
			}
		}
	}
}
