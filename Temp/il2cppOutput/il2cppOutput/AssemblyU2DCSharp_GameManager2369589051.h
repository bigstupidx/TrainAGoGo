#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t3012272455
{
	// System.Boolean GameManager::isGameOver
	bool ___isGameOver_4;
	// UnityEngine.GameObject[] GameManager::m_VehiclePrefabs
	GameObjectU5BU5D_t3499186955* ___m_VehiclePrefabs_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::m_Vehicles
	List_1_t514686775 * ___m_Vehicles_6;
	// UnityEngine.GameObject GameManager::m_DaylightController
	GameObject_t4012695102 * ___m_DaylightController_7;
	// UnityEngine.GameObject GameManager::m_GameMenuStart
	GameObject_t4012695102 * ___m_GameMenuStart_8;
	// UnityEngine.GameObject GameManager::m_GameMenuOver
	GameObject_t4012695102 * ___m_GameMenuOver_9;
	// System.Int32 GameManager::score
	int32_t ___score_10;
	// UnityEngine.GameObject GameManager::m_TextObject
	GameObject_t4012695102 * ___m_TextObject_11;
	// UnityEngine.UI.Text GameManager::txtScoreText
	Text_t3286458198 * ___txtScoreText_12;
	// System.Int32 GameManager::m_MaxVehicleOnScreen
	int32_t ___m_MaxVehicleOnScreen_13;
	// UnityEngine.GameObject GameManager::m_SmokeEffect
	GameObject_t4012695102 * ___m_SmokeEffect_14;
	// UnityEngine.GameObject GameManager::m_VehicleModels
	GameObject_t4012695102 * ___m_VehicleModels_15;
	// UnityEngine.GameObject GameManager::m_ArrowPrefab
	GameObject_t4012695102 * ___m_ArrowPrefab_16;
	// System.String GameManager::iOSURL
	String_t* ___iOSURL_17;
	// System.String GameManager::iOSShareURL
	String_t* ___iOSShareURL_18;
	// System.String GameManager::ANDROIDURL
	String_t* ___ANDROIDURL_19;
	// System.String GameManager::facebookUrl
	String_t* ___facebookUrl_20;
};
