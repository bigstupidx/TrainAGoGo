using UnityEngine;
using System.Collections;

enum BridgeState {
	BridgeInit = 0,
	BridgeHasVehicle,
	BridgeNoVehicle
}

public class Bridge : MonoBehaviour {

	public int bridgeState;
	public int numberVehicle;
	// Use this for initialization
	void Start () {
		numberVehicle = 0;
		bridgeState = (int)BridgeState.BridgeInit;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter(Collision col) {
		Debug.Log ("OnCollisionEnter ");
		if (col.gameObject.tag == "Vehicle")
			numberVehicle++;
	}

	void OnCollisionExit(Collision col) {
		Debug.Log ("OnCollisionExit ");
		if (col.gameObject.tag == "Vehicle") {
			numberVehicle--;
			if (numberVehicle <= 0) {
				TouchHandle touchHandle = GameObject.Find ("Panel").GetComponent<TouchHandle> ();
				touchHandle.DestroyBridge (transform.parent.gameObject);
			}
		}
	}
}
