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

// DG.Tweening.Plugins.UlongPlugin
struct UlongPlugin_t568027840;
// DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t2578226509;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<System.UInt64>
struct DOGetter_1_t3975053698;
// DG.Tweening.Core.DOSetter`1<System.UInt64>
struct DOSetter_1_t716726230;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.UlongPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UlongPlugin_Reset_m2244947916 (UlongPlugin_t568027840 * __this, TweenerCore_3_t2578226509 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 DG.Tweening.Plugins.UlongPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>,System.UInt64)
extern "C"  uint64_t UlongPlugin_ConvertToStartValue_m2046978455 (UlongPlugin_t568027840 * __this, TweenerCore_3_t2578226509 * ___t, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UlongPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UlongPlugin_SetRelativeEndValue_m2567503159 (UlongPlugin_t568027840 * __this, TweenerCore_3_t2578226509 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UlongPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.UInt64,System.UInt64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UlongPlugin_SetChangeValue_m4015223572 (UlongPlugin_t568027840 * __this, TweenerCore_3_t2578226509 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.UlongPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.UInt64)
extern "C"  float UlongPlugin_GetSpeedBasedDuration_m1712749066 (UlongPlugin_t568027840 * __this, NoOptions_t32144009  ___options, float ___unitsXSecond, uint64_t ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UlongPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.UInt64>,DG.Tweening.Core.DOSetter`1<System.UInt64>,System.Single,System.UInt64,System.UInt64,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void UlongPlugin_EvaluateAndApply_m3564217931 (UlongPlugin_t568027840 * __this, NoOptions_t32144009  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t3975053698 * ___getter, DOSetter_1_t716726230 * ___setter, float ___elapsed, uint64_t ___startValue, uint64_t ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UlongPlugin::.ctor()
extern "C"  void UlongPlugin__ctor_m2625472783 (UlongPlugin_t568027840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
