// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/TutorialGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialGameMode() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ATutorialGameMode();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ATutorialGameMode_NoRegister();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanGameMode();
// End Cross Module References

// Begin Class ATutorialGameMode Function BP_FirstTimeDash
static FName NAME_ATutorialGameMode_BP_FirstTimeDash = FName(TEXT("BP_FirstTimeDash"));
void ATutorialGameMode::BP_FirstTimeDash()
{
	ProcessEvent(FindFunctionChecked(NAME_ATutorialGameMode_BP_FirstTimeDash),NULL);
}
struct Z_Construct_UFunction_ATutorialGameMode_BP_FirstTimeDash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial | Functions" },
		{ "ModuleRelativePath", "TutorialGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_BP_FirstTimeDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "BP_FirstTimeDash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_BP_FirstTimeDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialGameMode_BP_FirstTimeDash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATutorialGameMode_BP_FirstTimeDash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_BP_FirstTimeDash_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATutorialGameMode Function BP_FirstTimeDash

// Begin Class ATutorialGameMode Function BP_TookAHit
static FName NAME_ATutorialGameMode_BP_TookAHit = FName(TEXT("BP_TookAHit"));
void ATutorialGameMode::BP_TookAHit()
{
	ProcessEvent(FindFunctionChecked(NAME_ATutorialGameMode_BP_TookAHit),NULL);
}
struct Z_Construct_UFunction_ATutorialGameMode_BP_TookAHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial | Functions" },
		{ "ModuleRelativePath", "TutorialGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_BP_TookAHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "BP_TookAHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_BP_TookAHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialGameMode_BP_TookAHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATutorialGameMode_BP_TookAHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_BP_TookAHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATutorialGameMode Function BP_TookAHit

// Begin Class ATutorialGameMode Function GetIsFirstEnemy
struct Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics
{
	struct TutorialGameMode_eventGetIsFirstEnemy_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial | Functions" },
		{ "ModuleRelativePath", "TutorialGameMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TutorialGameMode_eventGetIsFirstEnemy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TutorialGameMode_eventGetIsFirstEnemy_Parms), &Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "GetIsFirstEnemy", nullptr, nullptr, Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::TutorialGameMode_eventGetIsFirstEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::TutorialGameMode_eventGetIsFirstEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATutorialGameMode::execGetIsFirstEnemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsFirstEnemy();
	P_NATIVE_END;
}
// End Class ATutorialGameMode Function GetIsFirstEnemy

// Begin Class ATutorialGameMode Function TrueifyIsFirstEnemy
struct Z_Construct_UFunction_ATutorialGameMode_TrueifyIsFirstEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial | Functions" },
		{ "ModuleRelativePath", "TutorialGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialGameMode_TrueifyIsFirstEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialGameMode, nullptr, "TrueifyIsFirstEnemy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialGameMode_TrueifyIsFirstEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialGameMode_TrueifyIsFirstEnemy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATutorialGameMode_TrueifyIsFirstEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialGameMode_TrueifyIsFirstEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATutorialGameMode::execTrueifyIsFirstEnemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrueifyIsFirstEnemy();
	P_NATIVE_END;
}
// End Class ATutorialGameMode Function TrueifyIsFirstEnemy

// Begin Class ATutorialGameMode
void ATutorialGameMode::StaticRegisterNativesATutorialGameMode()
{
	UClass* Class = ATutorialGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsFirstEnemy", &ATutorialGameMode::execGetIsFirstEnemy },
		{ "TrueifyIsFirstEnemy", &ATutorialGameMode::execTrueifyIsFirstEnemy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATutorialGameMode);
UClass* Z_Construct_UClass_ATutorialGameMode_NoRegister()
{
	return ATutorialGameMode::StaticClass();
}
struct Z_Construct_UClass_ATutorialGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TutorialGameMode.h" },
		{ "ModuleRelativePath", "TutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialGameMode_BP_FirstTimeDash, "BP_FirstTimeDash" }, // 2483607757
		{ &Z_Construct_UFunction_ATutorialGameMode_BP_TookAHit, "BP_TookAHit" }, // 1941890469
		{ &Z_Construct_UFunction_ATutorialGameMode_GetIsFirstEnemy, "GetIsFirstEnemy" }, // 268584881
		{ &Z_Construct_UFunction_ATutorialGameMode_TrueifyIsFirstEnemy, "TrueifyIsFirstEnemy" }, // 3527576667
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATutorialGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AYokaiShokanGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATutorialGameMode_Statics::ClassParams = {
	&ATutorialGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATutorialGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATutorialGameMode()
{
	if (!Z_Registration_Info_UClass_ATutorialGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATutorialGameMode.OuterSingleton, Z_Construct_UClass_ATutorialGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATutorialGameMode.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<ATutorialGameMode>()
{
	return ATutorialGameMode::StaticClass();
}
ATutorialGameMode::ATutorialGameMode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialGameMode);
ATutorialGameMode::~ATutorialGameMode() {}
// End Class ATutorialGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATutorialGameMode, ATutorialGameMode::StaticClass, TEXT("ATutorialGameMode"), &Z_Registration_Info_UClass_ATutorialGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATutorialGameMode), 4077424529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_3823237463(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
