using UnityEngine;

public enum TriggerType
{
	Bridge,
	Train
}

public class TriggerBehaviour : MonoBehaviour
{
	public TriggerType type;
	public int numberVehicle;

	void Start () {
		numberVehicle = 0;
	}
}
