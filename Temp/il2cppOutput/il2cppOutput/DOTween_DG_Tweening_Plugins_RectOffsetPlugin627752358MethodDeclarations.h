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

// DG.Tweening.Plugins.RectOffsetPlugin
struct RectOffsetPlugin_t627752358;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t3868708601;
// UnityEngine.RectOffset
struct RectOffset_t3394170884;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<UnityEngine.RectOffset>
struct DOGetter_1_t2088331865;
// DG.Tweening.Core.DOSetter`1<UnityEngine.RectOffset>
struct DOSetter_1_t3124971693;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectOffset3394170884.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.RectOffsetPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void RectOffsetPlugin_Reset_m397475260 (RectOffsetPlugin_t627752358 * __this, TweenerCore_3_t3868708601 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset DG.Tweening.Plugins.RectOffsetPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>,UnityEngine.RectOffset)
extern "C"  RectOffset_t3394170884 * RectOffsetPlugin_ConvertToStartValue_m2959653143 (RectOffsetPlugin_t627752358 * __this, TweenerCore_3_t3868708601 * ___t, RectOffset_t3394170884 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void RectOffsetPlugin_SetRelativeEndValue_m182506471 (RectOffsetPlugin_t627752358 * __this, TweenerCore_3_t3868708601 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.RectOffset,UnityEngine.RectOffset,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void RectOffsetPlugin_SetChangeValue_m3364964920 (RectOffsetPlugin_t627752358 * __this, TweenerCore_3_t3868708601 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.RectOffsetPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,UnityEngine.RectOffset)
extern "C"  float RectOffsetPlugin_GetSpeedBasedDuration_m2928001061 (RectOffsetPlugin_t627752358 * __this, NoOptions_t32144009  ___options, float ___unitsXSecond, RectOffset_t3394170884 * ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.RectOffset>,DG.Tweening.Core.DOSetter`1<UnityEngine.RectOffset>,System.Single,UnityEngine.RectOffset,UnityEngine.RectOffset,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void RectOffsetPlugin_EvaluateAndApply_m2387887643 (RectOffsetPlugin_t627752358 * __this, NoOptions_t32144009  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t2088331865 * ___getter, DOSetter_1_t3124971693 * ___setter, float ___elapsed, RectOffset_t3394170884 * ___startValue, RectOffset_t3394170884 * ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::.ctor()
extern "C"  void RectOffsetPlugin__ctor_m2034471177 (RectOffsetPlugin_t627752358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectOffsetPlugin::.cctor()
extern "C"  void RectOffsetPlugin__cctor_m2456968132 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
