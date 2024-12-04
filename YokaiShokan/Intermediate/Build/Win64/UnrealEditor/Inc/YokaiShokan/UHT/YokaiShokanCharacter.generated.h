// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YokaiShokanCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOKAISHOKAN_YokaiShokanCharacter_generated_h
#error "YokaiShokanCharacter.generated.h already included, missing '#pragma once' in YokaiShokanCharacter.h"
#endif
#define YOKAISHOKAN_YokaiShokanCharacter_generated_h

#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDamagePlayer); \
	DECLARE_FUNCTION(execHealPlayer); \
	DECLARE_FUNCTION(execGetDashAvailability);


#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYokaiShokanCharacter(); \
	friend struct Z_Construct_UClass_AYokaiShokanCharacter_Statics; \
public: \
	DECLARE_CLASS(AYokaiShokanCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(AYokaiShokanCharacter)


#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYokaiShokanCharacter(AYokaiShokanCharacter&&); \
	AYokaiShokanCharacter(const AYokaiShokanCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYokaiShokanCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYokaiShokanCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYokaiShokanCharacter) \
	NO_API virtual ~AYokaiShokanCharacter();


#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_29_PROLOG
#define FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_32_INCLASS_NO_PURE_DECLS \
	FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class AYokaiShokanCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h


#define FOREACH_ENUM_ATTACKSTATE(op) \
	op(AttackState::LIGHT_ATTACK_DAGGER) \
	op(AttackState::HEAVY_ATTACK_DAGGER) \
	op(AttackState::SPECIAL_ATTACK_ONE_DAGGER) \
	op(AttackState::SPECIAL_ATTACK_TWO_DAGGER) \
	op(AttackState::TOTAL_ATTACKS) 

enum class AttackState : uint8;
template<> struct TIsUEnumClass<AttackState> { enum { Value = true }; };
template<> YOKAISHOKAN_API UEnum* StaticEnum<AttackState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
