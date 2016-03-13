#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1697549251.h"

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct  AbstractTargetFollower_t371852552  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::m_Target
	Transform_t284553113 * ___m_Target_2;
	// System.Boolean UnityStandardAssets.Cameras.AbstractTargetFollower::m_AutoTargetPlayer
	bool ___m_AutoTargetPlayer_3;
	// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType UnityStandardAssets.Cameras.AbstractTargetFollower::m_UpdateType
	int32_t ___m_UpdateType_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Cameras.AbstractTargetFollower::targetRigidbody
	Rigidbody_t1972007546 * ___targetRigidbody_5;
};
