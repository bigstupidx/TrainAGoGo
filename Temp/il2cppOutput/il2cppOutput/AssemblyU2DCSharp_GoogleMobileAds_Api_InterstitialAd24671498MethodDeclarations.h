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

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t24671498;
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor
struct IDefaultInAppPurchaseProcessor_t2166849928;
// GoogleMobileAds.Api.ICustomInAppPurchaseProcessor
struct ICustomInAppPurchaseProcessor_t137891690;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t516466188;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t2692812689;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo2692812689.h"

// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
extern "C"  void InterstitialAd__ctor_m1046007939 (InterstitialAd_t24671498 * __this, String_t* ___adUnitId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdLoaded_m4237114142 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdLoaded_m1834063817 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialAd_add_OnAdFailedToLoad_m2620049618 (InterstitialAd_t24671498 * __this, EventHandler_1_t3535390332 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialAd_remove_OnAdFailedToLoad_m2459561351 (InterstitialAd_t24671498 * __this, EventHandler_1_t3535390332 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdOpening_m902430579 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdOpening_m3717281832 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdClosed_m2407532951 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdClosed_m4482626 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdLeavingApplication_m3027150855 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdLeavingApplication_m2265865266 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void InterstitialAd_LoadAd_m1017394021 (InterstitialAd_t24671498 * __this, AdRequest_t3426784583 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
extern "C"  bool InterstitialAd_IsLoaded_m3292594248 (InterstitialAd_t24671498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
extern "C"  void InterstitialAd_Show_m2208969794 (InterstitialAd_t24671498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
extern "C"  void InterstitialAd_Destroy_m3873443959 (InterstitialAd_t24671498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::SetInAppPurchaseProcessor(GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor)
extern "C"  void InterstitialAd_SetInAppPurchaseProcessor_m3823557434 (InterstitialAd_t24671498 * __this, Object_t * ___processor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::SetInAppPurchaseProcessor(GoogleMobileAds.Api.ICustomInAppPurchaseProcessor)
extern "C"  void InterstitialAd_SetInAppPurchaseProcessor_m288847068 (InterstitialAd_t24671498 * __this, Object_t * ___processor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdLoaded>m__13(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdLoadedU3Em__13_m2186187467 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdFailedToLoad>m__14(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void InterstitialAd_U3COnAdFailedToLoadU3Em__14_m3531908652 (Object_t * __this /* static, unused */, Object_t * p0, AdFailedToLoadEventArgs_t2692812689 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdOpening>m__15(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdOpeningU3Em__15_m987671852 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdClosed>m__16(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdClosedU3Em__16_m380449525 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdLeavingApplication>m__17(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdLeavingApplicationU3Em__17_m925889926 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__18(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__18_m1829332024 (InterstitialAd_t24671498 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__19(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__19_m4224510616 (InterstitialAd_t24671498 * __this, Object_t * ___sender, AdFailedToLoadEventArgs_t2692812689 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1A(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__1A_m3651076161 (InterstitialAd_t24671498 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1B(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__1B_m1467399234 (InterstitialAd_t24671498 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1C(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__1C_m3578689603 (InterstitialAd_t24671498 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
