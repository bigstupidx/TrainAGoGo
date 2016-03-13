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

// GoogleMobileAds.iOS.Externs
struct Externs_t457448815;
// System.String
struct String_t;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_t828479199;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t735575558;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_t1789361351;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_t3216358927;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_t158649667;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t607428195;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t383813571;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t2062640019;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t3415871687;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct GADURewardBasedVideoAdDidReceiveAdCallback_t1577911185;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t349394708;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct GADURewardBasedVideoAdDidOpenCallback_t1667507753;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct GADURewardBasedVideoAdDidStartCallback_t1323634829;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct GADURewardBasedVideoAdDidCloseCallback_t2448438307;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t986391438;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct GADURewardBasedVideoAdWillLeaveApplicationCallback_t1367959541;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient_828479199.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient_735575558.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient1789361351.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient3216358927.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient_158649667.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_InterstitialC607428195.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_InterstitialC619478530.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_InterstitialC383813571.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_Interstitial2062640019.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_Interstitial3415871687.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV1577911185.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedVi349394708.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV1667507753.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV1323634829.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV2448438307.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedVi986391438.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV1367959541.h"

// System.Void GoogleMobileAds.iOS.Externs::.ctor()
extern "C"  void Externs__ctor_m3383499218 (Externs_t457448815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequest()
extern "C"  IntPtr_t Externs_GADUCreateRequest_m3172610253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddTestDevice(System.IntPtr,System.String)
extern "C"  void Externs_GADUAddTestDevice_m3944259554 (Object_t * __this /* static, unused */, IntPtr_t ___request, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddKeyword(System.IntPtr,System.String)
extern "C"  void Externs_GADUAddKeyword_m1466805259 (Object_t * __this /* static, unused */, IntPtr_t ___request, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBirthday(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Externs_GADUSetBirthday_m4032274183 (Object_t * __this /* static, unused */, IntPtr_t ___request, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetGender(System.IntPtr,System.Int32)
extern "C"  void Externs_GADUSetGender_m1709457451 (Object_t * __this /* static, unused */, IntPtr_t ___request, int32_t ___genderCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUTagForChildDirectedTreatment(System.IntPtr,System.Boolean)
extern "C"  void Externs_GADUTagForChildDirectedTreatment_m1408538185 (Object_t * __this /* static, unused */, IntPtr_t ___request, bool ___childDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetExtra(System.IntPtr,System.String,System.String)
extern "C"  void Externs_GADUSetExtra_m972914561 (Object_t * __this /* static, unused */, IntPtr_t ___request, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestAgent(System.IntPtr,System.String)
extern "C"  void Externs_GADUSetRequestAgent_m3592021267 (Object_t * __this /* static, unused */, IntPtr_t ___request, String_t* ___requestAgent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURelease(System.IntPtr)
extern "C"  void Externs_GADURelease_m3782573160 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateBannerView(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Externs_GADUCreateBannerView_m3709576508 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, String_t* ___adUnitId, int32_t ___width, int32_t ___height, int32_t ___positionAtTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateSmartBannerView(System.IntPtr,System.String,System.Int32)
extern "C"  IntPtr_t Externs_GADUCreateSmartBannerView_m2959172191 (Object_t * __this /* static, unused */, IntPtr_t ___bannerClient, String_t* ___adUnitId, int32_t ___positionAtTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBannerCallbacks(System.IntPtr,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetBannerCallbacks_m1396516047 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, GADUAdViewDidReceiveAdCallback_t828479199 * ___adReceivedCallback, GADUAdViewDidFailToReceiveAdWithErrorCallback_t735575558 * ___adFailedCallback, GADUAdViewWillPresentScreenCallback_t1789361351 * ___willPresentCallback, GADUAdViewDidDismissScreenCallback_t3216358927 * ___didDismissCallback, GADUAdViewWillLeaveApplicationCallback_t158649667 * ___willLeaveCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUHideBannerView(System.IntPtr)
extern "C"  void Externs_GADUHideBannerView_m4090640356 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowBannerView(System.IntPtr)
extern "C"  void Externs_GADUShowBannerView_m1630769801 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURemoveBannerView(System.IntPtr)
extern "C"  void Externs_GADURemoveBannerView_m3410424290 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestBannerAd(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADURequestBannerAd_m4237526847 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, IntPtr_t ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateInterstitial(System.IntPtr,System.String)
extern "C"  IntPtr_t Externs_GADUCreateInterstitial_m2723672384 (Object_t * __this /* static, unused */, IntPtr_t ___interstitialClient, String_t* ___adUnitId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetInterstitialCallbacks(System.IntPtr,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetInterstitialCallbacks_m4068511555 (Object_t * __this /* static, unused */, IntPtr_t ___interstitial, GADUInterstitialDidReceiveAdCallback_t607428195 * ___adReceivedCallback, GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * ___adFailedCallback, GADUInterstitialWillPresentScreenCallback_t383813571 * ___willPresentCallback, GADUInterstitialDidDismissScreenCallback_t2062640019 * ___didDismissCallback, GADUInterstitialWillLeaveApplicationCallback_t3415871687 * ___willLeaveCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.Externs::GADUInterstitialReady(System.IntPtr)
extern "C"  bool Externs_GADUInterstitialReady_m232812900 (Object_t * __this /* static, unused */, IntPtr_t ___interstitial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowInterstitial(System.IntPtr)
extern "C"  void Externs_GADUShowInterstitial_m32200750 (Object_t * __this /* static, unused */, IntPtr_t ___interstitial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestInterstitial(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADURequestInterstitial_m1136309026 (Object_t * __this /* static, unused */, IntPtr_t ___interstitial, IntPtr_t ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRewardBasedVideoAd(System.IntPtr)
extern "C"  IntPtr_t Externs_GADUCreateRewardBasedVideoAd_m2063325206 (Object_t * __this /* static, unused */, IntPtr_t ___rewardBasedVideo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.Externs::GADURewardBasedVideoAdReady(System.IntPtr)
extern "C"  bool Externs_GADURewardBasedVideoAdReady_m2978385106 (Object_t * __this /* static, unused */, IntPtr_t ___rewardBasedVideo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowRewardBasedVideoAd(System.IntPtr)
extern "C"  void Externs_GADUShowRewardBasedVideoAd_m892979392 (Object_t * __this /* static, unused */, IntPtr_t ___rewardBasedVideo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestRewardBasedVideoAd(System.IntPtr,System.IntPtr,System.String,System.String)
extern "C"  void Externs_GADURequestRewardBasedVideoAd_m666540332 (Object_t * __this /* static, unused */, IntPtr_t ___bannerView, IntPtr_t ___request, String_t* ___adUnitId, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRewardBasedVideoAdCallbacks(System.IntPtr,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetRewardBasedVideoAdCallbacks_m2963263372 (Object_t * __this /* static, unused */, IntPtr_t ___rewardBasedVideo, GADURewardBasedVideoAdDidReceiveAdCallback_t1577911185 * ___adReceivedCallback, GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t349394708 * ___adFailedCallback, GADURewardBasedVideoAdDidOpenCallback_t1667507753 * ___didOpenCallback, GADURewardBasedVideoAdDidStartCallback_t1323634829 * ___didStartCallback, GADURewardBasedVideoAdDidCloseCallback_t2448438307 * ___didCloseCallback, GADURewardBasedVideoAdDidRewardCallback_t986391438 * ___didRewardcallback, GADURewardBasedVideoAdWillLeaveApplicationCallback_t1367959541 * ___willLeaveCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
