#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Nullable_1_gen424912112.h"
#include "mscorlib_System_Nullable_1_gen3097043249.h"

// GoogleMobileAds.Api.AdRequest/Builder
struct  Builder_t1895597947  : public Object_t
{
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::testDevices
	List_1_t1765447871 * ___testDevices_0;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::keywords
	HashSet_1_t3667177573 * ___keywords_1;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::birthday
	Nullable_1_t3225071844  ___birthday_2;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::gender
	Nullable_1_t424912112  ___gender_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::tagForChildDirectedTreatment
	Nullable_1_t3097043249  ___tagForChildDirectedTreatment_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::extras
	Dictionary_2_t2606186806 * ___extras_5;
};
