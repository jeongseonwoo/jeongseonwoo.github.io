﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1044382764 
{
public:
	int32_t f0;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t1044382764, f0)); }
	inline int32_t fg0() const { return f0; }
	inline int32_t* fag0() { return &f0; }
	inline void fs0(int32_t value)
	{
		f0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Runtime.InteropServices.GCHandle
struct t1044382764_marshaled_pinvoke
{
	int32_t f0;
};
// Native definition for marshalling of: System.Runtime.InteropServices.GCHandle
struct t1044382764_marshaled_com
{
	int32_t f0;
};
