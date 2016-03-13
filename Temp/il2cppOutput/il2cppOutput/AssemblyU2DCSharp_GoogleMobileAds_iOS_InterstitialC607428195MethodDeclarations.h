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

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t607428195;
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

// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADUInterstitialDidReceiveAdCallback__ctor_m2569171352 (GADUInterstitialDidReceiveAdCallback_t607428195 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::Invoke(System.IntPtr)
extern "C"  void GADUInterstitialDidReceiveAdCallback_Invoke_m3709579682 (GADUInterstitialDidReceiveAdCallback_t607428195 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialDidReceiveAdCallback_t607428195(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Object_t * GADUInterstitialDidReceiveAdCallback_BeginInvoke_m3991510219 (GADUInterstitialDidReceiveAdCallback_t607428195 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADUInterstitialDidReceiveAdCallback_EndInvoke_m3772673960 (GADUInterstitialDidReceiveAdCallback_t607428195 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
