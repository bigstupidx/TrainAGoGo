#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t585876960;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t1622516788;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t339311853;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "DOTween_DG_Tweening_Plugins_Options_QuaternionOpti1813596812.h"

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct  TweenerCore_3_t3741400174  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t3525329789  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t3525329789  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t3525329789  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1813596812  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t585876960 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t1622516788 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t339311853 * ___tweenPlugin_59;
};
