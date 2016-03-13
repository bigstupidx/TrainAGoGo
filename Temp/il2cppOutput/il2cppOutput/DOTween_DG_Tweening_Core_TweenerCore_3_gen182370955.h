#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>
struct DOGetter_1_t1740296090;
// DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>
struct DOSetter_1_t2776935918;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t1075249930;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Color23046135109.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions4161000167.h"

// DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct  TweenerCore_3_t182370955  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color2_t3046135109  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color2_t3046135109  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color2_t3046135109  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t4161000167  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1740296090 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t2776935918 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t1075249930 * ___tweenPlugin_59;
};
