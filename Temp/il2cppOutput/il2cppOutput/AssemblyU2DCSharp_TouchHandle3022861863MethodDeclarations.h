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

// TouchHandle
struct TouchHandle_t3022861863;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void TouchHandle::.ctor()
extern "C"  void TouchHandle__ctor_m3064676644 (TouchHandle_t3022861863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandle::Start()
extern "C"  void TouchHandle_Start_m2011814436 (TouchHandle_t3022861863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandle::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TouchHandle_OnDrag_m2804141067 (TouchHandle_t3022861863 * __this, PointerEventData_t3205101634 * ___ped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandle::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TouchHandle_OnPointerDown_m3618497884 (TouchHandle_t3022861863 * __this, PointerEventData_t3205101634 * ___ped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandle::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void TouchHandle_OnPointerUp_m643485187 (TouchHandle_t3022861863 * __this, PointerEventData_t3205101634 * ___ped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TouchHandle::isOverlapBridge(UnityEngine.GameObject)
extern "C"  bool TouchHandle_isOverlapBridge_m3507214196 (TouchHandle_t3022861863 * __this, GameObject_t4012695102 * ___currentBridge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandle::changeObjectColor(UnityEngine.GameObject)
extern "C"  void TouchHandle_changeObjectColor_m183596142 (TouchHandle_t3022861863 * __this, GameObject_t4012695102 * ___currentObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandle::RemoveAllBridges()
extern "C"  void TouchHandle_RemoveAllBridges_m518964909 (TouchHandle_t3022861863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandle::DestroyBridge(UnityEngine.GameObject)
extern "C"  void TouchHandle_DestroyBridge_m1074027101 (TouchHandle_t3022861863 * __this, GameObject_t4012695102 * ___bridge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
