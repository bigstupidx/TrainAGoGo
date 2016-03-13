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

// JavaVM
struct JavaVM_t2211750009;

#include "codegen/il2cpp-codegen.h"

// System.Void JavaVM::.ctor()
extern "C"  void JavaVM__ctor_m2742137846 (JavaVM_t2211750009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JavaVM::DestroyJavaVM()
extern "C"  int32_t JavaVM_DestroyJavaVM_m4006780817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JavaVM::AttachCurrentThread()
extern "C"  int32_t JavaVM_AttachCurrentThread_m3917896892 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JavaVM::DetachCurrentThread()
extern "C"  int32_t JavaVM_DetachCurrentThread_m2094378414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JavaVM::GetEnv(System.Int32)
extern "C"  int32_t JavaVM_GetEnv_m2528047628 (Object_t * __this /* static, unused */, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JavaVM::AttachCurrentThreadAsDaemon()
extern "C"  int32_t JavaVM_AttachCurrentThreadAsDaemon_m2319053234 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
