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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALevelRandomizer_NoRegister();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanEnemy();
YOKAISHOKAN_API UClass* Z_Construct_UClass_AYokaiShokanEnemy_NoRegister();
// End Cross Module References

// Begin Class AYokaiShokanEnemy Function BP_SetCanAttack
static FName NAME_AYokaiShokanEnemy_BP_SetCanAttack = FName(TEXT("BP_SetCanAttack"));
void AYokaiShokanEnemy::BP_SetCanAttack()
{
	ProcessEvent(FindFunctionChecked(NAME_AYokaiShokanEnemy_BP_SetCanAttack),NULL);
}
struct Z_Construct_UFunction_AYokaiShokanEnemy_BP_SetCanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanEnemy_BP_SetCanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanEnemy, nullptr, "BP_SetCanAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_BP_SetCanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanEnemy_BP_SetCanAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AYokaiShokanEnemy_BP_SetCanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanEnemy_BP_SetCanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AYokaiShokanEnemy Function BP_SetCanAttack

// Begin Class AYokaiShokanEnemy Function DamageThis
struct Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics
{
	struct YokaiShokanEnemy_eventDamageThis_Parms
	{
		float damage;
		FVector hitDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy | Stats" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_hitDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanEnemy_eventDamageThis_Parms, damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::NewProp_hitDirection = { "hitDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanEnemy_eventDamageThis_Parms, hitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::NewProp_hitDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanEnemy, nullptr, "DamageThis", nullptr, nullptr, Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::YokaiShokanEnemy_eventDamageThis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::YokaiShokanEnemy_eventDamageThis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYokaiShokanEnemy::execDamageThis)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
	P_GET_STRUCT(FVector,Z_Param_hitDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DamageThis(Z_Param_damage,Z_Param_hitDirection);
	P_NATIVE_END;
}
// End Class AYokaiShokanEnemy Function DamageThis

// Begin Class AYokaiShokanEnemy Function GetDamageValue
struct Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics
{
	struct YokaiShokanEnemy_eventGetDamageValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy | Stats" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanEnemy_eventGetDamageValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanEnemy, nullptr, "GetDamageValue", nullptr, nullptr, Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::YokaiShokanEnemy_eventGetDamageValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::YokaiShokanEnemy_eventGetDamageValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYokaiShokanEnemy::execGetDamageValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamageValue();
	P_NATIVE_END;
}
// End Class AYokaiShokanEnemy Function GetDamageValue

// Begin Class AYokaiShokanEnemy Function GetLevelRandomizer
struct Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics
{
	struct YokaiShokanEnemy_eventGetLevelRandomizer_Parms
	{
		ALevelRandomizer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy | Functions" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanEnemy_eventGetLevelRandomizer_Parms, ReturnValue), Z_Construct_UClass_ALevelRandomizer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanEnemy, nullptr, "GetLevelRandomizer", nullptr, nullptr, Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::YokaiShokanEnemy_eventGetLevelRandomizer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::YokaiShokanEnemy_eventGetLevelRandomizer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYokaiShokanEnemy::execGetLevelRandomizer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ALevelRandomizer**)Z_Param__Result=P_THIS->GetLevelRandomizer();
	P_NATIVE_END;
}
// End Class AYokaiShokanEnemy Function GetLevelRandomizer

// Begin Class AYokaiShokanEnemy Function SetMarkerWidget
struct Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics
{
	struct YokaiShokanEnemy_eventSetMarkerWidget_Parms
	{
		UUserWidget* widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy | Widget" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanEnemy_eventSetMarkerWidget_Parms, widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget_MetaData), NewProp_widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::NewProp_widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AYokaiShokanEnemy, nullptr, "SetMarkerWidget", nullptr, nullptr, Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::YokaiShokanEnemy_eventSetMarkerWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::YokaiShokanEnemy_eventSetMarkerWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AYokaiShokanEnemy::execSetMarkerWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMarkerWidget(Z_Param_widget);
	P_NATIVE_END;
}
// End Class AYokaiShokanEnemy Function SetMarkerWidget

// Begin Class AYokaiShokanEnemy
void AYokaiShokanEnemy::StaticRegisterNativesAYokaiShokanEnemy()
{
	UClass* Class = AYokaiShokanEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DamageThis", &AYokaiShokanEnemy::execDamageThis },
		{ "GetDamageValue", &AYokaiShokanEnemy::execGetDamageValue },
		{ "GetLevelRandomizer", &AYokaiShokanEnemy::execGetLevelRandomizer },
		{ "SetMarkerWidget", &AYokaiShokanEnemy::execSetMarkerWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__MaxHealth_MetaData[] = {
		{ "Category", "Enemy | Stats" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__DamageValue_MetaData[] = {
		{ "Category", "Enemy | Stats" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__IsCloseUpEnemy_MetaData[] = {
		{ "Category", "Enemy | Stats" },
		{ "ModuleRelativePath", "YokaiShokanEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__DamageValue;
	static void NewProp__IsCloseUpEnemy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__IsCloseUpEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AYokaiShokanEnemy_BP_SetCanAttack, "BP_SetCanAttack" }, // 1478136365
		{ &Z_Construct_UFunction_AYokaiShokanEnemy_DamageThis, "DamageThis" }, // 392230314
		{ &Z_Construct_UFunction_AYokaiShokanEnemy_GetDamageValue, "GetDamageValue" }, // 1326949345
		{ &Z_Construct_UFunction_AYokaiShokanEnemy_GetLevelRandomizer, "GetLevelRandomizer" }, // 3999653958
		{ &Z_Construct_UFunction_AYokaiShokanEnemy_SetMarkerWidget, "SetMarkerWidget" }, // 4223935457
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYokaiShokanEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYokaiShokanEnemy_Statics::NewProp__MaxHealth = { "_MaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanEnemy, _MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__MaxHealth_MetaData), NewProp__MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AYokaiShokanEnemy_Statics::NewProp__DamageValue = { "_DamageValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AYokaiShokanEnemy, _DamageValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__DamageValue_MetaData), NewProp__DamageValue_MetaData) };
void Z_Construct_UClass_AYokaiShokanEnemy_Statics::NewProp__IsCloseUpEnemy_SetBit(void* Obj)
{
	((AYokaiShokanEnemy*)Obj)->_IsCloseUpEnemy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AYokaiShokanEnemy_Statics::NewProp__IsCloseUpEnemy = { "_IsCloseUpEnemy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AYokaiShokanEnemy), &Z_Construct_UClass_AYokaiShokanEnemy_Statics::NewProp__IsCloseUpEnemy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__IsCloseUpEnemy_MetaData), NewProp__IsCloseUpEnemy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AYokaiShokanEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanEnemy_Statics::NewProp__MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanEnemy_Statics::NewProp__DamageValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AYokaiShokanEnemy_Statics::NewProp__IsCloseUpEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanEnemy_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AYokaiShokanEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AYokaiShokanEnemy_Statics::PropPointers),
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
		{ Z_Construct_UClass_AYokaiShokanEnemy, AYokaiShokanEnemy::StaticClass, TEXT("AYokaiShokanEnemy"), &Z_Registration_Info_UClass_AYokaiShokanEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYokaiShokanEnemy), 1395560972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_848598908(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
