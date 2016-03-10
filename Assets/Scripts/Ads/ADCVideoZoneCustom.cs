using UnityEngine;
using System.Collections;

public class ADCVideoZoneCustom {

	public string zoneId = "";
	public ADCVideoZoneTypeCustom zoneType = ADCVideoZoneTypeCustom.None;

	public ADCVideoZoneCustom(string newZoneId, ADCVideoZoneTypeCustom newVideoZoneType) {
		zoneId = newZoneId;
		zoneType = newVideoZoneType;
	}
}

public enum ADCVideoZoneTypeCustom 
{
	None,
	Interstitial,
	V4VC
}
