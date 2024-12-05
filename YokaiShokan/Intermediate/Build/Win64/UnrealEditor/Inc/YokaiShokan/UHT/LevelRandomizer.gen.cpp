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
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALevelRandomizer();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ALevelRandomizer_NoRegister();
YOKAISHOKAN_API UEnum* Z_Construct_UEnum_YokaiShokan_ECurrentLevel();
YOKAISHOKAN_API UEnum* Z_Construct_UEnum_YokaiShokan_ERewards();
// End Cross Module References

// Begin Enum ECurrentLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurrentLevel;
static UEnum* ECurrentLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECurrentLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECurrentLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YokaiShokan_ECurrentLevel, (UObject*)Z_Construct_UPackage__Script_YokaiShokan(), TEXT("ECurrentLevel"));
	}
	return Z_Registration_Info_UEnum_ECurrentLevel.OuterSingleton;
}
template<> YOKAISHOKAN_API UEnum* StaticEnum<ECurrentLevel>()
{
	return ECurrentLevel_StaticEnum();
}
struct Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FIRST_LEVEL.Name", "ECurrentLevel::FIRST_LEVEL" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
		{ "SECOND_LEVEL.Name", "ECurrentLevel::SECOND_LEVEL" },
		{ "TOTAL_LEVEL.Name", "ECurrentLevel::TOTAL_LEVEL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECurrentLevel::FIRST_LEVEL", (int64)ECurrentLevel::FIRST_LEVEL },
		{ "ECurrentLevel::SECOND_LEVEL", (int64)ECurrentLevel::SECOND_LEVEL },
		{ "ECurrentLevel::TOTAL_LEVEL", (int64)ECurrentLevel::TOTAL_LEVEL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YokaiShokan,
	nullptr,
	"ECurrentLevel",
	"ECurrentLevel",
	Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YokaiShokan_ECurrentLevel()
{
	if (!Z_Registration_Info_UEnum_ECurrentLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurrentLevel.InnerSingleton, Z_Construct_UEnum_YokaiShokan_ECurrentLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECurrentLevel.InnerSingleton;
}
// End Enum ECurrentLevel

// Begin Enum ERewards
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERewards;
static UEnum* ERewards_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERewards.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERewards.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YokaiShokan_ERewards, (UObject*)Z_Construct_UPackage__Script_YokaiShokan(), TEXT("ERewards"));
	}
	return Z_Registration_Info_UEnum_ERewards.OuterSingleton;
}
template<> YOKAISHOKAN_API UEnum* StaticEnum<ERewards>()
{
	return ERewards_StaticEnum();
}
struct Z_Construct_UEnum_YokaiShokan_ERewards_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HEALTH.Name", "ERewards::HEALTH" },
		{ "LORE_ITEM.Name", "ERewards::LORE_ITEM" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
		{ "SKILL_POINTS.Name", "ERewards::SKILL_POINTS" },
		{ "TOTAL_REWARDS.Name", "ERewards::TOTAL_REWARDS" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERewards::HEALTH", (int64)ERewards::HEALTH },
		{ "ERewards::SKILL_POINTS", (int64)ERewards::SKILL_POINTS },
		{ "ERewards::LORE_ITEM", (int64)ERewards::LORE_ITEM },
		{ "ERewards::TOTAL_REWARDS", (int64)ERewards::TOTAL_REWARDS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YokaiShokan_ERewards_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YokaiShokan,
	nullptr,
	"ERewards",
	"ERewards",
	Z_Construct_UEnum_YokaiShokan_ERewards_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ERewards_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ERewards_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YokaiShokan_ERewards_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YokaiShokan_ERewards()
{
	if (!Z_Registration_Info_UEnum_ERewards.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERewards.InnerSingleton, Z_Construct_UEnum_YokaiShokan_ERewards_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERewards.InnerSingleton;
}
// End Enum ERewards

// Begin Class ALevelRandomizer Function RandomizeLevel
struct Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics
{
	struct LevelRandomizer_eventRandomizeLevel_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventRandomizeLevel_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "RandomizeLevel", nullptr, nullptr, Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::LevelRandomizer_eventRandomizeLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::LevelRandomizer_eventRandomizeLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execRandomizeLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->RandomizeLevel();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function RandomizeLevel

// Begin Class ALevelRandomizer Function RandomizeReward
struct Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics
{
	struct LevelRandomizer_eventRandomizeReward_Parms
	{
		ERewards ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventRandomizeReward_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ERewards, METADATA_PARAMS(0, nullptr) }; // 2431801303
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "RandomizeReward", nullptr, nullptr, Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::LevelRandomizer_eventRandomizeReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::LevelRandomizer_eventRandomizeReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelRandomizer_RandomizeReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_RandomizeReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execRandomizeReward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERewards*)Z_Param__Result=P_THIS->RandomizeReward();
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function RandomizeReward

// Begin Class ALevelRandomizer Function SetCurrentReward
struct Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics
{
	struct LevelRandomizer_eventSetCurrentReward_Parms
	{
		ERewards newReward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randommizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_newReward_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_newReward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::NewProp_newReward_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::NewProp_newReward = { "newReward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventSetCurrentReward_Parms, newReward), Z_Construct_UEnum_YokaiShokan_ERewards, METADATA_PARAMS(0, nullptr) }; // 2431801303
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::NewProp_newReward_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::NewProp_newReward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelRandomizer, nullptr, "SetCurrentReward", nullptr, nullptr, Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::LevelRandomizer_eventSetCurrentReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::LevelRandomizer_eventSetCurrentReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelRandomizer::execSetCurrentReward)
{
	P_GET_ENUM(ERewards,Z_Param_newReward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentReward(ERewards(Z_Param_newReward));
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function SetCurrentReward

// Begin Class ALevelRandomizer Function SpawnEnemies
struct Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics
{
	struct LevelRandomizer_eventSpawnEnemies_Parms
	{
		int32 minimumQuantity;
		int32 maxQuantity;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_minimumQuantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxQuantity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_minimumQuantity = { "minimumQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventSpawnEnemies_Parms, minimumQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_maxQuantity = { "maxQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventSpawnEnemies_Parms, maxQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelRandomizer_eventSpawnEnemies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_minimumQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_maxQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies_Statics::NewProp_ReturnValue,
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
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->SpawnEnemies(Z_Param_minimumQuantity,Z_Param_maxQuantity);
	P_NATIVE_END;
}
// End Class ALevelRandomizer Function SpawnEnemies

// Begin Class ALevelRandomizer
void ALevelRandomizer::StaticRegisterNativesALevelRandomizer()
{
	UClass* Class = ALevelRandomizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RandomizeLevel", &ALevelRandomizer::execRandomizeLevel },
		{ "RandomizeReward", &ALevelRandomizer::execRandomizeReward },
		{ "SetCurrentReward", &ALevelRandomizer::execSetCurrentReward },
		{ "SpawnEnemies", &ALevelRandomizer::execSpawnEnemies },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelLocations_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardsLocations_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossLocation_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelOneEnemySpawnLocations_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelTwoEnemySpawnLocations_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__BaseEnemyClass_MetaData[] = {
		{ "Category", "Level Randomizer" },
		{ "ModuleRelativePath", "LevelRandomizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RewardsLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RewardsLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BossLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelOneEnemySpawnLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelOneEnemySpawnLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelTwoEnemySpawnLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelTwoEnemySpawnLocations;
	static const UECodeGen_Private::FClassPropertyParams NewProp__BaseEnemyClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelRandomizer_RandomizeLevel, "RandomizeLevel" }, // 1006738670
		{ &Z_Construct_UFunction_ALevelRandomizer_RandomizeReward, "RandomizeReward" }, // 3372805318
		{ &Z_Construct_UFunction_ALevelRandomizer_SetCurrentReward, "SetCurrentReward" }, // 2491119902
		{ &Z_Construct_UFunction_ALevelRandomizer_SpawnEnemies, "SpawnEnemies" }, // 4037234655
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelRandomizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelLocations_Inner = { "LevelLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelLocations = { "LevelLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, LevelLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelLocations_MetaData), NewProp_LevelLocations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_RewardsLocations_Inner = { "RewardsLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_RewardsLocations = { "RewardsLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, RewardsLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardsLocations_MetaData), NewProp_RewardsLocations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_BossLocation = { "BossLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, BossLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossLocation_MetaData), NewProp_BossLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelOneEnemySpawnLocations_Inner = { "LevelOneEnemySpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelOneEnemySpawnLocations = { "LevelOneEnemySpawnLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, LevelOneEnemySpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelOneEnemySpawnLocations_MetaData), NewProp_LevelOneEnemySpawnLocations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelTwoEnemySpawnLocations_Inner = { "LevelTwoEnemySpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelTwoEnemySpawnLocations = { "LevelTwoEnemySpawnLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, LevelTwoEnemySpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelTwoEnemySpawnLocations_MetaData), NewProp_LevelTwoEnemySpawnLocations_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__BaseEnemyClass = { "_BaseEnemyClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelRandomizer, _BaseEnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__BaseEnemyClass_MetaData), NewProp__BaseEnemyClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelRandomizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_RewardsLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_RewardsLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_BossLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelOneEnemySpawnLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelOneEnemySpawnLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelTwoEnemySpawnLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp_LevelTwoEnemySpawnLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelRandomizer_Statics::NewProp__BaseEnemyClass,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECurrentLevel_StaticEnum, TEXT("ECurrentLevel"), &Z_Registration_Info_UEnum_ECurrentLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2045559931U) },
		{ ERewards_StaticEnum, TEXT("ERewards"), &Z_Registration_Info_UEnum_ERewards, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2431801303U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelRandomizer, ALevelRandomizer::StaticClass, TEXT("ALevelRandomizer"), &Z_Registration_Info_UClass_ALevelRandomizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelRandomizer), 3252134277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_2347546047(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelRandomizer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
