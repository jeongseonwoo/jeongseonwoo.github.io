﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Il2CppObject.h"
#include "t1044382764.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3691690178  : public Il2CppObject
{
public:
	bool f0;
	t1044382764  f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t3691690178, f0)); }
	inline bool fg0() const { return f0; }
	inline bool* fag0() { return &f0; }
	inline void fs0(bool value)
	{
		f0 = value;
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t3691690178, f1)); }
	inline t1044382764  fg1() const { return f1; }
	inline t1044382764 * fag1() { return &f1; }
	inline void fs1(t1044382764  value)
	{
		f1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
