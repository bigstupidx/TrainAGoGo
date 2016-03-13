#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
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

// GoogleMobileAds.Api.AdRequest
struct  AdRequest_t3426784583  : public Object_t
{
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::testDevices
	List_1_t1765447871 * ___testDevices_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::keywords
	HashSet_1_t3667177573 * ___keywords_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::birthday
	Nullable_1_t3225071844  ___birthday_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::gender
	Nullable_1_t424912112  ___gender_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::tagForChildDirectedTreatment
	Nullable_1_t3097043249  ___tagForChildDirectedTreatment_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::extras
	Dictionary_2_t2606186806 * ___extras_7;
};
