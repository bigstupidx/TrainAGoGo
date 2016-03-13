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

// DG.Tweening.IDOTweenInit
struct IDOTweenInit_t3749595613;
// DG.Tweening.Core.DOTweenSettings
struct DOTweenSettings_t2040152940;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2905908171;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t2219490770;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3256130598;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t3741400174;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t585876960;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t1622516788;
// DG.Tweening.Sequence
struct Sequence_t2436335575;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_LogBehaviour3180954095.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"
#include "mscorlib_System_Nullable_1_gen1772024707.h"
#include "DOTween_DG_Tweening_Core_DOTweenSettings2040152940.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// DG.Tweening.LogBehaviour DG.Tweening.DOTween::get_logBehaviour()
extern "C"  int32_t DOTween_get_logBehaviour_m1425304677 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTween::set_logBehaviour(DG.Tweening.LogBehaviour)
extern "C"  void DOTween_set_logBehaviour_m2740089712 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTween::.cctor()
extern "C"  void DOTween__cctor_m2298985512 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.IDOTweenInit DG.Tweening.DOTween::Init(System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Nullable`1<DG.Tweening.LogBehaviour>)
extern "C"  Object_t * DOTween_Init_m3949764519 (Object_t * __this /* static, unused */, Nullable_1_t3097043249  ___recycleAllByDefault, Nullable_1_t3097043249  ___useSafeMode, Nullable_1_t1772024707  ___logBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTween::AutoInit()
extern "C"  void DOTween_AutoInit_m2429517086 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.IDOTweenInit DG.Tweening.DOTween::Init(DG.Tweening.Core.DOTweenSettings,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Nullable`1<DG.Tweening.LogBehaviour>)
extern "C"  Object_t * DOTween_Init_m2066611683 (Object_t * __this /* static, unused */, DOTweenSettings_t2040152940 * ___settings, Nullable_1_t3097043249  ___recycleAllByDefault, Nullable_1_t3097043249  ___useSafeMode, Nullable_1_t1772024707  ___logBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.DOTween::Validate()
extern "C"  int32_t DOTween_Validate_m128047203 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTween::To(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,UnityEngine.Vector3,System.Single)
extern "C"  TweenerCore_3_t2905908171 * DOTween_To_m1633868995 (Object_t * __this /* static, unused */, DOGetter_1_t2219490770 * ___getter, DOSetter_1_t3256130598 * ___setter, Vector3_t3525329789  ___endValue, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.DOTween::To(DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>,DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>,UnityEngine.Vector3,System.Single)
extern "C"  TweenerCore_3_t3741400174 * DOTween_To_m1607864926 (Object_t * __this /* static, unused */, DOGetter_1_t585876960 * ___getter, DOSetter_1_t1622516788 * ___setter, Vector3_t3525329789  ___endValue, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Sequence DG.Tweening.DOTween::Sequence()
extern "C"  Sequence_t2436335575 * DOTween_Sequence_m2991851212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTween::InitCheck()
extern "C"  void DOTween_InitCheck_m3805752347 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
