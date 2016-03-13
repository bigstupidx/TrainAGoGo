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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Int32 System.GC::get_MaxGeneration()
extern "C"  int32_t GC_get_MaxGeneration_m589573414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::InternalCollect(System.Int32)
extern "C"  void GC_InternalCollect_m3176899477 (Object_t * __this /* static, unused */, int32_t ___generation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::Collect()
extern "C"  void GC_Collect_m1459080321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C"  void GC_SuppressFinalize_m1160635446 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
