// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelRandomizer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef YOKAISHOKAN_LevelRandomizer_generated_h
#error "LevelRandomizer.generated.h already included, missing '#pragma once' in LevelRandomizer.h"
#endif
#define YOKAISHOKAN_LevelRandomizer_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetZoneDividerNull); \
	DECLARE_FUNCTION(execGetZoneDivider); \
	DECLARE_FUNCTION(execSpawnEnemies); \
	DECLARE_FUNCTION(execSetANewEnemyToAttack); \
	DECLARE_FUNCTION(execIsLastEnemy); \
	DECLARE_FUNCTION(execLevelEnder); \
	DECLARE_FUNCTION(execWaveEnder); \
	DECLARE_FUNCTION(execDeleteEnemyFromList);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_CALLBACK_WRAPPERS
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelRandomizer(); \
	friend struct Z_Construct_UClass_ALevelRandomizer_Statics; \
public: \
	DECLARE_CLASS(ALevelRandomizer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(ALevelRandomizer)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALevelRandomizer(ALevelRandomizer&&); \
	ALevelRandomizer(const ALevelRandomizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelRandomizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelRandomizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelRandomizer) \
	NO_API virtual ~ALevelRandomizer();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_9_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_CALLBACK_WRAPPERS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class ALevelRandomizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
