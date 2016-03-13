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

// Train
struct Train_t81068520;
// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Direction1041377119.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void Train::.ctor()
extern "C"  void Train__ctor_m1858104451 (Train_t81068520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::.cctor()
extern "C"  void Train__cctor_m1284566922 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Direction Train::get_Direction()
extern "C"  int32_t Train_get_Direction_m4186629579 (Train_t81068520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::set_Direction(Direction)
extern "C"  void Train_set_Direction_m1412939024 (Train_t81068520 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::Turn()
extern "C"  void Train_Turn_m3381164446 (Train_t81068520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Train_OnTriggerEnter_m1604243925 (Train_t81068520 * __this, Collider_t955670625 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::OnTriggerStay(UnityEngine.Collider)
extern "C"  void Train_OnTriggerStay_m2873951272 (Train_t81068520 * __this, Collider_t955670625 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::OnTriggerExit(UnityEngine.Collider)
extern "C"  void Train_OnTriggerExit_m255862061 (Train_t81068520 * __this, Collider_t955670625 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Train_OnCollisionEnter_m2606654033 (Train_t81068520 * __this, Collision_t1119538015 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::OnDisable()
extern "C"  void Train_OnDisable_m367511402 (Train_t81068520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Train::Update()
extern "C"  void Train_Update_m3493525226 (Train_t81068520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
