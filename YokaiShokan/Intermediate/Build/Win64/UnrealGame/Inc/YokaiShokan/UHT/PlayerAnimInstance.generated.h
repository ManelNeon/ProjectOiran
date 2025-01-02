// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECharacterState : uint8;
#ifdef YOKAISHOKAN_PlayerAnimInstance_generated_h
#error "PlayerAnimInstance.generated.h already included, missing '#pragma once' in PlayerAnimInstance.h"
#endif
#define YOKAISHOKAN_PlayerAnimInstance_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCurrentState); \
	DECLARE_FUNCTION(execGetCurrentState);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerAnimInstance(UPlayerAnimInstance&&); \
	UPlayerAnimInstance(const UPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInstance) \
	NO_API virtual ~UPlayerAnimInstance();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_20_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class UPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::EMPTY_STATE) \
	op(ECharacterState::IDLE_STATE) \
	op(ECharacterState::RUNNING_STATE) \
	op(ECharacterState::ATTACK_STATE) \
	op(ECharacterState::SPECIALATTACK_STATE) \
	op(ECharacterState::TOTAL_STATE) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> YOKAISHOKAN_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
