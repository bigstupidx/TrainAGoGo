using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class TouchHandle : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler {

	public GameObject m_TempBridgePrefab;

	public GameObject m_BridgePrefab;
	public List<GameObject> m_Bridges;

	public GameObject tmpBridgeObject1;
	public GameObject tmpBridgeObject2;

	private float locateX1 = 217f; //position x of road in the left
//	private float locateX3 = 227f; //position x of road in the right
	private float locateX4 = 232f; //position x of road in the right

	private Vector3 fp;   //First touch position
	private Vector3 lp;   //Last touch position
	private float dragDistance;  //minimum distance for a swipe to be registered


	private void Start()
	{
		dragDistance = Screen.width*20/100; //dragDistance is 20% height of the screen
	}

	public virtual void OnDrag(PointerEventData ped)
	{
		Ray ray = Camera.main.ScreenPointToRay(ped.position);

		RaycastHit hitInfo;
		if (Physics.Raycast( ray, out hitInfo ))
		{
			Vector3 worldSpaceHitPoint = hitInfo.point;

			GameObject gameObject = hitInfo.transform.gameObject;

			//drag to change position of bridge
			if (gameObject.tag == "Road") {
				if (tmpBridgeObject1 != null)
					tmpBridgeObject1.transform.position = new Vector3 (tmpBridgeObject1.transform.position.x, 
						tmpBridgeObject1.transform.position.y, gameObject.transform.position.z);
				
				if (tmpBridgeObject2 != null)
					tmpBridgeObject2.transform.position = new Vector3 (tmpBridgeObject2.transform.position.x, 
						tmpBridgeObject2.transform.position.y, gameObject.transform.position.z);
			}
		}
	}

	public virtual void OnPointerDown(PointerEventData ped)
	{
		fp = ped.position;

		Ray ray = Camera.main.ScreenPointToRay(ped.position);
			
		RaycastHit hitInfo;
		if (Physics.Raycast( ray, out hitInfo ))
		{
			Vector3 worldSpaceHitPoint = hitInfo.point;

			//check coordination of road to place bridge
			GameObject gameObject = hitInfo.transform.gameObject;

			if (gameObject.tag == "Road") {
				MeshRenderer roadRender = gameObject.GetComponent<MeshRenderer> () as MeshRenderer;
				Vector3 roadSize = roadRender.bounds.size;

//				Debug.Log ("Point = " + worldSpaceHitPoint + "object = " + gameObject.transform.position + "Size = " + roadSize);
				if (worldSpaceHitPoint.x >= locateX1
				    && worldSpaceHitPoint.x < locateX1 + roadSize.x) {

					//detect touch on road in the most left
					tmpBridgeObject1 = Instantiate (m_TempBridgePrefab);
					tmpBridgeObject1.transform.position = new Vector3 (gameObject.transform.position.x + roadSize.x*2, 
						gameObject.transform.position.y, 
						gameObject.transform.position.z);
				} else if (worldSpaceHitPoint.x >= locateX4
				         && worldSpaceHitPoint.x < locateX4 + roadSize.x) {

					//detect touch on road in the most right
					tmpBridgeObject1 = Instantiate (m_TempBridgePrefab);

					Transform bridge = tmpBridgeObject1.transform.Find ("Bridge");
					MeshRenderer bridgeRender = bridge.GetComponent<MeshRenderer> () as MeshRenderer;
					Vector3 bridgeSize = bridgeRender.bounds.size;

					tmpBridgeObject1.transform.position = new Vector3 (locateX4 + 0.5f, 
						gameObject.transform.position.y, 
						gameObject.transform.position.z);
				} 
				else if (worldSpaceHitPoint.x < locateX1 || worldSpaceHitPoint.x + roadSize.x >= locateX4) {
					//out side of the most left and the most right
				}
				else {
					//add left bridge
					tmpBridgeObject1 = Instantiate (m_TempBridgePrefab);

					Transform bridge = tmpBridgeObject1.transform.Find ("Bridge");
					MeshRenderer bridgeRender = bridge.GetComponent<MeshRenderer> () as MeshRenderer;
					Vector3 bridgeSize = bridgeRender.bounds.size;

					tmpBridgeObject1.transform.position = new Vector3(gameObject.transform.position.x - 0.5f, 
																		gameObject.transform.position.y, 
																		gameObject.transform.position.z);

					//add right bridge
					tmpBridgeObject2 = Instantiate (m_TempBridgePrefab);
					tmpBridgeObject2.transform.position = new Vector3(gameObject.transform.position.x + roadSize.x*2, 
						gameObject.transform.position.y, 
						gameObject.transform.position.z);
				}
			}
		}
	}

	public virtual void OnPointerUp(PointerEventData ped)
	{
		

//		fp =  touchPositions[0]; //get first touch position from the list of touches
//		lp =  touchPositions[touchPositions.Count-1]; //last touch position 

		lp = ped.position;

		//Check if drag distance is greater than 20% of the screen height
		if (Mathf.Abs(lp.x - fp.x) > dragDistance || Mathf.Abs(lp.y - fp.y) > dragDistance)
		{//It's a drag
			//check if the drag is vertical or horizontal 
			if (Mathf.Abs(lp.x - fp.x) > Mathf.Abs(lp.y - fp.y))
			{   //If the horizontal movement is greater than the vertical movement...
				if ((lp.x>fp.x))  //If the movement was to the right)
				{   
					//Right swipe
					GameObject bridge = Instantiate (m_BridgePrefab);

					if (tmpBridgeObject1 != null) 
						bridge.transform.position = tmpBridgeObject1.transform.position;
					if (tmpBridgeObject2 != null)
						bridge.transform.position = tmpBridgeObject2.transform.position;
					
					m_Bridges.Add (bridge);
				}
				else
				{   //Left swipe
					GameObject bridge = Instantiate (m_BridgePrefab);
					bridge.transform.position = tmpBridgeObject1.transform.position;
					m_Bridges.Add (bridge);
				}
			}
//			else
//			{   //the vertical movement is greater than the horizontal movement
//				if (lp.y>fp.y)  //If the movement was up
//				{   //Up swipe
//					Debug.Log("Up Swipe"); 
//				}
//				else
//				{   //Down swipe
//					Debug.Log("Down Swipe");
//				}
//			}
		} 

		if (tmpBridgeObject1 != null) {
			Destroy (tmpBridgeObject1);
			tmpBridgeObject1 = null;
		}

		if (tmpBridgeObject2 != null) {
			Destroy (tmpBridgeObject2);
			tmpBridgeObject2 = null;
		}
	}

	public void RemoveAllBridges () {
		//destroy all vehicles all screen
		GameObject[] vehicles = GameObject.FindGameObjectsWithTag("BridgeLarge");

		foreach (GameObject go in vehicles) {
			Destroy (go);
		}

		m_Bridges.Clear ();
	}
}
