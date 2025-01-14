// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/BaseEnemyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UBaseEnemyAnimInstance();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UBaseEnemyAnimInstance_NoRegister();
YOKAISHOKAN_API UEnum* Z_Construct_UEnum_YokaiShokan_EEnemyState();
// End Cross Module References

// Begin Enum EEnemyState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
static UEnum* EEnemyState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YokaiShokan_EEnemyState, (UObject*)Z_Construct_UPackage__Script_YokaiShokan(), TEXT("EEnemyState"));
	}
	return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
}
template<> YOKAISHOKAN_API UEnum* StaticEnum<EEnemyState>()
{
	return EEnemyState_StaticEnum();
}
struct Z_Construct_UEnum_YokaiShokan_EEnemyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ATTACK_STATE.Name", "EEnemyState::ATTACK_STATE" },
		{ "BlueprintType", "true" },
		{ "DEAD_STATE.Name", "EEnemyState::DEAD_STATE" },
		{ "HIT_STATE.Name", "EEnemyState::HIT_STATE" },
		{ "LEFT_STRAFE_STATE.Name", "EEnemyState::LEFT_STRAFE_STATE" },
		{ "ModuleRelativePath", "BaseEnemyAnimInstance.h" },
		{ "RIGHT_STRAFE_STATE.Name", "EEnemyState::RIGHT_STRAFE_STATE" },
		{ "ROARING_STATE.Name", "EEnemyState::ROARING_STATE" },
		{ "RUNNING_STATE.Name", "EEnemyState::RUNNING_STATE" },
		{ "TOTAL_STATE.Name", "EEnemyState::TOTAL_STATE" },
		{ "WALKING_BACKWARDS_STATE.Name", "EEnemyState::WALKING_BACKWARDS_STATE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnemyState::ROARING_STATE", (int64)EEnemyState::ROARING_STATE },
		{ "EEnemyState::RUNNING_STATE", (int64)EEnemyState::RUNNING_STATE },
		{ "EEnemyState::RIGHT_STRAFE_STATE", (int64)EEnemyState::RIGHT_STRAFE_STATE },
		{ "EEnemyState::LEFT_STRAFE_STATE", (int64)EEnemyState::LEFT_STRAFE_STATE },
		{ "EEnemyState::WALKING_BACKWARDS_STATE", (int64)EEnemyState::WALKING_BACKWARDS_STATE },
		{ "EEnemyState::ATTACK_STATE", (int64)EEnemyState::ATTACK_STATE },
		{ "EEnemyState::HIT_STATE", (int64)EEnemyState::HIT_STATE },
		{ "EEnemyState::DEAD_STATE", (int64)EEnemyState::DEAD_STATE },
		{ "EEnemyState::TOTAL_STATE", (int64)EEnemyState::TOTAL_STATE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YokaiShokan_EEnemyState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YokaiShokan,
	nullptr,
	"EEnemyState",
	"EEnemyState",
	Z_Construct_UEnum_YokaiShokan_EEnemyState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_EEnemyState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YokaiShokan_EEnemyState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YokaiShokan_EEnemyState()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_YokaiShokan_EEnemyState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
}
// End Enum EEnemyState

// Begin Class UBaseEnemyAnimInstance Function GetCurrentState
struct Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics
{
	struct BaseEnemyAnimInstance_eventGetCurrentState_Parms
	{
		EEnemyState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Enemy Animation Blueprint Functions" },
		{ "ModuleRelativePath", "BaseEnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemyAnimInstance_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_EEnemyState, METADATA_PARAMS(0, nullptr) }; // 3425015096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseEnemyAnimInstance, nullptr, "GetCurrentState", nullptr, nullptr, Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::BaseEnemyAnimInstance_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::BaseEnemyAnimInstance_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseEnemyAnimInstance::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EEnemyState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// End Class UBaseEnemyAnimInstance Function GetCurrentState

// Begin Class UBaseEnemyAnimInstance Function SetCurrentState
struct Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics
{
	struct BaseEnemyAnimInstance_eventSetCurrentState_Parms
	{
		EEnemyState state;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy Animation Blueprint Functions" },
		{ "ModuleRelativePath", "BaseEnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemyAnimInstance_eventSetCurrentState_Parms, state), Z_Construct_UEnum_YokaiShokan_EEnemyState, METADATA_PARAMS(0, nullptr) }; // 3425015096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::NewProp_state_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::NewProp_state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseEnemyAnimInstance, nullptr, "SetCurrentState", nullptr, nullptr, Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::BaseEnemyAnimInstance_eventSetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::BaseEnemyAnimInstance_eventSetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseEnemyAnimInstance::execSetCurrentState)
{
	P_GET_ENUM(EEnemyState,Z_Param_state);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentState(EEnemyState(Z_Param_state));
	P_NATIVE_END;
}
// End Class UBaseEnemyAnimInstance Function SetCurrentState

// Begin Class UBaseEnemyAnimInstance
void UBaseEnemyAnimInstance::StaticRegisterNativesUBaseEnemyAnimInstance()
{
	UClass* Class = UBaseEnemyAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentState", &UBaseEnemyAnimInstance::execGetCurrentState },
		{ "SetCurrentState", &UBaseEnemyAnimInstance::execSetCurrentState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseEnemyAnimInstance);
UClass* Z_Construct_UClass_UBaseEnemyAnimInstance_NoRegister()
{
	return UBaseEnemyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBaseEnemyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseEnemyAnimInstance.h" },
		{ "ModuleRelativePath", "BaseEnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__CurrentState_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "BaseEnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseEnemyAnimInstance_GetCurrentState, "GetCurrentState" }, // 1859583110
		{ &Z_Construct_UFunction_UBaseEnemyAnimInstance_SetCurrentState, "SetCurrentState" }, // 3143102089
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseEnemyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::NewProp__CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::NewProp__CurrentState = { "_CurrentState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseEnemyAnimInstance, _CurrentState), Z_Construct_UEnum_YokaiShokan_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__CurrentState_MetaData), NewProp__CurrentState_MetaData) }; // 3425015096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::NewProp__CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::NewProp__CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::ClassParams = {
	&UBaseEnemyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseEnemyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBaseEnemyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UBaseEnemyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseEnemyAnimInstance.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<UBaseEnemyAnimInstance>()
{
	return UBaseEnemyAnimInstance::StaticClass();
}
UBaseEnemyAnimInstance::UBaseEnemyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseEnemyAnimInstance);
UBaseEnemyAnimInstance::~UBaseEnemyAnimInstance() {}
// End Class UBaseEnemyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3425015096U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseEnemyAnimInstance, UBaseEnemyAnimInstance::StaticClass, TEXT("UBaseEnemyAnimInstance"), &Z_Registration_Info_UClass_UBaseEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseEnemyAnimInstance), 549486096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_4240549083(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_BaseEnemyAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
