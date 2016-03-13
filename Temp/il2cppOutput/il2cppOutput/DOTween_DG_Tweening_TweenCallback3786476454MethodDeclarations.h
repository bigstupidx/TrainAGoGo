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

// DG.Tweening.TweenCallback
struct TweenCallback_t3786476454;
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

// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback__ctor_m3440504173 (TweenCallback_t3786476454 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenCallback::Invoke()
extern "C"  void TweenCallback_Invoke_m3522037767 (TweenCallback_t3786476454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TweenCallback_t3786476454(Il2CppObject* delegate);
// System.IAsyncResult DG.Tweening.TweenCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * TweenCallback_BeginInvoke_m50501284 (TweenCallback_t3786476454 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenCallback::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_EndInvoke_m1613176317 (TweenCallback_t3786476454 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
