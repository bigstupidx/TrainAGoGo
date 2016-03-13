#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<System.Double>
struct DOGetter_1_t3523644891;
// DG.Tweening.Core.DOSetter`1<System.Double>
struct DOSetter_1_t265317423;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t2856278496;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"

// DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>
struct  TweenerCore_3_t1963399521  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	double ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	double ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	double ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_t32144009  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t3523644891 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t265317423 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t2856278496 * ___tweenPlugin_59;
};
