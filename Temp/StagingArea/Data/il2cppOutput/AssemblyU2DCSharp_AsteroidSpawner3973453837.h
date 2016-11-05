#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsteroidSpawner
struct  AsteroidSpawner_t3973453837  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject AsteroidSpawner::Asteroid
	GameObject_t3674682005 * ___Asteroid_2;

public:
	inline static int32_t get_offset_of_Asteroid_2() { return static_cast<int32_t>(offsetof(AsteroidSpawner_t3973453837, ___Asteroid_2)); }
	inline GameObject_t3674682005 * get_Asteroid_2() const { return ___Asteroid_2; }
	inline GameObject_t3674682005 ** get_address_of_Asteroid_2() { return &___Asteroid_2; }
	inline void set_Asteroid_2(GameObject_t3674682005 * value)
	{
		___Asteroid_2 = value;
		Il2CppCodeGenWriteBarrier(&___Asteroid_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
