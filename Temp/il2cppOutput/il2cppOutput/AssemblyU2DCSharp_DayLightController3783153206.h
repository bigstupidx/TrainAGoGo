#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t1596303683;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// DayLightController
struct  DayLightController_t3783153206  : public MonoBehaviour_t3012272455
{
	// System.Single DayLightController::m_maxTime
	float ___m_maxTime_2;
	// System.Single DayLightController::m_previousTime
	float ___m_previousTime_3;
	// System.Single DayLightController::m_currentTime
	float ___m_currentTime_4;
	// UnityEngine.Light DayLightController::m_sunLight
	Light_t1596303683 * ___m_sunLight_5;
	// System.Boolean DayLightController::isDecreasingTime
	bool ___isDecreasingTime_6;
};
