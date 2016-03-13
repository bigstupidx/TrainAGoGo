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

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADUInterstitialDidFailToReceiveAdWithErrorCallback__ctor_m2338407691 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C"  void GADUInterstitialDidFailToReceiveAdWithErrorCallback_Invoke_m1228927307 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * __this, IntPtr_t ___interstitialClient, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530(Il2CppObject* delegate, IntPtr_t ___interstitialClient, String_t* ___error);
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C"  Object_t * GADUInterstitialDidFailToReceiveAdWithErrorCallback_BeginInvoke_m1363506612 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * __this, IntPtr_t ___interstitialClient, String_t* ___error, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADUInterstitialDidFailToReceiveAdWithErrorCallback_EndInvoke_m3785290907 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
