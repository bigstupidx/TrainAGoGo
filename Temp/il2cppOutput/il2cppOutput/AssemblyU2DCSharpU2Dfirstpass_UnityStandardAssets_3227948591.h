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
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1365728750;
// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer
struct RayHitComparer_t2100687478;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// UnityStandardAssets.Cameras.ProtectCameraFromWallClip
struct  ProtectCameraFromWallClip_t3227948591  : public MonoBehaviour_t3012272455
{
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::clipMoveTime
	float ___clipMoveTime_2;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::returnTime
	float ___returnTime_3;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::sphereCastRadius
	float ___sphereCastRadius_4;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::visualiseInEditor
	bool ___visualiseInEditor_5;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::closestDistance
	float ___closestDistance_6;
	// System.String UnityStandardAssets.Cameras.ProtectCameraFromWallClip::dontClipTag
	String_t* ___dontClipTag_7;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Cam
	Transform_t284553113 * ___m_Cam_8;
	// UnityEngine.Transform UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Pivot
	Transform_t284553113 * ___m_Pivot_9;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_OriginalDist
	float ___m_OriginalDist_10;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_MoveVelocity
	float ___m_MoveVelocity_11;
	// System.Single UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_CurrentDist
	float ___m_CurrentDist_12;
	// UnityEngine.Ray UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Ray
	Ray_t1522967639  ___m_Ray_13;
	// UnityEngine.RaycastHit[] UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_Hits
	RaycastHitU5BU5D_t1365728750* ___m_Hits_14;
	// UnityStandardAssets.Cameras.ProtectCameraFromWallClip/RayHitComparer UnityStandardAssets.Cameras.ProtectCameraFromWallClip::m_RayHitComparer
	RayHitComparer_t2100687478 * ___m_RayHitComparer_15;
	// System.Boolean UnityStandardAssets.Cameras.ProtectCameraFromWallClip::<protecting>k__BackingField
	bool ___U3CprotectingU3Ek__BackingField_16;
};
