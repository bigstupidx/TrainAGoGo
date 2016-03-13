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

// UnityEngine.iOS.ADInterstitialAd
struct ADInterstitialAd_t264752324;
// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate
struct InterstitialWasLoadedDelegate_t2963828231;
// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate
struct InterstitialWasViewedDelegate_t402653446;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_iOS_ADInterstitialAd_Inter2963828231.h"
#include "UnityEngine_UnityEngine_iOS_ADInterstitialAd_Inters402653446.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void UnityEngine.iOS.ADInterstitialAd::.ctor()
extern "C"  void ADInterstitialAd__ctor_m1717622970 (ADInterstitialAd_t264752324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::.cctor()
extern "C"  void ADInterstitialAd__cctor_m1224608307 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::add_onInterstitialWasLoaded(UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate)
extern "C"  void ADInterstitialAd_add_onInterstitialWasLoaded_m3348178299 (Object_t * __this /* static, unused */, InterstitialWasLoadedDelegate_t2963828231 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::remove_onInterstitialWasLoaded(UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate)
extern "C"  void ADInterstitialAd_remove_onInterstitialWasLoaded_m2856549904 (Object_t * __this /* static, unused */, InterstitialWasLoadedDelegate_t2963828231 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::add_onInterstitialWasViewed(UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate)
extern "C"  void ADInterstitialAd_add_onInterstitialWasViewed_m2635758683 (Object_t * __this /* static, unused */, InterstitialWasViewedDelegate_t402653446 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::remove_onInterstitialWasViewed(UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate)
extern "C"  void ADInterstitialAd_remove_onInterstitialWasViewed_m2144130288 (Object_t * __this /* static, unused */, InterstitialWasViewedDelegate_t402653446 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.iOS.ADInterstitialAd::Native_CreateInterstitial(System.Boolean)
extern "C"  IntPtr_t ADInterstitialAd_Native_CreateInterstitial_m2491557514 (Object_t * __this /* static, unused */, bool ___autoReload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::Native_ShowInterstitial(System.IntPtr)
extern "C"  void ADInterstitialAd_Native_ShowInterstitial_m3318892299 (Object_t * __this /* static, unused */, IntPtr_t ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::Native_ReloadInterstitial(System.IntPtr)
extern "C"  void ADInterstitialAd_Native_ReloadInterstitial_m826499759 (Object_t * __this /* static, unused */, IntPtr_t ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.iOS.ADInterstitialAd::Native_InterstitialAdLoaded(System.IntPtr)
extern "C"  bool ADInterstitialAd_Native_InterstitialAdLoaded_m1187911302 (Object_t * __this /* static, unused */, IntPtr_t ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::Native_DestroyInterstitial(System.IntPtr)
extern "C"  void ADInterstitialAd_Native_DestroyInterstitial_m1874896972 (Object_t * __this /* static, unused */, IntPtr_t ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::CtorImpl(System.Boolean)
extern "C"  void ADInterstitialAd_CtorImpl_m3027786517 (ADInterstitialAd_t264752324 * __this, bool ___autoReload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::Finalize()
extern "C"  void ADInterstitialAd_Finalize_m3863008616 (ADInterstitialAd_t264752324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::Show()
extern "C"  void ADInterstitialAd_Show_m842065159 (ADInterstitialAd_t264752324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::ReloadAd()
extern "C"  void ADInterstitialAd_ReloadAd_m172988774 (ADInterstitialAd_t264752324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.iOS.ADInterstitialAd::get_loaded()
extern "C"  bool ADInterstitialAd_get_loaded_m4285825118 (ADInterstitialAd_t264752324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::FireInterstitialWasLoaded()
extern "C"  void ADInterstitialAd_FireInterstitialWasLoaded_m1452242756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd::FireInterstitialWasViewed()
extern "C"  void ADInterstitialAd_FireInterstitialWasViewed_m802485635 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
