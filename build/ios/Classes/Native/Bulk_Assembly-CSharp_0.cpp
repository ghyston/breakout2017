#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// BallController
struct BallController_t3274667633;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// PaddleController
struct PaddleController_t893581120;
// BreakoutGameLogic
struct BreakoutGameLogic_t1117191635;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Brick
struct Brick_t1619971827;
// UnityEngine.Renderer
struct Renderer_t257310565;
// DeadZoneController
struct DeadZoneController_t2669794112;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_BallController3274667633.h"
#include "AssemblyU2DCSharp_BallController3274667633MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "AssemblyU2DCSharp_PaddleController893581120.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BreakoutGameLogic1117191635.h"
#include "AssemblyU2DCSharp_BreakoutGameLogic1117191635MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharp_Brick1619971827.h"
#include "AssemblyU2DCSharp_Brick_BrickType3145222665.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "AssemblyU2DCSharp_Brick1619971827MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Color2020392075MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharp_Brick_BrickType3145222665MethodDeclarations.h"
#include "AssemblyU2DCSharp_DeadZoneController2669794112.h"
#include "AssemblyU2DCSharp_DeadZoneController2669794112MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "AssemblyU2DCSharp_PaddleController893581120MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<PaddleController>()
#define GameObject_GetComponent_TisPaddleController_t893581120_m2904166279(__this, method) ((  PaddleController_t893581120 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m3829784634(__this /* static, unused */, p0, p1, p2, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.GameObject::GetComponent<Brick>()
#define GameObject_GetComponent_TisBrick_t1619971827_m292452192(__this, method) ((  Brick_t1619971827 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t257310565_m772028041(__this, method) ((  Renderer_t257310565 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<BreakoutGameLogic>()
#define GameObject_GetComponent_TisBreakoutGameLogic_t1117191635_m3111396786(__this, method) ((  BreakoutGameLogic_t1117191635 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallController::.ctor()
extern "C"  void BallController__ctor_m2206749540 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_3((5.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t BallController_Start_m2246481500_MetadataUsageId;
extern "C"  void BallController_Start_m2246481500 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_Start_m2246481500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rb2d_4(L_0);
		return;
	}
}
// System.Void BallController::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t BallController_Update_m1229283357_MetadataUsageId;
extern "C"  void BallController_Update_m1229283357 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_Update_m1229283357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_gameStarted_2();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		BallController_StartBall_m164761463(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		BallController_LimitSpeed_m1968577188(__this, /*hidden argument*/NULL);
		BallController_FixHorizontalOnlyMovements_m2786038821(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::LimitSpeed()
extern "C"  void BallController_LimitSpeed_m1968577188 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody2D_t502193897 * L_0 = __this->get_rb2d_4();
		NullCheck(L_0);
		Vector2_t2243707579  L_1 = Rigidbody2D_get_velocity_m3310151195(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector2_Normalize_m2465777963((&V_0), /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_2 = __this->get_rb2d_4();
		Vector2_t2243707579  L_3 = V_0;
		float L_4 = __this->get_speed_3();
		Vector2_t2243707579  L_5 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m3592751374(L_2, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::FixHorizontalOnlyMovements()
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t BallController_FixHorizontalOnlyMovements_m2786038821_MetadataUsageId;
extern "C"  void BallController_FixHorizontalOnlyMovements_m2786038821 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_FixHorizontalOnlyMovements_m2786038821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody2D_t502193897 * L_0 = __this->get_rb2d_4();
		NullCheck(L_0);
		Vector2_t2243707579  L_1 = Rigidbody2D_get_velocity_m3310151195(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_3 = fabsf(L_2);
		if ((!(((double)(((double)((double)L_3)))) >= ((double)(0.1)))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		Rigidbody2D_t502193897 * L_4 = __this->get_rb2d_4();
		float L_5 = Random_Range_m2884721203(NULL /*static, unused*/, (10.0f), (50.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m2638739322(&L_6, (0.0f), L_5, (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_7 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody2D_AddForce_m3200488178(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::StartBall()
extern "C"  void BallController_StartBall_m164761463 (BallController_t3274667633 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_gameStarted_2();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Rigidbody2D_t502193897 * L_1 = __this->get_rb2d_4();
		float L_2 = Random_Range_m2884721203(NULL /*static, unused*/, (-100.0f), (100.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m2638739322(&L_3, L_2, (100.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_4 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_AddForce_m3200488178(L_1, L_4, /*hidden argument*/NULL);
		__this->set_gameStarted_2((bool)1);
		return;
	}
}
// System.Void BallController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern const MethodInfo* GameObject_GetComponent_TisPaddleController_t893581120_m2904166279_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1491230646;
extern const uint32_t BallController_OnCollisionEnter2D_m3657294770_MetadataUsageId;
extern "C"  void BallController_OnCollisionEnter2D_m3657294770 (BallController_t3274667633 * __this, Collision2D_t1539500754 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_OnCollisionEnter2D_m3657294770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PaddleController_t893581120 * V_0 = NULL;
	{
		Collision2D_t1539500754 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m2797152613(L_1, _stringLiteral1491230646, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		Collision2D_t1539500754 * L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_t1756533147 * L_4 = Collision2D_get_gameObject_m4234358314(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		PaddleController_t893581120 * L_5 = GameObject_GetComponent_TisPaddleController_t893581120_m2904166279(L_4, /*hidden argument*/GameObject_GetComponent_TisPaddleController_t893581120_m2904166279_MethodInfo_var);
		V_0 = L_5;
		PaddleController_t893581120 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_movingLeft_6();
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		PaddleController_t893581120 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = L_8->get_movingRight_7();
		if (!L_9)
		{
			goto IL_00b0;
		}
	}

IL_0038:
	{
		Rigidbody2D_t502193897 * L_10 = __this->get_rb2d_4();
		Vector2_t2243707579  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector2__ctor_m3067419446(&L_11, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_set_velocity_m3592751374(L_10, L_11, /*hidden argument*/NULL);
		PaddleController_t893581120 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = L_12->get_movingLeft_6();
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		Rigidbody2D_t502193897 * L_14 = __this->get_rb2d_4();
		Vector3_t2243707580  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m2638739322(&L_15, (-100.0f), (100.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_16 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody2D_AddForce_m3200488178(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0081:
	{
		PaddleController_t893581120 * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = L_17->get_movingRight_7();
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		Rigidbody2D_t502193897 * L_19 = __this->get_rb2d_4();
		Vector3_t2243707580  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector3__ctor_m2638739322(&L_20, (100.0f), (100.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_21 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Rigidbody2D_AddForce_m3200488178(L_19, L_21, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		return;
	}
}
// System.Void BreakoutGameLogic::.ctor()
extern "C"  void BreakoutGameLogic__ctor_m2267695742 (BreakoutGameLogic_t1117191635 * __this, const MethodInfo* method)
{
	{
		__this->set_wallDepth_11((0.1f));
		__this->set_bricksLoPoint_12((0.5f));
		__this->set_bricksHiPoint_13((0.9f));
		__this->set_paddleDefaultWidth_14((0.5f));
		__this->set_paddlePosY_15((0.1f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BreakoutGameLogic::Start()
extern "C"  void BreakoutGameLogic_Start_m3566676250 (BreakoutGameLogic_t1117191635 * __this, const MethodInfo* method)
{
	{
		BreakoutGameLogic_BuildWalls_m174948885(__this, /*hidden argument*/NULL);
		BreakoutGameLogic_PopulateBricks_m2824745380(__this, /*hidden argument*/NULL);
		BreakoutGameLogic_AddPaddleAndBall_m1478814355(__this, /*hidden argument*/NULL);
		BreakoutGameLogic_AddDeadZone_m2935482273(__this, /*hidden argument*/NULL);
		BreakoutGameLogic_UpdateScoreLabel_m2312352605(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BreakoutGameLogic::BuildWalls()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t BreakoutGameLogic_BuildWalls_m174948885_MetadataUsageId;
extern "C"  void BreakoutGameLogic_BuildWalls_m174948885 (BreakoutGameLogic_t1117191635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BreakoutGameLogic_BuildWalls_m174948885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t2243707580  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t2243707580  V_6;
	memset(&V_6, 0, sizeof(V_6));
	GameObject_t1756533147 * V_7 = NULL;
	GameObject_t1756533147 * V_8 = NULL;
	GameObject_t1756533147 * V_9 = NULL;
	{
		Camera_t189460977 * L_0 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Camera_get_orthographicSize_m1801974358(L_0, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_1*(float)(2.0f)));
		Camera_t189460977 * L_2 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = Camera_get_aspect_m935361871(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		V_1 = ((float)((float)L_3*(float)L_4));
		Camera_t189460977 * L_5 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t2243707580  L_7 = Transform_get_position_m1104419803(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = (&V_3)->get_z_3();
		V_2 = L_8;
		float L_9 = __this->get_wallDepth_11();
		float L_10 = V_1;
		Vector3__ctor_m2638739322((&V_4), ((float)((float)((float)((float)L_9-(float)L_10))/(float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_11 = V_1;
		float L_12 = __this->get_wallDepth_11();
		Vector3__ctor_m2638739322((&V_5), ((float)((float)((float)((float)L_11-(float)L_12))/(float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_13 = V_0;
		float L_14 = __this->get_wallDepth_11();
		Vector3__ctor_m2638739322((&V_6), (0.0f), ((float)((float)((float)((float)L_13-(float)L_14))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		GameObject_t1756533147 * L_15 = __this->get_wallPrefab_2();
		Vector3_t2243707580  L_16 = V_4;
		Quaternion_t4030073918  L_17 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_18 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_7 = L_18;
		GameObject_t1756533147 * L_19 = V_7;
		NullCheck(L_19);
		Transform_t3275118058 * L_20 = GameObject_get_transform_m909382139(L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_wallDepth_11();
		float L_22 = V_0;
		Vector3_t2243707580  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m2638739322(&L_23, L_21, L_22, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localScale_m2325460848(L_20, L_23, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_24 = __this->get_wallPrefab_2();
		Vector3_t2243707580  L_25 = V_5;
		Quaternion_t4030073918  L_26 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_27 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_24, L_25, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_8 = L_27;
		GameObject_t1756533147 * L_28 = V_8;
		NullCheck(L_28);
		Transform_t3275118058 * L_29 = GameObject_get_transform_m909382139(L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_wallDepth_11();
		float L_31 = V_0;
		Vector3_t2243707580  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector3__ctor_m2638739322(&L_32, L_30, L_31, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localScale_m2325460848(L_29, L_32, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_33 = __this->get_wallPrefab_2();
		Vector3_t2243707580  L_34 = V_6;
		Quaternion_t4030073918  L_35 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_36 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_33, L_34, L_35, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_9 = L_36;
		GameObject_t1756533147 * L_37 = V_9;
		NullCheck(L_37);
		Transform_t3275118058 * L_38 = GameObject_get_transform_m909382139(L_37, /*hidden argument*/NULL);
		float L_39 = V_1;
		float L_40 = __this->get_wallDepth_11();
		Vector3_t2243707580  L_41;
		memset(&L_41, 0, sizeof(L_41));
		Vector3__ctor_m2638739322(&L_41, L_39, L_40, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_localScale_m2325460848(L_38, L_41, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BreakoutGameLogic::PopulateBricks()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBrick_t1619971827_m292452192_MethodInfo_var;
extern const uint32_t BreakoutGameLogic_PopulateBricks_m2824745380_MetadataUsageId;
extern "C"  void BreakoutGameLogic_PopulateBricks_m2824745380 (BreakoutGameLogic_t1117191635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BreakoutGameLogic_PopulateBricks_m2824745380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t2243707580  V_12;
	memset(&V_12, 0, sizeof(V_12));
	GameObject_t1756533147 * V_13 = NULL;
	{
		Camera_t189460977 * L_0 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Camera_get_orthographicSize_m1801974358(L_0, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_1*(float)(2.0f)));
		Camera_t189460977 * L_2 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = Camera_get_aspect_m935361871(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		V_1 = ((float)((float)L_3*(float)L_4));
		Camera_t189460977 * L_5 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t2243707580  L_7 = Transform_get_position_m1104419803(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = (&V_3)->get_z_3();
		V_2 = L_8;
		float L_9 = V_1;
		float L_10 = __this->get_wallDepth_11();
		V_4 = ((float)((float)((float)((float)L_9-(float)((float)((float)L_10*(float)(2.0f)))))/(float)(14.0f)));
		float L_11 = __this->get_bricksHiPoint_13();
		float L_12 = __this->get_bricksLoPoint_12();
		float L_13 = V_0;
		V_5 = ((float)((float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13))/(float)(8.0f)));
		float L_14 = __this->get_bricksLoPoint_12();
		float L_15 = V_0;
		float L_16 = V_5;
		V_6 = ((float)((float)((float)((float)((float)((float)L_14-(float)(0.5f)))*(float)L_15))+(float)((float)((float)L_16/(float)(2.0f)))));
		float L_17 = __this->get_wallDepth_11();
		float L_18 = V_1;
		float L_19 = V_4;
		V_7 = ((float)((float)((float)((float)L_17-(float)((float)((float)L_18/(float)(2.0f)))))+(float)((float)((float)L_19/(float)(2.0f)))));
		V_8 = (0.01f);
		V_9 = 3;
		goto IL_0152;
	}

IL_00a4:
	{
		V_10 = 0;
		goto IL_0137;
	}

IL_00ac:
	{
		V_11 = 0;
		goto IL_0128;
	}

IL_00b4:
	{
		float L_20 = V_7;
		int32_t L_21 = V_11;
		float L_22 = V_4;
		float L_23 = V_6;
		int32_t L_24 = V_10;
		float L_25 = V_5;
		Vector3__ctor_m2638739322((&V_12), ((float)((float)L_20+(float)((float)((float)(((float)((float)L_21)))*(float)L_22)))), ((float)((float)L_23+(float)((float)((float)(((float)((float)L_24)))*(float)L_25)))), (0.0f), /*hidden argument*/NULL);
		GameObject_t1756533147 * L_26 = __this->get_brickPrefab_3();
		Vector3_t2243707580  L_27 = V_12;
		Quaternion_t4030073918  L_28 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_29 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_13 = L_29;
		GameObject_t1756533147 * L_30 = V_13;
		NullCheck(L_30);
		Transform_t3275118058 * L_31 = GameObject_get_transform_m909382139(L_30, /*hidden argument*/NULL);
		float L_32 = V_4;
		float L_33 = V_8;
		float L_34 = V_5;
		float L_35 = V_8;
		Vector3_t2243707580  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m2638739322(&L_36, ((float)((float)L_32-(float)L_33)), ((float)((float)L_34-(float)L_35)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_m2325460848(L_31, L_36, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_37 = V_13;
		NullCheck(L_37);
		Brick_t1619971827 * L_38 = GameObject_GetComponent_TisBrick_t1619971827_m292452192(L_37, /*hidden argument*/GameObject_GetComponent_TisBrick_t1619971827_m292452192_MethodInfo_var);
		int32_t L_39 = V_9;
		NullCheck(L_38);
		L_38->set_type_2(L_39);
		int32_t L_40 = __this->get_bricksCounter_10();
		__this->set_bricksCounter_10(((int32_t)((int32_t)L_40+(int32_t)1)));
		int32_t L_41 = V_11;
		V_11 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_0128:
	{
		int32_t L_42 = V_11;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)14))))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_43 = V_10;
		V_10 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0137:
	{
		int32_t L_44 = V_10;
		if ((((int32_t)L_44) < ((int32_t)2)))
		{
			goto IL_00ac;
		}
	}
	{
		float L_45 = V_6;
		float L_46 = V_5;
		V_6 = ((float)((float)L_45+(float)((float)((float)L_46*(float)(2.0f)))));
		int32_t L_47 = V_9;
		V_9 = ((int32_t)((int32_t)L_47-(int32_t)1));
	}

IL_0152:
	{
		int32_t L_48 = V_9;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		return;
	}
}
// System.Void BreakoutGameLogic::AddPaddleAndBall()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t BreakoutGameLogic_AddPaddleAndBall_m1478814355_MetadataUsageId;
extern "C"  void BreakoutGameLogic_AddPaddleAndBall_m1478814355 (BreakoutGameLogic_t1117191635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BreakoutGameLogic_AddPaddleAndBall_m1478814355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Camera_t189460977 * L_0 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Camera_get_aspect_m935361871(L_0, /*hidden argument*/NULL);
		Camera_t189460977 * L_2 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = Camera_get_orthographicSize_m1801974358(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_paddleDefaultWidth_14();
		V_0 = ((float)((float)((float)((float)((float)((float)L_1*(float)L_3))*(float)(2.0f)))*(float)L_4));
		Camera_t189460977 * L_5 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = Camera_get_orthographicSize_m1801974358(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_paddlePosY_15();
		Vector3__ctor_m2638739322((&V_1), (0.0f), ((float)((float)((-L_6))*(float)((float)((float)(1.0f)-(float)L_7)))), (0.0f), /*hidden argument*/NULL);
		GameObject_t1756533147 * L_8 = __this->get_paddlePrefab_4();
		Vector3_t2243707580  L_9 = V_1;
		Quaternion_t4030073918  L_10 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_11 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		__this->set_paddle_9(L_11);
		GameObject_t1756533147 * L_12 = __this->get_paddle_9();
		NullCheck(L_12);
		Transform_t3275118058 * L_13 = GameObject_get_transform_m909382139(L_12, /*hidden argument*/NULL);
		float L_14 = V_0;
		Vector3_t2243707580  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m2638739322(&L_15, L_14, (0.1f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_m2325460848(L_13, L_15, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_16 = __this->get_ballPrefab_5();
		Vector3_t2243707580  L_17 = V_1;
		Quaternion_t4030073918  L_18 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_19 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		__this->set_ball_8(L_19);
		return;
	}
}
// System.Void BreakoutGameLogic::AddDeadZone()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t BreakoutGameLogic_AddDeadZone_m2935482273_MetadataUsageId;
extern "C"  void BreakoutGameLogic_AddDeadZone_m2935482273 (BreakoutGameLogic_t1117191635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BreakoutGameLogic_AddDeadZone_m2935482273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	GameObject_t1756533147 * V_3 = NULL;
	{
		Camera_t189460977 * L_0 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Camera_get_orthographicSize_m1801974358(L_0, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_1*(float)(2.0f)));
		Camera_t189460977 * L_2 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = Camera_get_aspect_m935361871(L_2, /*hidden argument*/NULL);
		float L_4 = V_0;
		V_1 = ((float)((float)L_3*(float)L_4));
		Camera_t189460977 * L_5 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = Camera_get_orthographicSize_m1801974358(L_5, /*hidden argument*/NULL);
		Vector3__ctor_m2638739322((&V_2), (0.0f), ((-L_6)), (0.0f), /*hidden argument*/NULL);
		GameObject_t1756533147 * L_7 = __this->get_deadZonePrefab_6();
		Vector3_t2243707580  L_8 = V_2;
		Quaternion_t4030073918  L_9 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_10 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_3 = L_10;
		GameObject_t1756533147 * L_11 = V_3;
		NullCheck(L_11);
		Transform_t3275118058 * L_12 = GameObject_get_transform_m909382139(L_11, /*hidden argument*/NULL);
		float L_13 = V_1;
		float L_14 = __this->get_wallDepth_11();
		Vector3_t2243707580  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m2638739322(&L_15, L_13, L_14, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_m2325460848(L_12, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BreakoutGameLogic::UpdateScoreLabel()
extern "C"  void BreakoutGameLogic_UpdateScoreLabel_m2312352605 (BreakoutGameLogic_t1117191635 * __this, const MethodInfo* method)
{
	{
		Text_t356221433 * L_0 = __this->get_textObj_7();
		int32_t* L_1 = __this->get_address_of_score_18();
		String_t* L_2 = Int32_ToString_m2960866144(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void BreakoutGameLogic::OnBallLost()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t BreakoutGameLogic_OnBallLost_m1655762506_MetadataUsageId;
extern "C"  void BreakoutGameLogic_OnBallLost_m1655762506 (BreakoutGameLogic_t1117191635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BreakoutGameLogic_OnBallLost_m1655762506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = __this->get_ball_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_1 = __this->get_paddle_9();
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		BreakoutGameLogic_AddPaddleAndBall_m1478814355(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BreakoutGameLogic::onBrickRemoved(Brick/BrickType)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t BreakoutGameLogic_onBrickRemoved_m3148429163_MetadataUsageId;
extern "C"  void BreakoutGameLogic_onBrickRemoved_m3148429163 (BreakoutGameLogic_t1117191635 * __this, int32_t ___type0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BreakoutGameLogic_onBrickRemoved_m3148429163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_bricksCounter_10();
		__this->set_bricksCounter_10(((int32_t)((int32_t)L_0-(int32_t)1)));
		int32_t L_1 = __this->get_bricksCounter_10();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		GameObject_t1756533147 * L_2 = __this->get_ball_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = __this->get_paddle_9();
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		BreakoutGameLogic_AddPaddleAndBall_m1478814355(__this, /*hidden argument*/NULL);
		BreakoutGameLogic_PopulateBricks_m2824745380(__this, /*hidden argument*/NULL);
		__this->set_score_18(0);
		goto IL_005b;
	}

IL_0048:
	{
		int32_t L_4 = __this->get_score_18();
		int32_t L_5 = ___type0;
		int32_t L_6 = Brick_getPointsBy_m3402534437(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_score_18(((int32_t)((int32_t)L_4+(int32_t)L_6)));
	}

IL_005b:
	{
		BreakoutGameLogic_UpdateScoreLabel_m2312352605(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Brick::.ctor()
extern "C"  void Brick__ctor_m4067638188 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color Brick::getColorBy(Brick/BrickType)
extern "C"  Color_t2020392075  Brick_getColorBy_m3957966976 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___type0;
		if (L_0 == 0)
		{
			goto IL_001b;
		}
		if (L_0 == 1)
		{
			goto IL_0030;
		}
		if (L_0 == 2)
		{
			goto IL_0045;
		}
		if (L_0 == 3)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006f;
	}

IL_001b:
	{
		Color_t2020392075  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m3811852957(&L_1, (255.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_1;
	}

IL_0030:
	{
		Color_t2020392075  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Color__ctor_m3811852957(&L_2, (255.0f), (165.0f), (0.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_0045:
	{
		Color_t2020392075  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Color__ctor_m3811852957(&L_3, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_005a:
	{
		Color_t2020392075  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Color__ctor_m3811852957(&L_4, (255.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		return L_4;
	}

IL_006f:
	{
		Color_t2020392075  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m3811852957(&L_5, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Brick::getPointsBy(Brick/BrickType)
extern "C"  int32_t Brick_getPointsBy_m3402534437 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___type0;
		if (L_0 == 0)
		{
			goto IL_001b;
		}
		if (L_0 == 1)
		{
			goto IL_001d;
		}
		if (L_0 == 2)
		{
			goto IL_001f;
		}
		if (L_0 == 3)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0023;
	}

IL_001b:
	{
		return 7;
	}

IL_001d:
	{
		return 5;
	}

IL_001f:
	{
		return 3;
	}

IL_0021:
	{
		return 1;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void Brick::Start()
extern const MethodInfo* Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var;
extern const uint32_t Brick_Start_m3679901112_MetadataUsageId;
extern "C"  void Brick_Start_m3679901112 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_Start_m3679901112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t257310565 * L_0 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_0);
		Material_t193706927 * L_1 = Renderer_get_material_m2553789785(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_type_2();
		Color_t2020392075  L_3 = Brick_getColorBy_m3957966976(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_color_m577844242(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Brick::Update()
extern "C"  void Brick_Update_m1019641951 (Brick_t1619971827 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Brick::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBreakoutGameLogic_t1117191635_m3111396786_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral597952824;
extern const uint32_t Brick_OnCollisionEnter2D_m965645190_MetadataUsageId;
extern "C"  void Brick_OnCollisionEnter2D_m965645190 (Brick_t1619971827 * __this, Collision2D_t1539500754 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Brick_OnCollisionEnter2D_m965645190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral597952824, /*hidden argument*/NULL);
		NullCheck(L_0);
		BreakoutGameLogic_t1117191635 * L_1 = GameObject_GetComponent_TisBreakoutGameLogic_t1117191635_m3111396786(L_0, /*hidden argument*/GameObject_GetComponent_TisBreakoutGameLogic_t1117191635_m3111396786_MethodInfo_var);
		int32_t L_2 = __this->get_type_2();
		NullCheck(L_1);
		BreakoutGameLogic_onBrickRemoved_m3148429163(L_1, L_2, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadZoneController::.ctor()
extern "C"  void DeadZoneController__ctor_m4160257961 (DeadZoneController_t2669794112 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadZoneController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern const MethodInfo* GameObject_GetComponent_TisBreakoutGameLogic_t1117191635_m3111396786_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral597952824;
extern const uint32_t DeadZoneController_OnTriggerEnter2D_m3096520985_MetadataUsageId;
extern "C"  void DeadZoneController_OnTriggerEnter2D_m3096520985 (DeadZoneController_t2669794112 * __this, Collider2D_t646061738 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeadZoneController_OnTriggerEnter2D_m3096520985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral597952824, /*hidden argument*/NULL);
		NullCheck(L_0);
		BreakoutGameLogic_t1117191635 * L_1 = GameObject_GetComponent_TisBreakoutGameLogic_t1117191635_m3111396786(L_0, /*hidden argument*/GameObject_GetComponent_TisBreakoutGameLogic_t1117191635_m3111396786_MethodInfo_var);
		NullCheck(L_1);
		BreakoutGameLogic_OnBallLost_m1655762506(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PaddleController::.ctor()
extern "C"  void PaddleController__ctor_m1243316263 (PaddleController_t893581120 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PaddleController::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t PaddleController_Start_m3229005483_MetadataUsageId;
extern "C"  void PaddleController_Start_m3229005483 (PaddleController_t893581120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PaddleController_Start_m3229005483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rb2d_5(L_0);
		return;
	}
}
// System.Void PaddleController::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t PaddleController_Update_m565646014_MetadataUsageId;
extern "C"  void PaddleController_Update_m565646014 (PaddleController_t893581120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PaddleController_Update_m565646014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t2243707580  L_3 = Camera_ScreenToWorldPoint_m929392728(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_1();
		__this->set_mouseDownPosX_2(L_4);
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_x_1();
		__this->set_onTouchPosX_3(L_7);
		__this->set_touched_4((bool)1);
	}

IL_0048:
	{
		bool L_8 = __this->get_touched_4();
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetMouseButton_m464100923(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		Camera_t189460977 * L_10 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_11 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t2243707580  L_12 = Camera_ScreenToWorldPoint_m929392728(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = (&V_3)->get_x_1();
		V_2 = L_13;
		float L_14 = __this->get_mouseDownPosX_2();
		float L_15 = V_2;
		PaddleController_HandleDeltaX_m171461160(__this, ((float)((float)L_14-(float)L_15)), /*hidden argument*/NULL);
	}

IL_0084:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetMouseButtonUp_m1275967966(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009d;
		}
	}
	{
		__this->set_movingLeft_6((bool)0);
		__this->set_movingRight_7((bool)0);
	}

IL_009d:
	{
		return;
	}
}
// System.Void PaddleController::HandleDeltaX(System.Single)
extern "C"  void PaddleController_HandleDeltaX_m171461160 (PaddleController_t893581120 * __this, float ___dX0, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = ___dX0;
		__this->set_movingLeft_6((bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0));
		bool L_1 = __this->get_movingLeft_6();
		__this->set_movingRight_7((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_y_2();
		V_0 = L_4;
		Rigidbody2D_t502193897 * L_5 = __this->get_rb2d_5();
		float L_6 = __this->get_onTouchPosX_3();
		float L_7 = ___dX0;
		float L_8 = V_0;
		Vector3_t2243707580  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2638739322(&L_9, ((float)((float)L_6-(float)L_7)), L_8, (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_10 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_MovePosition_m2716592358(L_5, L_10, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
