#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Common.IRewardBasedVideoAdClient
struct IRewardBasedVideoAdClient_t1109639706;
// GoogleMobileAds.Api.RewardBasedVideoAd
struct RewardBasedVideoAd_t329454645;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2991605429;

#include "mscorlib_System_Object837106420.h"

// GoogleMobileAds.Api.RewardBasedVideoAd
struct  RewardBasedVideoAd_t329454645  : public Object_t
{
	// GoogleMobileAds.Common.IRewardBasedVideoAdClient GoogleMobileAds.Api.RewardBasedVideoAd::client
	Object_t * ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdLoaded
	EventHandler_1_t1359043831 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdFailedToLoad
	EventHandler_1_t3535390332 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdOpening
	EventHandler_1_t1359043831 * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdStarted
	EventHandler_1_t1359043831 * ___OnAdStarted_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdClosed
	EventHandler_1_t1359043831 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdRewarded
	EventHandler_1_t2991605429 * ___OnAdRewarded_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::OnAdLeavingApplication
	EventHandler_1_t1359043831 * ___OnAdLeavingApplication_8;
};
struct RewardBasedVideoAd_t329454645_StaticFields{
	// GoogleMobileAds.Api.RewardBasedVideoAd GoogleMobileAds.Api.RewardBasedVideoAd::instance
	RewardBasedVideoAd_t329454645 * ___instance_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::<>f__am$cache9
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cache9_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::<>f__am$cacheA
	EventHandler_1_t3535390332 * ___U3CU3Ef__amU24cacheA_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::<>f__am$cacheB
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cacheB_11;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::<>f__am$cacheC
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cacheC_12;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::<>f__am$cacheD
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cacheD_13;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardBasedVideoAd::<>f__am$cacheE
	EventHandler_1_t2991605429 * ___U3CU3Ef__amU24cacheE_14;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardBasedVideoAd::<>f__am$cacheF
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cacheF_15;
};
