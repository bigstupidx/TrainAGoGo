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

// DG.Tweening.Plugins.DoublePlugin
struct DoublePlugin_t567412320;
// DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t1963399521;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<System.Double>
struct DOGetter_1_t3523644891;
// DG.Tweening.Core.DOSetter`1<System.Double>
struct DOSetter_1_t265317423;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.DoublePlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void DoublePlugin_Reset_m1343092286 (DoublePlugin_t567412320 * __this, TweenerCore_3_t1963399521 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double DG.Tweening.Plugins.DoublePlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>,System.Double)
extern "C"  double DoublePlugin_ConvertToStartValue_m4114043535 (DoublePlugin_t567412320 * __this, TweenerCore_3_t1963399521 * ___t, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.DoublePlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void DoublePlugin_SetRelativeEndValue_m407413673 (DoublePlugin_t567412320 * __this, TweenerCore_3_t1963399521 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.DoublePlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void DoublePlugin_SetChangeValue_m2411625094 (DoublePlugin_t567412320 * __this, TweenerCore_3_t1963399521 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.DoublePlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.Double)
extern "C"  float DoublePlugin_GetSpeedBasedDuration_m1817521769 (DoublePlugin_t567412320 * __this, NoOptions_t32144009  ___options, float ___unitsXSecond, double ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.DoublePlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Double>,DG.Tweening.Core.DOSetter`1<System.Double>,System.Single,System.Double,System.Double,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void DoublePlugin_EvaluateAndApply_m1602010333 (DoublePlugin_t567412320 * __this, NoOptions_t32144009  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t3523644891 * ___getter, DOSetter_1_t265317423 * ___setter, float ___elapsed, double ___startValue, double ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.DoublePlugin::.ctor()
extern "C"  void DoublePlugin__ctor_m1056407951 (DoublePlugin_t567412320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
