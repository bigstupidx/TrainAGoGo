using UnityEngine;
using System.Collections;

public class AirPushDemo : MonoBehaviour {

	private string appId  = "301408";
	private string apiKey = "1414480295208877675";
	// Use this for initialization
	void Start () {
		AirScript.setConfig(appId,apiKey,"1","EnableSDK","Yes");

		AirScript.startAirBannerAdTop();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
