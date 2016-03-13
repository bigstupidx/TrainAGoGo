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
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_t1733909190;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_t288468127;

#include "mscorlib_System_Object837106420.h"
#include "DOTween_DG_Tweening_LogBehaviour3180954095.h"
#include "DOTween_DG_Tweening_UpdateType2719692729.h"
#include "DOTween_DG_Tweening_AutoPlay2525396377.h"
#include "DOTween_DG_Tweening_LoopType3344295956.h"
#include "DOTween_DG_Tweening_Ease1024295940.h"

// DG.Tweening.DOTween
struct  DOTween_t3585775766  : public Object_t
{
};
struct DOTween_t3585775766_StaticFields{
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_2;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_3;
	// System.Boolean DG.Tweening.DOTween::useSmoothDeltaTime
	bool ___useSmoothDeltaTime_4;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_5;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_6;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_7;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_8;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_9;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_10;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_11;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_12;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_13;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_14;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_15;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_t1733909190 * ___instance_16;
	// System.Boolean DG.Tweening.DOTween::isUnityEditor
	bool ___isUnityEditor_17;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_18;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_19;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_t288468127 * ___GizmosDelegates_20;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_21;
	// System.Boolean DG.Tweening.DOTween::isQuitting
	bool ___isQuitting_22;
};
