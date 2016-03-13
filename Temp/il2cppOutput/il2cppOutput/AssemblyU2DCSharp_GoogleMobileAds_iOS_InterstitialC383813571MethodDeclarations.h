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

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t383813571;
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

// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADUInterstitialWillPresentScreenCallback__ctor_m3239491276 (GADUInterstitialWillPresentScreenCallback_t383813571 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::Invoke(System.IntPtr)
extern "C"  void GADUInterstitialWillPresentScreenCallback_Invoke_m991627246 (GADUInterstitialWillPresentScreenCallback_t383813571 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialWillPresentScreenCallback_t383813571(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Object_t * GADUInterstitialWillPresentScreenCallback_BeginInvoke_m2428220559 (GADUInterstitialWillPresentScreenCallback_t383813571 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADUInterstitialWillPresentScreenCallback_EndInvoke_m59600604 (GADUInterstitialWillPresentScreenCallback_t383813571 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
