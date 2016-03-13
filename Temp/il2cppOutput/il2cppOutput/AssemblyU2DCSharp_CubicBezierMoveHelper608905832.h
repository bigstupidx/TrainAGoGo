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
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// CubicBezierMoveHelper
struct  CubicBezierMoveHelper_t608905832  : public Object_t
{
	// UnityEngine.Transform CubicBezierMoveHelper::_owner
	Transform_t284553113 * ____owner_0;
	// UnityEngine.Vector3 CubicBezierMoveHelper::_start
	Vector3_t3525329789  ____start_1;
	// UnityEngine.Vector3 CubicBezierMoveHelper::_control1
	Vector3_t3525329789  ____control1_2;
	// UnityEngine.Vector3 CubicBezierMoveHelper::_control2
	Vector3_t3525329789  ____control2_3;
	// UnityEngine.Vector3 CubicBezierMoveHelper::_end
	Vector3_t3525329789  ____end_4;
	// System.Boolean CubicBezierMoveHelper::_isLocal
	bool ____isLocal_5;
	// System.Single CubicBezierMoveHelper::_duration
	float ____duration_6;
	// System.Single CubicBezierMoveHelper::_time
	float ____time_7;
	// UnityEngine.Vector3 CubicBezierMoveHelper::_oldPosition
	Vector3_t3525329789  ____oldPosition_8;
	// UnityEngine.GameObject CubicBezierMoveHelper::gameManager
	GameObject_t4012695102 * ___gameManager_9;
};
