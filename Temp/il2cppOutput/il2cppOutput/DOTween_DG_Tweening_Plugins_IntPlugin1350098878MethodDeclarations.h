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

// DG.Tweening.Plugins.IntPlugin
struct IntPlugin_t1350098878;
// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t2554842309;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t1541575768;
// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_t2578215596;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.IntPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_Reset_m53643796 (IntPlugin_t1350098878 * __this, TweenerCore_3_t2554842309 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Plugins.IntPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>,System.Int32)
extern "C"  int32_t IntPlugin_ConvertToStartValue_m14477251 (IntPlugin_t1350098878 * __this, TweenerCore_3_t2554842309 * ___t, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_SetRelativeEndValue_m433758655 (IntPlugin_t1350098878 * __this, TweenerCore_3_t2554842309 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_SetChangeValue_m635967264 (IntPlugin_t1350098878 * __this, TweenerCore_3_t2554842309 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.IntPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.Int32)
extern "C"  float IntPlugin_GetSpeedBasedDuration_m2166726052 (IntPlugin_t1350098878 * __this, NoOptions_t32144009  ___options, float ___unitsXSecond, int32_t ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Int32>,DG.Tweening.Core.DOSetter`1<System.Int32>,System.Single,System.Int32,System.Int32,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void IntPlugin_EvaluateAndApply_m3418362625 (IntPlugin_t1350098878 * __this, NoOptions_t32144009  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t1541575768 * ___getter, DOSetter_1_t2578215596 * ___setter, float ___elapsed, int32_t ___startValue, int32_t ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::.ctor()
extern "C"  void IntPlugin__ctor_m1224723921 (IntPlugin_t1350098878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
