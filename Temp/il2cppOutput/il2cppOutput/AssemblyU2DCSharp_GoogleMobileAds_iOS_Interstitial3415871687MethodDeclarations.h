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

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t3415871687;
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

// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADUInterstitialWillLeaveApplicationCallback__ctor_m3824823292 (GADUInterstitialWillLeaveApplicationCallback_t3415871687 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::Invoke(System.IntPtr)
extern "C"  void GADUInterstitialWillLeaveApplicationCallback_Invoke_m3285247166 (GADUInterstitialWillLeaveApplicationCallback_t3415871687 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialWillLeaveApplicationCallback_t3415871687(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Object_t * GADUInterstitialWillLeaveApplicationCallback_BeginInvoke_m2992881639 (GADUInterstitialWillLeaveApplicationCallback_t3415871687 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADUInterstitialWillLeaveApplicationCallback_EndInvoke_m257621004 (GADUInterstitialWillLeaveApplicationCallback_t3415871687 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
