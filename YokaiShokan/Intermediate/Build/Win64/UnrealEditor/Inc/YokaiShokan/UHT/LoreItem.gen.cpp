// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/LoreItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoreItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALoreItem();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALoreItem_NoRegister();
// End Cross Module References

// Begin Class ALoreItem
void ALoreItem::StaticRegisterNativesALoreItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALoreItem);
UClass* Z_Construct_UClass_ALoreItem_NoRegister()
{
	return ALoreItem::StaticClass();
}
struct Z_Construct_UClass_ALoreItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LoreItem.h" },
		{ "ModuleRelativePath", "LoreItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALoreItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALoreItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALoreItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALoreItem_Statics::ClassParams = {
	&ALoreItem::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALoreItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ALoreItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALoreItem()
{
	if (!Z_Registration_Info_UClass_ALoreItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALoreItem.OuterSingleton, Z_Construct_UClass_ALoreItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALoreItem.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<ALoreItem>()
{
	return ALoreItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALoreItem);
ALoreItem::~ALoreItem() {}
// End Class ALoreItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LoreItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALoreItem, ALoreItem::StaticClass, TEXT("ALoreItem"), &Z_Registration_Info_UClass_ALoreItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALoreItem), 3243730047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LoreItem_h_800689751(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LoreItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LoreItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
