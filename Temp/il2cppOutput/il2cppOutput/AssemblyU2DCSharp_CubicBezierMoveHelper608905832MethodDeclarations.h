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

// CubicBezierMoveHelper
struct CubicBezierMoveHelper_t608905832;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void CubicBezierMoveHelper::.ctor()
extern "C"  void CubicBezierMoveHelper__ctor_m232850435 (CubicBezierMoveHelper_t608905832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CubicBezierMoveHelper::Play(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,System.Single)
extern "C"  void CubicBezierMoveHelper_Play_m3358935489 (CubicBezierMoveHelper_t608905832 * __this, Transform_t284553113 * ___owner, Vector3_t3525329789  ___control1, Vector3_t3525329789  ___control2, Vector3_t3525329789  ___end, bool ___isLocal, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CubicBezierMoveHelper::Update(System.Single)
extern "C"  bool CubicBezierMoveHelper_Update_m3933290293 (CubicBezierMoveHelper_t608905832 * __this, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CubicBezierMoveHelper::GetAngle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float CubicBezierMoveHelper_GetAngle_m4050365754 (CubicBezierMoveHelper_t608905832 * __this, Vector3_t3525329789  ___p1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
