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

// JNI
struct JNI_t73605;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"

// System.Void JNI::.ctor()
extern "C"  void JNI__ctor_m584855122 (JNI_t73605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetVersion()
extern "C"  int32_t JNI_GetVersion_m850524382 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::FindClass(System.String)
extern "C"  IntPtr_t JNI_FindClass_m3899080606 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::FromReflectedMethod(System.IntPtr)
extern "C"  int32_t JNI_FromReflectedMethod_m4151056123 (Object_t * __this /* static, unused */, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::FromReflectedField(System.IntPtr)
extern "C"  int32_t JNI_FromReflectedField_m6156944 (Object_t * __this /* static, unused */, IntPtr_t ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::ToReflectedMethod(System.IntPtr,System.Int32,System.Int32)
extern "C"  IntPtr_t JNI_ToReflectedMethod_m4064385229 (Object_t * __this /* static, unused */, IntPtr_t ___cls, int32_t ___methodID, int32_t ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::GetSuperclass(System.IntPtr)
extern "C"  IntPtr_t JNI_GetSuperclass_m3333833948 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::IsAssignableFrom(System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_IsAssignableFrom_m3151410217 (Object_t * __this /* static, unused */, IntPtr_t ___clazz1, IntPtr_t ___clazz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::ToReflectedField(System.IntPtr,System.Int32,System.Int32)
extern "C"  IntPtr_t JNI_ToReflectedField_m550839678 (Object_t * __this /* static, unused */, IntPtr_t ___cls, int32_t ___fieldID, int32_t ___isStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::Throw(System.IntPtr)
extern "C"  int32_t JNI_Throw_m2578663944 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::ThrowNew(System.IntPtr,System.String)
extern "C"  int32_t JNI_ThrowNew_m3751261690 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::ExceptionOccurred()
extern "C"  IntPtr_t JNI_ExceptionOccurred_m4247117817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::ExceptionDescribe()
extern "C"  void JNI_ExceptionDescribe_m2930338474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::ExceptionClear()
extern "C"  void JNI_ExceptionClear_m3528801072 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::FatalError(System.String)
extern "C"  void JNI_FatalError_m3444281452 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::PushLocalFrame(System.Int32)
extern "C"  int32_t JNI_PushLocalFrame_m4057240841 (Object_t * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::PopLocalFrame(System.IntPtr)
extern "C"  IntPtr_t JNI_PopLocalFrame_m519808444 (Object_t * __this /* static, unused */, IntPtr_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewGlobalRef(System.IntPtr)
extern "C"  IntPtr_t JNI_NewGlobalRef_m2893712423 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::DeleteGlobalRef(System.IntPtr)
extern "C"  void JNI_DeleteGlobalRef_m2793648767 (Object_t * __this /* static, unused */, IntPtr_t ___globalRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::DeleteLocalRef(System.IntPtr)
extern "C"  void JNI_DeleteLocalRef_m629346767 (Object_t * __this /* static, unused */, IntPtr_t ___localRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::IsSameObject(System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_IsSameObject_m2943138231 (Object_t * __this /* static, unused */, IntPtr_t ___ref1, IntPtr_t ___ref2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewLocalRef(System.IntPtr)
extern "C"  IntPtr_t JNI_NewLocalRef_m771121959 (Object_t * __this /* static, unused */, IntPtr_t ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::EnsureLocalCapacity(System.Int32)
extern "C"  int32_t JNI_EnsureLocalCapacity_m246705502 (Object_t * __this /* static, unused */, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::AllocObject(System.IntPtr)
extern "C"  IntPtr_t JNI_AllocObject_m1367697851 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewObject(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_NewObject_m383700903 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewObject(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  IntPtr_t JNI_NewObject_m3099167989 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewObject(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_NewObject_m1935665603 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewObject(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_NewObject_m3158623761 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewObject(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_NewObject_m2522022367 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::GetObjectClass(System.IntPtr)
extern "C"  IntPtr_t JNI_GetObjectClass_m678751924 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::IsInstanceOf(System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_IsInstanceOf_m141281552 (Object_t * __this /* static, unused */, IntPtr_t ___obj, IntPtr_t ___clazz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetMethodID(System.IntPtr,System.String,System.String)
extern "C"  int32_t JNI_GetMethodID_m1955256692 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallVoidMethod(System.IntPtr,System.Int32)
extern "C"  void JNI_CallVoidMethod_m1297733640 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallVoidMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void JNI_CallVoidMethod_m1667880854 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallVoidMethod_m2579793572 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallVoidMethod_m2453718322 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallVoidMethod_m4247614272 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallObjectMethod(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_CallObjectMethod_m1110875998 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallObjectMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  IntPtr_t JNI_CallObjectMethod_m1720979564 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallObjectMethod_m3893858554 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallObjectMethod_m2502951176 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallObjectMethod_m1623474326 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallBooleanMethod(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_CallBooleanMethod_m130566484 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallBooleanMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t JNI_CallBooleanMethod_m3428979682 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallBooleanMethod_m180833776 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallBooleanMethod_m1417598846 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallBooleanMethod_m361205900 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallByteMethod(System.IntPtr,System.Int32)
extern "C"  uint8_t JNI_CallByteMethod_m1297801712 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallByteMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  uint8_t JNI_CallByteMethod_m4081019774 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallByteMethod_m3182765196 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallByteMethod_m288550170 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallByteMethod_m1218946344 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallCharMethod(System.IntPtr,System.Int32)
extern "C"  uint16_t JNI_CallCharMethod_m3034193676 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallCharMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  uint16_t JNI_CallCharMethod_m3973023642 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallCharMethod_m2397298600 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallCharMethod_m1417545526 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallCharMethod_m2306661956 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallShortMethod(System.IntPtr,System.Int32)
extern "C"  int16_t JNI_CallShortMethod_m2099263330 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallShortMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int16_t JNI_CallShortMethod_m2218873200 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallShortMethod_m812432126 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallShortMethod_m2342605836 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallShortMethod_m1213594778 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallIntMethod(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_CallIntMethod_m762466011 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallIntMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t JNI_CallIntMethod_m1817469225 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallIntMethod_m3322499831 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallIntMethod_m4065592389 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallIntMethod_m3933164819 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallLongMethod(System.IntPtr,System.Int32)
extern "C"  int64_t JNI_CallLongMethod_m82532505 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallLongMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int64_t JNI_CallLongMethod_m2745337447 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallLongMethod_m2522248117 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallLongMethod_m3590455427 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallLongMethod_m454560977 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallFloatMethod(System.IntPtr,System.Int32)
extern "C"  float JNI_CallFloatMethod_m2271840286 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallFloatMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  float JNI_CallFloatMethod_m3911231788 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallFloatMethod_m2974407098 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallFloatMethod_m2035546568 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallFloatMethod_m3206932822 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallDoubleMethod(System.IntPtr,System.Int32)
extern "C"  double JNI_CallDoubleMethod_m180366914 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallDoubleMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  double JNI_CallDoubleMethod_m3350708304 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallDoubleMethod_m352821726 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallDoubleMethod_m472822508 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallDoubleMethod_m2401489786 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallNonvirtualVoidMethod(System.IntPtr,System.Int32)
extern "C"  void JNI_CallNonvirtualVoidMethod_m3559051910 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallNonvirtualVoidMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void JNI_CallNonvirtualVoidMethod_m3958611348 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallNonvirtualVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallNonvirtualVoidMethod_m4278515746 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallNonvirtualVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallNonvirtualVoidMethod_m3680879152 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallNonvirtualVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallNonvirtualVoidMethod_m2610748350 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallNonvirtualObjectMethod(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_CallNonvirtualObjectMethod_m2201548956 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallNonvirtualObjectMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  IntPtr_t JNI_CallNonvirtualObjectMethod_m3341444394 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallNonvirtualObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallNonvirtualObjectMethod_m971227448 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallNonvirtualObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallNonvirtualObjectMethod_m3104566470 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallNonvirtualObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallNonvirtualObjectMethod_m1153550292 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualBooleanMethod(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_CallNonvirtualBooleanMethod_m1265351318 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualBooleanMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t JNI_CallNonvirtualBooleanMethod_m2067605924 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallNonvirtualBooleanMethod_m912271410 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallNonvirtualBooleanMethod_m1495504448 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallNonvirtualBooleanMethod_m474895310 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallNonvirtualByteMethod(System.IntPtr,System.Int32)
extern "C"  uint8_t JNI_CallNonvirtualByteMethod_m1784945518 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallNonvirtualByteMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  uint8_t JNI_CallNonvirtualByteMethod_m556740732 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallNonvirtualByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallNonvirtualByteMethod_m2188465418 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallNonvirtualByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallNonvirtualByteMethod_m987326744 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallNonvirtualByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallNonvirtualByteMethod_m730746022 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallNonvirtualCharMethod(System.IntPtr,System.Int32)
extern "C"  uint16_t JNI_CallNonvirtualCharMethod_m2940489482 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallNonvirtualCharMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  uint16_t JNI_CallNonvirtualCharMethod_m3589202712 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallNonvirtualCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallNonvirtualCharMethod_m3464906406 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallNonvirtualCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallNonvirtualCharMethod_m615078324 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallNonvirtualCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallNonvirtualCharMethod_m3027172418 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallNonvirtualShortMethod(System.IntPtr,System.Int32)
extern "C"  int16_t JNI_CallNonvirtualShortMethod_m2510725284 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallNonvirtualShortMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int16_t JNI_CallNonvirtualShortMethod_m1668112178 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallNonvirtualShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallNonvirtualShortMethod_m1329892672 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallNonvirtualShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallNonvirtualShortMethod_m2381515470 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallNonvirtualShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallNonvirtualShortMethod_m2125969372 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualIntMethod(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_CallNonvirtualIntMethod_m3648303389 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualIntMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t JNI_CallNonvirtualIntMethod_m370452459 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallNonvirtualIntMethod_m1998429753 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallNonvirtualIntMethod_m2736419847 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallNonvirtualIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallNonvirtualIntMethod_m68028757 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallNonvirtualLongMethod(System.IntPtr,System.Int32)
extern "C"  int64_t JNI_CallNonvirtualLongMethod_m949752791 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallNonvirtualLongMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int64_t JNI_CallNonvirtualLongMethod_m2903751973 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallNonvirtualLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallNonvirtualLongMethod_m3209299443 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallNonvirtualLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallNonvirtualLongMethod_m3211906625 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallNonvirtualLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallNonvirtualLongMethod_m3140875791 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallNonvirtualFloatMethod(System.IntPtr,System.Int32)
extern "C"  float JNI_CallNonvirtualFloatMethod_m3830255200 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallNonvirtualFloatMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  float JNI_CallNonvirtualFloatMethod_m2163413998 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallNonvirtualFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallNonvirtualFloatMethod_m601966844 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallNonvirtualFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallNonvirtualFloatMethod_m1699646858 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallNonvirtualFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallNonvirtualFloatMethod_m1139392920 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallNonvirtualDoubleMethod(System.IntPtr,System.Int32)
extern "C"  double JNI_CallNonvirtualDoubleMethod_m3161762048 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallNonvirtualDoubleMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  double JNI_CallNonvirtualDoubleMethod_m2951190158 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallNonvirtualDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallNonvirtualDoubleMethod_m2901193628 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallNonvirtualDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallNonvirtualDoubleMethod_m3258638378 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallNonvirtualDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallNonvirtualDoubleMethod_m83950648 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetFieldID(System.IntPtr,System.String,System.String)
extern "C"  int32_t JNI_GetFieldID_m1004618705 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::GetObjectField(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_GetObjectField_m3905237797 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetBooleanField(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_GetBooleanField_m1954637777 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::GetByteField(System.IntPtr,System.Int32)
extern "C"  uint8_t JNI_GetByteField_m403569349 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::GetCharField(System.IntPtr,System.Int32)
extern "C"  uint16_t JNI_GetCharField_m2461672453 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::GetShortField(System.IntPtr,System.Int32)
extern "C"  int16_t JNI_GetShortField_m1799149623 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetIntField(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_GetIntField_m3635639914 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::GetLongField(System.IntPtr,System.Int32)
extern "C"  int64_t JNI_GetLongField_m1606257478 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::GetFloatField(System.IntPtr,System.Int32)
extern "C"  float JNI_GetFloatField_m3934824499 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::GetDoubleField(System.IntPtr,System.Int32)
extern "C"  double JNI_GetDoubleField_m741284901 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetObjectField(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void JNI_SetObjectField_m2128549564 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetBooleanField(System.IntPtr,System.Int32,System.Int32)
extern "C"  void JNI_SetBooleanField_m1400831312 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetByteField(System.IntPtr,System.Int32,System.Byte)
extern "C"  void JNI_SetByteField_m1975326826 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetCharField(System.IntPtr,System.Int32,System.Char)
extern "C"  void JNI_SetCharField_m1373201486 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetShortField(System.IntPtr,System.Int32,System.Int16)
extern "C"  void JNI_SetShortField_m2264750942 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetIntField(System.IntPtr,System.Int32,System.Int32)
extern "C"  void JNI_SetIntField_m1942361175 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetLongField(System.IntPtr,System.Int32,System.Int64)
extern "C"  void JNI_SetLongField_m1387342375 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetFloatField(System.IntPtr,System.Int32,System.Single)
extern "C"  void JNI_SetFloatField_m586308888 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetDoubleField(System.IntPtr,System.Int32,System.Double)
extern "C"  void JNI_SetDoubleField_m1704552152 (Object_t * __this /* static, unused */, IntPtr_t ___obj, int32_t ___fieldID, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C"  int32_t JNI_GetStaticMethodID_m3005743206 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallStaticVoidMethod(System.IntPtr,System.Int32)
extern "C"  void JNI_CallStaticVoidMethod_m170815702 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallStaticVoidMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void JNI_CallStaticVoidMethod_m3001282532 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallStaticVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallStaticVoidMethod_m1049558642 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallStaticVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallStaticVoidMethod_m1518238848 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::CallStaticVoidMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void JNI_CallStaticVoidMethod_m1350126094 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallStaticObjectMethod(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_CallStaticObjectMethod_m4268765292 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallStaticObjectMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  IntPtr_t JNI_CallStaticObjectMethod_m4231770362 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallStaticObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallStaticObjectMethod_m127672584 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallStaticObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallStaticObjectMethod_m2474139798 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::CallStaticObjectMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_CallStaticObjectMethod_m86986660 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticBooleanMethod(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_CallStaticBooleanMethod_m1197385030 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticBooleanMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t JNI_CallStaticBooleanMethod_m4255621204 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallStaticBooleanMethod_m555559650 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallStaticBooleanMethod_m2999854320 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticBooleanMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallStaticBooleanMethod_m3225513598 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallStaticByteMethod(System.IntPtr,System.Int32)
extern "C"  uint8_t JNI_CallStaticByteMethod_m1170543550 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallStaticByteMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  uint8_t JNI_CallStaticByteMethod_m940530892 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallStaticByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallStaticByteMethod_m3693458778 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallStaticByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallStaticByteMethod_m3858169192 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::CallStaticByteMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint8_t JNI_CallStaticByteMethod_m2380928246 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallStaticCharMethod(System.IntPtr,System.Int32)
extern "C"  uint16_t JNI_CallStaticCharMethod_m26992218 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallStaticCharMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  uint16_t JNI_CallStaticCharMethod_m1760650856 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallStaticCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallStaticCharMethod_m1375256054 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallStaticCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallStaticCharMethod_m3415262468 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::CallStaticCharMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  uint16_t JNI_CallStaticCharMethod_m2232441746 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallStaticShortMethod(System.IntPtr,System.Int32)
extern "C"  int16_t JNI_CallStaticShortMethod_m1950467156 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallStaticShortMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int16_t JNI_CallStaticShortMethod_m3710406370 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallStaticShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallStaticShortMethod_m3666495728 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallStaticShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallStaticShortMethod_m2314113662 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::CallStaticShortMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int16_t JNI_CallStaticShortMethod_m3813936012 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticIntMethod(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_CallStaticIntMethod_m1332245453 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticIntMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t JNI_CallStaticIntMethod_m3022386843 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallStaticIntMethod_m1151826153 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallStaticIntMethod_m741857975 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::CallStaticIntMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int32_t JNI_CallStaticIntMethod_m161086469 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallStaticLongMethod(System.IntPtr,System.Int32)
extern "C"  int64_t JNI_CallStaticLongMethod_m2750762663 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallStaticLongMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int64_t JNI_CallStaticLongMethod_m2164640757 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallStaticLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallStaticLongMethod_m3318868163 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallStaticLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallStaticLongMethod_m63735057 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::CallStaticLongMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  int64_t JNI_CallStaticLongMethod_m1507885279 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallStaticFloatMethod(System.IntPtr,System.Int32)
extern "C"  float JNI_CallStaticFloatMethod_m2476638224 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallStaticFloatMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  float JNI_CallStaticFloatMethod_m792973726 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallStaticFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallStaticFloatMethod_m1249661612 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallStaticFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallStaticFloatMethod_m3728663354 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::CallStaticFloatMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  float JNI_CallStaticFloatMethod_m4193936200 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallStaticDoubleMethod(System.IntPtr,System.Int32)
extern "C"  double JNI_CallStaticDoubleMethod_m812308944 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallStaticDoubleMethod(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  double JNI_CallStaticDoubleMethod_m596646750 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallStaticDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallStaticDoubleMethod_m3215232108 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallStaticDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallStaticDoubleMethod_m1822362874 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::CallStaticDoubleMethod(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  double JNI_CallStaticDoubleMethod_m1760460040 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___methodID, IntPtr_t ___a, IntPtr_t ___b, IntPtr_t ___c, IntPtr_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetStaticFieldID(System.IntPtr,System.String,System.String)
extern "C"  int32_t JNI_GetStaticFieldID_m1315600031 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, String_t* ___name, String_t* ___sig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::GetStaticObjectField(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_GetStaticObjectField_m257407063 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetStaticBooleanField(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_GetStaticBooleanField_m1012343839 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte JNI::GetStaticByteField(System.IntPtr,System.Int32)
extern "C"  uint8_t JNI_GetStaticByteField_m2079599031 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char JNI::GetStaticCharField(System.IntPtr,System.Int32)
extern "C"  uint16_t JNI_GetStaticCharField_m3464314999 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 JNI::GetStaticShortField(System.IntPtr,System.Int32)
extern "C"  int16_t JNI_GetStaticShortField_m3556723845 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetStaticIntField(System.IntPtr,System.Int32)
extern "C"  int32_t JNI_GetStaticIntField_m1451198904 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::GetStaticLongField(System.IntPtr,System.Int32)
extern "C"  int64_t JNI_GetStaticLongField_m1810337400 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JNI::GetStaticFloatField(System.IntPtr,System.Int32)
extern "C"  float JNI_GetStaticFloatField_m3695003521 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JNI::GetStaticDoubleField(System.IntPtr,System.Int32)
extern "C"  double JNI_GetStaticDoubleField_m3803667415 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticObjectField(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void JNI_SetStaticObjectField_m206086574 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticBooleanField(System.IntPtr,System.Int32,System.Int32)
extern "C"  void JNI_SetStaticBooleanField_m3773335618 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticByteField(System.IntPtr,System.Int32,System.Byte)
extern "C"  void JNI_SetStaticByteField_m1953885276 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticCharField(System.IntPtr,System.Int32,System.Char)
extern "C"  void JNI_SetStaticCharField_m1351759936 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticShortField(System.IntPtr,System.Int32,System.Int16)
extern "C"  void JNI_SetStaticShortField_m3134257872 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticIntField(System.IntPtr,System.Int32,System.Int32)
extern "C"  void JNI_SetStaticIntField_m1920919625 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticLongField(System.IntPtr,System.Int32,System.Int64)
extern "C"  void JNI_SetStaticLongField_m722654325 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticFloatField(System.IntPtr,System.Int32,System.Single)
extern "C"  void JNI_SetStaticFloatField_m1771219942 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetStaticDoubleField(System.IntPtr,System.Int32,System.Double)
extern "C"  void JNI_SetStaticDoubleField_m4077056458 (Object_t * __this /* static, unused */, IntPtr_t ___clazz, int32_t ___fieldID, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewString(System.String,System.Int32)
extern "C"  IntPtr_t JNI_NewString_m2012597643 (Object_t * __this /* static, unused */, String_t* ___unicodeChars, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetStringLength(System.IntPtr)
extern "C"  int32_t JNI_GetStringLength_m3028651905 (Object_t * __this /* static, unused */, IntPtr_t ___IntPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::GetStringChars(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_GetStringChars_m3186011382 (Object_t * __this /* static, unused */, IntPtr_t ___jstring, int32_t ___setToZero, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::ReleaseStringChars(System.IntPtr,System.IntPtr)
extern "C"  void JNI_ReleaseStringChars_m1549616907 (Object_t * __this /* static, unused */, IntPtr_t ___jstring, IntPtr_t ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewStringUTF(System.String)
extern "C"  IntPtr_t JNI_NewStringUTF_m1411026991 (Object_t * __this /* static, unused */, String_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetStringUTFLength(System.IntPtr)
extern "C"  int32_t JNI_GetStringUTFLength_m2027588402 (Object_t * __this /* static, unused */, IntPtr_t ___jstring, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::GetStringUTFChars(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_GetStringUTFChars_m892745797 (Object_t * __this /* static, unused */, IntPtr_t ___jstring, int32_t ___setToZero, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::ReleaseStringUTFChars(System.IntPtr,System.IntPtr)
extern "C"  void JNI_ReleaseStringUTFChars_m2842046628 (Object_t * __this /* static, unused */, IntPtr_t ___jstring, IntPtr_t ___utf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::GetArrayLength(System.IntPtr)
extern "C"  int32_t JNI_GetArrayLength_m202326543 (Object_t * __this /* static, unused */, IntPtr_t ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t JNI_NewObjectArray_m1335338404 (Object_t * __this /* static, unused */, int32_t ___length, IntPtr_t ___elementClass, IntPtr_t ___initialElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::GetObjectArrayElement(System.IntPtr,System.Int32)
extern "C"  IntPtr_t JNI_GetObjectArrayElement_m3113863776 (Object_t * __this /* static, unused */, IntPtr_t ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void JNI_SetObjectArrayElement_m330805509 (Object_t * __this /* static, unused */, IntPtr_t ___array, int32_t ___index, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewBooleanArray(System.Int32)
extern "C"  IntPtr_t JNI_NewBooleanArray_m4249672775 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewByteArray(System.Int32)
extern "C"  IntPtr_t JNI_NewByteArray_m3493171615 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewCharArray(System.Int32)
extern "C"  IntPtr_t JNI_NewCharArray_m4284706961 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewShortArray(System.Int32)
extern "C"  IntPtr_t JNI_NewShortArray_m547312755 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewIntArray(System.Int32)
extern "C"  IntPtr_t JNI_NewIntArray_m1044588320 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewLongArray(System.Int32)
extern "C"  IntPtr_t JNI_NewLongArray_m4170854315 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewFloatArray(System.Int32)
extern "C"  IntPtr_t JNI_NewFloatArray_m2804492947 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewDoubleArray(System.Int32)
extern "C"  IntPtr_t JNI_NewDoubleArray_m2386026806 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::MonitorEnter(System.IntPtr)
extern "C"  int32_t JNI_MonitorEnter_m1456516730 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::MonitorExit(System.IntPtr)
extern "C"  int32_t JNI_MonitorExit_m909643990 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::GetJavaVM()
extern "C"  IntPtr_t JNI_GetJavaVM_m1833842164 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JNI::GetStringCritical(System.IntPtr)
extern "C"  String_t* JNI_GetStringCritical_m1184574363 (Object_t * __this /* static, unused */, IntPtr_t ___IntPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr JNI::NewWeakGlobalRef(System.IntPtr)
extern "C"  IntPtr_t JNI_NewWeakGlobalRef_m290403775 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JNI::DeleteWeakGlobalRef(System.IntPtr)
extern "C"  void JNI_DeleteWeakGlobalRef_m4214059031 (Object_t * __this /* static, unused */, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JNI::ExceptionCheck()
extern "C"  int32_t JNI_ExceptionCheck_m2593345269 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JNI::GetDirectBufferCapacity(System.IntPtr)
extern "C"  int64_t JNI_GetDirectBufferCapacity_m3162700756 (Object_t * __this /* static, unused */, IntPtr_t ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
