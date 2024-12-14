// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YokaiShokanGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECurrentLevel : uint8;
enum class ERewards : uint8;
#ifdef YOKAISHOKAN_YokaiShokanGameInstance_generated_h
#error "YokaiShokanGameInstance.generated.h already included, missing '#pragma once' in YokaiShokanGameInstance.h"
#endif
#define YOKAISHOKAN_YokaiShokanGameInstance_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDifferentReward); \
	DECLARE_FUNCTION(execSetIsInsideRoguelite); \
	DECLARE_FUNCTION(execSetCurrentLevel); \
	DECLARE_FUNCTION(execGetCurrentLevel); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealthPercentage);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYokaiShokanGameInstance(); \
	friend struct Z_Construct_UClass_UYokaiShokanGameInstance_Statics; \
public: \
	DECLARE_CLASS(UYokaiShokanGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(UYokaiShokanGameInstance)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYokaiShokanGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UYokaiShokanGameInstance(UYokaiShokanGameInstance&&); \
	UYokaiShokanGameInstance(const UYokaiShokanGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYokaiShokanGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYokaiShokanGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYokaiShokanGameInstance) \
	NO_API virtual ~UYokaiShokanGameInstance();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_27_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_30_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class UYokaiShokanGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h


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
