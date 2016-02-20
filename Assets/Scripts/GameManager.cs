using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameManager : MonoBehaviour {

	public GameObject[] m_VehiclePrefabs;
	public List<VehicleManager> m_Vehicles;

	private void Start()
	{
//		m_StartWait = new WaitForSeconds(m_StartDelay);
//		m_EndWait = new WaitForSeconds(m_EndDelay);

		m_Vehicles = new List<VehicleManager>();

//		SpawnVehicle();
//		SetCameraTargets();

//		StartCoroutine(GameLoop());
	}


	private void SpawnVehicle()
	{
		GameObject[] spawnObjects = GameObject.FindGameObjectsWithTag ("SpawnPoint");


		for (int i = 0; i < spawnObjects.Length; i++) {
			VehicleManager vehicleManager = new VehicleManager ();

			int random = Random.Range (0, 2);

			vehicleManager.m_Instance = Instantiate (m_VehiclePrefabs[random], spawnObjects [i].transform.position, spawnObjects [i].transform.rotation) as GameObject;

			vehicleManager.Setup();

			m_Vehicles.Add (vehicleManager);
		}
	}

	// Update is called once per frame
	void Update () {
		
	}
}
