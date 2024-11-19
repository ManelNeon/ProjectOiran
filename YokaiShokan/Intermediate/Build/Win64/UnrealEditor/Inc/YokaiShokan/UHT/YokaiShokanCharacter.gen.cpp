// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/YokaiShokanCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYokaiShokanCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanCharacter();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanCharacter_NoRegister();
// End Cross Module References

// Begin Class AYokaiShokanCharacter
void AYokaiShokanCharacter::StaticRegisterNativesAYokaiShokanCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYokaiShokanCharacter);
UClass* Z_Construct_UClass_AYokaiShokanCharacter_NoRegister()
{
	return AYokaiShokanCharacter::StaticClass();
}
struct Z_Construct_UClass_AYokaiShokanCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "YokaiShokanCharacter.h" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dash Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dash Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashMultiplier_MetaData[] = {
		{ "Category", "Character | Dash Movement" },
		{ "DisplayName", "Dash Force" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[] = {
		{ "Category", "Character | Dash Movement" },
		{ "DisplayName", "Dash Cooldown" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashJumpNerf_MetaData[] = {
		{ "Category", "Character | Dash Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Because the dash is that much more powerful when jumping, this will nerf it\n" },
#endif
		{ "DisplayName", "Dash Jump Nerf" },
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Because the dash is that much more powerful when jumping, this will nerf it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "YokaiShokanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashJumpNerf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYokaiShokanCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashAction = { "DashAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashAction_MetaData), NewProp_DashAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashMultiplier = { "DashMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashMultiplier_MetaData), NewProp_DashMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashCooldown = { "DashCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashCooldown_MetaData), NewProp_DashCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashJumpNerf = { "DashJumpNerf", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, DashJumpNerf), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashJumpNerf_MetaData), NewProp_DashJumpNerf_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AYokaiShokanCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_DashJumpNerf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AYokaiShokanCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AYokaiShokanCharacter_Statics::ClassParams = {
	&AYokaiShokanCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AYokaiShokanCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AYokaiShokanCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AYokaiShokanCharacter()
{
	if (!Z_Registration_Info_UClass_AYokaiShokanCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYokaiShokanCharacter.OuterSingleton, Z_Construct_UClass_AYokaiShokanCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AYokaiShokanCharacter.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<AYokaiShokanCharacter>()
{
	return AYokaiShokanCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AYokaiShokanCharacter);
AYokaiShokanCharacter::~AYokaiShokanCharacter() {}
// End Class AYokaiShokanCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AYokaiShokanCharacter, AYokaiShokanCharacter::StaticClass, TEXT("AYokaiShokanCharacter"), &Z_Registration_Info_UClass_AYokaiShokanCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYokaiShokanCharacter), 2838545249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_1343574605(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
