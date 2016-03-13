#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_t3947337298;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t689009830;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t3734373201;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Plugins_Options_FloatOptions3779806670.h"

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct  TweenerCore_3_t2841494226  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t3779806670  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t3947337298 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t689009830 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3734373201 * ___tweenPlugin_59;
};
