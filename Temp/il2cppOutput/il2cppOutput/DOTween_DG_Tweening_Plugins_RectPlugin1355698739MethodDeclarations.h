#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DG.Tweening.Plugins.RectPlugin
struct RectPlugin_t1355698739;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_t2274666266;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t219589798;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t1256229626;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "DOTween_DG_Tweening_Plugins_Options_RectOptions1160272134.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.RectPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_Reset_m2460298854 (RectPlugin_t1355698739 * __this, TweenerCore_3_t2274666266 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect DG.Tweening.Plugins.RectPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>,UnityEngine.Rect)
extern "C"  Rect_t1525428817  RectPlugin_ConvertToStartValue_m2834420557 (RectPlugin_t1355698739 * __this, TweenerCore_3_t2274666266 * ___t, Rect_t1525428817  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_SetRelativeEndValue_m2415223697 (RectPlugin_t1355698739 * __this, TweenerCore_3_t2274666266 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_SetChangeValue_m1714030056 (RectPlugin_t1355698739 * __this, TweenerCore_3_t2274666266 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.RectPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.RectOptions,System.Single,UnityEngine.Rect)
extern "C"  float RectPlugin_GetSpeedBasedDuration_m3924978056 (RectPlugin_t1355698739 * __this, RectOptions_t1160272134  ___options, float ___unitsXSecond, Rect_t1525428817  ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.RectOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>,DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>,System.Single,UnityEngine.Rect,UnityEngine.Rect,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void RectPlugin_EvaluateAndApply_m59091607 (RectPlugin_t1355698739 * __this, RectOptions_t1160272134  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t219589798 * ___getter, DOSetter_1_t1256229626 * ___setter, float ___elapsed, Rect_t1525428817  ___startValue, Rect_t1525428817  ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::.ctor()
extern "C"  void RectPlugin__ctor_m1101551388 (RectPlugin_t1355698739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
