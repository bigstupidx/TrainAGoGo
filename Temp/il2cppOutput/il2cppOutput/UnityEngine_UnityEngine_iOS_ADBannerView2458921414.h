#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate
struct BannerWasClickedDelegate_t1325188367;
// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t69910023;
// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate
struct BannerFailedToLoadDelegate_t2071786927;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_iOS_ADBannerView_Layout2269112138.h"
#include "mscorlib_System_IntPtr676692020.h"

// UnityEngine.iOS.ADBannerView
struct  ADBannerView_t2458921414  : public Object_t
{
	// UnityEngine.iOS.ADBannerView/Layout UnityEngine.iOS.ADBannerView::_layout
	int32_t ____layout_0;
	// System.IntPtr UnityEngine.iOS.ADBannerView::_bannerView
	IntPtr_t ____bannerView_1;
};
struct ADBannerView_t2458921414_StaticFields{
	// System.Boolean UnityEngine.iOS.ADBannerView::_AlwaysFalseDummy
	bool ____AlwaysFalseDummy_2;
	// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate UnityEngine.iOS.ADBannerView::onBannerWasClicked
	BannerWasClickedDelegate_t1325188367 * ___onBannerWasClicked_3;
	// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate UnityEngine.iOS.ADBannerView::onBannerWasLoaded
	BannerWasLoadedDelegate_t69910023 * ___onBannerWasLoaded_4;
	// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate UnityEngine.iOS.ADBannerView::onBannerFailedToLoad
	BannerFailedToLoadDelegate_t2071786927 * ___onBannerFailedToLoad_5;
};
