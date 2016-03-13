#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t2219490769;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t3256130597;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t1646025238;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions3308462279.h"

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct  TweenerCore_3_t753146263  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t3525329788  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t3525329788  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t3525329788  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t3308462279  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t2219490769 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3256130597 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t1646025238 * ___tweenPlugin_59;
};
