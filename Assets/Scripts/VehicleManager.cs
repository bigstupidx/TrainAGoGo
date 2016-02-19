using UnityEngine;
using System.Collections;
using System;

[Serializable]
public class VehicleManager : MonoBehaviour {

	public Transform m_SpawnPoint;
	public VehicleMovement m_Movement;
	[HideInInspector] public GameObject m_Instance;

	public void Setup()
	{
		m_Movement = m_Instance.GetComponent<VehicleMovement>();
	}

	public void Reset()
	{
		m_Instance.transform.position = m_SpawnPoint.position;
		m_Instance.transform.rotation = m_SpawnPoint.rotation;

		m_Instance.SetActive(false);
		m_Instance.SetActive(true);
	}
}
