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

// DG.Tweening.Plugins.Vector3Plugin
struct Vector3Plugin_t4068725343;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2905908171;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t2219490770;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3256130598;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions3308462279.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.Vector3Plugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector3Plugin_Reset_m506307693 (Vector3Plugin_t4068725343 * __this, TweenerCore_3_t2905908171 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.Vector3Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3Plugin_ConvertToStartValue_m937681976 (Vector3Plugin_t4068725343 * __this, TweenerCore_3_t2905908171 * ___t, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector3Plugin_SetRelativeEndValue_m2640333208 (Vector3Plugin_t4068725343 * __this, TweenerCore_3_t2905908171 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector3Plugin_SetChangeValue_m1741747415 (Vector3Plugin_t4068725343 * __this, TweenerCore_3_t2905908171 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector3Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.VectorOptions,System.Single,UnityEngine.Vector3)
extern "C"  float Vector3Plugin_GetSpeedBasedDuration_m2387935305 (Vector3Plugin_t4068725343 * __this, VectorOptions_t3308462279  ___options, float ___unitsXSecond, Vector3_t3525329789  ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.VectorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector3Plugin_EvaluateAndApply_m3749375698 (Vector3Plugin_t4068725343 * __this, VectorOptions_t3308462279  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t2219490770 * ___getter, DOSetter_1_t3256130598 * ___setter, float ___elapsed, Vector3_t3525329789  ___startValue, Vector3_t3525329789  ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3Plugin::.ctor()
extern "C"  void Vector3Plugin__ctor_m1483098192 (Vector3Plugin_t4068725343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
