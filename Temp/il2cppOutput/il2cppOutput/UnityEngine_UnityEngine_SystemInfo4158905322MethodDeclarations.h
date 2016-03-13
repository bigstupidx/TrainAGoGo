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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat3253344041.h"

// System.String UnityEngine.SystemInfo::get_operatingSystem()
extern "C"  String_t* SystemInfo_get_operatingSystem_m2538828082 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
extern "C"  bool SystemInfo_get_supportsRenderTextures_m3098351893 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern "C"  bool SystemInfo_SupportsRenderTextureFormat_m1773213581 (Object_t * __this /* static, unused */, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
