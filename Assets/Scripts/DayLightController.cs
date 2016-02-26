using UnityEngine;
using System.Collections;

public class DayLightController : MonoBehaviour {

	[SerializeField]

	public float m_maxTime = 100f;
	private float m_previousTime;
	public float m_currentTime;
	public Light m_sunLight;
	private bool isDecreasingTime;

	// Use this for initialization
	void Start () {
		
		m_currentTime = m_maxTime;
		m_sunLight = GameObject.Find ("SunLight").GetComponent<Light> ();

		SwitchPalmLight (true);
	}
	
	// Update is called once per frame
	void Update () {
		ChangeDayLight ();

	}

	private void ChangeDayLight () {
		if (m_currentTime <= 0) {
			isDecreasingTime = false;
		} 
		else if (m_currentTime >= m_maxTime)
			isDecreasingTime = true;

		if (isDecreasingTime)
			m_currentTime -= Time.deltaTime;
		else
			m_currentTime += Time.deltaTime;

		m_sunLight.intensity = m_currentTime / 100;

		if (m_sunLight.intensity < 0.5)
			SwitchPalmLight (false);
		else
			SwitchPalmLight (true);
	}

	private void SwitchPalmLight (bool isOn) {
		GameObject[] allPalmLights = GameObject.FindGameObjectsWithTag("PalmLight");

		for (int i=0;i < allPalmLights.Length;i++) {
			Light palmLight = allPalmLights [i].GetComponent<Light>();

			if (isOn)
				palmLight.intensity = 0;
			else
				palmLight.intensity = 8;
		}
	}

	public void OnReset() {
		m_currentTime = m_maxTime;
		SwitchPalmLight (true);
	}
}
