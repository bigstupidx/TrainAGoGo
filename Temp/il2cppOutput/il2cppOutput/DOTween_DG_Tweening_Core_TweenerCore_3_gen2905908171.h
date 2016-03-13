#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t2219490770;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3256130598;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t3798787146;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions3308462279.h"

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct  TweenerCore_3_t2905908171  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t3525329789  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t3525329789  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t3525329789  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t3308462279  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t2219490770 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3256130598 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3798787146 * ___tweenPlugin_59;
};
