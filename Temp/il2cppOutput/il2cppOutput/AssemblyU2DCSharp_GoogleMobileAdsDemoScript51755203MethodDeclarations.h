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

// GoogleMobileAdsDemoScript
struct GoogleMobileAdsDemoScript_t51755203;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t516466188;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t2692812689;
// GoogleMobileAds.Api.Reward
struct Reward_t2149027786;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo2692812689.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_Reward2149027786.h"

// System.Void GoogleMobileAdsDemoScript::.ctor()
extern "C"  void GoogleMobileAdsDemoScript__ctor_m2654910472 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::.cctor()
extern "C"  void GoogleMobileAdsDemoScript__cctor_m215749797 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::set_OutputMessage(System.String)
extern "C"  void GoogleMobileAdsDemoScript_set_OutputMessage_m651456851 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GoogleMobileAdsDemoScript::Start()
extern "C"  Object_t * GoogleMobileAdsDemoScript_Start_m3319807312 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::Update()
extern "C"  void GoogleMobileAdsDemoScript_Update_m2424708101 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::RequestBanner()
extern "C"  void GoogleMobileAdsDemoScript_RequestBanner_m579986433 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::RequestInterstitial()
extern "C"  void GoogleMobileAdsDemoScript_RequestInterstitial_m2275630337 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest GoogleMobileAdsDemoScript::createAdRequest()
extern "C"  AdRequest_t3426784583 * GoogleMobileAdsDemoScript_createAdRequest_m2422173962 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::RequestRewardBasedVideo()
extern "C"  void GoogleMobileAdsDemoScript_RequestRewardBasedVideo_m612303404 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::ShowInterstitial()
extern "C"  void GoogleMobileAdsDemoScript_ShowInterstitial_m4248389701 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::ShowRewardBasedVideo()
extern "C"  void GoogleMobileAdsDemoScript_ShowRewardBasedVideo_m3135613808 (GoogleMobileAdsDemoScript_t51755203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleAdLoaded(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleAdLoaded_m1075777190 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleAdFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleAdFailedToLoad_m1635104850 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, AdFailedToLoadEventArgs_t2692812689 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleAdOpened(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleAdOpened_m1295193866 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleAdClosing(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleAdClosing_m91257610 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleAdClosed(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleAdClosed_m4217922573 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleAdLeftApplication(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleAdLeftApplication_m2635630366 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleInterstitialLoaded(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleInterstitialLoaded_m2543047471 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleInterstitialFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleInterstitialFailedToLoad_m3500763369 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, AdFailedToLoadEventArgs_t2692812689 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleInterstitialOpened(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleInterstitialOpened_m2762464147 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleInterstitialClosing(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleInterstitialClosing_m2626963361 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleInterstitialClosed(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleInterstitialClosed_m1390225558 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleInterstitialLeftApplication(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleInterstitialLeftApplication_m1577962677 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleRewardBasedVideoLoaded(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleRewardBasedVideoLoaded_m810905434 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleRewardBasedVideoFailedToLoad(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleRewardBasedVideoFailedToLoad_m3017883166 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, AdFailedToLoadEventArgs_t2692812689 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleRewardBasedVideoOpened(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleRewardBasedVideoOpened_m1030322110 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleRewardBasedVideoStarted(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleRewardBasedVideoStarted_m4209566882 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleRewardBasedVideoClosed(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleRewardBasedVideoClosed_m3953050817 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleRewardBasedVideoRewarded(System.Object,GoogleMobileAds.Api.Reward)
extern "C"  void GoogleMobileAdsDemoScript_HandleRewardBasedVideoRewarded_m545974655 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, Reward_t2149027786 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoScript::HandleRewardBasedVideoLeftApplication(System.Object,System.EventArgs)
extern "C"  void GoogleMobileAdsDemoScript_HandleRewardBasedVideoLeftApplication_m3618746602 (GoogleMobileAdsDemoScript_t51755203 * __this, Object_t * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
