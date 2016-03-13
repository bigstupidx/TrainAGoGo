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

// DG.Tweening.EaseFunction
struct EaseFunction_t1285385724;
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

// System.Void DG.Tweening.EaseFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void EaseFunction__ctor_m2377075975 (EaseFunction_t1285385724 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.EaseFunction::Invoke(System.Single,System.Single,System.Single,System.Single)
extern "C"  float EaseFunction_Invoke_m3387051341 (EaseFunction_t1285385724 * __this, float ___time, float ___duration, float ___overshootOrAmplitude, float ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_EaseFunction_t1285385724(Il2CppObject* delegate, float ___time, float ___duration, float ___overshootOrAmplitude, float ___period);
// System.IAsyncResult DG.Tweening.EaseFunction::BeginInvoke(System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Object_t * EaseFunction_BeginInvoke_m637014062 (EaseFunction_t1285385724 * __this, float ___time, float ___duration, float ___overshootOrAmplitude, float ___period, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.EaseFunction::EndInvoke(System.IAsyncResult)
extern "C"  float EaseFunction_EndInvoke_m259108835 (EaseFunction_t1285385724 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
