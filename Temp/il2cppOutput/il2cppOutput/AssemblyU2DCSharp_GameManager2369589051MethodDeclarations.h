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

// GameManager
struct GameManager_t2369589051;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Facebook.Unity.ILoginResult
struct ILoginResult_t1998157500;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m54915059 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::InitCallback()
extern "C"  void GameManager_InitCallback_m1844652521 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnHideUnity(System.Boolean)
extern "C"  void GameManager_OnHideUnity_m1247142681 (GameManager_t2369589051 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m3059414928 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::AddTrain()
extern "C"  void GameManager_AddTrain_m1996428123 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::AddTrain(System.Int32,System.Boolean)
extern "C"  Object_t * GameManager_AddTrain_m3563403801 (GameManager_t2369589051 * __this, int32_t ___railIndex, bool ___isUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m358434429 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnClickedStartGame()
extern "C"  void GameManager_OnClickedStartGame_m3519920000 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnRateGame()
extern "C"  void GameManager_OnRateGame_m3007115813 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnMoreGames()
extern "C"  void GameManager_OnMoreGames_m4284891131 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnLikePage()
extern "C"  void GameManager_OnLikePage_m68555513 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnRestart()
extern "C"  void GameManager_OnRestart_m3863754846 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnShare()
extern "C"  void GameManager_OnShare_m3566313902 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::AuthCallback(Facebook.Unity.ILoginResult)
extern "C"  void GameManager_AuthCallback_m973774259 (GameManager_t2369589051 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ShareToFacebook(System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void GameManager_ShareToFacebook_m2914202336 (GameManager_t2369589051 * __this, String_t* ___linkParameter, String_t* ___nameParameter, String_t* ___captionParameter, String_t* ___descriptionParameter, String_t* ___pictureParameter, String_t* ___redirectParameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnMainMenu()
extern "C"  void GameManager_OnMainMenu_m1571751531 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnGameOver()
extern "C"  void GameManager_OnGameOver_m1807227929 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DestroyAllVehicles()
extern "C"  void GameManager_DestroyAllVehicles_m1269522210 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DestroyAllBridges()
extern "C"  void GameManager_DestroyAllBridges_m2651477041 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DestroyVehicle(UnityEngine.GameObject)
extern "C"  void GameManager_DestroyVehicle_m471571774 (GameManager_t2369589051 * __this, GameObject_t4012695102 * ___vehicle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::<OnClickedStartGame>m__48()
extern "C"  void GameManager_U3COnClickedStartGameU3Em__48_m2638753225 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::<OnRestart>m__49()
extern "C"  void GameManager_U3COnRestartU3Em__49_m3976325180 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::<OnMainMenu>m__4A()
extern "C"  void GameManager_U3COnMainMenuU3Em__4A_m1179736125 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::<OnClickedStartGame>m__4B()
extern "C"  void GameManager_U3COnClickedStartGameU3Em__4B_m2638762835 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
