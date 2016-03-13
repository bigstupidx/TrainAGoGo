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

// DG.Tweening.Core.DOSetter`1<System.Double>
struct DOSetter_1_t265317423;
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

// System.Void DG.Tweening.Core.DOSetter`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C"  void DOSetter_1__ctor_m1097073025_gshared (DOSetter_1_t265317423 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define DOSetter_1__ctor_m1097073025(__this, ___object, ___method, method) ((  void (*) (DOSetter_1_t265317423 *, Object_t *, IntPtr_t, const MethodInfo*))DOSetter_1__ctor_m1097073025_gshared)(__this, ___object, ___method, method)
// System.Void DG.Tweening.Core.DOSetter`1<System.Double>::Invoke(T)
extern "C"  void DOSetter_1_Invoke_m3272252323_gshared (DOSetter_1_t265317423 * __this, double ___pNewValue, const MethodInfo* method);
#define DOSetter_1_Invoke_m3272252323(__this, ___pNewValue, method) ((  void (*) (DOSetter_1_t265317423 *, double, const MethodInfo*))DOSetter_1_Invoke_m3272252323_gshared)(__this, ___pNewValue, method)
// System.IAsyncResult DG.Tweening.Core.DOSetter`1<System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * DOSetter_1_BeginInvoke_m2341169264_gshared (DOSetter_1_t265317423 * __this, double ___pNewValue, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define DOSetter_1_BeginInvoke_m2341169264(__this, ___pNewValue, ___callback, ___object, method) ((  Object_t * (*) (DOSetter_1_t265317423 *, double, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))DOSetter_1_BeginInvoke_m2341169264_gshared)(__this, ___pNewValue, ___callback, ___object, method)
// System.Void DG.Tweening.Core.DOSetter`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C"  void DOSetter_1_EndInvoke_m1160666129_gshared (DOSetter_1_t265317423 * __this, Object_t * ___result, const MethodInfo* method);
#define DOSetter_1_EndInvoke_m1160666129(__this, ___result, method) ((  void (*) (DOSetter_1_t265317423 *, Object_t *, const MethodInfo*))DOSetter_1_EndInvoke_m1160666129_gshared)(__this, ___result, method)
