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

// AdsManager
struct AdsManager_t814343421;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;

#include "codegen/il2cpp-codegen.h"

// System.Void AdsManager::.ctor()
extern "C"  void AdsManager__ctor_m3400990782 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AdsManager AdsManager::get_instance()
extern "C"  AdsManager_t814343421 * AdsManager_get_instance_m3963270692 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::Awake()
extern "C"  void AdsManager_Awake_m3638596001 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AdsManager::Start()
extern "C"  Object_t * AdsManager_Start_m1467000310 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::Set()
extern "C"  void AdsManager_Set_m600894462 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::ShowBanner()
extern "C"  void AdsManager_ShowBanner_m1683291087 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::ShowIAdBanner()
extern "C"  void AdsManager_ShowIAdBanner_m3403744727 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::HideBanner()
extern "C"  void AdsManager_HideBanner_m3097487636 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AdsManager::get_sceneBannerId()
extern "C"  String_t* AdsManager_get_sceneBannerId_m2214628579 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::OnBannerClicked()
extern "C"  void AdsManager_OnBannerClicked_m1656181848 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::OnBannerLoaded()
extern "C"  void AdsManager_OnBannerLoaded_m2517089494 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::OnBannerFailedToLoad()
extern "C"  void AdsManager_OnBannerFailedToLoad_m1756884783 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::OnFullscreenLoaded()
extern "C"  void AdsManager_OnFullscreenLoaded_m1569929317 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::OnFullscreenViewed()
extern "C"  void AdsManager_OnFullscreenViewed_m920172196 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::WantToShowAD()
extern "C"  void AdsManager_WantToShowAD_m112007665 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::ShowAdsGameOver()
extern "C"  void AdsManager_ShowAdsGameOver_m1167020757 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::_ShowInterstitial()
extern "C"  void AdsManager__ShowInterstitial_m3610600516 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AdsManager::RewardedVideoIsInitialized()
extern "C"  bool AdsManager_RewardedVideoIsInitialized_m1796106807 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::ShowRewardedVideoGameOver(System.Action`1<System.Boolean>)
extern "C"  void AdsManager_ShowRewardedVideoGameOver_m712743425 (AdsManager_t814343421 * __this, Action_1_t359458046 * ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::ShowAdmobInterstitialGameOver()
extern "C"  void AdsManager_ShowAdmobInterstitialGameOver_m194858542 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::HandleOnInterstitialLoadedGameOver()
extern "C"  void AdsManager_HandleOnInterstitialLoadedGameOver_m1535100900 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::HandleOnInterstitialFailedLoadingGameOver()
extern "C"  void AdsManager_HandleOnInterstitialFailedLoadingGameOver_m2502149486 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::ShowAdmobBackup()
extern "C"  void AdsManager_ShowAdmobBackup_m1662185470 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::HandleOnInterstitialLoadedGameOverBackUp()
extern "C"  void AdsManager_HandleOnInterstitialLoadedGameOverBackUp_m1670559526 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AdsManager::OnDestroy()
extern "C"  void AdsManager_OnDestroy_m712148535 (AdsManager_t814343421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
