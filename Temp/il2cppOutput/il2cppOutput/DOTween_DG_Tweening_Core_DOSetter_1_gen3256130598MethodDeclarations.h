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

// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3256130598;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void DOSetter_1__ctor_m2300582488_gshared (DOSetter_1_t3256130598 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define DOSetter_1__ctor_m2300582488(__this, ___object, ___method, method) ((  void (*) (DOSetter_1_t3256130598 *, Object_t *, IntPtr_t, const MethodInfo*))DOSetter_1__ctor_m2300582488_gshared)(__this, ___object, ___method, method)
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::Invoke(T)
extern "C"  void DOSetter_1_Invoke_m1917294316_gshared (DOSetter_1_t3256130598 * __this, Vector3_t3525329789  ___pNewValue, const MethodInfo* method);
#define DOSetter_1_Invoke_m1917294316(__this, ___pNewValue, method) ((  void (*) (DOSetter_1_t3256130598 *, Vector3_t3525329789 , const MethodInfo*))DOSetter_1_Invoke_m1917294316_gshared)(__this, ___pNewValue, method)
// System.IAsyncResult DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * DOSetter_1_BeginInvoke_m3025336761_gshared (DOSetter_1_t3256130598 * __this, Vector3_t3525329789  ___pNewValue, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define DOSetter_1_BeginInvoke_m3025336761(__this, ___pNewValue, ___callback, ___object, method) ((  Object_t * (*) (DOSetter_1_t3256130598 *, Vector3_t3525329789 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))DOSetter_1_BeginInvoke_m3025336761_gshared)(__this, ___pNewValue, ___callback, ___object, method)
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  void DOSetter_1_EndInvoke_m764311656_gshared (DOSetter_1_t3256130598 * __this, Object_t * ___result, const MethodInfo* method);
#define DOSetter_1_EndInvoke_m764311656(__this, ___result, method) ((  void (*) (DOSetter_1_t3256130598 *, Object_t *, const MethodInfo*))DOSetter_1_EndInvoke_m764311656_gshared)(__this, ___result, method)
