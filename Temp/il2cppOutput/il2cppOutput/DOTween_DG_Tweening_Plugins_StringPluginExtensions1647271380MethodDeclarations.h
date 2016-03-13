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

// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void DG.Tweening.Plugins.StringPluginExtensions::.cctor()
extern "C"  void StringPluginExtensions__cctor_m1691035250 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPluginExtensions::ScrambleChars(System.Char[])
extern "C"  void StringPluginExtensions_ScrambleChars_m568527506 (Object_t * __this /* static, unused */, CharU5BU5D_t3416858730* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder DG.Tweening.Plugins.StringPluginExtensions::AppendScrambledChars(System.Text.StringBuilder,System.Int32,System.Char[])
extern "C"  StringBuilder_t3822575854 * StringPluginExtensions_AppendScrambledChars_m1309253398 (Object_t * __this /* static, unused */, StringBuilder_t3822575854 * ___buffer, int32_t ___length, CharU5BU5D_t3416858730* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
