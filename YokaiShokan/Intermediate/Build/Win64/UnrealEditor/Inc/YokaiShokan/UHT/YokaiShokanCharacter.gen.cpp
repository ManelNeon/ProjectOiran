// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/YokaiShokanCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYokaiShokanCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanCharacter();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanCharacter_NoRegister();
YOKAISHOKAN_API UEnum* Z_Construct_UEnum_YokaiShokan_AttackState();
// End Cross Module References

// Begin Enum AttackState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AttackState;
static UEnum* AttackState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AttackState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AttackState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YokaiShokan_AttackState, (UObject*)Z_Construct_UPackage__Script_YokaiShokan(), TEXT("AttackState"));
	}
	return Z_Registration_Info_UEnum_AttackState.OuterSingleton;
}
template<> YOKAISHOKAN_API UEnum* StaticEnum<AttackState>()
{
	return AttackState_StaticEnum();
}
struct Z_Construct_UEnum_YokaiShokan_AttackState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HEAVY_ATTACK_DAGGER.Name", "AttackState::HEAVY_ATTACK_DAGGER" },
		{ "LIGHT_ATTACK_DAGGER.Name", "AttackState::LIGHT_ATTACK_DAGGER" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
		{ "SPECIAL_ATTACK_ONE_DAGGER.Name", "AttackState::SPECIAL_ATTACK_ONE_DAGGER" },
		{ "SPECIAL_ATTACK_TWO_DAGGER.Name", "AttackState::SPECIAL_ATTACK_TWO_DAGGER" },
		{ "TOTAL_ATTACKS.Name", "AttackState::TOTAL_ATTACKS" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AttackState::LIGHT_ATTACK_DAGGER", (int64)AttackState::LIGHT_ATTACK_DAGGER },
		{ "AttackState::HEAVY_ATTACK_DAGGER", (int64)AttackState::HEAVY_ATTACK_DAGGER },
		{ "AttackState::SPECIAL_ATTACK_ONE_DAGGER", (int64)AttackState::SPECIAL_ATTACK_ONE_DAGGER },
		{ "AttackState::SPECIAL_ATTACK_TWO_DAGGER", (int64)AttackState::SPECIAL_ATTACK_TWO_DAGGER },
		{ "AttackState::TOTAL_ATTACKS", (int64)AttackState::TOTAL_ATTACKS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YokaiShokan_AttackState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YokaiShokan,
	nullptr,
	"AttackState",
	"AttackState",
	Z_Construct_UEnum_YokaiShokan_AttackState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_AttackState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_AttackState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YokaiShokan_AttackState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YokaiShokan_AttackState()
{
	if (!Z_Registration_Info_UEnum_AttackState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AttackState.InnerSingleton, Z_Construct_UEnum_YokaiShokan_AttackState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AttackState.InnerSingleton;
}
// End Enum AttackState

// Begin Class AYokaiShokanCharacter Function BP_PlayerDeath
static FName NAME_AYokaiShokanCharacter_BP_PlayerDeath = FName(TEXT("BP_PlayerDeath"));
void AYokaiShokanCharacter::BP_PlayerDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_AYokaiShokanCharacter_BP_PlayerDeath),NULL);
}
struct Z_Construct_UFunction_AYokaiShokanCharacter_BP_PlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial Enemy | Functions" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanCharacter_BP_PlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanCharacter, nullptr, "BP_PlayerDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_BP_PlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanCharacter_BP_PlayerDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AYokaiShokanCharacter_BP_PlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanCharacter_BP_PlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AYokaiShokanCharacter Function BP_PlayerDeath

// Begin Class AYokaiShokanCharacter Function DamagePlayer
struct Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics
{
	struct YokaiShokanCharacter_eventDamagePlayer_Parms
	{
		float damage;
		FVector direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanCharacter_eventDamagePlayer_Parms, damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanCharacter_eventDamagePlayer_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::NewProp_direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanCharacter, nullptr, "DamagePlayer", nullptr, nullptr, Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::YokaiShokanCharacter_eventDamagePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::YokaiShokanCharacter_eventDamagePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYokaiShokanCharacter::execDamagePlayer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
	P_GET_STRUCT(FVector,Z_Param_direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DamagePlayer(Z_Param_damage,Z_Param_direction);
	P_NATIVE_END;
}
// End Class AYokaiShokanCharacter Function DamagePlayer

// Begin Class AYokaiShokanCharacter Function GetDashAvailability
struct Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics
{
	struct YokaiShokanCharacter_eventGetDashAvailability_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Dash Movement" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YokaiShokanCharacter_eventGetDashAvailability_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YokaiShokanCharacter_eventGetDashAvailability_Parms), &Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanCharacter, nullptr, "GetDashAvailability", nullptr, nullptr, Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::YokaiShokanCharacter_eventGetDashAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::YokaiShokanCharacter_eventGetDashAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYokaiShokanCharacter::execGetDashAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDashAvailability();
	P_NATIVE_END;
}
// End Class AYokaiShokanCharacter Function GetDashAvailability

// Begin Class AYokaiShokanCharacter Function GetIsDashing
struct Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics
{
	struct YokaiShokanCharacter_eventGetIsDashing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Dash Movement" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YokaiShokanCharacter_eventGetIsDashing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YokaiShokanCharacter_eventGetIsDashing_Parms), &Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanCharacter, nullptr, "GetIsDashing", nullptr, nullptr, Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::YokaiShokanCharacter_eventGetIsDashing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::YokaiShokanCharacter_eventGetIsDashing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYokaiShokanCharacter::execGetIsDashing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsDashing();
	P_NATIVE_END;
}
// End Class AYokaiShokanCharacter Function GetIsDashing

// Begin Class AYokaiShokanCharacter Function HealPlayer
struct Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics
{
	struct YokaiShokanCharacter_eventHealPlayer_Parms
	{
		float amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanCharacter_eventHealPlayer_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanCharacter, nullptr, "HealPlayer", nullptr, nullptr, Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::YokaiShokanCharacter_eventHealPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::YokaiShokanCharacter_eventHealPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYokaiShokanCharacter::execHealPlayer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealPlayer(Z_Param_amount);
	P_NATIVE_END;
}
// End Class AYokaiShokanCharacter Function HealPlayer

// Begin Class AYokaiShokanCharacter
void AYokaiShokanCharacter::StaticRegisterNativesAYokaiShokanCharacter()
{
	UClass* Class = AYokaiShokanCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DamagePlayer", &AYokaiShokanCharacter::execDamagePlayer },
		{ "GetDashAvailability", &AYokaiShokanCharacter::execGetDashAvailability },
		{ "GetIsDashing", &AYokaiShokanCharacter::execGetIsDashing },
		{ "HealPlayer", &AYokaiShokanCharacter::execHealPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYokaiShokanCharacter);
UClass* Z_Construct_UClass_AYokaiShokanCharacter_NoRegister()
{
	return AYokaiShokanCharacter::StaticClass();
}
struct Z_Construct_UClass_AYokaiShokanCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "YokaiShokanCharacter.h" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dash Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dash Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialOneAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special One Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special One Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialTwoAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special Two Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special Two Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds | Input" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagedSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sounds | Input" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashMultiplier_MetaData[] = {
		{ "Category", "Character | Dash Movement" },
		{ "DisplayName", "Dash Force" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[] = {
		{ "Category", "Character | Dash Movement" },
		{ "DisplayName", "Dash Cooldown" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashJumpNerf_MetaData[] = {
		{ "Category", "Character | Dash Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Because the dash is that much more powerful when jumping, this will nerf it\n" },
#endif
		{ "DisplayName", "Dash Jump Nerf" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Because the dash is that much more powerful when jumping, this will nerf it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialOneAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialTwoAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashJumpNerf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AYokaiShokanCharacter_BP_PlayerDeath, "BP_PlayerDeath" }, // 2548604851
		{ &Z_Construct_UFunction_AYokaiShokanCharacter_DamagePlayer, "DamagePlayer" }, // 171836236
		{ &Z_Construct_UFunction_AYokaiShokanCharacter_GetDashAvailability, "GetDashAvailability" }, // 3140069004
		{ &Z_Construct_UFunction_AYokaiShokanCharacter_GetIsDashing, "GetIsDashing" }, // 1284812234
		{ &Z_Construct_UFunction_AYokaiShokanCharacter_HealPlayer, "HealPlayer" }, // 3961645477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYokaiShokanCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashAction = { "DashAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashAction_MetaData), NewProp_DashAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_SpecialOneAction = { "SpecialOneAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, SpecialOneAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialOneAction_MetaData), NewProp_SpecialOneAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_SpecialTwoAction = { "SpecialTwoAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, SpecialTwoAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialTwoAction_MetaData), NewProp_SpecialTwoAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashSound = { "DashSound", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashSound_MetaData), NewProp_DashSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DamagedSound = { "DamagedSound", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DamagedSound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagedSound_MetaData), NewProp_DamagedSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashMultiplier = { "DashMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashMultiplier_MetaData), NewProp_DashMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashCooldown = { "DashCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashCooldown_MetaData), NewProp_DashCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashJumpNerf = { "DashJumpNerf", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashJumpNerf), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashJumpNerf_MetaData), NewProp_DashJumpNerf_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AYokaiShokanCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_SpecialOneAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_SpecialTwoAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DamagedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashJumpNerf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AYokaiShokanCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::ClassParams = {
	&AYokaiShokanCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AYokaiShokanCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AYokaiShokanCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYokaiShokanCharacter()
{
	if (!Z_Registration_Info_UClass_AYokaiShokanCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYokaiShokanCharacter.OuterSingleton, Z_Construct_UClass_AYokaiShokanCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYokaiShokanCharacter.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<AYokaiShokanCharacter>()
{
	return AYokaiShokanCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYokaiShokanCharacter);
AYokaiShokanCharacter::~AYokaiShokanCharacter() {}
// End Class AYokaiShokanCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AttackState_StaticEnum, TEXT("AttackState"), &Z_Registration_Info_UEnum_AttackState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3798270245U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYokaiShokanCharacter, AYokaiShokanCharacter::StaticClass, TEXT("AYokaiShokanCharacter"), &Z_Registration_Info_UClass_AYokaiShokanCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYokaiShokanCharacter), 3363654339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_333411990(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
