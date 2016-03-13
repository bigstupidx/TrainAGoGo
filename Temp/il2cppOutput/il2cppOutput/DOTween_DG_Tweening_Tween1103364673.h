#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// DG.Tweening.TweenCallback
struct TweenCallback_t3786476454;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t1868435431;
// DG.Tweening.EaseFunction
struct EaseFunction_t1285385724;
// System.Type
struct Type_t;
// DG.Tweening.Sequence
struct Sequence_t2436335575;

#include "DOTween_DG_Tweening_Core_ABSSequentiable2598715689.h"
#include "DOTween_DG_Tweening_UpdateType2719692729.h"
#include "DOTween_DG_Tweening_LoopType3344295956.h"
#include "DOTween_DG_Tweening_Ease1024295940.h"
#include "DOTween_DG_Tweening_Core_Enums_SpecialStartupMode2188803740.h"

// DG.Tweening.Tween
struct  Tween_t1103364673  : public ABSSequentiable_t2598715689
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	Object_t * ___id_6;
	// System.Object DG.Tweening.Tween::target
	Object_t * ___target_7;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_8;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_9;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t3786476454 * ___onPlay_10;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t3786476454 * ___onPause_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t3786476454 * ___onRewind_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t3786476454 * ___onUpdate_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t3786476454 * ___onStepComplete_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t3786476454 * ___onComplete_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t3786476454 * ___onKill_16;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t1868435431 * ___onWaypointChange_17;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_18;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_19;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_20;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_21;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_22;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_23;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_24;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_25;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_26;
	// System.Boolean DG.Tweening.Tween::isRelative
	bool ___isRelative_27;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_28;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t1285385724 * ___customEase_29;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_30;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_31;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_32;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_33;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_34;
	// System.Boolean DG.Tweening.Tween::active
	bool ___active_35;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_36;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_t2436335575 * ___sequenceParent_37;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_38;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_39;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_40;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_41;
	// System.Boolean DG.Tweening.Tween::playedOnce
	bool ___playedOnce_42;
	// System.Single DG.Tweening.Tween::position
	float ___position_43;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_44;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_45;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_46;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_47;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_48;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_49;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_50;
};
