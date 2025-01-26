// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/LevelRandomizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelRandomizer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALevelRandomizer();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALevelRandomizer_NoRegister();
// End Cross Module References

// Begin Class ALevelRandomizer Function BP_RotatePlayerTowardsExit
static FName NAME_ALevelRandomizer_BP_RotatePlayerTowardsExit = FName(TEXT("BP_RotatePlayerTowardsExit"));
void ALevelRandomizer::BP_RotatePlayerTowardsExit()
{
	ProcessEvent(FindFunctionChecked(NAME_ALevelRandomizer_BP_RotatePlayerTowardsExit),NULL);
}
struct Z_Construct_UFunction_ALevelRandomizer_BP_RotatePlayerTowardsExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_BP_RotatePlayerTowardsExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "BP_RotatePlayerTowardsExit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_BP_RotatePlayerTowardsExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_BP_RotatePlayerTowardsExit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelRandomizer_BP_RotatePlayerTowardsExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_BP_RotatePlayerTowardsExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ALevelRandomizer Function BP_RotatePlayerTowardsExit

// Begin Class ALevelRandomizer Function DeleteEnemyFromList
struct Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics
{
	struct LevelRandomizer_eventDeleteEnemyFromList_Parms
	{
		AActor* actor;
		bool isCloseUpEnemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
	static void NewProp_isCloseUpEnemy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isCloseUpEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventDeleteEnemyFromList_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::NewProp_isCloseUpEnemy_SetBit(void* Obj)
{
	((LevelRandomizer_eventDeleteEnemyFromList_Parms*)Obj)->isCloseUpEnemy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::NewProp_isCloseUpEnemy = { "isCloseUpEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelRandomizer_eventDeleteEnemyFromList_Parms), &Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::NewProp_isCloseUpEnemy_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::NewProp_actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::NewProp_isCloseUpEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "DeleteEnemyFromList", nullptr, nullptr, Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::LevelRandomizer_eventDeleteEnemyFromList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::LevelRandomizer_eventDeleteEnemyFromList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execDeleteEnemyFromList)
{
	P_GET_OBJECT(AActor,Z_Param_actor);
	P_GET_UBOOL(Z_Param_isCloseUpEnemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteEnemyFromList(Z_Param_actor,Z_Param_isCloseUpEnemy);
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function DeleteEnemyFromList

// Begin Class ALevelRandomizer Function GetZoneDivider
struct Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics
{
	struct LevelRandomizer_eventGetZoneDivider_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventGetZoneDivider_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "GetZoneDivider", nullptr, nullptr, Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::LevelRandomizer_eventGetZoneDivider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::LevelRandomizer_eventGetZoneDivider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execGetZoneDivider)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetZoneDivider();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function GetZoneDivider

// Begin Class ALevelRandomizer Function IsLastEnemy
struct Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics
{
	struct LevelRandomizer_eventIsLastEnemy_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LevelRandomizer_eventIsLastEnemy_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelRandomizer_eventIsLastEnemy_Parms), &Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "IsLastEnemy", nullptr, nullptr, Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::LevelRandomizer_eventIsLastEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::LevelRandomizer_eventIsLastEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execIsLastEnemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLastEnemy();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function IsLastEnemy

// Begin Class ALevelRandomizer Function LevelEnder
struct Z_Construct_UFunction_ALevelRandomizer_LevelEnder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_LevelEnder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "LevelEnder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_LevelEnder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_LevelEnder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelRandomizer_LevelEnder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_LevelEnder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execLevelEnder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LevelEnder();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function LevelEnder

// Begin Class ALevelRandomizer Function SetANewEnemyToAttack
struct Z_Construct_UFunction_ALevelRandomizer_SetANewEnemyToAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_SetANewEnemyToAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "SetANewEnemyToAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_SetANewEnemyToAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_SetANewEnemyToAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelRandomizer_SetANewEnemyToAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_SetANewEnemyToAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execSetANewEnemyToAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetANewEnemyToAttack();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function SetANewEnemyToAttack

// Begin Class ALevelRandomizer Function SetZoneDividerNull
struct Z_Construct_UFunction_ALevelRandomizer_SetZoneDividerNull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_SetZoneDividerNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "SetZoneDividerNull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_SetZoneDividerNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_SetZoneDividerNull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelRandomizer_SetZoneDividerNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_SetZoneDividerNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execSetZoneDividerNull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetZoneDividerNull();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function SetZoneDividerNull

// Begin Class ALevelRandomizer Function SpawnEnemies
struct Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics
{
	struct LevelRandomizer_eventSpawnEnemies_Parms
	{
		int32 minimumQuantity;
		int32 maxQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_minimumQuantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_minimumQuantity = { "minimumQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventSpawnEnemies_Parms, minimumQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_maxQuantity = { "maxQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventSpawnEnemies_Parms, maxQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_minimumQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_maxQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "SpawnEnemies", nullptr, nullptr, Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::LevelRandomizer_eventSpawnEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::LevelRandomizer_eventSpawnEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execSpawnEnemies)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_minimumQuantity);
	P_GET_PROPERTY(FIntProperty,Z_Param_maxQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnEnemies(Z_Param_minimumQuantity,Z_Param_maxQuantity);
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function SpawnEnemies

// Begin Class ALevelRandomizer Function WaveEnder
struct Z_Construct_UFunction_ALevelRandomizer_WaveEnder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_WaveEnder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "WaveEnder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_WaveEnder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_WaveEnder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelRandomizer_WaveEnder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_WaveEnder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execWaveEnder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaveEnder();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function WaveEnder

// Begin Class ALevelRandomizer
void ALevelRandomizer::StaticRegisterNativesALevelRandomizer()
{
	UClass* Class = ALevelRandomizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteEnemyFromList", &ALevelRandomizer::execDeleteEnemyFromList },
		{ "GetZoneDivider", &ALevelRandomizer::execGetZoneDivider },
		{ "IsLastEnemy", &ALevelRandomizer::execIsLastEnemy },
		{ "LevelEnder", &ALevelRandomizer::execLevelEnder },
		{ "SetANewEnemyToAttack", &ALevelRandomizer::execSetANewEnemyToAttack },
		{ "SetZoneDividerNull", &ALevelRandomizer::execSetZoneDividerNull },
		{ "SpawnEnemies", &ALevelRandomizer::execSpawnEnemies },
		{ "WaveEnder", &ALevelRandomizer::execWaveEnder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelRandomizer);
UClass* Z_Construct_UClass_ALevelRandomizer_NoRegister()
{
	return ALevelRandomizer::StaticClass();
}
struct Z_Construct_UClass_ALevelRandomizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelRandomizer.h" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__RewardSpawnLocation_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__ZonesEpicenters_MetaData[] = {
		{ "Category", "Level Randomizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variable where we'll store the zone epicenter (to make the possible spawning zone)\n" },
#endif
		{ "ModuleRelativePath", "LevelRandomizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable where we'll store the zone epicenter (to make the possible spawning zone)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__ZonesEpicentersRange_MetaData[] = {
		{ "Category", "Level Randomizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variable where you'll set the range for the zone, this is, how much the enemis can spawn from left to right, this needs some testing in engine and is not at all optimal\n" },
#endif
		{ "ModuleRelativePath", "LevelRandomizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable where you'll set the range for the zone, this is, how much the enemis can spawn from left to right, this needs some testing in engine and is not at all optimal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__NumberOfWaves_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__ZoneDivider_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__CloseUpEnemyClass_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__FromAfarEnemyClass_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__HealthPickupBP_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__SkillPointsPickupBP_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__LoreItemPickupBP_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__LevelEnderSFX_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__RewardSpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp__ZonesEpicenters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__ZonesEpicenters;
	static const UECodeGen_Private::FStructPropertyParams NewProp__ZonesEpicentersRange_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__ZonesEpicentersRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp__NumberOfWaves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__NumberOfWaves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__ZoneDivider;
	static const UECodeGen_Private::FClassPropertyParams NewProp__CloseUpEnemyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__FromAfarEnemyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp__HealthPickupBP;
	static const UECodeGen_Private::FClassPropertyParams NewProp__SkillPointsPickupBP;
	static const UECodeGen_Private::FClassPropertyParams NewProp__LoreItemPickupBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__LevelEnderSFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelRandomizer_BP_RotatePlayerTowardsExit, "BP_RotatePlayerTowardsExit" }, // 809687257
		{ &Z_Construct_UFunction_ALevelRandomizer_DeleteEnemyFromList, "DeleteEnemyFromList" }, // 2762049435
		{ &Z_Construct_UFunction_ALevelRandomizer_GetZoneDivider, "GetZoneDivider" }, // 2020962628
		{ &Z_Construct_UFunction_ALevelRandomizer_IsLastEnemy, "IsLastEnemy" }, // 659943918
		{ &Z_Construct_UFunction_ALevelRandomizer_LevelEnder, "LevelEnder" }, // 3538240947
		{ &Z_Construct_UFunction_ALevelRandomizer_SetANewEnemyToAttack, "SetANewEnemyToAttack" }, // 4063351038
		{ &Z_Construct_UFunction_ALevelRandomizer_SetZoneDividerNull, "SetZoneDividerNull" }, // 1656284027
		{ &Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies, "SpawnEnemies" }, // 2166272928
		{ &Z_Construct_UFunction_ALevelRandomizer_WaveEnder, "WaveEnder" }, // 291003555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelRandomizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__RewardSpawnLocation = { "_RewardSpawnLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _RewardSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__RewardSpawnLocation_MetaData), NewProp__RewardSpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZonesEpicenters_Inner = { "_ZonesEpicenters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZonesEpicenters = { "_ZonesEpicenters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _ZonesEpicenters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__ZonesEpicenters_MetaData), NewProp__ZonesEpicenters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZonesEpicentersRange_Inner = { "_ZonesEpicentersRange", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZonesEpicentersRange = { "_ZonesEpicentersRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _ZonesEpicentersRange), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__ZonesEpicentersRange_MetaData), NewProp__ZonesEpicentersRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__NumberOfWaves_Inner = { "_NumberOfWaves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__NumberOfWaves = { "_NumberOfWaves", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _NumberOfWaves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__NumberOfWaves_MetaData), NewProp__NumberOfWaves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZoneDivider = { "_ZoneDivider", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _ZoneDivider), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__ZoneDivider_MetaData), NewProp__ZoneDivider_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__CloseUpEnemyClass = { "_CloseUpEnemyClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _CloseUpEnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__CloseUpEnemyClass_MetaData), NewProp__CloseUpEnemyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__FromAfarEnemyClass = { "_FromAfarEnemyClass", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _FromAfarEnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__FromAfarEnemyClass_MetaData), NewProp__FromAfarEnemyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__HealthPickupBP = { "_HealthPickupBP", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _HealthPickupBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__HealthPickupBP_MetaData), NewProp__HealthPickupBP_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__SkillPointsPickupBP = { "_SkillPointsPickupBP", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _SkillPointsPickupBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__SkillPointsPickupBP_MetaData), NewProp__SkillPointsPickupBP_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__LoreItemPickupBP = { "_LoreItemPickupBP", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _LoreItemPickupBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__LoreItemPickupBP_MetaData), NewProp__LoreItemPickupBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__LevelEnderSFX = { "_LevelEnderSFX", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _LevelEnderSFX), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__LevelEnderSFX_MetaData), NewProp__LevelEnderSFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__RewardSpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZonesEpicenters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZonesEpicenters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZonesEpicentersRange_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZonesEpicentersRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__NumberOfWaves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__NumberOfWaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__ZoneDivider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__CloseUpEnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__FromAfarEnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__HealthPickupBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__SkillPointsPickupBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__LoreItemPickupBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__LevelEnderSFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelRandomizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelRandomizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelRandomizer_Statics::ClassParams = {
	&ALevelRandomizer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelRandomizer_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelRandomizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelRandomizer()
{
	if (!Z_Registration_Info_UClass_ALevelRandomizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelRandomizer.OuterSingleton, Z_Construct_UClass_ALevelRandomizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelRandomizer.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<ALevelRandomizer>()
{
	return ALevelRandomizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelRandomizer);
ALevelRandomizer::~ALevelRandomizer() {}
// End Class ALevelRandomizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelRandomizer, ALevelRandomizer::StaticClass, TEXT("ALevelRandomizer"), &Z_Registration_Info_UClass_ALevelRandomizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelRandomizer), 1129006092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_3035496608(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
