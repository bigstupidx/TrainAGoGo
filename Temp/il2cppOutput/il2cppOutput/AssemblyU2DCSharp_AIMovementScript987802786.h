#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.String
struct String_t;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Collision
struct Collision_t1119538015;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// AIMovementScript
struct  AIMovementScript_t987802786  : public MonoBehaviour_t3012272455
{
	// System.Single AIMovementScript::m_Speed
	float ___m_Speed_2;
	// System.Single AIMovementScript::m_TurnSpeed
	float ___m_TurnSpeed_3;
	// UnityEngine.AudioSource AIMovementScript::m_MovementAudio
	AudioSource_t3628549054 * ___m_MovementAudio_4;
	// UnityEngine.AudioClip AIMovementScript::m_EngineIdling
	AudioClip_t3714538611 * ___m_EngineIdling_5;
	// UnityEngine.AudioClip AIMovementScript::m_EngineDriving
	AudioClip_t3714538611 * ___m_EngineDriving_6;
	// System.Single AIMovementScript::m_PitchRange
	float ___m_PitchRange_7;
	// System.String AIMovementScript::m_MovementAxisName
	String_t* ___m_MovementAxisName_8;
	// System.String AIMovementScript::m_TurnAxisName
	String_t* ___m_TurnAxisName_9;
	// UnityEngine.Rigidbody AIMovementScript::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_10;
	// System.Single AIMovementScript::m_MovementInputValue
	float ___m_MovementInputValue_11;
	// System.Single AIMovementScript::m_TurnInputValue
	float ___m_TurnInputValue_12;
	// System.Single AIMovementScript::m_OriginalPitch
	float ___m_OriginalPitch_13;
	// System.Int32 AIMovementScript::vehicleState
	int32_t ___vehicleState_14;
	// System.Boolean AIMovementScript::isTurnLeft
	bool ___isTurnLeft_15;
	// System.Single AIMovementScript::k_DirectionCoeffience
	float ___k_DirectionCoeffience_16;
	// System.Single AIMovementScript::k_TurnCoeffience
	float ___k_TurnCoeffience_17;
	// System.Single AIMovementScript::originalTurnValue
	float ___originalTurnValue_18;
	// System.Single AIMovementScript::previousTurnValue
	float ___previousTurnValue_19;
	// System.Single AIMovementScript::deaccelerateMovementInputValue
	float ___deaccelerateMovementInputValue_20;
	// System.Single AIMovementScript::deaccelerateSpeedValue
	float ___deaccelerateSpeedValue_21;
	// System.Boolean AIMovementScript::isHitCenterBridge
	bool ___isHitCenterBridge_22;
	// UnityEngine.Collision AIMovementScript::collisonObject
	Collision_t1119538015 * ___collisonObject_23;
	// UnityEngine.Transform AIMovementScript::Target
	Transform_t284553113 * ___Target_24;
	// System.Single AIMovementScript::RotationSpeed
	float ___RotationSpeed_25;
	// UnityEngine.Quaternion AIMovementScript::_lookRotation
	Quaternion_t1891715979  ____lookRotation_26;
	// UnityEngine.Vector3 AIMovementScript::_direction
	Vector3_t3525329789  ____direction_27;
};
