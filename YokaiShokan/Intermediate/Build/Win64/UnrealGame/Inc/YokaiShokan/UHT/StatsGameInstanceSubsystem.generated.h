// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsGameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESkillPointAvailability : uint8;
#ifdef YOKAISHOKAN_StatsGameInstanceSubsystem_generated_h
#error "StatsGameInstanceSubsystem.generated.h already included, missing '#pragma once' in StatsGameInstanceSubsystem.h"
#endif
#define YOKAISHOKAN_StatsGameInstanceSubsystem_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveSkillPoints); \
	DECLARE_FUNCTION(execIncrementSkillPoints); \
	DECLARE_FUNCTION(execGetAmountOfSkillPoints); \
	DECLARE_FUNCTION(execSetSkillPointAvailability); \
	DECLARE_FUNCTION(execGetSkillPointAvailability); \
	DECLARE_FUNCTION(execIncrementPlayerLevel); \
	DECLARE_FUNCTION(execGetPlayerLevel); \
	DECLARE_FUNCTION(execIncreasePlayerDamage); \
	DECLARE_FUNCTION(execIncreasePlayerHealth); \
	DECLARE_FUNCTION(execGetDamageStat); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealthPercentage);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UStatsGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UStatsGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(UStatsGameInstanceSubsystem)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatsGameInstanceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatsGameInstanceSubsystem(UStatsGameInstanceSubsystem&&); \
	UStatsGameInstanceSubsystem(const UStatsGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsGameInstanceSubsystem) \
	NO_API virtual ~UStatsGameInstanceSubsystem();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_18_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class UStatsGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h


#define FOREACH_ENUM_ESKILLPOINTAVAILABILITY(op) \
	op(ESkillPointAvailability::AVAILABLE) \
	op(ESkillPointAvailability::DISABLED) \
	op(ESkillPointAvailability::ACQUIRED) \
	op(ESkillPointAvailability::TOTAL_AVAILABILITY) 

enum class ESkillPointAvailability : uint8;
template<> struct TIsUEnumClass<ESkillPointAvailability> { enum { Value = true }; };
template<> YOKAISHOKAN_API UEnum* StaticEnum<ESkillPointAvailability>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
