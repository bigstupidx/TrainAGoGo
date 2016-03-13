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

// DG.Tweening.Plugins.QuaternionPlugin
struct QuaternionPlugin_t1792415725;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t3741400174;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t585876960;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t1622516788;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "DOTween_DG_Tweening_Plugins_Options_QuaternionOpti1813596812.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.QuaternionPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_Reset_m3025157714 (QuaternionPlugin_t1792415725 * __this, TweenerCore_3_t3741400174 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.QuaternionPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>,UnityEngine.Quaternion)
extern "C"  Vector3_t3525329789  QuaternionPlugin_ConvertToStartValue_m1926838571 (QuaternionPlugin_t1792415725 * __this, TweenerCore_3_t3741400174 * ___t, Quaternion_t1891715979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_SetRelativeEndValue_m1935444807 (QuaternionPlugin_t1792415725 * __this, TweenerCore_3_t3741400174 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_SetChangeValue_m3471572548 (QuaternionPlugin_t1792415725 * __this, TweenerCore_3_t3741400174 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.QuaternionPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.QuaternionOptions,System.Single,UnityEngine.Vector3)
extern "C"  float QuaternionPlugin_GetSpeedBasedDuration_m899293546 (QuaternionPlugin_t1792415725 * __this, QuaternionOptions_t1813596812  ___options, float ___unitsXSecond, Vector3_t3525329789  ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.QuaternionOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>,DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>,System.Single,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void QuaternionPlugin_EvaluateAndApply_m1073407645 (QuaternionPlugin_t1792415725 * __this, QuaternionOptions_t1813596812  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t585876960 * ___getter, DOSetter_1_t1622516788 * ___setter, float ___elapsed, Vector3_t3525329789  ___startValue, Vector3_t3525329789  ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::.ctor()
extern "C"  void QuaternionPlugin__ctor_m2925254306 (QuaternionPlugin_t1792415725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
