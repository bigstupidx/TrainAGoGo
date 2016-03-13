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

// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t1868435431;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void DG.Tweening.TweenCallback`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback_1__ctor_m3659365073_gshared (TweenCallback_1_t1868435431 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define TweenCallback_1__ctor_m3659365073(__this, ___object, ___method, method) ((  void (*) (TweenCallback_1_t1868435431 *, Object_t *, IntPtr_t, const MethodInfo*))TweenCallback_1__ctor_m3659365073_gshared)(__this, ___object, ___method, method)
// System.Void DG.Tweening.TweenCallback`1<System.Int32>::Invoke(T)
extern "C"  void TweenCallback_1_Invoke_m2284046419_gshared (TweenCallback_1_t1868435431 * __this, int32_t ___value, const MethodInfo* method);
#define TweenCallback_1_Invoke_m2284046419(__this, ___value, method) ((  void (*) (TweenCallback_1_t1868435431 *, int32_t, const MethodInfo*))TweenCallback_1_Invoke_m2284046419_gshared)(__this, ___value, method)
// System.IAsyncResult DG.Tweening.TweenCallback`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * TweenCallback_1_BeginInvoke_m1739889576_gshared (TweenCallback_1_t1868435431 * __this, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define TweenCallback_1_BeginInvoke_m1739889576(__this, ___value, ___callback, ___object, method) ((  Object_t * (*) (TweenCallback_1_t1868435431 *, int32_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))TweenCallback_1_BeginInvoke_m1739889576_gshared)(__this, ___value, ___callback, ___object, method)
// System.Void DG.Tweening.TweenCallback`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_1_EndInvoke_m1371077985_gshared (TweenCallback_1_t1868435431 * __this, Object_t * ___result, const MethodInfo* method);
#define TweenCallback_1_EndInvoke_m1371077985(__this, ___result, method) ((  void (*) (TweenCallback_1_t1868435431 *, Object_t *, const MethodInfo*))TweenCallback_1_EndInvoke_m1371077985_gshared)(__this, ___result, method)
