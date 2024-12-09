// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/YokaiShokanEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYokaiShokanEnemy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanEnemy();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanEnemy_NoRegister();
// End Cross Module References

// Begin Class AYokaiShokanEnemy
void AYokaiShokanEnemy::StaticRegisterNativesAYokaiShokanEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYokaiShokanEnemy);
UClass* Z_Construct_UClass_AYokaiShokanEnemy_NoRegister()
{
	return AYokaiShokanEnemy::StaticClass();
}
struct Z_Construct_UClass_AYokaiShokanEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "YokaiShokanEnemy.h" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYokaiShokanEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AYokaiShokanEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYokaiShokanEnemy_Statics::ClassParams = {
	&AYokaiShokanEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AYokaiShokanEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYokaiShokanEnemy()
{
	if (!Z_Registration_Info_UClass_AYokaiShokanEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYokaiShokanEnemy.OuterSingleton, Z_Construct_UClass_AYokaiShokanEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYokaiShokanEnemy.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<AYokaiShokanEnemy>()
{
	return AYokaiShokanEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYokaiShokanEnemy);
AYokaiShokanEnemy::~AYokaiShokanEnemy() {}
// End Class AYokaiShokanEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYokaiShokanEnemy, AYokaiShokanEnemy::StaticClass, TEXT("AYokaiShokanEnemy"), &Z_Registration_Info_UClass_AYokaiShokanEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYokaiShokanEnemy), 1356719266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_62597444(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
