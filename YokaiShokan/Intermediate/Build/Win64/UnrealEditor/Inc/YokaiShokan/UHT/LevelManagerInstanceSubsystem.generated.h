// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelManagerInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECurrentLevel : uint8;
enum class ERewards : uint8;
#ifdef YOKAISHOKAN_LevelManagerInstanceSubsystem_generated_h
#error "LevelManagerInstanceSubsystem.generated.h already included, missing '#pragma once' in LevelManagerInstanceSubsystem.h"
#endif
#define YOKAISHOKAN_LevelManagerInstanceSubsystem_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsInsideRoguelite); \
	DECLARE_FUNCTION(execSetIsInsideRoguelite); \
	DECLARE_FUNCTION(execGetDifferentReward); \
	DECLARE_FUNCTION(execSetCurrentReward); \
	DECLARE_FUNCTION(execGetCurrentReward); \
	DECLARE_FUNCTION(execIncrementLevelCounter); \
	DECLARE_FUNCTION(execGetDifferentLevel); \
	DECLARE_FUNCTION(execSetCurrentLevel); \
	DECLARE_FUNCTION(execGetCurrentLevel);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelManagerInstanceSubsystem(); \
	friend struct Z_Construct_UClass_ULevelManagerInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULevelManagerInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(ULevelManagerInstanceSubsystem)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelManagerInstanceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelManagerInstanceSubsystem(ULevelManagerInstanceSubsystem&&); \
	ULevelManagerInstanceSubsystem(const ULevelManagerInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelManagerInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelManagerInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelManagerInstanceSubsystem) \
	NO_API virtual ~ULevelManagerInstanceSubsystem();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_26_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class ULevelManagerInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h


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
