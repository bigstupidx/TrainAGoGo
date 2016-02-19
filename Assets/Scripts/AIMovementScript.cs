using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AIMovementScript : MonoBehaviour {

	public Vector3 centerOfMass;
	public List<Transform> path;
	public Transform pathGroup;
	public float maxSteer = 15.0f;
	public WheelCollider wheelFL;
	public WheelCollider wheelFR;
	public WheelCollider wheelRL;
	public WheelCollider wheelRR;
	public int currentPathObj = 0;
	public float distFromPath = 20f;
	public float maxTorque = 50f;
	public float currentSpeed;
	public float topSpeed = 150f;
	public float decellarationSpeed = 10f;  

	void Awake() {
		GetPath ();
	}

	void Start () {
		centerOfMass = GetComponent<Rigidbody> ().centerOfMass;
//		GetPath ();
	}

	void GetPath () {
//		Transform[] potentialWaypoints = waypointContainer.GetComponentsInChildren<Transform>();
//		waypoints = new List<Transform>();
//
//		foreach ( Transform potentialWaypoint in potentialWaypoints ) {
//			if ( potentialWaypoint != waypointContainer.transform ) {
//				waypoints.Add(potentialWaypoint);
//			}
//		}

		Transform[] path_objs = pathGroup.GetComponentsInChildren <Transform>();
		path = new List<Transform>();

		Debug.Log ("Path = " + path);

		foreach (Transform path_obj in path_objs) {
			if (path_obj != pathGroup.transform)
				path.Add(path_obj);
		}
	}  

	void Update () {  
		GetSteer();  
		Move();  
	}  

	void GetSteer() {

		Vector3 steerVector = transform.InverseTransformPoint(new Vector3(path[currentPathObj].position.x,transform.position.y,path[currentPathObj].position.z));  
		float newSteer = maxSteer * (steerVector.x / steerVector.magnitude);

		wheelFL.steerAngle = newSteer;  
		wheelFR.steerAngle = newSteer;  

		if (steerVector.magnitude <= distFromPath){  
			currentPathObj++;  
			if (currentPathObj >= path.Count)  
				currentPathObj = 0;  
		}  
	}  

	void Move (){  
		currentSpeed = 2*(22/7) * wheelRL.radius * wheelRL.rpm * 60 / 1000;  
		currentSpeed = Mathf.Round (currentSpeed);  
		if (currentSpeed <= topSpeed){  
			wheelRL.motorTorque = maxTorque;  
			wheelRR.motorTorque = maxTorque;  
			wheelRL.brakeTorque = 0;  
			wheelRR.brakeTorque = 0;  
		}  
		else {  
			wheelRL.motorTorque = 0;  
			wheelRR.motorTorque = 0;  
			wheelRL.brakeTorque = decellarationSpeed;  
			wheelRR.brakeTorque = decellarationSpeed;  
		}  
	} 
}
