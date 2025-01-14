// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/InventoryGameInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryGameInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UInventoryGameInstanceSubsystem();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UInventoryGameInstanceSubsystem_NoRegister();
// End Cross Module References

// Begin Class UInventoryGameInstanceSubsystem Function AddCurrency
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics
{
	struct InventoryGameInstanceSubsystem_eventAddCurrency_Parms
	{
		int32 quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryGameInstanceSubsystem_eventAddCurrency_Parms, quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::NewProp_quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "AddCurrency", nullptr, nullptr, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::InventoryGameInstanceSubsystem_eventAddCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::InventoryGameInstanceSubsystem_eventAddCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execAddCurrency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCurrency(Z_Param_quantity);
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function AddCurrency

// Begin Class UInventoryGameInstanceSubsystem Function AddTemporaryCurrency
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics
{
	struct InventoryGameInstanceSubsystem_eventAddTemporaryCurrency_Parms
	{
		int32 quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryGameInstanceSubsystem_eventAddTemporaryCurrency_Parms, quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::NewProp_quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "AddTemporaryCurrency", nullptr, nullptr, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::InventoryGameInstanceSubsystem_eventAddTemporaryCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::InventoryGameInstanceSubsystem_eventAddTemporaryCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execAddTemporaryCurrency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTemporaryCurrency(Z_Param_quantity);
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function AddTemporaryCurrency

// Begin Class UInventoryGameInstanceSubsystem Function ClearBeforeRun
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_ClearBeforeRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_ClearBeforeRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "ClearBeforeRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_ClearBeforeRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_ClearBeforeRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_ClearBeforeRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_ClearBeforeRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execClearBeforeRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearBeforeRun();
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function ClearBeforeRun

// Begin Class UInventoryGameInstanceSubsystem Function FinishRunVariables
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_FinishRunVariables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_FinishRunVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "FinishRunVariables", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_FinishRunVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_FinishRunVariables_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_FinishRunVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_FinishRunVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execFinishRunVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishRunVariables();
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function FinishRunVariables

// Begin Class UInventoryGameInstanceSubsystem Function GetCurrency
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics
{
	struct InventoryGameInstanceSubsystem_eventGetCurrency_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryGameInstanceSubsystem_eventGetCurrency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "GetCurrency", nullptr, nullptr, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::InventoryGameInstanceSubsystem_eventGetCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::InventoryGameInstanceSubsystem_eventGetCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execGetCurrency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrency();
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function GetCurrency

// Begin Class UInventoryGameInstanceSubsystem Function GetCurrentLoreItems
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics
{
	struct InventoryGameInstanceSubsystem_eventGetCurrentLoreItems_Parms
	{
		TArray<bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryGameInstanceSubsystem_eventGetCurrentLoreItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "GetCurrentLoreItems", nullptr, nullptr, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::InventoryGameInstanceSubsystem_eventGetCurrentLoreItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::InventoryGameInstanceSubsystem_eventGetCurrentLoreItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execGetCurrentLoreItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<bool>*)Z_Param__Result=P_THIS->GetCurrentLoreItems();
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function GetCurrentLoreItems

// Begin Class UInventoryGameInstanceSubsystem Function GetIfPlayerGotAllLoreItems
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics
{
	struct InventoryGameInstanceSubsystem_eventGetIfPlayerGotAllLoreItems_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryGameInstanceSubsystem_eventGetIfPlayerGotAllLoreItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryGameInstanceSubsystem_eventGetIfPlayerGotAllLoreItems_Parms), &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "GetIfPlayerGotAllLoreItems", nullptr, nullptr, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::InventoryGameInstanceSubsystem_eventGetIfPlayerGotAllLoreItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::InventoryGameInstanceSubsystem_eventGetIfPlayerGotAllLoreItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execGetIfPlayerGotAllLoreItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIfPlayerGotAllLoreItems();
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function GetIfPlayerGotAllLoreItems

// Begin Class UInventoryGameInstanceSubsystem Function SetRandomPossessionLoreItem
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "SetRandomPossessionLoreItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execSetRandomPossessionLoreItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRandomPossessionLoreItem();
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function SetRandomPossessionLoreItem

// Begin Class UInventoryGameInstanceSubsystem Function SetRandomPossessionLoreItemInRun
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItemInRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItemInRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "SetRandomPossessionLoreItemInRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItemInRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItemInRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItemInRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItemInRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execSetRandomPossessionLoreItemInRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRandomPossessionLoreItemInRun();
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function SetRandomPossessionLoreItemInRun

// Begin Class UInventoryGameInstanceSubsystem Function TakeCurrency
struct Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics
{
	struct InventoryGameInstanceSubsystem_eventTakeCurrency_Parms
	{
		int32 quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryGameInstanceSubsystem_eventTakeCurrency_Parms, quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::NewProp_quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGameInstanceSubsystem, nullptr, "TakeCurrency", nullptr, nullptr, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::InventoryGameInstanceSubsystem_eventTakeCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::InventoryGameInstanceSubsystem_eventTakeCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryGameInstanceSubsystem::execTakeCurrency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeCurrency(Z_Param_quantity);
	P_NATIVE_END;
}
// End Class UInventoryGameInstanceSubsystem Function TakeCurrency

// Begin Class UInventoryGameInstanceSubsystem
void UInventoryGameInstanceSubsystem::StaticRegisterNativesUInventoryGameInstanceSubsystem()
{
	UClass* Class = UInventoryGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCurrency", &UInventoryGameInstanceSubsystem::execAddCurrency },
		{ "AddTemporaryCurrency", &UInventoryGameInstanceSubsystem::execAddTemporaryCurrency },
		{ "ClearBeforeRun", &UInventoryGameInstanceSubsystem::execClearBeforeRun },
		{ "FinishRunVariables", &UInventoryGameInstanceSubsystem::execFinishRunVariables },
		{ "GetCurrency", &UInventoryGameInstanceSubsystem::execGetCurrency },
		{ "GetCurrentLoreItems", &UInventoryGameInstanceSubsystem::execGetCurrentLoreItems },
		{ "GetIfPlayerGotAllLoreItems", &UInventoryGameInstanceSubsystem::execGetIfPlayerGotAllLoreItems },
		{ "SetRandomPossessionLoreItem", &UInventoryGameInstanceSubsystem::execSetRandomPossessionLoreItem },
		{ "SetRandomPossessionLoreItemInRun", &UInventoryGameInstanceSubsystem::execSetRandomPossessionLoreItemInRun },
		{ "TakeCurrency", &UInventoryGameInstanceSubsystem::execTakeCurrency },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryGameInstanceSubsystem);
UClass* Z_Construct_UClass_UInventoryGameInstanceSubsystem_NoRegister()
{
	return UInventoryGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UInventoryGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InventoryGameInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "InventoryGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddCurrency, "AddCurrency" }, // 3274544717
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_AddTemporaryCurrency, "AddTemporaryCurrency" }, // 165048295
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_ClearBeforeRun, "ClearBeforeRun" }, // 71784356
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_FinishRunVariables, "FinishRunVariables" }, // 4114684476
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrency, "GetCurrency" }, // 2468147898
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetCurrentLoreItems, "GetCurrentLoreItems" }, // 1789926027
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_GetIfPlayerGotAllLoreItems, "GetIfPlayerGotAllLoreItems" }, // 718833698
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItem, "SetRandomPossessionLoreItem" }, // 3016222319
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_SetRandomPossessionLoreItemInRun, "SetRandomPossessionLoreItemInRun" }, // 206321743
		{ &Z_Construct_UFunction_UInventoryGameInstanceSubsystem_TakeCurrency, "TakeCurrency" }, // 2256601302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryGameInstanceSubsystem_Statics::ClassParams = {
	&UInventoryGameInstanceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UInventoryGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UInventoryGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryGameInstanceSubsystem.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<UInventoryGameInstanceSubsystem>()
{
	return UInventoryGameInstanceSubsystem::StaticClass();
}
UInventoryGameInstanceSubsystem::UInventoryGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryGameInstanceSubsystem);
UInventoryGameInstanceSubsystem::~UInventoryGameInstanceSubsystem() {}
// End Class UInventoryGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryGameInstanceSubsystem, UInventoryGameInstanceSubsystem::StaticClass, TEXT("UInventoryGameInstanceSubsystem"), &Z_Registration_Info_UClass_UInventoryGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryGameInstanceSubsystem), 3497325981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_2557914438(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
