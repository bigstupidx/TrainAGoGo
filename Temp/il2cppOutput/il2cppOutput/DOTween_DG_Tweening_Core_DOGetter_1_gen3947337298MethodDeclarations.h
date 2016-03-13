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

// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_t3947337298;
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

// System.Void DG.Tweening.Core.DOGetter`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void DOGetter_1__ctor_m2525572702_gshared (DOGetter_1_t3947337298 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define DOGetter_1__ctor_m2525572702(__this, ___object, ___method, method) ((  void (*) (DOGetter_1_t3947337298 *, Object_t *, IntPtr_t, const MethodInfo*))DOGetter_1__ctor_m2525572702_gshared)(__this, ___object, ___method, method)
// T DG.Tweening.Core.DOGetter`1<System.Single>::Invoke()
extern "C"  float DOGetter_1_Invoke_m1136684983_gshared (DOGetter_1_t3947337298 * __this, const MethodInfo* method);
#define DOGetter_1_Invoke_m1136684983(__this, method) ((  float (*) (DOGetter_1_t3947337298 *, const MethodInfo*))DOGetter_1_Invoke_m1136684983_gshared)(__this, method)
// System.IAsyncResult DG.Tweening.Core.DOGetter`1<System.Single>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * DOGetter_1_BeginInvoke_m4291962059_gshared (DOGetter_1_t3947337298 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define DOGetter_1_BeginInvoke_m4291962059(__this, ___callback, ___object, method) ((  Object_t * (*) (DOGetter_1_t3947337298 *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))DOGetter_1_BeginInvoke_m4291962059_gshared)(__this, ___callback, ___object, method)
// T DG.Tweening.Core.DOGetter`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float DOGetter_1_EndInvoke_m3208356269_gshared (DOGetter_1_t3947337298 * __this, Object_t * ___result, const MethodInfo* method);
#define DOGetter_1_EndInvoke_m3208356269(__this, ___result, method) ((  float (*) (DOGetter_1_t3947337298 *, Object_t *, const MethodInfo*))DOGetter_1_EndInvoke_m3208356269_gshared)(__this, ___result, method)
