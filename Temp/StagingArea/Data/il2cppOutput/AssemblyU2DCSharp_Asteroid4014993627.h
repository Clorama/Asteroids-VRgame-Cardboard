#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t2393081601;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Asteroid
struct  Asteroid_t4014993627  : public MonoBehaviour_t667441552
{
public:
	// Player Asteroid::player
	Player_t2393081601 * ___player_2;
	// UnityEngine.GameObject Asteroid::Explosion
	GameObject_t3674682005 * ___Explosion_3;
	// UnityEngine.GameObject Asteroid::PlayerExplosion
	GameObject_t3674682005 * ___PlayerExplosion_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Asteroid_t4014993627, ___player_2)); }
	inline Player_t2393081601 * get_player_2() const { return ___player_2; }
	inline Player_t2393081601 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Player_t2393081601 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_Explosion_3() { return static_cast<int32_t>(offsetof(Asteroid_t4014993627, ___Explosion_3)); }
	inline GameObject_t3674682005 * get_Explosion_3() const { return ___Explosion_3; }
	inline GameObject_t3674682005 ** get_address_of_Explosion_3() { return &___Explosion_3; }
	inline void set_Explosion_3(GameObject_t3674682005 * value)
	{
		___Explosion_3 = value;
		Il2CppCodeGenWriteBarrier(&___Explosion_3, value);
	}

	inline static int32_t get_offset_of_PlayerExplosion_4() { return static_cast<int32_t>(offsetof(Asteroid_t4014993627, ___PlayerExplosion_4)); }
	inline GameObject_t3674682005 * get_PlayerExplosion_4() const { return ___PlayerExplosion_4; }
	inline GameObject_t3674682005 ** get_address_of_PlayerExplosion_4() { return &___PlayerExplosion_4; }
	inline void set_PlayerExplosion_4(GameObject_t3674682005 * value)
	{
		___PlayerExplosion_4 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerExplosion_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
