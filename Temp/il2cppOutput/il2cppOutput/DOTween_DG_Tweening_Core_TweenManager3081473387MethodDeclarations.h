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
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t1900323642;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_UpdateType2719692729.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode3005523297.h"
#include "DOTween_DG_Tweening_Core_TweenManager_CapacityIncr3284177151.h"

// DG.Tweening.Sequence DG.Tweening.Core.TweenManager::GetSequence()
extern "C"  Sequence_t2436335575 * TweenManager_GetSequence_m820409917 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetUpdateType(DG.Tweening.Tween,DG.Tweening.UpdateType,System.Boolean)
extern "C"  void TweenManager_SetUpdateType_m2105083394 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, int32_t ___updateType, bool ___isIndependentUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTweenToSequence(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTweenToSequence_m801211459 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Despawn(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenManager_Despawn_m4133721302 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, bool ___modifyActiveLists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetCapacities(System.Int32,System.Int32)
extern "C"  void TweenManager_SetCapacities_m841848186 (Object_t * __this /* static, unused */, int32_t ___tweenersCapacity, int32_t ___sequencesCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::Validate()
extern "C"  int32_t TweenManager_Validate_m4093646836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Update(DG.Tweening.UpdateType,System.Single,System.Single)
extern "C"  void TweenManager_Update_m3326434900 (Object_t * __this /* static, unused */, int32_t ___updateType, float ___deltaTime, float ___independentTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Goto(DG.Tweening.Tween,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool TweenManager_Goto_m3639668801 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, float ___to, bool ___andPlay, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::MarkForKilling(DG.Tweening.Tween)
extern "C"  void TweenManager_MarkForKilling_m118408507 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTween_m1869434239 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ReorganizeActiveTweens()
extern "C"  void TweenManager_ReorganizeActiveTweens_m3502491988 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::DespawnTweens(System.Collections.Generic.List`1<DG.Tweening.Tween>,System.Boolean)
extern "C"  void TweenManager_DespawnTweens_m171906374 (Object_t * __this /* static, unused */, List_1_t1900323642 * ___tweens, bool ___modifyActiveLists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::RemoveActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_RemoveActiveTween_m3697489248 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::IncreaseCapacities(DG.Tweening.Core.TweenManager/CapacityIncreaseMode)
extern "C"  void TweenManager_IncreaseCapacities_m4137155233 (Object_t * __this /* static, unused */, int32_t ___increaseMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::.cctor()
extern "C"  void TweenManager__cctor_m4158543225 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
