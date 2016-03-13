#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t219589798;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t1256229626;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct ABSTweenPlugin_3_t3167545241;

#include "DOTween_DG_Tweening_Tweener1766303790.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "DOTween_DG_Tweening_Plugins_Options_RectOptions1160272134.h"

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct  TweenerCore_3_t2274666266  : public Tweener_t1766303790
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Rect_t1525428817  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Rect_t1525428817  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Rect_t1525428817  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	RectOptions_t1160272134  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t219589798 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t1256229626 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3167545241 * ___tweenPlugin_59;
};
