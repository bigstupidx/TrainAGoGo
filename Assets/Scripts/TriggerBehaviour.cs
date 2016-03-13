using UnityEngine;

public enum TriggerType
{
	Bridge,
	Train
}

public class TriggerBehaviour : MonoBehaviour
{
	public TriggerType type;

	public bool isCollision = false;
	public bool isInit = true;

	void Update() {
		if (!isInit && !isCollision) {
			TouchHandle touchHandle = GameObject.Find ("Panel").GetComponent<TouchHandle> ();
			touchHandle.DestroyBridge (transform.parent.gameObject);
		}
	}
}
