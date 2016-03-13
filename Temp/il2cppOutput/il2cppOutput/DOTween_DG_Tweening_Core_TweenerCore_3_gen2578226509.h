#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<System.UInt64>
struct DOGetter_1_t3975053698;
// DG.Tweening.Core.DOSetter`1<System.UInt64>
struct DOSetter_1_t716726230;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t3471105484;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"

// DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct  TweenerCore_3_t2578226509  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	uint64_t ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	uint64_t ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	uint64_t ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_t32144009  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t3975053698 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t716726230 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3471105484 * ___tweenPlugin_59;
};
