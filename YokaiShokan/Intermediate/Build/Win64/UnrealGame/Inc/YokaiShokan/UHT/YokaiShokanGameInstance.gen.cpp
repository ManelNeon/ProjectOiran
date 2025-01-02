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

// Begin Class UYokaiShokanGameInstance Function GetIfIsFirstTimeInHub
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics
{
	struct YokaiShokanGameInstance_eventGetIfIsFirstTimeInHub_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Instance | General Functions" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YokaiShokanGameInstance_eventGetIfIsFirstTimeInHub_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YokaiShokanGameInstance_eventGetIfIsFirstTimeInHub_Parms), &Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetIfIsFirstTimeInHub", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::YokaiShokanGameInstance_eventGetIfIsFirstTimeInHub_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::YokaiShokanGameInstance_eventGetIfIsFirstTimeInHub_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetIfIsFirstTimeInHub)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIfIsFirstTimeInHub();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetIfIsFirstTimeInHub

// Begin Class UYokaiShokanGameInstance Function NoLongerFirstTimeInHub
struct Z_Construct_UFunction_UYokaiShokanGameInstance_NoLongerFirstTimeInHub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Instance | General Functions" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_NoLongerFirstTimeInHub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "NoLongerFirstTimeInHub", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_NoLongerFirstTimeInHub_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_NoLongerFirstTimeInHub_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_NoLongerFirstTimeInHub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_NoLongerFirstTimeInHub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execNoLongerFirstTimeInHub)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NoLongerFirstTimeInHub();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function NoLongerFirstTimeInHub

// Begin Class UYokaiShokanGameInstance
void UYokaiShokanGameInstance::StaticRegisterNativesUYokaiShokanGameInstance()
{
	UClass* Class = UYokaiShokanGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIfIsFirstTimeInHub", &UYokaiShokanGameInstance::execGetIfIsFirstTimeInHub },
		{ "NoLongerFirstTimeInHub", &UYokaiShokanGameInstance::execNoLongerFirstTimeInHub },
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
		{ "IncludePath", "YokaiShokanGameInstance.h" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetIfIsFirstTimeInHub, "GetIfIsFirstTimeInHub" }, // 3392939169
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_NoLongerFirstTimeInHub, "NoLongerFirstTimeInHub" }, // 3891244444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYokaiShokanGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYokaiShokanGameInstance, UYokaiShokanGameInstance::StaticClass, TEXT("UYokaiShokanGameInstance"), &Z_Registration_Info_UClass_UYokaiShokanGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYokaiShokanGameInstance), 1010189832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_3200656222(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
