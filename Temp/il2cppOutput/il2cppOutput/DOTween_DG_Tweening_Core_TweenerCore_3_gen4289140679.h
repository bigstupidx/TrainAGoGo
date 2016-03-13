#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t282336741;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t1318976569;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t887052358;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions4161000167.h"

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct  TweenerCore_3_t4289140679  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_t1588175760  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_t1588175760  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_t1588175760  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t4161000167  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t282336741 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t1318976569 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t887052358 * ___tweenPlugin_59;
};
