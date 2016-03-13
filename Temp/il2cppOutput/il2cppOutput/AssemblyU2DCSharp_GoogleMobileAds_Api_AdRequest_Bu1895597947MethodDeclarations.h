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

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t1895597947;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_Gender1833841500.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Nullable_1_gen424912112.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
extern "C"  void Builder__ctor_m792598112 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String)
extern "C"  Builder_t1895597947 * Builder_AddKeyword_m3544305566 (Builder_t1895597947 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddTestDevice(System.String)
extern "C"  Builder_t1895597947 * Builder_AddTestDevice_m2458200659 (Builder_t1895597947 * __this, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
extern "C"  AdRequest_t3426784583 * Builder_Build_m4288075808 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetBirthday(System.DateTime)
extern "C"  Builder_t1895597947 * Builder_SetBirthday_m3092643539 (Builder_t1895597947 * __this, DateTime_t339033936  ___birthday, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetGender(GoogleMobileAds.Api.Gender)
extern "C"  Builder_t1895597947 * Builder_SetGender_m1093731579 (Builder_t1895597947 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::TagForChildDirectedTreatment(System.Boolean)
extern "C"  Builder_t1895597947 * Builder_TagForChildDirectedTreatment_m3750872726 (Builder_t1895597947 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddExtra(System.String,System.String)
extern "C"  Builder_t1895597947 * Builder_AddExtra_m1431806995 (Builder_t1895597947 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_TestDevices()
extern "C"  List_1_t1765447871 * Builder_get_TestDevices_m991594033 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Keywords()
extern "C"  HashSet_1_t3667177573 * Builder_get_Keywords_m4028265944 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::get_Birthday()
extern "C"  Nullable_1_t3225071844  Builder_get_Birthday_m2858263900 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::get_Gender()
extern "C"  Nullable_1_t424912112  Builder_get_Gender_m330265600 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::get_ChildDirectedTreatmentTag()
extern "C"  Nullable_1_t3097043249  Builder_get_ChildDirectedTreatmentTag_m1943724740 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Extras()
extern "C"  Dictionary_2_t2606186806 * Builder_get_Extras_m1155244130 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
