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

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t2062640019;
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

// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADUInterstitialDidDismissScreenCallback__ctor_m3189502920 (GADUInterstitialDidDismissScreenCallback_t2062640019 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::Invoke(System.IntPtr)
extern "C"  void GADUInterstitialDidDismissScreenCallback_Invoke_m1474978162 (GADUInterstitialDidDismissScreenCallback_t2062640019 * __this, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialDidDismissScreenCallback_t2062640019(Il2CppObject* delegate, IntPtr_t ___interstitialClient);
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Object_t * GADUInterstitialDidDismissScreenCallback_BeginInvoke_m519527067 (GADUInterstitialDidDismissScreenCallback_t2062640019 * __this, IntPtr_t ___interstitialClient, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADUInterstitialDidDismissScreenCallback_EndInvoke_m1573947864 (GADUInterstitialDidDismissScreenCallback_t2062640019 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
