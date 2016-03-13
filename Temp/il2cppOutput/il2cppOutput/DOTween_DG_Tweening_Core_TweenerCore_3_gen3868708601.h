#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectOffset
struct RectOffset_t3394170884;
// DG.Tweening.Core.DOGetter`1<UnityEngine.RectOffset>
struct DOGetter_1_t2088331865;
// DG.Tweening.Core.DOSetter`1<UnityEngine.RectOffset>
struct DOSetter_1_t3124971693;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t466620280;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"

// DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>
struct  TweenerCore_3_t3868708601  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	RectOffset_t3394170884 * ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	RectOffset_t3394170884 * ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	RectOffset_t3394170884 * ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_t32144009  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t2088331865 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3124971693 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t466620280 * ___tweenPlugin_59;
};
