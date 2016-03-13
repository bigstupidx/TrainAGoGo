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

// RailManager
struct RailManager_t2032614299;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void RailManager::.ctor()
extern "C"  void RailManager__ctor_m191766064 (RailManager_t2032614299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 RailManager::GetTrainPosition(System.Int32,System.Boolean)
extern "C"  Vector3_t3525329789  RailManager_GetTrainPosition_m2746638391 (RailManager_t2032614299 * __this, int32_t ___railIndex, bool ___isUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RailManager::OnDrawGizmos()
extern "C"  void RailManager_OnDrawGizmos_m2723585264 (RailManager_t2032614299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RailManager::DrawLines(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void RailManager_DrawLines_m1164848291 (RailManager_t2032614299 * __this, Vector3_t3525329789  ___bottomLeft, Vector3_t3525329789  ___topRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
