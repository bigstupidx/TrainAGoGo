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

// GoogleMobileAds.iOS.InterstitialClient
struct InterstitialClient_t1431192307;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// System.String
struct String_t;
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
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo2692812689.h"

// System.Void GoogleMobileAds.iOS.InterstitialClient::.ctor()
extern "C"  void InterstitialClient__ctor_m934446666 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdLoaded_m3797134985 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdLoaded_m2655185022 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialClient_add_OnAdFailedToLoad_m3632639687 (InterstitialClient_t1431192307 * __this, EventHandler_1_t3535390332 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialClient_remove_OnAdFailedToLoad_m680019826 (InterstitialClient_t1431192307 * __this, EventHandler_1_t3535390332 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdOpening_m147978600 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdOpening_m3402235411 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdClosing(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdClosing_m3241746091 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdClosing(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdClosing_m2201035606 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdClosed_m1967553794 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdClosed_m825603831 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdLeavingApplication_m2917421810 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdLeavingApplication_m1797997927 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.InterstitialClient::get_InterstitialPtr()
extern "C"  IntPtr_t InterstitialClient_get_InterstitialPtr_m1887945420 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::set_InterstitialPtr(System.IntPtr)
extern "C"  void InterstitialClient_set_InterstitialPtr_m3943331143 (InterstitialClient_t1431192307 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::CreateInterstitialAd(System.String)
extern "C"  void InterstitialClient_CreateInterstitialAd_m1285454237 (InterstitialClient_t1431192307 * __this, String_t* ___adUnitId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void InterstitialClient_LoadAd_m3057531792 (InterstitialClient_t1431192307 * __this, AdRequest_t3426784583 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.InterstitialClient::IsLoaded()
extern "C"  bool InterstitialClient_IsLoaded_m1950577917 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::ShowInterstitial()
extern "C"  void InterstitialClient_ShowInterstitial_m4240792771 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::DestroyInterstitial()
extern "C"  void InterstitialClient_DestroyInterstitial_m1341089262 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::Dispose()
extern "C"  void InterstitialClient_Dispose_m253364231 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::Finalize()
extern "C"  void InterstitialClient_Finalize_m2520088024 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidReceiveAdCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialDidReceiveAdCallback_m3834273282 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void InterstitialClient_InterstitialDidFailToReceiveAdWithErrorCallback_m2030413979 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialWillPresentScreenCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialWillPresentScreenCallback_m2994835518 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidDismissScreenCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialDidDismissScreenCallback_m2147047890 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialWillLeaveApplicationCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialWillLeaveApplicationCallback_m4022035742 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.InterstitialClient GoogleMobileAds.iOS.InterstitialClient::IntPtrToInterstitialClient(System.IntPtr)
extern "C"  InterstitialClient_t1431192307 * InterstitialClient_IntPtrToInterstitialClient_m1567230269 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::SetDefaultInAppPurchaseProcessor(GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor)
extern "C"  void InterstitialClient_SetDefaultInAppPurchaseProcessor_m1578435348 (InterstitialClient_t1431192307 * __this, Object_t * ___processor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::SetCustomInAppPurchaseProcessor(GoogleMobileAds.Api.ICustomInAppPurchaseProcessor)
extern "C"  void InterstitialClient_SetCustomInAppPurchaseProcessor_m3026643104 (InterstitialClient_t1431192307 * __this, Object_t * ___processor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::<OnAdLoaded>m__37(System.Object,System.EventArgs)
extern "C"  void InterstitialClient_U3COnAdLoadedU3Em__37_m4273810104 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::<OnAdFailedToLoad>m__38(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void InterstitialClient_U3COnAdFailedToLoadU3Em__38_m2611402335 (Object_t * __this /* static, unused */, Object_t * p0, AdFailedToLoadEventArgs_t2692812689 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::<OnAdOpening>m__39(System.Object,System.EventArgs)
extern "C"  void InterstitialClient_U3COnAdOpeningU3Em__39_m4222679843 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::<OnAdClosing>m__3A(System.Object,System.EventArgs)
extern "C"  void InterstitialClient_U3COnAdClosingU3Em__3A_m3099358408 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::<OnAdClosed>m__3B(System.Object,System.EventArgs)
extern "C"  void InterstitialClient_U3COnAdClosedU3Em__3B_m2178525930 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::<OnAdLeavingApplication>m__3C(System.Object,System.EventArgs)
extern "C"  void InterstitialClient_U3COnAdLeavingApplicationU3Em__3C_m430654715 (Object_t * __this /* static, unused */, Object_t * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
