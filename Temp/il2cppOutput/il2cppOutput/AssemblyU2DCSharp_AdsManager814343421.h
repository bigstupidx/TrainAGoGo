#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AdsManager
struct AdsManager_t814343421;
// UnityEngine.iOS.ADBannerView
struct ADBannerView_t2458921414;
// UnityEngine.iOS.ADInterstitialAd
struct ADInterstitialAd_t264752324;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// AdsManager
struct  AdsManager_t814343421  : public MonoBehaviour_t3012272455
{
	// System.Boolean AdsManager::rewardedVideoAlwaysReadyInSimulator
	bool ___rewardedVideoAlwaysReadyInSimulator_3;
	// System.Boolean AdsManager::rewardedVideoAlwaysSuccessInSimulator
	bool ___rewardedVideoAlwaysSuccessInSimulator_4;
	// System.Boolean AdsManager::basedTimeInterstitialAtGameOver
	bool ___basedTimeInterstitialAtGameOver_5;
	// System.Int32 AdsManager::numberOfPlayToShowInterstitial
	int32_t ___numberOfPlayToShowInterstitial_6;
	// System.Single AdsManager::numberOfMinutesToShowAnInterstitialAtGameOver
	float ___numberOfMinutesToShowAnInterstitialAtGameOver_7;
	// System.Single AdsManager::realTimeSinceStartup
	float ___realTimeSinceStartup_8;
	// System.Boolean AdsManager::ShowIntertitialAtStart
	bool ___ShowIntertitialAtStart_9;
	// System.Boolean AdsManager::NO_ADS
	bool ___NO_ADS_10;
	// UnityEngine.iOS.ADBannerView AdsManager::banner
	ADBannerView_t2458921414 * ___banner_11;
	// UnityEngine.iOS.ADInterstitialAd AdsManager::fullscreenAd
	ADInterstitialAd_t264752324 * ___fullscreenAd_12;
};
struct AdsManager_t814343421_StaticFields{
	// AdsManager AdsManager::_instance
	AdsManager_t814343421 * ____instance_2;
};
