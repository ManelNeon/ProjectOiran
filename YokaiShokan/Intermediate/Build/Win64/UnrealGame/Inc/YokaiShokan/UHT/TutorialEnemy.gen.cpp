// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/TutorialEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialEnemy() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ATutorialEnemy();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ATutorialEnemy_NoRegister();
// End Cross Module References

// Begin Class ATutorialEnemy Function BP_EnemyDies
static FName NAME_ATutorialEnemy_BP_EnemyDies = FName(TEXT("BP_EnemyDies"));
void ATutorialEnemy::BP_EnemyDies()
{
	ProcessEvent(FindFunctionChecked(NAME_ATutorialEnemy_BP_EnemyDies),NULL);
}
struct Z_Construct_UFunction_ATutorialEnemy_BP_EnemyDies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial Enemy | Functions" },
		{ "ModuleRelativePath", "TutorialEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialEnemy_BP_EnemyDies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialEnemy, nullptr, "BP_EnemyDies", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_BP_EnemyDies_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialEnemy_BP_EnemyDies_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATutorialEnemy_BP_EnemyDies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialEnemy_BP_EnemyDies_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATutorialEnemy Function BP_EnemyDies

// Begin Class ATutorialEnemy Function DamageThis
struct Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics
{
	struct TutorialEnemy_eventDamageThis_Parms
	{
		float damage;
		FVector hitDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial Enemy | Stats" },
		{ "ModuleRelativePath", "TutorialEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_hitDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TutorialEnemy_eventDamageThis_Parms, damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::NewProp_hitDirection = { "hitDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TutorialEnemy_eventDamageThis_Parms, hitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::NewProp_hitDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialEnemy, nullptr, "DamageThis", nullptr, nullptr, Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::TutorialEnemy_eventDamageThis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::TutorialEnemy_eventDamageThis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATutorialEnemy_DamageThis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialEnemy_DamageThis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATutorialEnemy::execDamageThis)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
	P_GET_STRUCT(FVector,Z_Param_hitDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DamageThis(Z_Param_damage,Z_Param_hitDirection);
	P_NATIVE_END;
}
// End Class ATutorialEnemy Function DamageThis

// Begin Class ATutorialEnemy Function GetDamageValue
struct Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics
{
	struct TutorialEnemy_eventGetDamageValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial Enemy | Stats" },
		{ "ModuleRelativePath", "TutorialEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TutorialEnemy_eventGetDamageValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialEnemy, nullptr, "GetDamageValue", nullptr, nullptr, Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::TutorialEnemy_eventGetDamageValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::TutorialEnemy_eventGetDamageValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATutorialEnemy_GetDamageValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialEnemy_GetDamageValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATutorialEnemy::execGetDamageValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamageValue();
	P_NATIVE_END;
}
// End Class ATutorialEnemy Function GetDamageValue

// Begin Class ATutorialEnemy Function SetMarkerWidget
struct Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics
{
	struct TutorialEnemy_eventSetMarkerWidget_Parms
	{
		UUserWidget* widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tutorial Enemy | Widget" },
		{ "ModuleRelativePath", "TutorialEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TutorialEnemy_eventSetMarkerWidget_Parms, widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget_MetaData), NewProp_widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::NewProp_widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialEnemy, nullptr, "SetMarkerWidget", nullptr, nullptr, Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::TutorialEnemy_eventSetMarkerWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::TutorialEnemy_eventSetMarkerWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATutorialEnemy::execSetMarkerWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMarkerWidget(Z_Param_widget);
	P_NATIVE_END;
}
// End Class ATutorialEnemy Function SetMarkerWidget

// Begin Class ATutorialEnemy
void ATutorialEnemy::StaticRegisterNativesATutorialEnemy()
{
	UClass* Class = ATutorialEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DamageThis", &ATutorialEnemy::execDamageThis },
		{ "GetDamageValue", &ATutorialEnemy::execGetDamageValue },
		{ "SetMarkerWidget", &ATutorialEnemy::execSetMarkerWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATutorialEnemy);
UClass* Z_Construct_UClass_ATutorialEnemy_NoRegister()
{
	return ATutorialEnemy::StaticClass();
}
struct Z_Construct_UClass_ATutorialEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TutorialEnemy.h" },
		{ "ModuleRelativePath", "TutorialEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialEnemy_BP_EnemyDies, "BP_EnemyDies" }, // 1857223021
		{ &Z_Construct_UFunction_ATutorialEnemy_DamageThis, "DamageThis" }, // 3956541134
		{ &Z_Construct_UFunction_ATutorialEnemy_GetDamageValue, "GetDamageValue" }, // 3743376167
		{ &Z_Construct_UFunction_ATutorialEnemy_SetMarkerWidget, "SetMarkerWidget" }, // 3136050121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATutorialEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATutorialEnemy_Statics::ClassParams = {
	&ATutorialEnemy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ATutorialEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATutorialEnemy()
{
	if (!Z_Registration_Info_UClass_ATutorialEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATutorialEnemy.OuterSingleton, Z_Construct_UClass_ATutorialEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATutorialEnemy.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<ATutorialEnemy>()
{
	return ATutorialEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialEnemy);
ATutorialEnemy::~ATutorialEnemy() {}
// End Class ATutorialEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATutorialEnemy, ATutorialEnemy::StaticClass, TEXT("ATutorialEnemy"), &Z_Registration_Info_UClass_ATutorialEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATutorialEnemy), 3957762869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_3800203177(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
