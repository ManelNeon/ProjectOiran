// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/PlayerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
YOKAISHOKAN_API UEnum* Z_Construct_UEnum_YokaiShokan_ECharacterState();
// End Cross Module References

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YokaiShokan_ECharacterState, (UObject*)Z_Construct_UPackage__Script_YokaiShokan(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> YOKAISHOKAN_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_YokaiShokan_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ATTACK_STATE.Name", "ECharacterState::ATTACK_STATE" },
		{ "BlueprintType", "true" },
		{ "EMPTY_STATE.Name", "ECharacterState::EMPTY_STATE" },
		{ "IDLE_STATE.Name", "ECharacterState::IDLE_STATE" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
		{ "RUNNING_STATE.Name", "ECharacterState::RUNNING_STATE" },
		{ "SPECIALATTACK_STATE.Name", "ECharacterState::SPECIALATTACK_STATE" },
		{ "TOTAL_STATE.Name", "ECharacterState::TOTAL_STATE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::EMPTY_STATE", (int64)ECharacterState::EMPTY_STATE },
		{ "ECharacterState::IDLE_STATE", (int64)ECharacterState::IDLE_STATE },
		{ "ECharacterState::RUNNING_STATE", (int64)ECharacterState::RUNNING_STATE },
		{ "ECharacterState::ATTACK_STATE", (int64)ECharacterState::ATTACK_STATE },
		{ "ECharacterState::SPECIALATTACK_STATE", (int64)ECharacterState::SPECIALATTACK_STATE },
		{ "ECharacterState::TOTAL_STATE", (int64)ECharacterState::TOTAL_STATE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YokaiShokan_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YokaiShokan,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_YokaiShokan_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YokaiShokan_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YokaiShokan_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_YokaiShokan_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Class UPlayerAnimInstance Function GetCurrentState
struct Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics
{
	struct PlayerAnimInstance_eventGetCurrentState_Parms
	{
		ECharacterState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Player Animation Blueprint Functions" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAnimInstance_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ECharacterState, METADATA_PARAMS(0, nullptr) }; // 1328165004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "GetCurrentState", nullptr, nullptr, Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::PlayerAnimInstance_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::PlayerAnimInstance_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAnimInstance::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECharacterState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// End Class UPlayerAnimInstance Function GetCurrentState

// Begin Class UPlayerAnimInstance Function SetCurrentState
struct Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics
{
	struct PlayerAnimInstance_eventSetCurrentState_Parms
	{
		ECharacterState state;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Animation Blueprint Functions" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAnimInstance_eventSetCurrentState_Parms, state), Z_Construct_UEnum_YokaiShokan_ECharacterState, METADATA_PARAMS(0, nullptr) }; // 1328165004
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::NewProp_state_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::NewProp_state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "SetCurrentState", nullptr, nullptr, Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::PlayerAnimInstance_eventSetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::PlayerAnimInstance_eventSetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAnimInstance::execSetCurrentState)
{
	P_GET_ENUM(ECharacterState,Z_Param_state);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentState(ECharacterState(Z_Param_state));
	P_NATIVE_END;
}
// End Class UPlayerAnimInstance Function SetCurrentState

// Begin Class UPlayerAnimInstance
void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
{
	UClass* Class = UPlayerAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentState", &UPlayerAnimInstance::execGetCurrentState },
		{ "SetCurrentState", &UPlayerAnimInstance::execSetCurrentState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
{
	return UPlayerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInstance_GetCurrentState, "GetCurrentState" }, // 3979267617
		{ &Z_Construct_UFunction_UPlayerAnimInstance_SetCurrentState, "SetCurrentState" }, // 2209315270
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
	&UPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<UPlayerAnimInstance>()
{
	return UPlayerAnimInstance::StaticClass();
}
UPlayerAnimInstance::UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
UPlayerAnimInstance::~UPlayerAnimInstance() {}
// End Class UPlayerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1328165004U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 358553989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_3030366040(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PlayerAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
