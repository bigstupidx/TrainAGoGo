#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// Train
struct Train_t81068520;
// TriggerBehaviour
struct TriggerBehaviour_t2699269637;
// System.Object
struct Object_t;
// GameManager
struct GameManager_t2369589051;

#include "mscorlib_System_Object837106420.h"

// GameManager/<AddTrain>c__Iterator4
struct  U3CAddTrainU3Ec__Iterator4_t4262220574  : public Object_t
{
	// System.Int32 GameManager/<AddTrain>c__Iterator4::<random>__0
	int32_t ___U3CrandomU3E__0_0;
	// UnityEngine.GameObject GameManager/<AddTrain>c__Iterator4::<train>__1
	GameObject_t4012695102 * ___U3CtrainU3E__1_1;
	// System.Int32 GameManager/<AddTrain>c__Iterator4::railIndex
	int32_t ___railIndex_2;
	// System.Boolean GameManager/<AddTrain>c__Iterator4::isUp
	bool ___isUp_3;
	// Train GameManager/<AddTrain>c__Iterator4::<script>__2
	Train_t81068520 * ___U3CscriptU3E__2_4;
	// TriggerBehaviour GameManager/<AddTrain>c__Iterator4::<trigger>__3
	TriggerBehaviour_t2699269637 * ___U3CtriggerU3E__3_5;
	// System.Int32 GameManager/<AddTrain>c__Iterator4::$PC
	int32_t ___U24PC_6;
	// System.Object GameManager/<AddTrain>c__Iterator4::$current
	Object_t * ___U24current_7;
	// System.Int32 GameManager/<AddTrain>c__Iterator4::<$>railIndex
	int32_t ___U3CU24U3ErailIndex_8;
	// System.Boolean GameManager/<AddTrain>c__Iterator4::<$>isUp
	bool ___U3CU24U3EisUp_9;
	// GameManager GameManager/<AddTrain>c__Iterator4::<>f__this
	GameManager_t2369589051 * ___U3CU3Ef__this_10;
};
