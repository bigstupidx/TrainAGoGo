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

// DG.Tweening.Plugins.LongPlugin
struct LongPlugin_t683535563;
// DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t908793361;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<System.Int64>
struct DOGetter_1_t1541575863;
// DG.Tweening.Core.DOSetter`1<System.Int64>
struct DOSetter_1_t2578215691;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.LongPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_Reset_m78693473 (LongPlugin_t683535563 * __this, TweenerCore_3_t908793361 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 DG.Tweening.Plugins.LongPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>,System.Int64)
extern "C"  int64_t LongPlugin_ConvertToStartValue_m34648786 (LongPlugin_t683535563 * __this, TweenerCore_3_t908793361 * ___t, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_SetRelativeEndValue_m3765565772 (LongPlugin_t683535563 * __this, TweenerCore_3_t908793361 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_SetChangeValue_m3746520115 (LongPlugin_t683535563 * __this, TweenerCore_3_t908793361 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.LongPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.Int64)
extern "C"  float LongPlugin_GetSpeedBasedDuration_m1879276992 (LongPlugin_t683535563 * __this, NoOptions_t32144009  ___options, float ___unitsXSecond, int64_t ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Int64>,DG.Tweening.Core.DOSetter`1<System.Int64>,System.Single,System.Int64,System.Int64,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void LongPlugin_EvaluateAndApply_m3886028054 (LongPlugin_t683535563 * __this, NoOptions_t32144009  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t1541575863 * ___getter, DOSetter_1_t2578215691 * ___setter, float ___elapsed, int64_t ___startValue, int64_t ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::.ctor()
extern "C"  void LongPlugin__ctor_m541140868 (LongPlugin_t683535563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
