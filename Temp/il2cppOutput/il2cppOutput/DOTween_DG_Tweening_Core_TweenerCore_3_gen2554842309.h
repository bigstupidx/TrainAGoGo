#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t1541575768;
// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_t2578215596;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t3447721284;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"

// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct  TweenerCore_3_t2554842309  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	int32_t ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	int32_t ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	int32_t ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_t32144009  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1541575768 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t2578215596 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3447721284 * ___tweenPlugin_59;
};
