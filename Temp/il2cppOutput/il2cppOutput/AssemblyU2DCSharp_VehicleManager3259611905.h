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
// VehicleMovement
struct VehicleMovement_t2036776923;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"

// VehicleManager
struct  VehicleManager_t3259611905  : public Object_t
{
	// UnityEngine.Transform VehicleManager::m_SpawnPoint
	Transform_t284553113 * ___m_SpawnPoint_0;
	// VehicleMovement VehicleManager::m_Movement
	VehicleMovement_t2036776923 * ___m_Movement_1;
	// UnityEngine.GameObject VehicleManager::m_Instance
	GameObject_t4012695102 * ___m_Instance_2;
};
