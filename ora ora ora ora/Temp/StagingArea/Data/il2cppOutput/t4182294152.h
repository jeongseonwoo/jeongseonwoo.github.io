﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1280968264;
struct t1881043281;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4182294152  : public Il2CppObject
{
public:

public:
};

struct t4182294152_SFs
{
public:
	t1280968264 * f0;
	t1881043281 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4182294152_SFs, f0)); }
	inline t1280968264 * fg0() const { return f0; }
	inline t1280968264 ** fag0() { return &f0; }
	inline void fs0(t1280968264 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4182294152_SFs, f1)); }
	inline t1881043281 * fg1() const { return f1; }
	inline t1881043281 ** fag1() { return &f1; }
	inline void fs1(t1881043281 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
