#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t1900323642;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t3395674658;

#include "DOTween_DG_Tweening_Tween1103364673.h"

// DG.Tweening.Sequence
struct  Sequence_t2436335575  : public Tween_t1103364673
{
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_t1900323642 * ___sequencedTweens_51;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t3395674658 * ____sequencedObjs_52;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_53;
};
