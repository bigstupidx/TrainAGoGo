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
// CubicBezierMoveHelper
struct CubicBezierMoveHelper_t608905832;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Collider
struct Collider_t955670625;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "AssemblyU2DCSharp_Direction1041377119.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// Train
struct  Train_t81068520  : public MonoBehaviour_t3012272455
{
	// System.Single Train::speed
	float ___speed_4;
	// Direction Train::_direction
	int32_t ____direction_8;
	// UnityEngine.Vector3 Train::_speed
	Vector3_t3525329789  ____speed_9;
	// UnityEngine.Transform Train::_bridge
	Transform_t284553113 * ____bridge_10;
	// CubicBezierMoveHelper Train::_turningHelper
	CubicBezierMoveHelper_t608905832 * ____turningHelper_11;
	// System.Boolean Train::_isTurning
	bool ____isTurning_12;
	// UnityEngine.AudioSource Train::m_AudioSource
	AudioSource_t3628549054 * ___m_AudioSource_13;
	// UnityEngine.AudioClip Train::m_ClipCrash
	AudioClip_t3714538611 * ___m_ClipCrash_14;
	// UnityEngine.Rigidbody Train::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_15;
	// UnityEngine.Collider Train::_collider
	Collider_t955670625 * ____collider_16;
};
struct Train_t81068520_StaticFields{
	// UnityEngine.Quaternion Train::rotationDown
	Quaternion_t1891715979  ___rotationDown_2;
	// UnityEngine.Quaternion Train::rotationUp
	Quaternion_t1891715979  ___rotationUp_3;
	// System.Single Train::min
	float ___min_5;
	// System.Single Train::max
	float ___max_6;
	// System.Single Train::turnDuration
	float ___turnDuration_7;
};
