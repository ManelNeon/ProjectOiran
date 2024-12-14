// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/YokaiShokanGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYokaiShokanGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UYokaiShokanGameInstance();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UYokaiShokanGameInstance_NoRegister();
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
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
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
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
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

// Begin Class UYokaiShokanGameInstance Function GetCurrentHealth
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics
{
	struct YokaiShokanGameInstance_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "DisplayName", "Get HP" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::YokaiShokanGameInstance_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::YokaiShokanGameInstance_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetCurrentHealth

// Begin Class UYokaiShokanGameInstance Function GetCurrentHealthPercentage
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics
{
	struct YokaiShokanGameInstance_eventGetCurrentHealthPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "DisplayName", "Get % HP" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetCurrentHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetCurrentHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::YokaiShokanGameInstance_eventGetCurrentHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::YokaiShokanGameInstance_eventGetCurrentHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetCurrentHealthPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealthPercentage();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetCurrentHealthPercentage

// Begin Class UYokaiShokanGameInstance Function GetCurrentLevel
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics
{
	struct YokaiShokanGameInstance_eventGetCurrentLevel_Parms
	{
		ECurrentLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetCurrentLevel_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ECurrentLevel, METADATA_PARAMS(0, nullptr) }; // 2511653475
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::YokaiShokanGameInstance_eventGetCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::YokaiShokanGameInstance_eventGetCurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetCurrentLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECurrentLevel*)Z_Param__Result=P_THIS->GetCurrentLevel();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetCurrentLevel

// Begin Class UYokaiShokanGameInstance Function GetDifferentReward
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics
{
	struct YokaiShokanGameInstance_eventGetDifferentReward_Parms
	{
		ERewards ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetDifferentReward_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ERewards, METADATA_PARAMS(0, nullptr) }; // 312126965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetDifferentReward", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::YokaiShokanGameInstance_eventGetDifferentReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::YokaiShokanGameInstance_eventGetDifferentReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetDifferentReward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERewards*)Z_Param__Result=P_THIS->GetDifferentReward();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetDifferentReward

// Begin Class UYokaiShokanGameInstance Function SetCurrentLevel
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics
{
	struct YokaiShokanGameInstance_eventSetCurrentLevel_Parms
	{
		ECurrentLevel currentLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::NewProp_currentLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::NewProp_currentLevel = { "currentLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetCurrentLevel_Parms, currentLevel), Z_Construct_UEnum_YokaiShokan_ECurrentLevel, METADATA_PARAMS(0, nullptr) }; // 2511653475
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::NewProp_currentLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::NewProp_currentLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::YokaiShokanGameInstance_eventSetCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::YokaiShokanGameInstance_eventSetCurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetCurrentLevel)
{
	P_GET_ENUM(ECurrentLevel,Z_Param_currentLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentLevel(ECurrentLevel(Z_Param_currentLevel));
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetCurrentLevel

// Begin Class UYokaiShokanGameInstance Function SetIsInsideRoguelite
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics
{
	struct YokaiShokanGameInstance_eventSetIsInsideRoguelite_Parms
	{
		bool isInside;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isInside;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::NewProp_isInside_SetBit(void* Obj)
{
	((YokaiShokanGameInstance_eventSetIsInsideRoguelite_Parms*)Obj)->isInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::NewProp_isInside = { "isInside", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YokaiShokanGameInstance_eventSetIsInsideRoguelite_Parms), &Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::NewProp_isInside_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::NewProp_isInside,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetIsInsideRoguelite", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::YokaiShokanGameInstance_eventSetIsInsideRoguelite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::YokaiShokanGameInstance_eventSetIsInsideRoguelite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetIsInsideRoguelite)
{
	P_GET_UBOOL(Z_Param_isInside);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsInsideRoguelite(Z_Param_isInside);
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetIsInsideRoguelite

// Begin Class UYokaiShokanGameInstance
void UYokaiShokanGameInstance::StaticRegisterNativesUYokaiShokanGameInstance()
{
	UClass* Class = UYokaiShokanGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentHealth", &UYokaiShokanGameInstance::execGetCurrentHealth },
		{ "GetCurrentHealthPercentage", &UYokaiShokanGameInstance::execGetCurrentHealthPercentage },
		{ "GetCurrentLevel", &UYokaiShokanGameInstance::execGetCurrentLevel },
		{ "GetDifferentReward", &UYokaiShokanGameInstance::execGetDifferentReward },
		{ "SetCurrentLevel", &UYokaiShokanGameInstance::execSetCurrentLevel },
		{ "SetIsInsideRoguelite", &UYokaiShokanGameInstance::execSetIsInsideRoguelite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYokaiShokanGameInstance);
UClass* Z_Construct_UClass_UYokaiShokanGameInstance_NoRegister()
{
	return UYokaiShokanGameInstance::StaticClass();
}
struct Z_Construct_UClass_UYokaiShokanGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "YokaiShokanGameInstance.h" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth, "GetCurrentHealth" }, // 480227573
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage, "GetCurrentHealthPercentage" }, // 1430771872
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel, "GetCurrentLevel" }, // 524536052
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward, "GetDifferentReward" }, // 3570132785
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel, "SetCurrentLevel" }, // 3818652800
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite, "SetIsInsideRoguelite" }, // 3515282623
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYokaiShokanGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UYokaiShokanGameInstance_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UYokaiShokanGameInstance, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYokaiShokanGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYokaiShokanGameInstance_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYokaiShokanGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UYokaiShokanGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UYokaiShokanGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UYokaiShokanGameInstance_Statics::ClassParams = {
	&UYokaiShokanGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UYokaiShokanGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UYokaiShokanGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UYokaiShokanGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UYokaiShokanGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UYokaiShokanGameInstance()
{
	if (!Z_Registration_Info_UClass_UYokaiShokanGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYokaiShokanGameInstance.OuterSingleton, Z_Construct_UClass_UYokaiShokanGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UYokaiShokanGameInstance.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<UYokaiShokanGameInstance>()
{
	return UYokaiShokanGameInstance::StaticClass();
}
UYokaiShokanGameInstance::UYokaiShokanGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UYokaiShokanGameInstance);
UYokaiShokanGameInstance::~UYokaiShokanGameInstance() {}
// End Class UYokaiShokanGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECurrentLevel_StaticEnum, TEXT("ECurrentLevel"), &Z_Registration_Info_UEnum_ECurrentLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2511653475U) },
		{ ERewards_StaticEnum, TEXT("ERewards"), &Z_Registration_Info_UEnum_ERewards, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 312126965U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYokaiShokanGameInstance, UYokaiShokanGameInstance::StaticClass, TEXT("UYokaiShokanGameInstance"), &Z_Registration_Info_UClass_UYokaiShokanGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYokaiShokanGameInstance), 2321338005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_1695698408(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
