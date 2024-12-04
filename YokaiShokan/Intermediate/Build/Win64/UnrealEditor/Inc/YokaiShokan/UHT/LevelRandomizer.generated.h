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
enum class ERewards : uint8;
#ifdef YOKAISHOKAN_LevelRandomizer_generated_h
#error "LevelRandomizer.generated.h already included, missing '#pragma once' in LevelRandomizer.h"
#endif
#define YOKAISHOKAN_LevelRandomizer_generated_h

#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnEnemies); \
	DECLARE_FUNCTION(execSetCurrentReward); \
	DECLARE_FUNCTION(execRandomizeReward); \
	DECLARE_FUNCTION(execRandomizeLevel);


#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelRandomizer(); \
	friend struct Z_Construct_UClass_ALevelRandomizer_Statics; \
public: \
	DECLARE_CLASS(ALevelRandomizer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(ALevelRandomizer)


#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALevelRandomizer(ALevelRandomizer&&); \
	ALevelRandomizer(const ALevelRandomizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelRandomizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelRandomizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelRandomizer) \
	NO_API virtual ~ALevelRandomizer();


#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_26_PROLOG
#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_29_INCLASS_NO_PURE_DECLS \
	FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class ALevelRandomizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h


#define FOREACH_ENUM_ECURRENTLEVEL(op) \
	op(ECurrentLevel::FIRST_LEVEL) \
	op(ECurrentLevel::SECOND_LEVEL) \
	op(ECurrentLevel::TOTAL_LEVEL) 

enum class ECurrentLevel : uint8;
template<> struct TIsUEnumClass<ECurrentLevel> { enum { Value = true }; };
template<> YOKAISHOKAN_API UEnum* StaticEnum<ECurrentLevel>();

#define FOREACH_ENUM_EREWARDS(op) \
	op(ERewards::HEALTH) \
	op(ERewards::SKILL_POINTS) \
	op(ERewards::LORE_ITEM) \
	op(ERewards::TOTAL_REWARDS) 

enum class ERewards : uint8;
template<> struct TIsUEnumClass<ERewards> { enum { Value = true }; };
template<> YOKAISHOKAN_API UEnum* StaticEnum<ERewards>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
