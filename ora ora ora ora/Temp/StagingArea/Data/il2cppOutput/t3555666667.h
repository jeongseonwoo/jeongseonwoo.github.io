﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1366199518;

#include "t774292115.h"
#include "t465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3555666667  : public t774292115
{
public:
	t1366199518 * f2;
	t465617797  f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t3555666667, f2)); }
	inline t1366199518 * fg2() const { return f2; }
	inline t1366199518 ** fag2() { return &f2; }
	inline void fs2(t1366199518 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3555666667, f3)); }
	inline t465617797  fg3() const { return f3; }
	inline t465617797 * fag3() { return &f3; }
	inline void fs3(t465617797  value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
