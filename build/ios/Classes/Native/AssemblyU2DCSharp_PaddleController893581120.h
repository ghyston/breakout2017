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

// PaddleController
struct  PaddleController_t893581120  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PaddleController::mouseDownPosX
	float ___mouseDownPosX_2;
	// System.Single PaddleController::onTouchPosX
	float ___onTouchPosX_3;
	// System.Boolean PaddleController::touched
	bool ___touched_4;
	// UnityEngine.Rigidbody2D PaddleController::rb2d
	Rigidbody2D_t502193897 * ___rb2d_5;
	// System.Boolean PaddleController::movingLeft
	bool ___movingLeft_6;
	// System.Boolean PaddleController::movingRight
	bool ___movingRight_7;

public:
	inline static int32_t get_offset_of_mouseDownPosX_2() { return static_cast<int32_t>(offsetof(PaddleController_t893581120, ___mouseDownPosX_2)); }
	inline float get_mouseDownPosX_2() const { return ___mouseDownPosX_2; }
	inline float* get_address_of_mouseDownPosX_2() { return &___mouseDownPosX_2; }
	inline void set_mouseDownPosX_2(float value)
	{
		___mouseDownPosX_2 = value;
	}

	inline static int32_t get_offset_of_onTouchPosX_3() { return static_cast<int32_t>(offsetof(PaddleController_t893581120, ___onTouchPosX_3)); }
	inline float get_onTouchPosX_3() const { return ___onTouchPosX_3; }
	inline float* get_address_of_onTouchPosX_3() { return &___onTouchPosX_3; }
	inline void set_onTouchPosX_3(float value)
	{
		___onTouchPosX_3 = value;
	}

	inline static int32_t get_offset_of_touched_4() { return static_cast<int32_t>(offsetof(PaddleController_t893581120, ___touched_4)); }
	inline bool get_touched_4() const { return ___touched_4; }
	inline bool* get_address_of_touched_4() { return &___touched_4; }
	inline void set_touched_4(bool value)
	{
		___touched_4 = value;
	}

	inline static int32_t get_offset_of_rb2d_5() { return static_cast<int32_t>(offsetof(PaddleController_t893581120, ___rb2d_5)); }
	inline Rigidbody2D_t502193897 * get_rb2d_5() const { return ___rb2d_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_5() { return &___rb2d_5; }
	inline void set_rb2d_5(Rigidbody2D_t502193897 * value)
	{
		___rb2d_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_5, value);
	}

	inline static int32_t get_offset_of_movingLeft_6() { return static_cast<int32_t>(offsetof(PaddleController_t893581120, ___movingLeft_6)); }
	inline bool get_movingLeft_6() const { return ___movingLeft_6; }
	inline bool* get_address_of_movingLeft_6() { return &___movingLeft_6; }
	inline void set_movingLeft_6(bool value)
	{
		___movingLeft_6 = value;
	}

	inline static int32_t get_offset_of_movingRight_7() { return static_cast<int32_t>(offsetof(PaddleController_t893581120, ___movingRight_7)); }
	inline bool get_movingRight_7() const { return ___movingRight_7; }
	inline bool* get_address_of_movingRight_7() { return &___movingRight_7; }
	inline void set_movingRight_7(bool value)
	{
		___movingRight_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
