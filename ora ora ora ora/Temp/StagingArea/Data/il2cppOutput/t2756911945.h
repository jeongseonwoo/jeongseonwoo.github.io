﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct String_t;

#include "t4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2756911945 
{
public:
	String_t* f0;
	String_t* f1;
	int32_t f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2756911945, f0)); }
	inline String_t* fg0() const { return f0; }
	inline String_t** fag0() { return &f0; }
	inline void fs0(String_t* value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2756911945, f1)); }
	inline String_t* fg1() const { return f1; }
	inline String_t** fag1() { return &f1; }
	inline void fs1(String_t* value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2756911945, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Uri/UriScheme
struct t2756911945_marshaled_pinvoke
{
	char* f0;
	char* f1;
	int32_t f2;
};
// Native definition for marshalling of: System.Uri/UriScheme
struct t2756911945_marshaled_com
{
	uint16_t* f0;
	uint16_t* f1;
	int32_t f2;
};
