using UnityEngine;
using System.Collections;

public class ArrowScript : MonoBehaviour {

	private float timer = 3.0f;

	public AudioSource m_AudioSource;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		timer -= Time.deltaTime;

		if (timer <= 0)
			Destroy (transform.gameObject);
	}
}
