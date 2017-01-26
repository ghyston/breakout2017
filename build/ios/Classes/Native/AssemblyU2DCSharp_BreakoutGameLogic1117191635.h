#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BreakoutGameLogic
struct  BreakoutGameLogic_t1117191635  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BreakoutGameLogic::wallPrefab
	GameObject_t1756533147 * ___wallPrefab_2;
	// UnityEngine.GameObject BreakoutGameLogic::brickPrefab
	GameObject_t1756533147 * ___brickPrefab_3;
	// UnityEngine.GameObject BreakoutGameLogic::paddlePrefab
	GameObject_t1756533147 * ___paddlePrefab_4;
	// UnityEngine.GameObject BreakoutGameLogic::ballPrefab
	GameObject_t1756533147 * ___ballPrefab_5;
	// UnityEngine.GameObject BreakoutGameLogic::deadZonePrefab
	GameObject_t1756533147 * ___deadZonePrefab_6;
	// UnityEngine.UI.Text BreakoutGameLogic::textObj
	Text_t356221433 * ___textObj_7;
	// UnityEngine.GameObject BreakoutGameLogic::ball
	GameObject_t1756533147 * ___ball_8;
	// UnityEngine.GameObject BreakoutGameLogic::paddle
	GameObject_t1756533147 * ___paddle_9;
	// System.Int32 BreakoutGameLogic::bricksCounter
	int32_t ___bricksCounter_10;
	// System.Single BreakoutGameLogic::wallDepth
	float ___wallDepth_11;
	// System.Single BreakoutGameLogic::bricksLoPoint
	float ___bricksLoPoint_12;
	// System.Single BreakoutGameLogic::bricksHiPoint
	float ___bricksHiPoint_13;
	// System.Single BreakoutGameLogic::paddleDefaultWidth
	float ___paddleDefaultWidth_14;
	// System.Single BreakoutGameLogic::paddlePosY
	float ___paddlePosY_15;
	// System.Int32 BreakoutGameLogic::score
	int32_t ___score_18;

