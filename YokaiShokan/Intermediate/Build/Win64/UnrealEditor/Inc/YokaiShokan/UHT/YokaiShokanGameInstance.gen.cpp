// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/YokaiShokanGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYokaiShokanGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UYokaiShokanGameInstance();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UYokaiShokanGameInstance_NoRegister();
// End Cross Module References

// Begin Class UYokaiShokanGameInstance Function GetCurrentHealth
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics
{
	struct YokaiShokanGameInstance_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "DisplayName", "Get HP" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::YokaiShokanGameInstance_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::YokaiShokanGameInstance_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetCurrentHealth

// Begin Class UYokaiShokanGameInstance Function GetCurrentHealthPercentage
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics
{
	struct YokaiShokanGameInstance_eventGetCurrentHealthPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "DisplayName", "Get % HP" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetCurrentHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetCurrentHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::YokaiShokanGameInstance_eventGetCurrentHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::YokaiShokanGameInstance_eventGetCurrentHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetCurrentHealthPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealthPercentage();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetCurrentHealthPercentage

// Begin Class UYokaiShokanGameInstance
void UYokaiShokanGameInstance::StaticRegisterNativesUYokaiShokanGameInstance()
{
	UClass* Class = UYokaiShokanGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentHealth", &UYokaiShokanGameInstance::execGetCurrentHealth },
		{ "GetCurrentHealthPercentage", &UYokaiShokanGameInstance::execGetCurrentHealthPercentage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYokaiShokanGameInstance);
UClass* Z_Construct_UClass_UYokaiShokanGameInstance_NoRegister()
{
	return UYokaiShokanGameInstance::StaticClass();
}
struct Z_Construct_UClass_UYokaiShokanGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "YokaiShokanGameInstance.h" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth, "GetCurrentHealth" }, // 480227573
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage, "GetCurrentHealthPercentage" }, // 1430771872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYokaiShokanGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYokaiShokanGameInstance_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYokaiShokanGameInstance, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYokaiShokanGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYokaiShokanGameInstance_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYokaiShokanGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYokaiShokanGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYokaiShokanGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYokaiShokanGameInstance_Statics::ClassParams = {
	&UYokaiShokanGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYokaiShokanGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYokaiShokanGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYokaiShokanGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UYokaiShokanGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYokaiShokanGameInstance()
{
	if (!Z_Registration_Info_UClass_UYokaiShokanGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYokaiShokanGameInstance.OuterSingleton, Z_Construct_UClass_UYokaiShokanGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYokaiShokanGameInstance.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<UYokaiShokanGameInstance>()
{
	return UYokaiShokanGameInstance::StaticClass();
}
UYokaiShokanGameInstance::UYokaiShokanGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYokaiShokanGameInstance);
UYokaiShokanGameInstance::~UYokaiShokanGameInstance() {}
// End Class UYokaiShokanGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYokaiShokanGameInstance, UYokaiShokanGameInstance::StaticClass, TEXT("UYokaiShokanGameInstance"), &Z_Registration_Info_UClass_UYokaiShokanGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYokaiShokanGameInstance), 4147671064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_46924220(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_UnrealProjects_ProjectOiran_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
