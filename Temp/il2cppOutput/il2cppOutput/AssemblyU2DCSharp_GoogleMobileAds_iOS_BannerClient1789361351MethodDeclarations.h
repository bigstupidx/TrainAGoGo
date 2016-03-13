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

// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_t1789361351;
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

// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADUAdViewWillPresentScreenCallback__ctor_m3554495184 (GADUAdViewWillPresentScreenCallback_t1789361351 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback::Invoke(System.IntPtr)
extern "C"  void GADUAdViewWillPresentScreenCallback_Invoke_m2594192746 (GADUAdViewWillPresentScreenCallback_t1789361351 * __this, IntPtr_t ___bannerClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUAdViewWillPresentScreenCallback_t1789361351(Il2CppObject* delegate, IntPtr_t ___bannerClient);
// System.IAsyncResult GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Object_t * GADUAdViewWillPresentScreenCallback_BeginInvoke_m2614351883 (GADUAdViewWillPresentScreenCallback_t1789361351 * __this, IntPtr_t ___bannerClient, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADUAdViewWillPresentScreenCallback_EndInvoke_m3517359328 (GADUAdViewWillPresentScreenCallback_t1789361351 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
