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

// VirtualJoystick
struct VirtualJoystick_t2074970439;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"

// System.Void VirtualJoystick::.ctor()
extern "C"  void VirtualJoystick__ctor_m922926596 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualJoystick::set_inputVector(UnityEngine.Vector3)
extern "C"  void VirtualJoystick_set_inputVector_m1312219975 (VirtualJoystick_t2074970439 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 VirtualJoystick::get_inputVector()
extern "C"  Vector3_t3525329789  VirtualJoystick_get_inputVector_m2456241728 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualJoystick::Start()
extern "C"  void VirtualJoystick_Start_m4165031684 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VirtualJoystick_OnDrag_m362885355 (VirtualJoystick_t2074970439 * __this, PointerEventData_t3205101634 * ___ped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VirtualJoystick_OnPointerDown_m1830765692 (VirtualJoystick_t2074970439 * __this, PointerEventData_t3205101634 * ___ped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void VirtualJoystick_OnPointerUp_m1624864035 (VirtualJoystick_t2074970439 * __this, PointerEventData_t3205101634 * ___ped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VirtualJoystick::Horizontal()
extern "C"  float VirtualJoystick_Horizontal_m310824280 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VirtualJoystick::Vertical()
extern "C"  float VirtualJoystick_Vertical_m1057344746 (VirtualJoystick_t2074970439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
