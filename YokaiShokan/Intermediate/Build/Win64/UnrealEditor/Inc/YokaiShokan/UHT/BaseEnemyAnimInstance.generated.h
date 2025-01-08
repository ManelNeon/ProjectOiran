// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseEnemyAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEnemyState : uint8;
#ifdef YOKAISHOKAN_BaseEnemyAnimInstance_generated_h
#error "BaseEnemyAnimInstance.generated.h already included, missing '#pragma once' in BaseEnemyAnimInstance.h"
#endif
#define YOKAISHOKAN_BaseEnemyAnimInstance_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execGetCurrentState);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseEnemyAnimInstance(); \
	friend struct Z_Construct_UClass_UBaseEnemyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseEnemyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(UBaseEnemyAnimInstance)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseEnemyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseEnemyAnimInstance(UBaseEnemyAnimInstance&&); \
	UBaseEnemyAnimInstance(const UBaseEnemyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseEnemyAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseEnemyAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseEnemyAnimInstance) \
	NO_API virtual ~UBaseEnemyAnimInstance();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_22_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class UBaseEnemyAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::ROARING_STATE) \
	op(EEnemyState::RUNNING_STATE) \
	op(EEnemyState::RIGHT_STRAFE_STATE) \
	op(EEnemyState::LEFT_STRAFE_STATE) \
	op(EEnemyState::ATTACK_STATE) \
	op(EEnemyState::HIT_STATE) \
	op(EEnemyState::DEAD_STATE) \
	op(EEnemyState::TOTAL_STATE) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> YOKAISHOKAN_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
