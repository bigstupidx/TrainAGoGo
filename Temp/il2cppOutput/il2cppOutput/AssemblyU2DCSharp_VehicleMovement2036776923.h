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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// VehicleMovement
struct  VehicleMovement_t2036776923  : public MonoBehaviour_t3012272455
{
	// System.Single VehicleMovement::m_Speed
	float ___m_Speed_2;
	// System.Single VehicleMovement::m_TurnSpeed
	float ___m_TurnSpeed_3;
	// System.Single VehicleMovement::originalTurnSpeed
	float ___originalTurnSpeed_4;
	// System.Single VehicleMovement::decreaseTurnSpeedValue
	float ___decreaseTurnSpeedValue_5;
	// UnityEngine.AudioSource VehicleMovement::m_AudioSource
	AudioSource_t3628549054 * ___m_AudioSource_6;
	// UnityEngine.AudioClip VehicleMovement::m_ClipTootToot
	AudioClip_t3714538611 * ___m_ClipTootToot_7;
	// UnityEngine.AudioClip VehicleMovement::m_ClipCrash
	AudioClip_t3714538611 * ___m_ClipCrash_8;
	// System.Single VehicleMovement::m_PitchRange
	float ___m_PitchRange_9;
	// System.String VehicleMovement::m_MovementAxisName
	String_t* ___m_MovementAxisName_10;
	// System.String VehicleMovement::m_TurnAxisName
	String_t* ___m_TurnAxisName_11;
	// UnityEngine.Rigidbody VehicleMovement::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_12;
	// System.Single VehicleMovement::m_MovementInputValue
	float ___m_MovementInputValue_13;
	// System.Single VehicleMovement::m_TurnInputValue
	float ___m_TurnInputValue_14;
	// System.Single VehicleMovement::m_OriginalPitch
	float ___m_OriginalPitch_15;
	// System.Int32 VehicleMovement::vehicleState
	int32_t ___vehicleState_16;
	// System.Boolean VehicleMovement::isTurnLeft
	bool ___isTurnLeft_17;
	// System.Single VehicleMovement::k_DirectionCoeffience
	float ___k_DirectionCoeffience_18;
	// System.Single VehicleMovement::k_TurnCoeffience
	float ___k_TurnCoeffience_19;
	// System.Single VehicleMovement::originalRoatationValue
	float ___originalRoatationValue_20;
	// System.Single VehicleMovement::previousTurnValue
	float ___previousTurnValue_21;
	// System.Single VehicleMovement::originalMovementInputValue
	float ___originalMovementInputValue_22;
	// System.Single VehicleMovement::originalSpeed
	float ___originalSpeed_23;
	// System.Single VehicleMovement::deaccelerateMovementInputValue
	float ___deaccelerateMovementInputValue_24;
	// System.Single VehicleMovement::deaccelerateSpeedValue
	float ___deaccelerateSpeedValue_25;
	// System.Boolean VehicleMovement::isHitCenterBridge
	bool ___isHitCenterBridge_26;
	// UnityEngine.Collision VehicleMovement::collisonObject
	Collision_t1119538015 * ___collisonObject_27;
	// UnityEngine.Collision VehicleMovement::collisonRoad
	Collision_t1119538015 * ___collisonRoad_28;
};
