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

// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t689009830;
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

// System.Void DG.Tweening.Core.DOSetter`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void DOSetter_1__ctor_m1594804074_gshared (DOSetter_1_t689009830 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define DOSetter_1__ctor_m1594804074(__this, ___object, ___method, method) ((  void (*) (DOSetter_1_t689009830 *, Object_t *, IntPtr_t, const MethodInfo*))DOSetter_1__ctor_m1594804074_gshared)(__this, ___object, ___method, method)
// System.Void DG.Tweening.Core.DOSetter`1<System.Single>::Invoke(T)
extern "C"  void DOSetter_1_Invoke_m4192709018_gshared (DOSetter_1_t689009830 * __this, float ___pNewValue, const MethodInfo* method);
#define DOSetter_1_Invoke_m4192709018(__this, ___pNewValue, method) ((  void (*) (DOSetter_1_t689009830 *, float, const MethodInfo*))DOSetter_1_Invoke_m4192709018_gshared)(__this, ___pNewValue, method)
// System.IAsyncResult DG.Tweening.Core.DOSetter`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * DOSetter_1_BeginInvoke_m2988503911_gshared (DOSetter_1_t689009830 * __this, float ___pNewValue, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define DOSetter_1_BeginInvoke_m2988503911(__this, ___pNewValue, ___callback, ___object, method) ((  Object_t * (*) (DOSetter_1_t689009830 *, float, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))DOSetter_1_BeginInvoke_m2988503911_gshared)(__this, ___pNewValue, ___callback, ___object, method)
// System.Void DG.Tweening.Core.DOSetter`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void DOSetter_1_EndInvoke_m2146598522_gshared (DOSetter_1_t689009830 * __this, Object_t * ___result, const MethodInfo* method);
#define DOSetter_1_EndInvoke_m2146598522(__this, ___result, method) ((  void (*) (DOSetter_1_t689009830 *, Object_t *, const MethodInfo*))DOSetter_1_EndInvoke_m2146598522_gshared)(__this, ___result, method)
