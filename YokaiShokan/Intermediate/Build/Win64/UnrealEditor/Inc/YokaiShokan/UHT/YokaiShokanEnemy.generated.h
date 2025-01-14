// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YokaiShokanEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelRandomizer;
class UUserWidget;
#ifdef YOKAISHOKAN_YokaiShokanEnemy_generated_h
#error "YokaiShokanEnemy.generated.h already included, missing '#pragma once' in YokaiShokanEnemy.h"
#endif
#define YOKAISHOKAN_YokaiShokanEnemy_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDamageValue); \
	DECLARE_FUNCTION(execDamageThis); \
	DECLARE_FUNCTION(execSetMarkerWidget); \
	DECLARE_FUNCTION(execGetLevelRandomizer);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYokaiShokanEnemy(); \
	friend struct Z_Construct_UClass_AYokaiShokanEnemy_Statics; \
public: \
	DECLARE_CLASS(AYokaiShokanEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(AYokaiShokanEnemy)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYokaiShokanEnemy(AYokaiShokanEnemy&&); \
	AYokaiShokanEnemy(const AYokaiShokanEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYokaiShokanEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYokaiShokanEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYokaiShokanEnemy) \
	NO_API virtual ~AYokaiShokanEnemy();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_11_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class AYokaiShokanEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
