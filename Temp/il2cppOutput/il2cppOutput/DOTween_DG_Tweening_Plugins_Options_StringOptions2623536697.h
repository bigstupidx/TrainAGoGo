#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t3416858730;

#include "mscorlib_System_ValueType4014882752.h"
#include "DOTween_DG_Tweening_ScrambleMode2140863014.h"

// DG.Tweening.Plugins.Options.StringOptions
struct  StringOptions_t2623536697 
{
	// System.Boolean DG.Tweening.Plugins.Options.StringOptions::richTextEnabled
	bool ___richTextEnabled_0;
	// DG.Tweening.ScrambleMode DG.Tweening.Plugins.Options.StringOptions::scrambleMode
	int32_t ___scrambleMode_1;
	// System.Char[] DG.Tweening.Plugins.Options.StringOptions::scrambledChars
	CharU5BU5D_t3416858730* ___scrambledChars_2;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::startValueStrippedLength
	int32_t ___startValueStrippedLength_3;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::changeValueStrippedLength
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for marshalling of: DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_t2623536697_marshaled
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	char* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};
