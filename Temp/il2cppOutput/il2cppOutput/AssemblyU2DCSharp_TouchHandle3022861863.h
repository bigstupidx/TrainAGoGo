#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// TouchHandle
struct  TouchHandle_t3022861863  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject TouchHandle::m_TempBridgePrefab
	GameObject_t4012695102 * ___m_TempBridgePrefab_2;
	// UnityEngine.GameObject TouchHandle::m_BridgePrefab
	GameObject_t4012695102 * ___m_BridgePrefab_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TouchHandle::m_Bridges
	List_1_t514686775 * ___m_Bridges_4;
	// UnityEngine.GameObject TouchHandle::tmpBridgeObject1
	GameObject_t4012695102 * ___tmpBridgeObject1_5;
	// UnityEngine.GameObject TouchHandle::tmpBridgeObject2
	GameObject_t4012695102 * ___tmpBridgeObject2_6;
	// System.Single TouchHandle::locateX1
	float ___locateX1_7;
	// System.Single TouchHandle::locateX4
	float ___locateX4_8;
	// UnityEngine.Vector3 TouchHandle::fp
	Vector3_t3525329789  ___fp_9;
	// UnityEngine.Vector3 TouchHandle::lp
	Vector3_t3525329789  ___lp_10;
	// System.Single TouchHandle::dragDistance
	float ___dragDistance_11;
};
