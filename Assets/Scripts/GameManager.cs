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

			gameObject.GetComponent<AudioSource>().Play();

			DOVirtual.DelayedCall(3f, () => {
				m_DaylightController.transform.GetComponent<DayLightController>().OnReset();

				InvokeRepeating("SpawnVehicle", 2, 5);

			} );
		});
	}

	public void OnRateGame() {
	}

	public void OnMoreGames() {
	}

	public void OnLikePage() {
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

			m_DaylightController.transform.GetComponent<DayLightController>().OnReset();

			InvokeRepeating("SpawnVehicle", 2, 5);

		} );
	}

	public void OnShare() {

	
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

			m_GameMenuStart.gameObject.transform.Find("Buttons").gameObject.SetActive(true);
			m_GameMenuStart.gameObject.transform.Find("Title").gameObject.SetActive(true);

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
		
	}
}
