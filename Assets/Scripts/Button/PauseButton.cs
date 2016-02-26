using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PauseButton : MonoBehaviour {

	public bool isPaused;
	public GameObject m_MenuResume;

	// Use this for initialization
	void Start () {
		isPaused = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (isPaused)
			Time.timeScale = 0;
		else
			Time.timeScale = 1;
	}

	public void OnClickPauseGame() {
		isPaused = !isPaused;

//		GameObject menuResumeObj = GameObject.Find ("GameMenuResume") as GameObject;
//		menuResumeObj.SetActive (true);
		m_MenuResume.SetActive(true);
		m_MenuResume.GetComponent<AnimHierarchy>().DoAnimIn();
	}
}
