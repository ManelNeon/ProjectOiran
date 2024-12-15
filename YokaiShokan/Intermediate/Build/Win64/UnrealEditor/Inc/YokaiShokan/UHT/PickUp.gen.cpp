// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/PickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALevelRandomizer_NoRegister();
YOKAISHOKAN_API UClass* Z_Construct_UClass_APickUp();
YOKAISHOKAN_API UClass* Z_Construct_UClass_APickUp_NoRegister();
// End Cross Module References

// Begin Class APickUp Function GetLevelRandomizer
struct Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics
{
	struct PickUp_eventGetLevelRandomizer_Parms
	{
		ALevelRandomizer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PickUp Functions" },
		{ "ModuleRelativePath", "PickUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUp_eventGetLevelRandomizer_Parms, ReturnValue), Z_Construct_UClass_ALevelRandomizer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUp, nullptr, "GetLevelRandomizer", nullptr, nullptr, Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::PickUp_eventGetLevelRandomizer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::PickUp_eventGetLevelRandomizer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickUp_GetLevelRandomizer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickUp_GetLevelRandomizer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickUp::execGetLevelRandomizer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALevelRandomizer**)Z_Param__Result=P_THIS->GetLevelRandomizer();
	P_NATIVE_END;
}
// End Class APickUp Function GetLevelRandomizer

// Begin Class APickUp
void APickUp::StaticRegisterNativesAPickUp()
{
	UClass* Class = APickUp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLevelRandomizer", &APickUp::execGetLevelRandomizer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickUp);
UClass* Z_Construct_UClass_APickUp_NoRegister()
{
	return APickUp::StaticClass();
}
struct Z_Construct_UClass_APickUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickUp.h" },
		{ "ModuleRelativePath", "PickUp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUp_GetLevelRandomizer, "GetLevelRandomizer" }, // 2538141419
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUp_Statics::ClassParams = {
	&APickUp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickUp()
{
	if (!Z_Registration_Info_UClass_APickUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUp.OuterSingleton, Z_Construct_UClass_APickUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickUp.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<APickUp>()
{
	return APickUp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickUp);
APickUp::~APickUp() {}
// End Class APickUp

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PickUp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickUp, APickUp::StaticClass, TEXT("APickUp"), &Z_Registration_Info_UClass_APickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUp), 1089867853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PickUp_h_2399484834(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_PickUp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
