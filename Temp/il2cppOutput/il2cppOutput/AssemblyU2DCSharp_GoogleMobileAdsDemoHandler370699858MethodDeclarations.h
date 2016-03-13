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

// GoogleMobileAdsDemoHandler
struct GoogleMobileAdsDemoHandler_t370699858;
// GoogleMobileAds.Api.IInAppPurchaseResult
struct IInAppPurchaseResult_t2985323468;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void GoogleMobileAdsDemoHandler::.ctor()
extern "C"  void GoogleMobileAdsDemoHandler__ctor_m4204918409 (GoogleMobileAdsDemoHandler_t370699858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAdsDemoHandler::ProcessCompletedInAppPurchase(GoogleMobileAds.Api.IInAppPurchaseResult)
extern "C"  void GoogleMobileAdsDemoHandler_ProcessCompletedInAppPurchase_m746076810 (GoogleMobileAdsDemoHandler_t370699858 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAdsDemoHandler::IsValidPurchase(System.String)
extern "C"  bool GoogleMobileAdsDemoHandler_IsValidPurchase_m765975420 (GoogleMobileAdsDemoHandler_t370699858 * __this, String_t* ___sku, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAdsDemoHandler::get_AndroidPublicKey()
extern "C"  String_t* GoogleMobileAdsDemoHandler_get_AndroidPublicKey_m3139232846 (GoogleMobileAdsDemoHandler_t370699858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
