#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Brick
struct Brick_t1619971827;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_Brick_BrickType3145222665.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// System.Void Brick::.ctor()
extern "C"  void Brick__ctor_m4067638188 (Brick_t1619971827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Brick::getColorBy(Brick/BrickType)
extern "C"  Color_t2020392075  Brick_getColorBy_m3957966976 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Brick::getPointsBy(Brick/BrickType)
extern "C"  int32_t Brick_getPointsBy_m3402534437 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Brick::Start()
extern "C"  void Brick_Start_m3679901112 (Brick_t1619971827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Brick::Update()
extern "C"  void Brick_Update_m1019641951 (Brick_t1619971827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Brick::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Brick_OnCollisionEnter2D_m965645190 (Brick_t1619971827 * __this, Collision2D_t1539500754 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
