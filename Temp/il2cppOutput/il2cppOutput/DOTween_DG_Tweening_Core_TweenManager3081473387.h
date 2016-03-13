#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Tween[]
struct TweenU5BU5D_t2610237340;
// System.Collections.Generic.Stack`1<DG.Tweening.Tween>
struct Stack_1_t3673770708;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t1900323642;

#include "mscorlib_System_Object837106420.h"

// DG.Tweening.Core.TweenManager
struct  TweenManager_t3081473387  : public Object_t
{
};
struct TweenManager_t3081473387_StaticFields{
	// System.Int32 DG.Tweening.Core.TweenManager::maxActive
	int32_t ___maxActive_0;
	// System.Int32 DG.Tweening.Core.TweenManager::maxTweeners
	int32_t ___maxTweeners_1;
	// System.Int32 DG.Tweening.Core.TweenManager::maxSequences
	int32_t ___maxSequences_2;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveTweens
	bool ___hasActiveTweens_3;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveDefaultTweens
	bool ___hasActiveDefaultTweens_4;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveLateTweens
	bool ___hasActiveLateTweens_5;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveFixedTweens
	bool ___hasActiveFixedTweens_6;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweens
	int32_t ___totActiveTweens_7;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveDefaultTweens
	int32_t ___totActiveDefaultTweens_8;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveLateTweens
	int32_t ___totActiveLateTweens_9;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveFixedTweens
	int32_t ___totActiveFixedTweens_10;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweeners
	int32_t ___totActiveTweeners_11;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveSequences
	int32_t ___totActiveSequences_12;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledTweeners
	int32_t ___totPooledTweeners_13;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledSequences
	int32_t ___totPooledSequences_14;
	// System.Int32 DG.Tweening.Core.TweenManager::totTweeners
	int32_t ___totTweeners_15;
	// System.Int32 DG.Tweening.Core.TweenManager::totSequences
	int32_t ___totSequences_16;
	// System.Boolean DG.Tweening.Core.TweenManager::isUpdateLoop
	bool ___isUpdateLoop_17;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_activeTweens
	TweenU5BU5D_t2610237340* ____activeTweens_18;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_pooledTweeners
	TweenU5BU5D_t2610237340* ____pooledTweeners_19;
	// System.Collections.Generic.Stack`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_PooledSequences
	Stack_1_t3673770708 * ____PooledSequences_20;
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_KillList
	List_1_t1900323642 * ____KillList_21;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxActiveLookupId
	int32_t ____maxActiveLookupId_22;
	// System.Boolean DG.Tweening.Core.TweenManager::_requiresActiveReorganization
	bool ____requiresActiveReorganization_23;
	// System.Int32 DG.Tweening.Core.TweenManager::_reorganizeFromId
	int32_t ____reorganizeFromId_24;
	// System.Int32 DG.Tweening.Core.TweenManager::_minPooledTweenerId
	int32_t ____minPooledTweenerId_25;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxPooledTweenerId
	int32_t ____maxPooledTweenerId_26;
};
