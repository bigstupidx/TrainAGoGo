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

// DG.Tweening.Plugins.Color2Plugin
struct Color2Plugin_t4033759550;
// DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t182370955;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>
struct DOGetter_1_t1740296090;
// DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>
struct DOSetter_1_t2776935918;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Color23046135109.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions4161000167.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.Color2Plugin::Reset(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_Reset_m2261938170 (Color2Plugin_t4033759550 * __this, TweenerCore_3_t182370955 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Color2 DG.Tweening.Plugins.Color2Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>,DG.Tweening.Color2)
extern "C"  Color2_t3046135109  Color2Plugin_ConvertToStartValue_m1940479465 (Color2Plugin_t4033759550 * __this, TweenerCore_3_t182370955 * ___t, Color2_t3046135109  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_SetRelativeEndValue_m3257636079 (Color2Plugin_t4033759550 * __this, TweenerCore_3_t182370955 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_SetChangeValue_m2218276910 (Color2Plugin_t4033759550 * __this, TweenerCore_3_t182370955 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Color2Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.ColorOptions,System.Single,DG.Tweening.Color2)
extern "C"  float Color2Plugin_GetSpeedBasedDuration_m2968245394 (Color2Plugin_t4033759550 * __this, ColorOptions_t4161000167  ___options, float ___unitsXSecond, Color2_t3046135109  ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.ColorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>,DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>,System.Single,DG.Tweening.Color2,DG.Tweening.Color2,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Color2Plugin_EvaluateAndApply_m1041386315 (Color2Plugin_t4033759550 * __this, ColorOptions_t4161000167  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t1740296090 * ___getter, DOSetter_1_t2776935918 * ___setter, float ___elapsed, Color2_t3046135109  ___startValue, Color2_t3046135109  ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::.ctor()
extern "C"  void Color2Plugin__ctor_m3870660721 (Color2Plugin_t4033759550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
