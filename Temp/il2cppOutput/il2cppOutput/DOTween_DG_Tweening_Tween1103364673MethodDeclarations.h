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

// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.TweenCallback
struct TweenCallback_t3786476454;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode3005523297.h"
#include "DOTween_DG_Tweening_TweenCallback3786476454.h"

// System.Void DG.Tweening.Tween::Reset()
extern "C"  void Tween_Reset_m1561947655 (Tween_t1103364673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Tween::UpdateDelay(System.Single)
extern "C"  float Tween_UpdateDelay_m2352032301 (Tween_t1103364673 * __this, float ___elapsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Tween::DoGoto(DG.Tweening.Tween,System.Single,System.Int32,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool Tween_DoGoto_m553213920 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, float ___toPosition, int32_t ___toCompletedLoops, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Tween::OnTweenCallback(DG.Tweening.TweenCallback)
extern "C"  bool Tween_OnTweenCallback_m2405609485 (Object_t * __this /* static, unused */, TweenCallback_t3786476454 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Tween::.ctor()
extern "C"  void Tween__ctor_m3915514714 (Tween_t1103364673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
