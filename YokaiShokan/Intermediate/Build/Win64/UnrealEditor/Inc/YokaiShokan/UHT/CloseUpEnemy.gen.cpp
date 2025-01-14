// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/CloseUpEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloseUpEnemy() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ACloseUpEnemy();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ACloseUpEnemy_NoRegister();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanEnemy();
// End Cross Module References

// Begin Class ACloseUpEnemy Function BP_SetCanAttack
static FName NAME_ACloseUpEnemy_BP_SetCanAttack = FName(TEXT("BP_SetCanAttack"));
void ACloseUpEnemy::BP_SetCanAttack()
{
	ProcessEvent(FindFunctionChecked(NAME_ACloseUpEnemy_BP_SetCanAttack),NULL);
}
struct Z_Construct_UFunction_ACloseUpEnemy_BP_SetCanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "CloseUpEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACloseUpEnemy_BP_SetCanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACloseUpEnemy, nullptr, "BP_SetCanAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACloseUpEnemy_BP_SetCanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACloseUpEnemy_BP_SetCanAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACloseUpEnemy_BP_SetCanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACloseUpEnemy_BP_SetCanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ACloseUpEnemy Function BP_SetCanAttack

// Begin Class ACloseUpEnemy
void ACloseUpEnemy::StaticRegisterNativesACloseUpEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACloseUpEnemy);
UClass* Z_Construct_UClass_ACloseUpEnemy_NoRegister()
{
	return ACloseUpEnemy::StaticClass();
}
struct Z_Construct_UClass_ACloseUpEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CloseUpEnemy.h" },
		{ "ModuleRelativePath", "CloseUpEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACloseUpEnemy_BP_SetCanAttack, "BP_SetCanAttack" }, // 2198692518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACloseUpEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACloseUpEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AYokaiShokanEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACloseUpEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACloseUpEnemy_Statics::ClassParams = {
	&ACloseUpEnemy::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACloseUpEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ACloseUpEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACloseUpEnemy()
{
	if (!Z_Registration_Info_UClass_ACloseUpEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACloseUpEnemy.OuterSingleton, Z_Construct_UClass_ACloseUpEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACloseUpEnemy.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<ACloseUpEnemy>()
{
	return ACloseUpEnemy::StaticClass();
}
ACloseUpEnemy::ACloseUpEnemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACloseUpEnemy);
ACloseUpEnemy::~ACloseUpEnemy() {}
// End Class ACloseUpEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_CloseUpEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACloseUpEnemy, ACloseUpEnemy::StaticClass, TEXT("ACloseUpEnemy"), &Z_Registration_Info_UClass_ACloseUpEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACloseUpEnemy), 3227170864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_CloseUpEnemy_h_2367718058(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_CloseUpEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_CloseUpEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
