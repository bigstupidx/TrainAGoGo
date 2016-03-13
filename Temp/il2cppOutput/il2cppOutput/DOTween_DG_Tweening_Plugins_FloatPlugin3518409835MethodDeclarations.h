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

// DG.Tweening.Plugins.FloatPlugin
struct FloatPlugin_t3518409835;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t2841494226;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_t3947337298;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t689009830;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_FloatOptions3779806670.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.FloatPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>)
extern "C"  void FloatPlugin_Reset_m2235725342 (FloatPlugin_t3518409835 * __this, TweenerCore_3_t2841494226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.FloatPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>,System.Single)
extern "C"  float FloatPlugin_ConvertToStartValue_m1910861853 (FloatPlugin_t3518409835 * __this, TweenerCore_3_t2841494226 * ___t, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.FloatPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>)
extern "C"  void FloatPlugin_SetRelativeEndValue_m30092307 (FloatPlugin_t3518409835 * __this, TweenerCore_3_t2841494226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.FloatPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>)
extern "C"  void FloatPlugin_SetChangeValue_m3583957260 (FloatPlugin_t3518409835 * __this, TweenerCore_3_t2841494226 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.FloatPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.FloatOptions,System.Single,System.Single)
extern "C"  float FloatPlugin_GetSpeedBasedDuration_m519453186 (FloatPlugin_t3518409835 * __this, FloatOptions_t3779806670  ___options, float ___unitsXSecond, float ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.FloatPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.FloatOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Single>,DG.Tweening.Core.DOSetter`1<System.Single>,System.Single,System.Single,System.Single,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void FloatPlugin_EvaluateAndApply_m3906314005 (FloatPlugin_t3518409835 * __this, FloatOptions_t3779806670  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t3947337298 * ___getter, DOSetter_1_t689009830 * ___setter, float ___elapsed, float ___startValue, float ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.FloatPlugin::.ctor()
extern "C"  void FloatPlugin__ctor_m1707734980 (FloatPlugin_t3518409835 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
