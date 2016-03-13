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

// DG.Tweening.Plugins.StringPlugin
struct StringPlugin_t3896752800;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t1100577297;
// System.String
struct String_t;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Core.DOGetter`1<System.String>
struct DOGetter_1_t3957617179;
// DG.Tweening.Core.DOSetter`1<System.String>
struct DOSetter_1_t699289711;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "DOTween_DG_Tweening_Plugins_Options_StringOptions2623536697.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice384566358.h"

// System.Void DG.Tweening.Plugins.StringPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_Reset_m3303411630 (StringPlugin_t3896752800 * __this, TweenerCore_3_t1100577297 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DG.Tweening.Plugins.StringPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>,System.String)
extern "C"  String_t* StringPlugin_ConvertToStartValue_m1860050175 (StringPlugin_t3896752800 * __this, TweenerCore_3_t1100577297 * ___t, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_SetRelativeEndValue_m2390335385 (StringPlugin_t3896752800 * __this, TweenerCore_3_t1100577297 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_SetChangeValue_m3608637302 (StringPlugin_t3896752800 * __this, TweenerCore_3_t1100577297 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.StringPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.StringOptions,System.Single,System.String)
extern "C"  float StringPlugin_GetSpeedBasedDuration_m3300381369 (StringPlugin_t3896752800 * __this, StringOptions_t2623536697  ___options, float ___unitsXSecond, String_t* ___changeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.StringOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.String>,DG.Tweening.Core.DOSetter`1<System.String>,System.Single,System.String,System.String,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void StringPlugin_EvaluateAndApply_m1044842605 (StringPlugin_t3896752800 * __this, StringOptions_t2623536697  ___options, Tween_t1103364673 * ___t, bool ___isRelative, DOGetter_1_t3957617179 * ___getter, DOSetter_1_t699289711 * ___setter, float ___elapsed, String_t* ___startValue, String_t* ___changeValue, float ___duration, bool ___usingInversePosition, int32_t ___updateNotice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder DG.Tweening.Plugins.StringPlugin::Append(System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  StringBuilder_t3822575854 * StringPlugin_Append_m1731639637 (StringPlugin_t3896752800 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, bool ___richTextEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] DG.Tweening.Plugins.StringPlugin::ScrambledCharsToUse(DG.Tweening.Plugins.Options.StringOptions)
extern "C"  CharU5BU5D_t3416858730* StringPlugin_ScrambledCharsToUse_m809956600 (StringPlugin_t3896752800 * __this, StringOptions_t2623536697  ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::.ctor()
extern "C"  void StringPlugin__ctor_m3716977999 (StringPlugin_t3896752800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::.cctor()
extern "C"  void StringPlugin__cctor_m3075072062 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
