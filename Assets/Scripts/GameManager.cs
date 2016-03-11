using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using DG.Tweening;

public class GameManager : MonoBehaviour {

	public GameObject[] m_VehiclePrefabs;
	public List<GameObject> m_Vehicles;

	public GameObject m_DaylightController;

	public GameObject m_GameMenuStart;
	public GameObject m_GameMenuOver;

	public int score = 0;
	public GameObject m_TextObject;
	private Text txtScoreText;

	public int m_MaxVehicleOnScreen = 5;

	public GameObject m_SmokeEffect;

	public GameObject m_VehicleModels;

	private string iOSURL = "itms://itunes.apple.com/us/app/apple-store/id1088439628?mt=8";
	private string ANDROIDURL = "https://play.google.com/store/apps/details?id=com.nhuanquang.crossabridge";

	private string facebookUrl = "https://facebook.com/nhuanquang.dn";
	private const string FACEBOOK_APP_ID = "196318637397865";
	private const string FACEBOOK_URL = "http://www.facebook.com/dialog/feed";

	//test
	public GameObject trainPrefab;
	//end test

	private void Start()
	{
//		m_StartWait = new WaitForSeconds(m_StartDelay);
//		m_EndWait = new WaitForSeconds(m_EndDelay);

		m_Vehicles = new List<GameObject>();

//		SpawnVehicle();
//		SetCameraTargets();

//		StartCoroutine(GameLoop());

		txtScoreText = m_TextObject.GetComponent<Text>();

		m_GameMenuStart.SetActive (true);
		m_GameMenuOver.SetActive (false);

		//test
//		for (int i = 0; i < 4; i++) {
			StartCoroutine(AddTrain (1, 1, true));
//		}
	}

	IEnumerator AddTrain(float delay, int railIndex, bool isUp)
	{
		yield return new WaitForSeconds(delay);

		AddTrain(railIndex, isUp);
	}

	void AddTrain(int railIndex, bool isUp)
	{
		// Create train
		GameObject train = Instantiate<GameObject>(trainPrefab);
//		train.name = string.Format("Train { 0:00}", Random.Range(0, 100));

		train.transform.position = RailManager.Instance.GetTrainPosition(railIndex, isUp);

		// Set direction
		Train script = train.GetComponent<Train>();
		script.Direction = isUp ? Direction.Up : Direction.Down;
	} 

	public void SpawnVehicle()
	{
		if (m_Vehicles.Count < m_MaxVehicleOnScreen) {
			GameObject[] spawnObjects = GameObject.FindGameObjectsWithTag ("SpawnPoint");

			int radSpawn = Random.Range (0, 8); //random start position for vehicle

			//		for (int i = 0; i < spawnObjects.Length; i++) {
//			VehicleManager vehicleManager = new VehicleManager ();

			int random;

			//check score to display vehicles
			if (score <= 5)
				random = 0;
			else if (score > 5 && score <= 10)
				random = Random.Range (0, 2);
			else if (score > 10 && score <= 15)
				random = Random.Range (0, 3);
			else if (score > 15 && score <= 20)
				random = Random.Range (0, 4);
			else
				random = Random.Range (0, m_VehiclePrefabs.Length);

//			vehicleManager.m_Instance = Instantiate (m_VehiclePrefabs[random], spawnObjects [radSpawn].transform.position, spawnObjects [radSpawn].transform.rotation) as GameObject;

			GameObject m_Instance = Instantiate (m_VehiclePrefabs[random], spawnObjects [radSpawn].transform.position, spawnObjects [radSpawn].transform.rotation) as GameObject;
//			VehicleMovement m_Movement = m_Instance.GetComponent<VehicleMovement>();

			m_Instance.tag = "Vehicle";

//			vehicleManager.Setup();

			m_Vehicles.Add (m_Instance);
			//		}
		}
	}

	// Update is called once per frame
	void Update () {
		txtScoreText.text = score.ToString();
	}

	public void OnClickedStartGame() {
		var anim = m_GameMenuStart.GetComponentsInChildren<AnimHierarchy>(false);

		float time = 0;

		foreach(var a in anim)
		{
			time = Mathf.Max(time,a.DoAnimOut());
		}

		DOVirtual.DelayedCall(time,() => {
			m_GameMenuStart.SetActive(false);
			m_VehicleModels.SetActive(false);

			//hide smokeEffect
			m_SmokeEffect.SetActive(false);

			//hide banner
			GameObject adsManager = GameObject.Find("AdsManager");
			adsManager.GetComponent<GoogleMobileAdsDemoScript>().bannerView.Hide();

			//set camera in game
			GameObject camera = GameObject.Find("FreeLookCameraRig");
			camera.transform.position = new Vector3(223.3f, 47.7f, 170.7f);
			camera.transform.eulerAngles = new Vector3(47.6479f, 363.4417f, 3.3806f);
				
			gameObject.GetComponent<AudioSource>().Play();

			DOVirtual.DelayedCall(3f, () => {
				m_DaylightController.transform.GetComponent<DayLightController>().OnReset();

				InvokeRepeating("SpawnVehicle", 2, 5);

			} );
		});
	}

	public void OnRateGame() {
		string URL = "";

		#if UNITY_ANDROID
		URL = ANDROIDURL;
		#endif

		#if UNITY_IOS
		URL = iOSURL;
		#endif

		Application.OpenURL (URL);
	}

