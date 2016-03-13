#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t3715117804;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;

#include "mscorlib_System_Object837106420.h"

// GoogleMobileAds.Api.InterstitialAd
struct  InterstitialAd_t24671498  : public Object_t
{
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	Object_t * ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_t1359043831 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_t3535390332 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_t1359043831 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_t1359043831 * ___OnAdClosed_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLeavingApplication
	EventHandler_1_t1359043831 * ___OnAdLeavingApplication_5;
};
struct InterstitialAd_t24671498_StaticFields{
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache6
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cache6_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache7
	EventHandler_1_t3535390332 * ___U3CU3Ef__amU24cache7_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache8
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cache8_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cache9
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cache9_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::<>f__am$cacheA
	EventHandler_1_t1359043831 * ___U3CU3Ef__amU24cacheA_10;
};
