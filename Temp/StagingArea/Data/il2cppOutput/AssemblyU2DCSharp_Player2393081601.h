#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Player::HeadTransform
	Transform_t1659122786 * ___HeadTransform_2;
	// UnityEngine.GameObject Player::Projectile
	GameObject_t3674682005 * ___Projectile_3;

public:
	inline static int32_t get_offset_of_HeadTransform_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___HeadTransform_2)); }
	inline Transform_t1659122786 * get_HeadTransform_2() const { return ___HeadTransform_2; }
	inline Transform_t1659122786 ** get_address_of_HeadTransform_2() { return &___HeadTransform_2; }
	inline void set_HeadTransform_2(Transform_t1659122786 * value)
	{
		___HeadTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___HeadTransform_2, value);
	}

	inline static int32_t get_offset_of_Projectile_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___Projectile_3)); }
	inline GameObject_t3674682005 * get_Projectile_3() const { return ___Projectile_3; }
	inline GameObject_t3674682005 ** get_address_of_Projectile_3() { return &___Projectile_3; }
	inline void set_Projectile_3(GameObject_t3674682005 * value)
	{
		___Projectile_3 = value;
		Il2CppCodeGenWriteBarrier(&___Projectile_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
