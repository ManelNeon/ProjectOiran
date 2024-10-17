// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/YokaiShokanGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYokaiShokanGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanGameMode();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanGameMode_NoRegister();
// End Cross Module References

// Begin Class AYokaiShokanGameMode
void AYokaiShokanGameMode::StaticRegisterNativesAYokaiShokanGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYokaiShokanGameMode);
UClass* Z_Construct_UClass_AYokaiShokanGameMode_NoRegister()
{
	return AYokaiShokanGameMode::StaticClass();
}
struct Z_Construct_UClass_AYokaiShokanGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "YokaiShokanGameMode.h" },
		{ "ModuleRelativePath", "YokaiShokanGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYokaiShokanGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AYokaiShokanGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYokaiShokanGameMode_Statics::ClassParams = {
	&AYokaiShokanGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AYokaiShokanGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYokaiShokanGameMode()
{
	if (!Z_Registration_Info_UClass_AYokaiShokanGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYokaiShokanGameMode.OuterSingleton, Z_Construct_UClass_AYokaiShokanGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYokaiShokanGameMode.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<AYokaiShokanGameMode>()
{
	return AYokaiShokanGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYokaiShokanGameMode);
AYokaiShokanGameMode::~AYokaiShokanGameMode() {}
// End Class AYokaiShokanGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_DesigndeJogosDigitais_DJD_3ano_YokaiShokan_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYokaiShokanGameMode, AYokaiShokanGameMode::StaticClass, TEXT("AYokaiShokanGameMode"), &Z_Registration_Info_UClass_AYokaiShokanGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYokaiShokanGameMode), 730286679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DesigndeJogosDigitais_DJD_3ano_YokaiShokan_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameMode_h_1261145618(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_DesigndeJogosDigitais_DJD_3ano_YokaiShokan_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DesigndeJogosDigitais_DJD_3ano_YokaiShokan_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
