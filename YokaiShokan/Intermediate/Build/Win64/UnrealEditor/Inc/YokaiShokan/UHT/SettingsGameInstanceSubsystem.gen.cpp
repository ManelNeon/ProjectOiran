// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/SettingsGameInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsGameInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_USettingsGameInstanceSubsystem();
YOKAISHOKAN_API UClass* Z_Construct_UClass_USettingsGameInstanceSubsystem_NoRegister();
// End Cross Module References

// Begin Class USettingsGameInstanceSubsystem
void USettingsGameInstanceSubsystem::StaticRegisterNativesUSettingsGameInstanceSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsGameInstanceSubsystem);
UClass* Z_Construct_UClass_USettingsGameInstanceSubsystem_NoRegister()
{
	return USettingsGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SettingsGameInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::ClassParams = {
	&USettingsGameInstanceSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingsGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_USettingsGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingsGameInstanceSubsystem.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<USettingsGameInstanceSubsystem>()
{
	return USettingsGameInstanceSubsystem::StaticClass();
}
USettingsGameInstanceSubsystem::USettingsGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsGameInstanceSubsystem);
USettingsGameInstanceSubsystem::~USettingsGameInstanceSubsystem() {}
// End Class USettingsGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_SettingsGameInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingsGameInstanceSubsystem, USettingsGameInstanceSubsystem::StaticClass, TEXT("USettingsGameInstanceSubsystem"), &Z_Registration_Info_UClass_USettingsGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsGameInstanceSubsystem), 2694134506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_SettingsGameInstanceSubsystem_h_1602995459(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_SettingsGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_SettingsGameInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
