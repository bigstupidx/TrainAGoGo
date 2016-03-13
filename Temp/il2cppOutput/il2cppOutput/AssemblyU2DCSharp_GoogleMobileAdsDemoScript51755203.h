#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Api.BannerView
struct BannerView_t666364044;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t24671498;
// GoogleMobileAds.Api.RewardBasedVideoAd
struct RewardBasedVideoAd_t329454645;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// GoogleMobileAdsDemoScript
struct  GoogleMobileAdsDemoScript_t51755203  : public MonoBehaviour_t3012272455
{
	// GoogleMobileAds.Api.BannerView GoogleMobileAdsDemoScript::bannerView
	BannerView_t666364044 * ___bannerView_2;
	// GoogleMobileAds.Api.InterstitialAd GoogleMobileAdsDemoScript::interstitial
	InterstitialAd_t24671498 * ___interstitial_3;
	// GoogleMobileAds.Api.RewardBasedVideoAd GoogleMobileAdsDemoScript::rewardBasedVideo
	RewardBasedVideoAd_t329454645 * ___rewardBasedVideo_4;
	// System.Single GoogleMobileAdsDemoScript::deltaTime
	float ___deltaTime_5;
};
struct GoogleMobileAdsDemoScript_t51755203_StaticFields{
	// System.String GoogleMobileAdsDemoScript::outputMessage
	String_t* ___outputMessage_6;
};
