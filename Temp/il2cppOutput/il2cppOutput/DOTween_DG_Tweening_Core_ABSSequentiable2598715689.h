#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.TweenCallback
struct TweenCallback_t3786476454;

#include "mscorlib_System_Object837106420.h"
#include "DOTween_DG_Tweening_TweenType3195136027.h"

// DG.Tweening.Core.ABSSequentiable
struct  ABSSequentiable_t2598715689  : public Object_t
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t3786476454 * ___onStart_3;
};
