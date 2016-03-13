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
// DG.Tweening.Tween
struct Tween_t1103364673;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "mscorlib_System_String968488902.h"
#include "DOTween_DG_Tweening_LogBehaviour3180954095.h"

// System.Void DG.Tweening.Core.Debugger::Log(System.Object)
extern "C"  void Debugger_Log_m2354352989 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogWarning(System.Object)
extern "C"  void Debugger_LogWarning_m2505295565 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogError(System.Object)
extern "C"  void Debugger_LogError_m1865249889 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogReport(System.Object)
extern "C"  void Debugger_LogReport_m3642095625 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogInvalidTween(DG.Tweening.Tween)
extern "C"  void Debugger_LogInvalidTween_m3266936808 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogRemoveActiveTweenError(System.String)
extern "C"  void Debugger_LogRemoveActiveTweenError_m3316972452 (Object_t * __this /* static, unused */, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::SetLogPriority(DG.Tweening.LogBehaviour)
extern "C"  void Debugger_SetLogPriority_m2680656432 (Object_t * __this /* static, unused */, int32_t ___logBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
