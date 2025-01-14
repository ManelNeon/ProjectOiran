// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/FromAfarEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFromAfarEnemy() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AFromAfarEnemy();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AFromAfarEnemy_NoRegister();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanEnemy();
// End Cross Module References

// Begin Class AFromAfarEnemy
void AFromAfarEnemy::StaticRegisterNativesAFromAfarEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFromAfarEnemy);
UClass* Z_Construct_UClass_AFromAfarEnemy_NoRegister()
{
	return AFromAfarEnemy::StaticClass();
}
struct Z_Construct_UClass_AFromAfarEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FromAfarEnemy.h" },
		{ "ModuleRelativePath", "FromAfarEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFromAfarEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFromAfarEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AYokaiShokanEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFromAfarEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFromAfarEnemy_Statics::ClassParams = {
	&AFromAfarEnemy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFromAfarEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AFromAfarEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFromAfarEnemy()
{
	if (!Z_Registration_Info_UClass_AFromAfarEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFromAfarEnemy.OuterSingleton, Z_Construct_UClass_AFromAfarEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFromAfarEnemy.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<AFromAfarEnemy>()
{
	return AFromAfarEnemy::StaticClass();
}
AFromAfarEnemy::AFromAfarEnemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFromAfarEnemy);
AFromAfarEnemy::~AFromAfarEnemy() {}
// End Class AFromAfarEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_FromAfarEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFromAfarEnemy, AFromAfarEnemy::StaticClass, TEXT("AFromAfarEnemy"), &Z_Registration_Info_UClass_AFromAfarEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFromAfarEnemy), 2142907810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_FromAfarEnemy_h_663422422(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_FromAfarEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_FromAfarEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
