using UnityEngine;

public class CubicBezierMoveHelper
{
	// The owner transform
	private Transform _owner;

	// The start position
	private Vector3 _start;

	// The first control position
	private Vector3 _control1;

	// The second control position
	private Vector3 _control2;

	// The end position
	private Vector3 _end;

	// Local or world position
	private bool _isLocal;

	// The duration
	private float _duration;

	// The time
	private float _time;

	// The old position
	private Vector3 _oldPosition;

	public void Play(Transform owner, Vector3 control1, Vector3 control2, Vector3 end, bool isLocal = false, float duration = 1.0f)
	{
		_owner = owner;
		_start = isLocal ? owner.localPosition : owner.position;
		_control1 = control1;
		_control2 = control2;
		_end = end;
		_isLocal = isLocal;
		_duration = duration;
		_time = 0;
		_oldPosition = _start;
	}

	public bool Update(float deltaTime)
	{
		if (_time < _duration)
		{
			_time += deltaTime;

			if (_time >= _duration)
			{
				if (_isLocal)
					_owner.localPosition = _end;
				else
					_owner.position = _end;
				
				//_owner.localRotation = Quaternion.Euler(0, 90.0f - GetAngle(_oldPosition, _end), 0);
				_owner.localRotation = Quaternion.Euler(0, 90.0f - GetAngle(_end, _oldPosition), 0);
			}
			else
			{
				float t  = _time / _duration;
				float t2 = 1.0f - t;

				float A = t2 * t2 * t2;
				float B = 3 * t2 * t2 * t;
				float C = 3 * t2 * t * t;
				float D = t * t * t;

				Vector3 position = new Vector3(A * _start.x + B * _control1.x + C * _control2.x + D * _end.x,
											   A * _start.y + B * _control1.y + C * _control2.y + D * _end.y,
											   A * _start.z + B * _control1.z + C * _control2.z + D * _end.z);

				if (_isLocal)
					_owner.localPosition = position;
				else
					_owner.position = position;

//				_owner.localRotation = Quaternion.Euler(0, 90.0f - GetAngle(_oldPosition, position), 0);
				_owner.localRotation = Quaternion.Euler(0, 90.0f - GetAngle(position, _oldPosition), 0);

				_oldPosition = position;

				return false;
			}
		}

		return true;
	}

	float GetAngle(Vector3 p1, Vector3 p2)
	{
		float angle = Mathf.Atan2(p2.z - p1.z, p2.x - p1.x) * Mathf.Rad2Deg;

		return angle < 0 ? angle + 360.0f : angle;
	}
}
