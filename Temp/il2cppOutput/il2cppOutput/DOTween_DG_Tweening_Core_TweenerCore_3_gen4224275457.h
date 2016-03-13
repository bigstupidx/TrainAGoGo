#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<System.UInt32>
struct DOGetter_1_t3975053603;
// DG.Tweening.Core.DOSetter`1<System.UInt32>
struct DOSetter_1_t716726135;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t822187136;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"

// DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>
struct  TweenerCore_3_t4224275457  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	uint32_t ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	uint32_t ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	uint32_t ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_t32144009  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t3975053603 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t716726135 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t822187136 * ___tweenPlugin_59;
};
