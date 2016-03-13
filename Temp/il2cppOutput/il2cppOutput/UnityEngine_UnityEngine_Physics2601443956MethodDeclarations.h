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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1365728750;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t1585173756;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction4085533775.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m1758069759 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1600345803 (Object_t * __this /* static, unused */, Ray_t1522967639  ___ray, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m1343340263 (Object_t * __this /* static, unused */, Ray_t1522967639  ___ray, RaycastHit_t46221527 * ___hitInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m165875788 (Object_t * __this /* static, unused */, Ray_t1522967639  ___ray, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m1771931441 (Object_t * __this /* static, unused */, Ray_t1522967639  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m2128989030 (Object_t * __this /* static, unused */, Ray_t1522967639  ___ray, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m1269007794 (Object_t * __this /* static, unused */, Ray_t1522967639  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_RaycastAll_m892728677 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_INTERNAL_CALL_RaycastAll_m2642095530 (Object_t * __this /* static, unused */, Vector3_t3525329789 * ___origin, Vector3_t3525329789 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
extern "C"  ColliderU5BU5D_t1585173756* Physics_OverlapSphere_m359079608 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___position, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapSphere(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  ColliderU5BU5D_t1585173756* Physics_INTERNAL_CALL_OverlapSphere_m4255329177 (Object_t * __this /* static, unused */, Vector3_t3525329789 * ___position, float ___radius, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_CapsuleCastAll_m389433258 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___point1, Vector3_t3525329789  ___point2, float ___radius, Vector3_t3525329789  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_CapsuleCastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_INTERNAL_CALL_CapsuleCastAll_m2975798891 (Object_t * __this /* static, unused */, Vector3_t3525329789 * ___point1, Vector3_t3525329789 * ___point2, float ___radius, Vector3_t3525329789 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_SphereCastAll_m2682495480 (Object_t * __this /* static, unused */, Ray_t1522967639  ___ray, float ___radius, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t1365728750* Physics_SphereCastAll_m4226100576 (Object_t * __this /* static, unused */, Ray_t1522967639  ___ray, float ___radius, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m3365413907 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m1291554392 (Object_t * __this /* static, unused */, Vector3_t3525329789 * ___origin, Vector3_t3525329789 * ___direction, RaycastHit_t46221527 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
