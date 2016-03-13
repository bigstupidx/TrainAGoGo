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

// UnityEngine.iOS.ADBannerView
struct ADBannerView_t2458921414;
// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate
struct BannerWasClickedDelegate_t1325188367;
// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t69910023;
// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate
struct BannerFailedToLoadDelegate_t2071786927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_iOS_ADBannerView_Type2622298.h"
#include "UnityEngine_UnityEngine_iOS_ADBannerView_Layout2269112138.h"
#include "UnityEngine_UnityEngine_iOS_ADBannerView_BannerWas1325188367.h"
#include "UnityEngine_UnityEngine_iOS_ADBannerView_BannerWasLo69910023.h"
#include "UnityEngine_UnityEngine_iOS_ADBannerView_BannerFai2071786927.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void UnityEngine.iOS.ADBannerView::.ctor(UnityEngine.iOS.ADBannerView/Type,UnityEngine.iOS.ADBannerView/Layout)
extern "C"  void ADBannerView__ctor_m2990989948 (ADBannerView_t2458921414 * __this, int32_t ___type, int32_t ___layout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::.cctor()
extern "C"  void ADBannerView__cctor_m2737897525 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::add_onBannerWasClicked(UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate)
extern "C"  void ADBannerView_add_onBannerWasClicked_m1893258253 (Object_t * __this /* static, unused */, BannerWasClickedDelegate_t1325188367 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::remove_onBannerWasClicked(UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate)
extern "C"  void ADBannerView_remove_onBannerWasClicked_m1850727974 (Object_t * __this /* static, unused */, BannerWasClickedDelegate_t1325188367 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::add_onBannerWasLoaded(UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate)
extern "C"  void ADBannerView_add_onBannerWasLoaded_m170445239 (Object_t * __this /* static, unused */, BannerWasLoadedDelegate_t69910023 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::remove_onBannerWasLoaded(UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate)
extern "C"  void ADBannerView_remove_onBannerWasLoaded_m568165904 (Object_t * __this /* static, unused */, BannerWasLoadedDelegate_t69910023 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::add_onBannerFailedToLoad(UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate)
extern "C"  void ADBannerView_add_onBannerFailedToLoad_m3303095309 (Object_t * __this /* static, unused */, BannerFailedToLoadDelegate_t2071786927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::remove_onBannerFailedToLoad(UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate)
extern "C"  void ADBannerView_remove_onBannerFailedToLoad_m3173224870 (Object_t * __this /* static, unused */, BannerFailedToLoadDelegate_t2071786927 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.iOS.ADBannerView::Native_CreateBanner(System.Int32,System.Int32)
extern "C"  IntPtr_t ADBannerView_Native_CreateBanner_m1237365429 (Object_t * __this /* static, unused */, int32_t ___type, int32_t ___layout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::Native_ShowBanner(System.IntPtr,System.Boolean)
extern "C"  void ADBannerView_Native_ShowBanner_m3529979344 (Object_t * __this /* static, unused */, IntPtr_t ___view, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::Native_DestroyBanner(System.IntPtr)
extern "C"  void ADBannerView_Native_DestroyBanner_m3588853962 (Object_t * __this /* static, unused */, IntPtr_t ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::Finalize()
extern "C"  void ADBannerView_Finalize_m2140033770 (ADBannerView_t2458921414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::set_visible(System.Boolean)
extern "C"  void ADBannerView_set_visible_m308077186 (ADBannerView_t2458921414 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::FireBannerWasClicked()
extern "C"  void ADBannerView_FireBannerWasClicked_m3637402988 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::FireBannerWasLoaded()
extern "C"  void ADBannerView_FireBannerWasLoaded_m3273736514 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView::FireBannerFailedToLoad()
extern "C"  void ADBannerView_FireBannerFailedToLoad_m1790847436 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
