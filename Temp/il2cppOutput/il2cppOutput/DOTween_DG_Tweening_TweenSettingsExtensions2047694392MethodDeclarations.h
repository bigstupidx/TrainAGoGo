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

// DG.Tweening.Sequence
struct Sequence_t2436335575;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.Tweener
struct Tweener_t1766303790;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2905908171;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Sequence2436335575.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_AxisConstraint3652844660.h"

// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_Append_m2918914375 (Object_t * __this /* static, unused */, Sequence_t2436335575 * ___s, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Join(DG.Tweening.Sequence,DG.Tweening.Tween)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_Join_m2978849367 (Object_t * __this /* static, unused */, Sequence_t2436335575 * ___s, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Insert(DG.Tweening.Sequence,System.Single,DG.Tweening.Tween)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_Insert_m2914125259 (Object_t * __this /* static, unused */, Sequence_t2436335575 * ___s, float ___atPosition, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::AppendInterval(DG.Tweening.Sequence,System.Single)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_AppendInterval_m4146052196 (Object_t * __this /* static, unused */, Sequence_t2436335575 * ___s, float ___interval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::PrependInterval(DG.Tweening.Sequence,System.Single)
extern "C"  Sequence_t2436335575 * TweenSettingsExtensions_PrependInterval_m3953133184 (Object_t * __this /* static, unused */, Sequence_t2436335575 * ___s, float ___interval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m2978237769 (Object_t * __this /* static, unused */, TweenerCore_3_t2905908171 * ___t, bool ___snapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
extern "C"  Tweener_t1766303790 * TweenSettingsExtensions_SetOptions_m393035861 (Object_t * __this /* static, unused */, TweenerCore_3_t2905908171 * ___t, int32_t ___axisConstraint, bool ___snapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