public:
	inline static int32_t get_offset_of_wallPrefab_2() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___wallPrefab_2)); }
	inline GameObject_t1756533147 * get_wallPrefab_2() const { return ___wallPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_wallPrefab_2() { return &___wallPrefab_2; }
	inline void set_wallPrefab_2(GameObject_t1756533147 * value)
	{
		___wallPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___wallPrefab_2, value);
	}

	inline static int32_t get_offset_of_brickPrefab_3() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___brickPrefab_3)); }
	inline GameObject_t1756533147 * get_brickPrefab_3() const { return ___brickPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_brickPrefab_3() { return &___brickPrefab_3; }
	inline void set_brickPrefab_3(GameObject_t1756533147 * value)
	{
		___brickPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___brickPrefab_3, value);
	}

	inline static int32_t get_offset_of_paddlePrefab_4() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___paddlePrefab_4)); }
	inline GameObject_t1756533147 * get_paddlePrefab_4() const { return ___paddlePrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_paddlePrefab_4() { return &___paddlePrefab_4; }
	inline void set_paddlePrefab_4(GameObject_t1756533147 * value)
	{
		___paddlePrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___paddlePrefab_4, value);
	}

	inline static int32_t get_offset_of_ballPrefab_5() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___ballPrefab_5)); }
	inline GameObject_t1756533147 * get_ballPrefab_5() const { return ___ballPrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_ballPrefab_5() { return &___ballPrefab_5; }
	inline void set_ballPrefab_5(GameObject_t1756533147 * value)
	{
		___ballPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___ballPrefab_5, value);
	}

	inline static int32_t get_offset_of_deadZonePrefab_6() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___deadZonePrefab_6)); }
	inline GameObject_t1756533147 * get_deadZonePrefab_6() const { return ___deadZonePrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_deadZonePrefab_6() { return &___deadZonePrefab_6; }
	inline void set_deadZonePrefab_6(GameObject_t1756533147 * value)
	{
		___deadZonePrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___deadZonePrefab_6, value);
	}

	inline static int32_t get_offset_of_textObj_7() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___textObj_7)); }
	inline Text_t356221433 * get_textObj_7() const { return ___textObj_7; }
	inline Text_t356221433 ** get_address_of_textObj_7() { return &___textObj_7; }
	inline void set_textObj_7(Text_t356221433 * value)
	{
		___textObj_7 = value;
		Il2CppCodeGenWriteBarrier(&___textObj_7, value);
	}

	inline static int32_t get_offset_of_ball_8() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___ball_8)); }
	inline GameObject_t1756533147 * get_ball_8() const { return ___ball_8; }
	inline GameObject_t1756533147 ** get_address_of_ball_8() { return &___ball_8; }
	inline void set_ball_8(GameObject_t1756533147 * value)
	{
		___ball_8 = value;
		Il2CppCodeGenWriteBarrier(&___ball_8, value);
	}

	inline static int32_t get_offset_of_paddle_9() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___paddle_9)); }
	inline GameObject_t1756533147 * get_paddle_9() const { return ___paddle_9; }
	inline GameObject_t1756533147 ** get_address_of_paddle_9() { return &___paddle_9; }
	inline void set_paddle_9(GameObject_t1756533147 * value)
	{
		___paddle_9 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_9, value);
	}

	inline static int32_t get_offset_of_bricksCounter_10() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___bricksCounter_10)); }
	inline int32_t get_bricksCounter_10() const { return ___bricksCounter_10; }
	inline int32_t* get_address_of_bricksCounter_10() { return &___bricksCounter_10; }
	inline void set_bricksCounter_10(int32_t value)
	{
		___bricksCounter_10 = value;
	}

	inline static int32_t get_offset_of_wallDepth_11() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___wallDepth_11)); }
	inline float get_wallDepth_11() const { return ___wallDepth_11; }
	inline float* get_address_of_wallDepth_11() { return &___wallDepth_11; }
	inline void set_wallDepth_11(float value)
	{
		___wallDepth_11 = value;
	}

	inline static int32_t get_offset_of_bricksLoPoint_12() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___bricksLoPoint_12)); }
	inline float get_bricksLoPoint_12() const { return ___bricksLoPoint_12; }
	inline float* get_address_of_bricksLoPoint_12() { return &___bricksLoPoint_12; }
	inline void set_bricksLoPoint_12(float value)
	{
		___bricksLoPoint_12 = value;
	}

	inline static int32_t get_offset_of_bricksHiPoint_13() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___bricksHiPoint_13)); }
	inline float get_bricksHiPoint_13() const { return ___bricksHiPoint_13; }
	inline float* get_address_of_bricksHiPoint_13() { return &___bricksHiPoint_13; }
	inline void set_bricksHiPoint_13(float value)
	{
		___bricksHiPoint_13 = value;
	}

	inline static int32_t get_offset_of_paddleDefaultWidth_14() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___paddleDefaultWidth_14)); }
	inline float get_paddleDefaultWidth_14() const { return ___paddleDefaultWidth_14; }
	inline float* get_address_of_paddleDefaultWidth_14() { return &___paddleDefaultWidth_14; }
	inline void set_paddleDefaultWidth_14(float value)
	{
		___paddleDefaultWidth_14 = value;
	}

	inline static int32_t get_offset_of_paddlePosY_15() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___paddlePosY_15)); }
	inline float get_paddlePosY_15() const { return ___paddlePosY_15; }
	inline float* get_address_of_paddlePosY_15() { return &___paddlePosY_15; }
	inline void set_paddlePosY_15(float value)
	{
		___paddlePosY_15 = value;
	}

	inline static int32_t get_offset_of_score_18() { return static_cast<int32_t>(offsetof(BreakoutGameLogic_t1117191635, ___score_18)); }
	inline int32_t get_score_18() const { return ___score_18; }
	inline int32_t* get_address_of_score_18() { return &___score_18; }
	inline void set_score_18(int32_t value)
	{
		___score_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
