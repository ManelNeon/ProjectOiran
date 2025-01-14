// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/StatsGameInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsGameInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UStatsGameInstanceSubsystem();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UStatsGameInstanceSubsystem_NoRegister();
YOKAISHOKAN_API UEnum* Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability();
// End Cross Module References

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
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
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

// Begin Class UStatsGameInstanceSubsystem Function ClearTheSkillPoinsInRun
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_ClearTheSkillPoinsInRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_ClearTheSkillPoinsInRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "ClearTheSkillPoinsInRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_ClearTheSkillPoinsInRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_ClearTheSkillPoinsInRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_ClearTheSkillPoinsInRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_ClearTheSkillPoinsInRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execClearTheSkillPoinsInRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTheSkillPoinsInRun();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function ClearTheSkillPoinsInRun

// Begin Class UStatsGameInstanceSubsystem Function GetAmountOfSkillPoints
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics
{
	struct StatsGameInstanceSubsystem_eventGetAmountOfSkillPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventGetAmountOfSkillPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "GetAmountOfSkillPoints", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::StatsGameInstanceSubsystem_eventGetAmountOfSkillPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::StatsGameInstanceSubsystem_eventGetAmountOfSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execGetAmountOfSkillPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAmountOfSkillPoints();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function GetAmountOfSkillPoints

// Begin Class UStatsGameInstanceSubsystem Function GetCurrentHealth
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics
{
	struct StatsGameInstanceSubsystem_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "DisplayName", "Get HP" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::StatsGameInstanceSubsystem_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::StatsGameInstanceSubsystem_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function GetCurrentHealth

// Begin Class UStatsGameInstanceSubsystem Function GetCurrentHealthPercentage
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics
{
	struct StatsGameInstanceSubsystem_eventGetCurrentHealthPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "DisplayName", "Get % HP" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventGetCurrentHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "GetCurrentHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::StatsGameInstanceSubsystem_eventGetCurrentHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::StatsGameInstanceSubsystem_eventGetCurrentHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execGetCurrentHealthPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealthPercentage();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function GetCurrentHealthPercentage

// Begin Class UStatsGameInstanceSubsystem Function GetDamageStat
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics
{
	struct StatsGameInstanceSubsystem_eventGetDamageStat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventGetDamageStat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "GetDamageStat", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::StatsGameInstanceSubsystem_eventGetDamageStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::StatsGameInstanceSubsystem_eventGetDamageStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execGetDamageStat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamageStat();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function GetDamageStat

// Begin Class UStatsGameInstanceSubsystem Function GetMaxHealth
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics
{
	struct StatsGameInstanceSubsystem_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::StatsGameInstanceSubsystem_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::StatsGameInstanceSubsystem_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function GetMaxHealth

// Begin Class UStatsGameInstanceSubsystem Function GetPlayerLevel
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics
{
	struct StatsGameInstanceSubsystem_eventGetPlayerLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventGetPlayerLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "GetPlayerLevel", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::StatsGameInstanceSubsystem_eventGetPlayerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::StatsGameInstanceSubsystem_eventGetPlayerLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execGetPlayerLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerLevel();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function GetPlayerLevel

// Begin Class UStatsGameInstanceSubsystem Function GetSkillPointAvailability
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics
{
	struct StatsGameInstanceSubsystem_eventGetSkillPointAvailability_Parms
	{
		TArray<ESkillPointAvailability> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//SkillTree\n" },
#endif
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability, METADATA_PARAMS(0, nullptr) }; // 435019943
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventGetSkillPointAvailability_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 435019943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "GetSkillPointAvailability", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::StatsGameInstanceSubsystem_eventGetSkillPointAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::StatsGameInstanceSubsystem_eventGetSkillPointAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execGetSkillPointAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ESkillPointAvailability>*)Z_Param__Result=P_THIS->GetSkillPointAvailability();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function GetSkillPointAvailability

// Begin Class UStatsGameInstanceSubsystem Function IncreasePlayerDamage
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "IncreasePlayerDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerDamage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execIncreasePlayerDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreasePlayerDamage();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function IncreasePlayerDamage

// Begin Class UStatsGameInstanceSubsystem Function IncreasePlayerHealth
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "IncreasePlayerHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execIncreasePlayerHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreasePlayerHealth();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function IncreasePlayerHealth

// Begin Class UStatsGameInstanceSubsystem Function IncrementPlayerLevel
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementPlayerLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementPlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "IncrementPlayerLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementPlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementPlayerLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementPlayerLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementPlayerLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execIncrementPlayerLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementPlayerLevel();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function IncrementPlayerLevel

// Begin Class UStatsGameInstanceSubsystem Function IncrementSkillPoints
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "IncrementSkillPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execIncrementSkillPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementSkillPoints();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function IncrementSkillPoints

// Begin Class UStatsGameInstanceSubsystem Function IncrementSkillPointsInRun
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPointsInRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPointsInRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "IncrementSkillPointsInRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPointsInRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPointsInRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPointsInRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPointsInRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execIncrementSkillPointsInRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementSkillPointsInRun();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function IncrementSkillPointsInRun

// Begin Class UStatsGameInstanceSubsystem Function RemoveSkillPoints
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics
{
	struct StatsGameInstanceSubsystem_eventRemoveSkillPoints_Parms
	{
		int32 quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventRemoveSkillPoints_Parms, quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::NewProp_quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "RemoveSkillPoints", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::StatsGameInstanceSubsystem_eventRemoveSkillPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::StatsGameInstanceSubsystem_eventRemoveSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execRemoveSkillPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSkillPoints(Z_Param_quantity);
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function RemoveSkillPoints

// Begin Class UStatsGameInstanceSubsystem Function SetSkillPointAvailability
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics
{
	struct StatsGameInstanceSubsystem_eventSetSkillPointAvailability_Parms
	{
		int32 index;
		ESkillPointAvailability skillPointStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_skillPointStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_skillPointStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventSetSkillPointAvailability_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::NewProp_skillPointStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::NewProp_skillPointStatus = { "skillPointStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsGameInstanceSubsystem_eventSetSkillPointAvailability_Parms, skillPointStatus), Z_Construct_UEnum_YokaiShokan_ESkillPointAvailability, METADATA_PARAMS(0, nullptr) }; // 435019943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::NewProp_skillPointStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::NewProp_skillPointStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "SetSkillPointAvailability", nullptr, nullptr, Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::StatsGameInstanceSubsystem_eventSetSkillPointAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::StatsGameInstanceSubsystem_eventSetSkillPointAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execSetSkillPointAvailability)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_ENUM(ESkillPointAvailability,Z_Param_skillPointStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkillPointAvailability(Z_Param_index,ESkillPointAvailability(Z_Param_skillPointStatus));
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function SetSkillPointAvailability

// Begin Class UStatsGameInstanceSubsystem Function SetSkillPointsInRunToZero
struct Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointsInRunToZero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Stats" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointsInRunToZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsGameInstanceSubsystem, nullptr, "SetSkillPointsInRunToZero", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointsInRunToZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointsInRunToZero_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointsInRunToZero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointsInRunToZero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsGameInstanceSubsystem::execSetSkillPointsInRunToZero)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkillPointsInRunToZero();
	P_NATIVE_END;
}
// End Class UStatsGameInstanceSubsystem Function SetSkillPointsInRunToZero

// Begin Class UStatsGameInstanceSubsystem
void UStatsGameInstanceSubsystem::StaticRegisterNativesUStatsGameInstanceSubsystem()
{
	UClass* Class = UStatsGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTheSkillPoinsInRun", &UStatsGameInstanceSubsystem::execClearTheSkillPoinsInRun },
		{ "GetAmountOfSkillPoints", &UStatsGameInstanceSubsystem::execGetAmountOfSkillPoints },
		{ "GetCurrentHealth", &UStatsGameInstanceSubsystem::execGetCurrentHealth },
		{ "GetCurrentHealthPercentage", &UStatsGameInstanceSubsystem::execGetCurrentHealthPercentage },
		{ "GetDamageStat", &UStatsGameInstanceSubsystem::execGetDamageStat },
		{ "GetMaxHealth", &UStatsGameInstanceSubsystem::execGetMaxHealth },
		{ "GetPlayerLevel", &UStatsGameInstanceSubsystem::execGetPlayerLevel },
		{ "GetSkillPointAvailability", &UStatsGameInstanceSubsystem::execGetSkillPointAvailability },
		{ "IncreasePlayerDamage", &UStatsGameInstanceSubsystem::execIncreasePlayerDamage },
		{ "IncreasePlayerHealth", &UStatsGameInstanceSubsystem::execIncreasePlayerHealth },
		{ "IncrementPlayerLevel", &UStatsGameInstanceSubsystem::execIncrementPlayerLevel },
		{ "IncrementSkillPoints", &UStatsGameInstanceSubsystem::execIncrementSkillPoints },
		{ "IncrementSkillPointsInRun", &UStatsGameInstanceSubsystem::execIncrementSkillPointsInRun },
		{ "RemoveSkillPoints", &UStatsGameInstanceSubsystem::execRemoveSkillPoints },
		{ "SetSkillPointAvailability", &UStatsGameInstanceSubsystem::execSetSkillPointAvailability },
		{ "SetSkillPointsInRunToZero", &UStatsGameInstanceSubsystem::execSetSkillPointsInRunToZero },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsGameInstanceSubsystem);
UClass* Z_Construct_UClass_UStatsGameInstanceSubsystem_NoRegister()
{
	return UStatsGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UStatsGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StatsGameInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "StatsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_ClearTheSkillPoinsInRun, "ClearTheSkillPoinsInRun" }, // 3490941490
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetAmountOfSkillPoints, "GetAmountOfSkillPoints" }, // 374895683
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealth, "GetCurrentHealth" }, // 328614273
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetCurrentHealthPercentage, "GetCurrentHealthPercentage" }, // 3325647167
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetDamageStat, "GetDamageStat" }, // 3084934143
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetMaxHealth, "GetMaxHealth" }, // 1452300572
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetPlayerLevel, "GetPlayerLevel" }, // 1006573452
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_GetSkillPointAvailability, "GetSkillPointAvailability" }, // 1311002940
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerDamage, "IncreasePlayerDamage" }, // 3487695746
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncreasePlayerHealth, "IncreasePlayerHealth" }, // 2724160140
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementPlayerLevel, "IncrementPlayerLevel" }, // 303612375
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPoints, "IncrementSkillPoints" }, // 184126496
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_IncrementSkillPointsInRun, "IncrementSkillPointsInRun" }, // 1373615730
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_RemoveSkillPoints, "RemoveSkillPoints" }, // 3628073729
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointAvailability, "SetSkillPointAvailability" }, // 711901200
		{ &Z_Construct_UFunction_UStatsGameInstanceSubsystem_SetSkillPointsInRunToZero, "SetSkillPointsInRunToZero" }, // 290369782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStatsGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsGameInstanceSubsystem_Statics::ClassParams = {
	&UStatsGameInstanceSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UStatsGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UStatsGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsGameInstanceSubsystem.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<UStatsGameInstanceSubsystem>()
{
	return UStatsGameInstanceSubsystem::StaticClass();
}
UStatsGameInstanceSubsystem::UStatsGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsGameInstanceSubsystem);
UStatsGameInstanceSubsystem::~UStatsGameInstanceSubsystem() {}
// End Class UStatsGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESkillPointAvailability_StaticEnum, TEXT("ESkillPointAvailability"), &Z_Registration_Info_UEnum_ESkillPointAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 435019943U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsGameInstanceSubsystem, UStatsGameInstanceSubsystem::StaticClass, TEXT("UStatsGameInstanceSubsystem"), &Z_Registration_Info_UClass_UStatsGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsGameInstanceSubsystem), 4003015760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_2443373442(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_StatsGameInstanceSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