	public void OnMoreGames() {
		GameObject adsManager = GameObject.Find("AdsManager");
		adsManager.GetComponent<GoogleMobileAdsDemoScript>().RequestInterstitial();
		adsManager.GetComponent<GoogleMobileAdsDemoScript>().interstitial.Show();
	}

	public void OnLikePage() {
		Application.OpenURL (facebookUrl);
	}

	public void OnRestart() {
		score = 0;

		DestroyAllVehicles ();
		DestroyAllBridges ();

		var anim = m_GameMenuOver.GetComponentsInChildren<AnimHierarchy>(false);

		float time = 0;

		foreach(var a in anim)
		{
			time = Mathf.Max(time,a.DoAnimOut());
		}

		DOVirtual.DelayedCall(time,() => {

			m_GameMenuOver.SetActive (false);

			//hide smokeEffect
			m_SmokeEffect.SetActive(false);

			//hide banner
			GameObject adsManager = GameObject.Find("AdsManager");
			adsManager.GetComponent<GoogleMobileAdsDemoScript>().bannerView.Hide();

			m_DaylightController.transform.GetComponent<DayLightController>().OnReset();

			InvokeRepeating("SpawnVehicle", 2, 5);

		} );
	}

	public void OnShare() {
		string link;

		#if UNITY_IOS
		link = iOSURL;
		#endif

		#if UNITY_ANDROID
		link = ANDROIDURL;
		#endif
			
		string name = "Cross a Bridge";
		string caption = "My Score: " + score;
		string description = "I bet you beat my score";
		string pictureUrl = "https://c2.staticflickr.com/2/1669/25163086582_317ef36586_m.jpg";
		string redirectUri = "http://www.facebook.com/";

		ShareToFacebook (link, name, caption, description, pictureUrl, redirectUri);
	}

	void ShareToFacebook (string linkParameter, string nameParameter, string captionParameter, string descriptionParameter, string pictureParameter, string redirectParameter)
	{
		Application.OpenURL (FACEBOOK_URL + "?app_id=" + FACEBOOK_APP_ID +
			"&link=" + WWW.EscapeURL(linkParameter) +
			"&name=" + WWW.EscapeURL(nameParameter) +
			"&caption=" + WWW.EscapeURL(captionParameter) + 
			"&description=" + WWW.EscapeURL(descriptionParameter) + 
			"&picture=" + WWW.EscapeURL(pictureParameter) + 
			"&redirect_uri=" + WWW.EscapeURL(redirectParameter));
	}

	public void OnMainMenu() {
		gameObject.GetComponent<AudioSource>().Stop();

		score = 0;

		DestroyAllVehicles ();
		DestroyAllBridges ();

		var anim = m_GameMenuOver.GetComponentsInChildren<AnimHierarchy>(false);

		float time = 0;

		foreach(var a in anim)
		{
			time = Mathf.Max(time,a.DoAnimOut());
		}

		DOVirtual.DelayedCall (time, () => {
			m_GameMenuOver.SetActive (false);
			m_GameMenuStart.SetActive (true);

			//show vehicle model
			m_VehicleModels.SetActive(true);

			//hide smokeEffect
			m_SmokeEffect.SetActive(false);

			//show banner
			GameObject adsManager = GameObject.Find("AdsManager");
			adsManager.GetComponent<GoogleMobileAdsDemoScript>().bannerView.Show();

			m_GameMenuStart.gameObject.transform.Find("Buttons").gameObject.SetActive(true);
			m_GameMenuStart.gameObject.transform.Find("Title").gameObject.SetActive(true);

			//set camera menu
			GameObject camera = GameObject.Find("FreeLookCameraRig");
			camera.transform.position = new Vector3(237.4f, 14.9f, 191f);
			camera.transform.eulerAngles = new Vector3(18.5937f, 324.5778f, 4.1104f);
		});

	}

	public void OnGameOver() {
		CancelInvoke("SpawnVehicle");

		//stop all vehicles
		GameObject[] vehicles = GameObject.FindGameObjectsWithTag("Vehicle");

		foreach (GameObject go in vehicles) {
			go.GetComponent<VehicleMovement> ().OnDisable ();
		}

		m_GameMenuOver.SetActive (true);
		m_GameMenuOver.GetComponent<AnimHierarchy> ().DoAnimIn ();

		//show banner
		GameObject adsManager = GameObject.Find("AdsManager");
		adsManager.GetComponent<GoogleMobileAdsDemoScript>().bannerView.Show();

		//show interstitial
		adsManager.GetComponent<GoogleMobileAdsDemoScript>().interstitial.Show();
	}

	public void DestroyAllVehicles () {
		//destroy all vehicles all screen
		GameObject[] vehicles = GameObject.FindGameObjectsWithTag("Vehicle");

		foreach (GameObject go in vehicles) {
			Destroy (go);
		}

		m_Vehicles.Clear ();
	}

	public void DestroyAllBridges () {
		GameObject panel = GameObject.Find ("Panel");
		TouchHandle controller = panel.transform.GetComponent<TouchHandle> ();
		controller.RemoveAllBridges ();

	}

	public void DestroyVehicle(GameObject vehicle) 
	{
		Destroy (vehicle);
		m_Vehicles.Remove (vehicle);
	}
}
