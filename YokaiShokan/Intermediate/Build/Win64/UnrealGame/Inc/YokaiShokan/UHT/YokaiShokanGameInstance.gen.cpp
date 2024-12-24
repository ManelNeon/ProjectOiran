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
YOKAISHOKAN_API UEnum* Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability();
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

// Begin Enum ESkillPointAvailability
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkillPointAvailability;
static UEnum* ESkillPointAvailability_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkillPointAvailability.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkillPointAvailability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability, (UObject*)Z_Construct_UPackage__Script_YokaiShokan(), TEXT("ESkillPointAvailability"));
	}
	return Z_Registration_Info_UEnum_ESkillPointAvailability.OuterSingleton;
}
template<> YOKAISHOKAN_API UEnum* StaticEnum<ESkillPointAvailability>()
{
	return ESkillPointAvailability_StaticEnum();
}
struct Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACQUIRED.Name", "ESkillPointAvailability::ACQUIRED" },
		{ "AVAILABLE.Name", "ESkillPointAvailability::AVAILABLE" },
		{ "BlueprintType", "true" },
		{ "DISABLED.Name", "ESkillPointAvailability::DISABLED" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
		{ "TOTAL_AVAILABILITY.Name", "ESkillPointAvailability::TOTAL_AVAILABILITY" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESkillPointAvailability::AVAILABLE", (int64)ESkillPointAvailability::AVAILABLE },
		{ "ESkillPointAvailability::DISABLED", (int64)ESkillPointAvailability::DISABLED },
		{ "ESkillPointAvailability::ACQUIRED", (int64)ESkillPointAvailability::ACQUIRED },
		{ "ESkillPointAvailability::TOTAL_AVAILABILITY", (int64)ESkillPointAvailability::TOTAL_AVAILABILITY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_YokaiShokan,
	nullptr,
	"ESkillPointAvailability",
	"ESkillPointAvailability",
	Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability_Statics::Enum_MetaDataParams), Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability()
{
	if (!Z_Registration_Info_UEnum_ESkillPointAvailability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkillPointAvailability.InnerSingleton, Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkillPointAvailability.InnerSingleton;
}
// End Enum ESkillPointAvailability

// Begin Class UYokaiShokanGameInstance Function GetAmountOfSkillPoints
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics
{
	struct YokaiShokanGameInstance_eventGetAmountOfSkillPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetAmountOfSkillPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetAmountOfSkillPoints", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::YokaiShokanGameInstance_eventGetAmountOfSkillPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::YokaiShokanGameInstance_eventGetAmountOfSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetAmountOfSkillPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAmountOfSkillPoints();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetAmountOfSkillPoints

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::YokaiShokanGameInstance_eventGetCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel_Statics::Function_MetaDataParams) };
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

// Begin Class UYokaiShokanGameInstance Function GetCurrentReward
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics
{
	struct YokaiShokanGameInstance_eventGetCurrentReward_Parms
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetCurrentReward_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ERewards, METADATA_PARAMS(0, nullptr) }; // 312126965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetCurrentReward", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::YokaiShokanGameInstance_eventGetCurrentReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::YokaiShokanGameInstance_eventGetCurrentReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetCurrentReward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERewards*)Z_Param__Result=P_THIS->GetCurrentReward();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetCurrentReward

// Begin Class UYokaiShokanGameInstance Function GetDamageStat
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics
{
	struct YokaiShokanGameInstance_eventGetDamageStat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetDamageStat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetDamageStat", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::YokaiShokanGameInstance_eventGetDamageStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::YokaiShokanGameInstance_eventGetDamageStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetDamageStat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamageStat();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetDamageStat

// Begin Class UYokaiShokanGameInstance Function GetDialogueVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics
{
	struct YokaiShokanGameInstance_eventGetDialogueVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetDialogueVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetDialogueVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::YokaiShokanGameInstance_eventGetDialogueVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::YokaiShokanGameInstance_eventGetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetDialogueVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDialogueVolume();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetDialogueVolume

// Begin Class UYokaiShokanGameInstance Function GetDifferentLevel
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics
{
	struct YokaiShokanGameInstance_eventGetDifferentLevel_Parms
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetDifferentLevel_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ECurrentLevel, METADATA_PARAMS(0, nullptr) }; // 2511653475
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetDifferentLevel", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::YokaiShokanGameInstance_eventGetDifferentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::YokaiShokanGameInstance_eventGetDifferentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetDifferentLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECurrentLevel*)Z_Param__Result=P_THIS->GetDifferentLevel();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetDifferentLevel

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetDifferentReward", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::YokaiShokanGameInstance_eventGetDifferentReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward_Statics::Function_MetaDataParams) };
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

// Begin Class UYokaiShokanGameInstance Function GetEnviromentVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics
{
	struct YokaiShokanGameInstance_eventGetEnviromentVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetEnviromentVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetEnviromentVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::YokaiShokanGameInstance_eventGetEnviromentVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::YokaiShokanGameInstance_eventGetEnviromentVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetEnviromentVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEnviromentVolume();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetEnviromentVolume

// Begin Class UYokaiShokanGameInstance Function GetIsInsideRoguelite
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics
{
	struct YokaiShokanGameInstance_eventGetIsInsideRoguelite_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((YokaiShokanGameInstance_eventGetIsInsideRoguelite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(YokaiShokanGameInstance_eventGetIsInsideRoguelite_Parms), &Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetIsInsideRoguelite", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::YokaiShokanGameInstance_eventGetIsInsideRoguelite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::YokaiShokanGameInstance_eventGetIsInsideRoguelite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetIsInsideRoguelite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsInsideRoguelite();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetIsInsideRoguelite

// Begin Class UYokaiShokanGameInstance Function GetMasterVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics
{
	struct YokaiShokanGameInstance_eventGetMasterVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::YokaiShokanGameInstance_eventGetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::YokaiShokanGameInstance_eventGetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetMasterVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMasterVolume();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetMasterVolume

// Begin Class UYokaiShokanGameInstance Function GetMaxHealth
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics
{
	struct YokaiShokanGameInstance_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::YokaiShokanGameInstance_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::YokaiShokanGameInstance_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetMaxHealth

// Begin Class UYokaiShokanGameInstance Function GetMusicVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics
{
	struct YokaiShokanGameInstance_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::YokaiShokanGameInstance_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::YokaiShokanGameInstance_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetMusicVolume

// Begin Class UYokaiShokanGameInstance Function GetPlayerLevel
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics
{
	struct YokaiShokanGameInstance_eventGetPlayerLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetPlayerLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetPlayerLevel", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::YokaiShokanGameInstance_eventGetPlayerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::YokaiShokanGameInstance_eventGetPlayerLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetPlayerLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerLevel();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetPlayerLevel

// Begin Class UYokaiShokanGameInstance Function GetSFXVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics
{
	struct YokaiShokanGameInstance_eventGetSFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::YokaiShokanGameInstance_eventGetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::YokaiShokanGameInstance_eventGetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetSFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSFXVolume();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetSFXVolume

// Begin Class UYokaiShokanGameInstance Function GetSkillPointAvailability
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics
{
	struct YokaiShokanGameInstance_eventGetSkillPointAvailability_Parms
	{
		TArray<ESkillPointAvailability> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//SkillTree\n" },
#endif
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SkillTree" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability, METADATA_PARAMS(0, nullptr) }; // 1887813998
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetSkillPointAvailability_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1887813998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetSkillPointAvailability", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::YokaiShokanGameInstance_eventGetSkillPointAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::YokaiShokanGameInstance_eventGetSkillPointAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetSkillPointAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ESkillPointAvailability>*)Z_Param__Result=P_THIS->GetSkillPointAvailability();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetSkillPointAvailability

// Begin Class UYokaiShokanGameInstance Function GetUIVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics
{
	struct YokaiShokanGameInstance_eventGetUIVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventGetUIVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "GetUIVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::YokaiShokanGameInstance_eventGetUIVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::YokaiShokanGameInstance_eventGetUIVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execGetUIVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUIVolume();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function GetUIVolume

// Begin Class UYokaiShokanGameInstance Function IncreasePlayerDamage
struct Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "IncreasePlayerDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerDamage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execIncreasePlayerDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreasePlayerDamage();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function IncreasePlayerDamage

// Begin Class UYokaiShokanGameInstance Function IncreasePlayerHealth
struct Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "IncreasePlayerHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execIncreasePlayerHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreasePlayerHealth();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function IncreasePlayerHealth

// Begin Class UYokaiShokanGameInstance Function IncrementLevelCounter
struct Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementLevelCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementLevelCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "IncrementLevelCounter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementLevelCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementLevelCounter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementLevelCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementLevelCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execIncrementLevelCounter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementLevelCounter();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function IncrementLevelCounter

// Begin Class UYokaiShokanGameInstance Function IncrementPlayerLevel
struct Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementPlayerLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "IncrementPlayerLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementPlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementPlayerLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementPlayerLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementPlayerLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execIncrementPlayerLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementPlayerLevel();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function IncrementPlayerLevel

// Begin Class UYokaiShokanGameInstance Function IncrementSkillPoints
struct Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementSkillPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "IncrementSkillPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementSkillPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execIncrementSkillPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementSkillPoints();
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function IncrementSkillPoints

// Begin Class UYokaiShokanGameInstance Function RemoveSkillPoints
struct Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics
{
	struct YokaiShokanGameInstance_eventRemoveSkillPoints_Parms
	{
		int32 quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventRemoveSkillPoints_Parms, quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::NewProp_quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "RemoveSkillPoints", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::YokaiShokanGameInstance_eventRemoveSkillPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::YokaiShokanGameInstance_eventRemoveSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execRemoveSkillPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSkillPoints(Z_Param_quantity);
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function RemoveSkillPoints

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

// Begin Class UYokaiShokanGameInstance Function SetCurrentReward
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics
{
	struct YokaiShokanGameInstance_eventSetCurrentReward_Parms
	{
		ERewards currentReward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentReward_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentReward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::NewProp_currentReward_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::NewProp_currentReward = { "currentReward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetCurrentReward_Parms, currentReward), Z_Construct_UEnum_YokaiShokan_ERewards, METADATA_PARAMS(0, nullptr) }; // 312126965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::NewProp_currentReward_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::NewProp_currentReward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetCurrentReward", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::YokaiShokanGameInstance_eventSetCurrentReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::YokaiShokanGameInstance_eventSetCurrentReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetCurrentReward)
{
	P_GET_ENUM(ERewards,Z_Param_currentReward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentReward(ERewards(Z_Param_currentReward));
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetCurrentReward

// Begin Class UYokaiShokanGameInstance Function SetDialogueVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics
{
	struct YokaiShokanGameInstance_eventSetDialogueVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetDialogueVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetDialogueVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::YokaiShokanGameInstance_eventSetDialogueVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::YokaiShokanGameInstance_eventSetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetDialogueVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetDialogueVolume

// Begin Class UYokaiShokanGameInstance Function SetEnviromentVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics
{
	struct YokaiShokanGameInstance_eventSetEnviromentVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetEnviromentVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetEnviromentVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::YokaiShokanGameInstance_eventSetEnviromentVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::YokaiShokanGameInstance_eventSetEnviromentVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetEnviromentVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnviromentVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetEnviromentVolume

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

// Begin Class UYokaiShokanGameInstance Function SetMasterVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics
{
	struct YokaiShokanGameInstance_eventSetMasterVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetMasterVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::YokaiShokanGameInstance_eventSetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::YokaiShokanGameInstance_eventSetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetMasterVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMasterVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetMasterVolume

// Begin Class UYokaiShokanGameInstance Function SetMusicVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics
{
	struct YokaiShokanGameInstance_eventSetMusicVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetMusicVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::YokaiShokanGameInstance_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::YokaiShokanGameInstance_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetMusicVolume

// Begin Class UYokaiShokanGameInstance Function SetSFXVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics
{
	struct YokaiShokanGameInstance_eventSetSFXVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetSFXVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::YokaiShokanGameInstance_eventSetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::YokaiShokanGameInstance_eventSetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetSFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSFXVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetSFXVolume

// Begin Class UYokaiShokanGameInstance Function SetSkillPointAvailability
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics
{
	struct YokaiShokanGameInstance_eventSetSkillPointAvailability_Parms
	{
		int32 index;
		ESkillPointAvailability skillPointStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_skillPointStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_skillPointStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetSkillPointAvailability_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::NewProp_skillPointStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::NewProp_skillPointStatus = { "skillPointStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetSkillPointAvailability_Parms, skillPointStatus), Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability, METADATA_PARAMS(0, nullptr) }; // 1887813998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::NewProp_skillPointStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::NewProp_skillPointStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetSkillPointAvailability", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::YokaiShokanGameInstance_eventSetSkillPointAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::YokaiShokanGameInstance_eventSetSkillPointAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetSkillPointAvailability)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_ENUM(ESkillPointAvailability,Z_Param_skillPointStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkillPointAvailability(Z_Param_index,ESkillPointAvailability(Z_Param_skillPointStatus));
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetSkillPointAvailability

// Begin Class UYokaiShokanGameInstance Function SetUIVolume
struct Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics
{
	struct YokaiShokanGameInstance_eventSetUIVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "YokaiShokanGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(YokaiShokanGameInstance_eventSetUIVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYokaiShokanGameInstance, nullptr, "SetUIVolume", nullptr, nullptr, Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::YokaiShokanGameInstance_eventSetUIVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::YokaiShokanGameInstance_eventSetUIVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UYokaiShokanGameInstance::execSetUIVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UYokaiShokanGameInstance Function SetUIVolume

// Begin Class UYokaiShokanGameInstance
void UYokaiShokanGameInstance::StaticRegisterNativesUYokaiShokanGameInstance()
{
	UClass* Class = UYokaiShokanGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAmountOfSkillPoints", &UYokaiShokanGameInstance::execGetAmountOfSkillPoints },
		{ "GetCurrentHealth", &UYokaiShokanGameInstance::execGetCurrentHealth },
		{ "GetCurrentHealthPercentage", &UYokaiShokanGameInstance::execGetCurrentHealthPercentage },
		{ "GetCurrentLevel", &UYokaiShokanGameInstance::execGetCurrentLevel },
		{ "GetCurrentReward", &UYokaiShokanGameInstance::execGetCurrentReward },
		{ "GetDamageStat", &UYokaiShokanGameInstance::execGetDamageStat },
		{ "GetDialogueVolume", &UYokaiShokanGameInstance::execGetDialogueVolume },
		{ "GetDifferentLevel", &UYokaiShokanGameInstance::execGetDifferentLevel },
		{ "GetDifferentReward", &UYokaiShokanGameInstance::execGetDifferentReward },
		{ "GetEnviromentVolume", &UYokaiShokanGameInstance::execGetEnviromentVolume },
		{ "GetIsInsideRoguelite", &UYokaiShokanGameInstance::execGetIsInsideRoguelite },
		{ "GetMasterVolume", &UYokaiShokanGameInstance::execGetMasterVolume },
		{ "GetMaxHealth", &UYokaiShokanGameInstance::execGetMaxHealth },
		{ "GetMusicVolume", &UYokaiShokanGameInstance::execGetMusicVolume },
		{ "GetPlayerLevel", &UYokaiShokanGameInstance::execGetPlayerLevel },
		{ "GetSFXVolume", &UYokaiShokanGameInstance::execGetSFXVolume },
		{ "GetSkillPointAvailability", &UYokaiShokanGameInstance::execGetSkillPointAvailability },
		{ "GetUIVolume", &UYokaiShokanGameInstance::execGetUIVolume },
		{ "IncreasePlayerDamage", &UYokaiShokanGameInstance::execIncreasePlayerDamage },
		{ "IncreasePlayerHealth", &UYokaiShokanGameInstance::execIncreasePlayerHealth },
		{ "IncrementLevelCounter", &UYokaiShokanGameInstance::execIncrementLevelCounter },
		{ "IncrementPlayerLevel", &UYokaiShokanGameInstance::execIncrementPlayerLevel },
		{ "IncrementSkillPoints", &UYokaiShokanGameInstance::execIncrementSkillPoints },
		{ "RemoveSkillPoints", &UYokaiShokanGameInstance::execRemoveSkillPoints },
		{ "SetCurrentLevel", &UYokaiShokanGameInstance::execSetCurrentLevel },
		{ "SetCurrentReward", &UYokaiShokanGameInstance::execSetCurrentReward },
		{ "SetDialogueVolume", &UYokaiShokanGameInstance::execSetDialogueVolume },
		{ "SetEnviromentVolume", &UYokaiShokanGameInstance::execSetEnviromentVolume },
		{ "SetIsInsideRoguelite", &UYokaiShokanGameInstance::execSetIsInsideRoguelite },
		{ "SetMasterVolume", &UYokaiShokanGameInstance::execSetMasterVolume },
		{ "SetMusicVolume", &UYokaiShokanGameInstance::execSetMusicVolume },
		{ "SetSFXVolume", &UYokaiShokanGameInstance::execSetSFXVolume },
		{ "SetSkillPointAvailability", &UYokaiShokanGameInstance::execSetSkillPointAvailability },
		{ "SetUIVolume", &UYokaiShokanGameInstance::execSetUIVolume },
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
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetAmountOfSkillPoints, "GetAmountOfSkillPoints" }, // 1704723709
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealth, "GetCurrentHealth" }, // 480227573
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentHealthPercentage, "GetCurrentHealthPercentage" }, // 1430771872
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentLevel, "GetCurrentLevel" }, // 87789901
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetCurrentReward, "GetCurrentReward" }, // 1011067332
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetDamageStat, "GetDamageStat" }, // 1828409199
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetDialogueVolume, "GetDialogueVolume" }, // 3516143033
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentLevel, "GetDifferentLevel" }, // 884787038
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetDifferentReward, "GetDifferentReward" }, // 1419401698
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetEnviromentVolume, "GetEnviromentVolume" }, // 3336832557
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetIsInsideRoguelite, "GetIsInsideRoguelite" }, // 2402711800
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetMasterVolume, "GetMasterVolume" }, // 3263111949
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetMaxHealth, "GetMaxHealth" }, // 348087410
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetMusicVolume, "GetMusicVolume" }, // 362910556
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetPlayerLevel, "GetPlayerLevel" }, // 4140460456
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetSFXVolume, "GetSFXVolume" }, // 668703066
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetSkillPointAvailability, "GetSkillPointAvailability" }, // 1108192212
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_GetUIVolume, "GetUIVolume" }, // 1601227542
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerDamage, "IncreasePlayerDamage" }, // 2548830792
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_IncreasePlayerHealth, "IncreasePlayerHealth" }, // 1140872987
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementLevelCounter, "IncrementLevelCounter" }, // 3007303996
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementPlayerLevel, "IncrementPlayerLevel" }, // 1692563744
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_IncrementSkillPoints, "IncrementSkillPoints" }, // 2565205507
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_RemoveSkillPoints, "RemoveSkillPoints" }, // 4239783497
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentLevel, "SetCurrentLevel" }, // 3818652800
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetCurrentReward, "SetCurrentReward" }, // 897470113
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetDialogueVolume, "SetDialogueVolume" }, // 1100322039
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetEnviromentVolume, "SetEnviromentVolume" }, // 4249386688
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetIsInsideRoguelite, "SetIsInsideRoguelite" }, // 3515282623
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetMasterVolume, "SetMasterVolume" }, // 1659968934
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetMusicVolume, "SetMusicVolume" }, // 3398612190
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetSFXVolume, "SetSFXVolume" }, // 1644755972
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetSkillPointAvailability, "SetSkillPointAvailability" }, // 1997238434
		{ &Z_Construct_UFunction_UYokaiShokanGameInstance_SetUIVolume, "SetUIVolume" }, // 1589086514
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
		{ ESkillPointAvailability_StaticEnum, TEXT("ESkillPointAvailability"), &Z_Registration_Info_UEnum_ESkillPointAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1887813998U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UYokaiShokanGameInstance, UYokaiShokanGameInstance::StaticClass, TEXT("UYokaiShokanGameInstance"), &Z_Registration_Info_UClass_UYokaiShokanGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYokaiShokanGameInstance), 2904706943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_915873723(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanGameInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
