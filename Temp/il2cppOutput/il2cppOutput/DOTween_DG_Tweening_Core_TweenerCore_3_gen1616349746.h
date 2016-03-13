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
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t2219490770;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3256130598;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct ABSTweenPlugin_3_t2509228721;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Plugins_Options_Vector3ArrayOpt939984481.h"

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,System.Object,DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct  TweenerCore_3_t1616349746  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Object_t * ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Object_t * ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Object_t * ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	Vector3ArrayOptions_t939984481  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t2219490770 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3256130598 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t2509228721 * ___tweenPlugin_59;
};
