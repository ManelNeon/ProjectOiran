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

// Begin Class UYokaiShokanGameInstance
void UYokaiShokanGameInstance::StaticRegisterNativesUYokaiShokanGameInstance()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UYokaiShokanGameInstance, UYokaiShokanGameInstance::StaticClass, TEXT("UYokaiShokanGameInstance"), &Z_Registration_Info_UClass_UYokaiShokanGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYokaiShokanGameInstance), 3865245905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_2843093806(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
