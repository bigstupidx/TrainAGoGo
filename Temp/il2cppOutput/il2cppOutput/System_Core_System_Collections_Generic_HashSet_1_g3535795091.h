#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t808175634;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "mscorlib_System_Object837106420.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t3535795091  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t1809983122* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t808175634* ___links_1;
	// T[] System.Collections.Generic.HashSet`1::slots
	ObjectU5BU5D_t11523773* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t2995724695 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_9;
};
