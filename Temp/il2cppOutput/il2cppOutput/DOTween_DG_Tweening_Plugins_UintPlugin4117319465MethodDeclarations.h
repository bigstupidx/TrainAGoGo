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

// DG.Tweening.Plugins.UintPlugin
struct UintPlugin_t4117319465;
// DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t4224275457;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<System.UInt32>
struct DOGetter_1_t3975053603;
// DG.Tweening.Core.DOSetter`1<System.UInt32>
struct DOSetter_1_t716726135;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions32144009.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.UintPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UintPlugin_Reset_m4249559127 (UintPlugin_t4117319465 * __this, TweenerCore_3_t4224275457 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 DG.Tweening.Plugins.UintPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>,System.UInt32)
extern "C"  uint32_t UintPlugin_ConvertToStartValue_m4278764888 (UintPlugin_t4117319465 * __this, TweenerCore_3_t4224275457 * ___t, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UintPlugin_SetRelativeEndValue_m3101157890 (UintPlugin_t4117319465 * __this, TweenerCore_3_t4224275457 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void UintPlugin_SetChangeValue_m1046440877 (UintPlugin_t4117319465 * __this, TweenerCore_3_t4224275457 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.UintPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.UInt32)
extern "C"  float UintPlugin_GetSpeedBasedDuration_m4240337578 (UintPlugin_t4117319465 * __this, NoOptions_t32144009  ___options, float ___unitsXSecond, uint32_t ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.UInt32>,DG.Tweening.Core.DOSetter`1<System.UInt32>,System.Single,System.UInt32,System.UInt32,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void UintPlugin_EvaluateAndApply_m1428628484 (UintPlugin_t4117319465 * __this, NoOptions_t32144009  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t3975053603 * ___getter, DOSetter_1_t716726135 * ___setter, float ___elapsed, uint32_t ___startValue, uint32_t ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::.ctor()
extern "C"  void UintPlugin__ctor_m876318438 (UintPlugin_t4117319465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
