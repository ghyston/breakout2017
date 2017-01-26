#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallController
struct  BallController_t3274667633  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean BallController::gameStarted
	bool ___gameStarted_2;
	// System.Single BallController::speed
	float ___speed_3;
	// UnityEngine.Rigidbody2D BallController::rb2d
	Rigidbody2D_t502193897 * ___rb2d_4;

public:
	inline static int32_t get_offset_of_gameStarted_2() { return static_cast<int32_t>(offsetof(BallController_t3274667633, ___gameStarted_2)); }
	inline bool get_gameStarted_2() const { return ___gameStarted_2; }
	inline bool* get_address_of_gameStarted_2() { return &___gameStarted_2; }
	inline void set_gameStarted_2(bool value)
	{
		___gameStarted_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BallController_t3274667633, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_rb2d_4() { return static_cast<int32_t>(offsetof(BallController_t3274667633, ___rb2d_4)); }
	inline Rigidbody2D_t502193897 * get_rb2d_4() const { return ___rb2d_4; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_4() { return &___rb2d_4; }
	inline void set_rb2d_4(Rigidbody2D_t502193897 * value)
	{
		___rb2d_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
