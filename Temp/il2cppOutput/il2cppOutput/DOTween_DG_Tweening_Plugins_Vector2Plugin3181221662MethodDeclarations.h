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

// DG.Tweening.Plugins.Vector2Plugin
struct Vector2Plugin_t3181221662;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t753146263;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t2219490769;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t3256130597;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions3308462279.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.Vector2Plugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_Reset_m1376680426 (Vector2Plugin_t3181221662 * __this, TweenerCore_3_t753146263 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DG.Tweening.Plugins.Vector2Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  Vector2Plugin_ConvertToStartValue_m3633437333 (Vector2Plugin_t3181221662 * __this, TweenerCore_3_t753146263 * ___t, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_SetRelativeEndValue_m675919061 (Vector2Plugin_t3181221662 * __this, TweenerCore_3_t753146263 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_SetChangeValue_m1058552118 (Vector2Plugin_t3181221662 * __this, TweenerCore_3_t753146263 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector2Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.VectorOptions,System.Single,UnityEngine.Vector2)
extern "C"  float Vector2Plugin_GetSpeedBasedDuration_m1311381865 (Vector2Plugin_t3181221662 * __this, VectorOptions_t3308462279  ___options, float ___unitsXSecond, Vector2_t3525329788  ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.VectorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>,System.Single,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector2Plugin_EvaluateAndApply_m4033664081 (Vector2Plugin_t3181221662 * __this, VectorOptions_t3308462279  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t2219490769 * ___getter, DOSetter_1_t3256130597 * ___setter, float ___elapsed, Vector2_t3525329788  ___startValue, Vector2_t3525329788  ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::.ctor()
extern "C"  void Vector2Plugin__ctor_m1993632369 (Vector2Plugin_t3181221662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
