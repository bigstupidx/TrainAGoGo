
//#define SIMPLE_CONTROL

using UnityEngine;

public class CubeScript : MonoBehaviour
{
	/// <summary>
	/// The movement speed.
	/// </summary>
	public float movementSpeed = 1.0f;

	/// <summary>
	/// The movement smooth.
	/// </summary>
	public float movementSmooth = 10.0f;

	/// <summary>
	/// The rotation speed (degrees per second).
	/// </summary>
	public float rotationSpeed = 360.0f;
	
	/// <summary>
	/// The rotation smooth.
	/// </summary>
	public float rotationSmooth = 3.0f;

	// The owner camera transform
	private Transform _cameraTransform;

	// The current position y
	private float _y;

	// The next position y
	private float _nextY;

	// The current rotation (degrees)
	private float _rotation;

	// The next rotation (degrees)
	private float _nextRotation;

	void Start()
	{
		_cameraTransform = Camera.main.transform;
	}

	void Update()
	{
#if SIMPLE_CONTROL
		if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow))
		{
			_nextY += 1.0f;
		}
		
		if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
		{
			_nextY -= 1.0f;
		}

		if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		{
			_nextRotation += 90.0f;
		}

		if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
		{
			_nextRotation -= 90.0f;
		}
#else
		float horizontal = Input.GetAxisRaw("Horizontal") * Time.deltaTime;
		float vertical   = Input.GetAxisRaw("Vertical")   * Time.deltaTime;

		if (horizontal != 0 || vertical != 0)
		{
			// Horizontal
			if (Mathf.Abs(horizontal) > Mathf.Abs(vertical))
			{
				_nextRotation -= horizontal * rotationSpeed;
			}
			// Vertial
			else
			{
				_nextY += vertical * movementSpeed;
			}
		}
#endif

		// Update position
		if (_nextY != _y)
		{
			if (Mathf.Abs(_nextY - _y) < 0.01f)
			{
				_y = _nextY;
			}
			else
			{
				_y = Mathf.Lerp(_y, _nextY, Time.deltaTime * movementSmooth);
			}

			Vector3 position = transform.position;
			float deltaY = _y - position.y;
			position.y = _y;
			transform.position = position;

			// Update camera position
			position = _cameraTransform.position;
			position.y += deltaY;
			_cameraTransform.position = position;
		}

		// Update rotation
		if (_rotation != _nextRotation)
		{
			if (Mathf.Abs(_nextRotation - _rotation) < 1.0f)
			{
				_rotation = _nextRotation;
			}
			else
			{
				_rotation = Mathf.LerpAngle(_rotation, _nextRotation, Time.deltaTime * rotationSmooth);
			}

			transform.localRotation = Quaternion.Euler(0, _rotation, 0);
		}
	}

	void OnGUI()
	{
		GUILayout.BeginArea(new Rect(10, 10, Screen.width, Screen.height));
		GUILayout.BeginHorizontal();
		GUILayout.BeginVertical();

		GUILayout.Label(string.Format("Y:{0} Next:{1}", _y, _nextY));
		GUILayout.Label(string.Format("Rotation:{0} Next:{1}", _rotation, _nextRotation));

		GUILayout.EndVertical();
		GUILayout.FlexibleSpace();
		GUILayout.EndHorizontal();
		GUILayout.EndArea();
	}
}
