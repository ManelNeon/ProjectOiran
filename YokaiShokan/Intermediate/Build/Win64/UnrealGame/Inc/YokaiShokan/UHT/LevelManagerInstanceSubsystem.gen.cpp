// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/LevelManagerInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelManagerInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ULevelManagerInstanceSubsystem();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ULevelManagerInstanceSubsystem_NoRegister();
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
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
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
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
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

// Begin Class ULevelManagerInstanceSubsystem Function GetCurrentLevel
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics
{
	struct LevelManagerInstanceSubsystem_eventGetCurrentLevel_Parms
	{
		ECurrentLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManagerInstanceSubsystem_eventGetCurrentLevel_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ECurrentLevel, METADATA_PARAMS(0, nullptr) }; // 3121988693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "GetCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::LevelManagerInstanceSubsystem_eventGetCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::LevelManagerInstanceSubsystem_eventGetCurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execGetCurrentLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECurrentLevel*)Z_Param__Result=P_THIS->GetCurrentLevel();
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function GetCurrentLevel

// Begin Class ULevelManagerInstanceSubsystem Function GetCurrentReward
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics
{
	struct LevelManagerInstanceSubsystem_eventGetCurrentReward_Parms
	{
		ERewards ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManagerInstanceSubsystem_eventGetCurrentReward_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ERewards, METADATA_PARAMS(0, nullptr) }; // 793234643
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "GetCurrentReward", nullptr, nullptr, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::LevelManagerInstanceSubsystem_eventGetCurrentReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::LevelManagerInstanceSubsystem_eventGetCurrentReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execGetCurrentReward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERewards*)Z_Param__Result=P_THIS->GetCurrentReward();
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function GetCurrentReward

// Begin Class ULevelManagerInstanceSubsystem Function GetDifferentLevel
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics
{
	struct LevelManagerInstanceSubsystem_eventGetDifferentLevel_Parms
	{
		ECurrentLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManagerInstanceSubsystem_eventGetDifferentLevel_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ECurrentLevel, METADATA_PARAMS(0, nullptr) }; // 3121988693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "GetDifferentLevel", nullptr, nullptr, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::LevelManagerInstanceSubsystem_eventGetDifferentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::LevelManagerInstanceSubsystem_eventGetDifferentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execGetDifferentLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECurrentLevel*)Z_Param__Result=P_THIS->GetDifferentLevel();
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function GetDifferentLevel

// Begin Class ULevelManagerInstanceSubsystem Function GetDifferentReward
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics
{
	struct LevelManagerInstanceSubsystem_eventGetDifferentReward_Parms
	{
		ERewards ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManagerInstanceSubsystem_eventGetDifferentReward_Parms, ReturnValue), Z_Construct_UEnum_YokaiShokan_ERewards, METADATA_PARAMS(0, nullptr) }; // 793234643
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "GetDifferentReward", nullptr, nullptr, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::LevelManagerInstanceSubsystem_eventGetDifferentReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::LevelManagerInstanceSubsystem_eventGetDifferentReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execGetDifferentReward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERewards*)Z_Param__Result=P_THIS->GetDifferentReward();
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function GetDifferentReward

// Begin Class ULevelManagerInstanceSubsystem Function GetIsInsideRoguelite
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics
{
	struct LevelManagerInstanceSubsystem_eventGetIsInsideRoguelite_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LevelManagerInstanceSubsystem_eventGetIsInsideRoguelite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelManagerInstanceSubsystem_eventGetIsInsideRoguelite_Parms), &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "GetIsInsideRoguelite", nullptr, nullptr, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::LevelManagerInstanceSubsystem_eventGetIsInsideRoguelite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::LevelManagerInstanceSubsystem_eventGetIsInsideRoguelite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execGetIsInsideRoguelite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsInsideRoguelite();
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function GetIsInsideRoguelite

// Begin Class ULevelManagerInstanceSubsystem Function IncrementLevelCounter
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_IncrementLevelCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_IncrementLevelCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "IncrementLevelCounter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_IncrementLevelCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_IncrementLevelCounter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_IncrementLevelCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_IncrementLevelCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execIncrementLevelCounter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementLevelCounter();
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function IncrementLevelCounter

// Begin Class ULevelManagerInstanceSubsystem Function SetCurrentLevel
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics
{
	struct LevelManagerInstanceSubsystem_eventSetCurrentLevel_Parms
	{
		ECurrentLevel currentLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::NewProp_currentLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::NewProp_currentLevel = { "currentLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManagerInstanceSubsystem_eventSetCurrentLevel_Parms, currentLevel), Z_Construct_UEnum_YokaiShokan_ECurrentLevel, METADATA_PARAMS(0, nullptr) }; // 3121988693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::NewProp_currentLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::NewProp_currentLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "SetCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::LevelManagerInstanceSubsystem_eventSetCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::LevelManagerInstanceSubsystem_eventSetCurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execSetCurrentLevel)
{
	P_GET_ENUM(ECurrentLevel,Z_Param_currentLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentLevel(ECurrentLevel(Z_Param_currentLevel));
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function SetCurrentLevel

// Begin Class ULevelManagerInstanceSubsystem Function SetCurrentReward
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics
{
	struct LevelManagerInstanceSubsystem_eventSetCurrentReward_Parms
	{
		ERewards currentReward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_currentReward_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_currentReward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::NewProp_currentReward_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::NewProp_currentReward = { "currentReward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManagerInstanceSubsystem_eventSetCurrentReward_Parms, currentReward), Z_Construct_UEnum_YokaiShokan_ERewards, METADATA_PARAMS(0, nullptr) }; // 793234643
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::NewProp_currentReward_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::NewProp_currentReward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "SetCurrentReward", nullptr, nullptr, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::LevelManagerInstanceSubsystem_eventSetCurrentReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::LevelManagerInstanceSubsystem_eventSetCurrentReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execSetCurrentReward)
{
	P_GET_ENUM(ERewards,Z_Param_currentReward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentReward(ERewards(Z_Param_currentReward));
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function SetCurrentReward

// Begin Class ULevelManagerInstanceSubsystem Function SetIsInsideRoguelite
struct Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics
{
	struct LevelManagerInstanceSubsystem_eventSetIsInsideRoguelite_Parms
	{
		bool isInside;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Levels | Randomization" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isInside;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::NewProp_isInside_SetBit(void* Obj)
{
	((LevelManagerInstanceSubsystem_eventSetIsInsideRoguelite_Parms*)Obj)->isInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::NewProp_isInside = { "isInside", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelManagerInstanceSubsystem_eventSetIsInsideRoguelite_Parms), &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::NewProp_isInside_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::NewProp_isInside,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelManagerInstanceSubsystem, nullptr, "SetIsInsideRoguelite", nullptr, nullptr, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::LevelManagerInstanceSubsystem_eventSetIsInsideRoguelite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::LevelManagerInstanceSubsystem_eventSetIsInsideRoguelite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelManagerInstanceSubsystem::execSetIsInsideRoguelite)
{
	P_GET_UBOOL(Z_Param_isInside);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsInsideRoguelite(Z_Param_isInside);
	P_NATIVE_END;
}
// End Class ULevelManagerInstanceSubsystem Function SetIsInsideRoguelite

// Begin Class ULevelManagerInstanceSubsystem
void ULevelManagerInstanceSubsystem::StaticRegisterNativesULevelManagerInstanceSubsystem()
{
	UClass* Class = ULevelManagerInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentLevel", &ULevelManagerInstanceSubsystem::execGetCurrentLevel },
		{ "GetCurrentReward", &ULevelManagerInstanceSubsystem::execGetCurrentReward },
		{ "GetDifferentLevel", &ULevelManagerInstanceSubsystem::execGetDifferentLevel },
		{ "GetDifferentReward", &ULevelManagerInstanceSubsystem::execGetDifferentReward },
		{ "GetIsInsideRoguelite", &ULevelManagerInstanceSubsystem::execGetIsInsideRoguelite },
		{ "IncrementLevelCounter", &ULevelManagerInstanceSubsystem::execIncrementLevelCounter },
		{ "SetCurrentLevel", &ULevelManagerInstanceSubsystem::execSetCurrentLevel },
		{ "SetCurrentReward", &ULevelManagerInstanceSubsystem::execSetCurrentReward },
		{ "SetIsInsideRoguelite", &ULevelManagerInstanceSubsystem::execSetIsInsideRoguelite },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelManagerInstanceSubsystem);
UClass* Z_Construct_UClass_ULevelManagerInstanceSubsystem_NoRegister()
{
	return ULevelManagerInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULevelManagerInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelManagerInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LevelManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentLevel, "GetCurrentLevel" }, // 2497843966
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetCurrentReward, "GetCurrentReward" }, // 3553051965
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentLevel, "GetDifferentLevel" }, // 4268147281
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetDifferentReward, "GetDifferentReward" }, // 3655487528
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_GetIsInsideRoguelite, "GetIsInsideRoguelite" }, // 3957474188
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_IncrementLevelCounter, "IncrementLevelCounter" }, // 286396845
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentLevel, "SetCurrentLevel" }, // 149207418
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetCurrentReward, "SetCurrentReward" }, // 2139266295
		{ &Z_Construct_UFunction_ULevelManagerInstanceSubsystem_SetIsInsideRoguelite, "SetIsInsideRoguelite" }, // 1985754005
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelManagerInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelManagerInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelManagerInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelManagerInstanceSubsystem_Statics::ClassParams = {
	&ULevelManagerInstanceSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelManagerInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelManagerInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelManagerInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_ULevelManagerInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelManagerInstanceSubsystem.OuterSingleton, Z_Construct_UClass_ULevelManagerInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelManagerInstanceSubsystem.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<ULevelManagerInstanceSubsystem>()
{
	return ULevelManagerInstanceSubsystem::StaticClass();
}
ULevelManagerInstanceSubsystem::ULevelManagerInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelManagerInstanceSubsystem);
ULevelManagerInstanceSubsystem::~ULevelManagerInstanceSubsystem() {}
// End Class ULevelManagerInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECurrentLevel_StaticEnum, TEXT("ECurrentLevel"), &Z_Registration_Info_UEnum_ECurrentLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3121988693U) },
		{ ERewards_StaticEnum, TEXT("ERewards"), &Z_Registration_Info_UEnum_ERewards, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 793234643U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelManagerInstanceSubsystem, ULevelManagerInstanceSubsystem::StaticClass, TEXT("ULevelManagerInstanceSubsystem"), &Z_Registration_Info_UClass_ULevelManagerInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelManagerInstanceSubsystem), 2918507485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_3164416177(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_LevelManagerInstanceSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
