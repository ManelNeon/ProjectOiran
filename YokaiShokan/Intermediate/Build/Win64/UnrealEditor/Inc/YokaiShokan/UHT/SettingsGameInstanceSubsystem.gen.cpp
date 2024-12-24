// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/SettingsGameInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsGameInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_USettingsGameInstanceSubsystem();
YOKAISHOKAN_API UClass* Z_Construct_UClass_USettingsGameInstanceSubsystem_NoRegister();
// End Cross Module References

// Begin Class USettingsGameInstanceSubsystem Function GetDialogueVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventGetDialogueVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventGetDialogueVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "GetDialogueVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::SettingsGameInstanceSubsystem_eventGetDialogueVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::SettingsGameInstanceSubsystem_eventGetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execGetDialogueVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDialogueVolume();
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function GetDialogueVolume

// Begin Class USettingsGameInstanceSubsystem Function GetEnviromentVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventGetEnviromentVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventGetEnviromentVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "GetEnviromentVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::SettingsGameInstanceSubsystem_eventGetEnviromentVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::SettingsGameInstanceSubsystem_eventGetEnviromentVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execGetEnviromentVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEnviromentVolume();
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function GetEnviromentVolume

// Begin Class USettingsGameInstanceSubsystem Function GetMasterVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventGetMasterVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "GetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::SettingsGameInstanceSubsystem_eventGetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::SettingsGameInstanceSubsystem_eventGetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execGetMasterVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMasterVolume();
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function GetMasterVolume

// Begin Class USettingsGameInstanceSubsystem Function GetMusicVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "GetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::SettingsGameInstanceSubsystem_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::SettingsGameInstanceSubsystem_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function GetMusicVolume

// Begin Class USettingsGameInstanceSubsystem Function GetSFXVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventGetSFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "GetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::SettingsGameInstanceSubsystem_eventGetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::SettingsGameInstanceSubsystem_eventGetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execGetSFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSFXVolume();
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function GetSFXVolume

// Begin Class USettingsGameInstanceSubsystem Function GetUIVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventGetUIVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventGetUIVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "GetUIVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::SettingsGameInstanceSubsystem_eventGetUIVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::SettingsGameInstanceSubsystem_eventGetUIVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execGetUIVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUIVolume();
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function GetUIVolume

// Begin Class USettingsGameInstanceSubsystem Function SetDialogueVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventSetDialogueVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventSetDialogueVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "SetDialogueVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::SettingsGameInstanceSubsystem_eventSetDialogueVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::SettingsGameInstanceSubsystem_eventSetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execSetDialogueVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function SetDialogueVolume

// Begin Class USettingsGameInstanceSubsystem Function SetEnviromentVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventSetEnviromentVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventSetEnviromentVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "SetEnviromentVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::SettingsGameInstanceSubsystem_eventSetEnviromentVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::SettingsGameInstanceSubsystem_eventSetEnviromentVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execSetEnviromentVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnviromentVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function SetEnviromentVolume

// Begin Class USettingsGameInstanceSubsystem Function SetMasterVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventSetMasterVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventSetMasterVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "SetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::SettingsGameInstanceSubsystem_eventSetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::SettingsGameInstanceSubsystem_eventSetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execSetMasterVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMasterVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function SetMasterVolume

// Begin Class USettingsGameInstanceSubsystem Function SetMusicVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventSetMusicVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventSetMusicVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::SettingsGameInstanceSubsystem_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::SettingsGameInstanceSubsystem_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function SetMusicVolume

// Begin Class USettingsGameInstanceSubsystem Function SetSFXVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventSetSFXVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventSetSFXVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "SetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::SettingsGameInstanceSubsystem_eventSetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::SettingsGameInstanceSubsystem_eventSetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execSetSFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSFXVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function SetSFXVolume

// Begin Class USettingsGameInstanceSubsystem Function SetUIVolume
struct Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics
{
	struct SettingsGameInstanceSubsystem_eventSetUIVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsGameInstanceSubsystem_eventSetUIVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsGameInstanceSubsystem, nullptr, "SetUIVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::SettingsGameInstanceSubsystem_eventSetUIVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::SettingsGameInstanceSubsystem_eventSetUIVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USettingsGameInstanceSubsystem::execSetUIVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class USettingsGameInstanceSubsystem Function SetUIVolume

// Begin Class USettingsGameInstanceSubsystem
void USettingsGameInstanceSubsystem::StaticRegisterNativesUSettingsGameInstanceSubsystem()
{
	UClass* Class = USettingsGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueVolume", &USettingsGameInstanceSubsystem::execGetDialogueVolume },
		{ "GetEnviromentVolume", &USettingsGameInstanceSubsystem::execGetEnviromentVolume },
		{ "GetMasterVolume", &USettingsGameInstanceSubsystem::execGetMasterVolume },
		{ "GetMusicVolume", &USettingsGameInstanceSubsystem::execGetMusicVolume },
		{ "GetSFXVolume", &USettingsGameInstanceSubsystem::execGetSFXVolume },
		{ "GetUIVolume", &USettingsGameInstanceSubsystem::execGetUIVolume },
		{ "SetDialogueVolume", &USettingsGameInstanceSubsystem::execSetDialogueVolume },
		{ "SetEnviromentVolume", &USettingsGameInstanceSubsystem::execSetEnviromentVolume },
		{ "SetMasterVolume", &USettingsGameInstanceSubsystem::execSetMasterVolume },
		{ "SetMusicVolume", &USettingsGameInstanceSubsystem::execSetMusicVolume },
		{ "SetSFXVolume", &USettingsGameInstanceSubsystem::execSetSFXVolume },
		{ "SetUIVolume", &USettingsGameInstanceSubsystem::execSetUIVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsGameInstanceSubsystem);
UClass* Z_Construct_UClass_USettingsGameInstanceSubsystem_NoRegister()
{
	return USettingsGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SettingsGameInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SettingsGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetDialogueVolume, "GetDialogueVolume" }, // 3038215759
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetEnviromentVolume, "GetEnviromentVolume" }, // 1897580327
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMasterVolume, "GetMasterVolume" }, // 4277215271
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetMusicVolume, "GetMusicVolume" }, // 921273889
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetSFXVolume, "GetSFXVolume" }, // 3047366665
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_GetUIVolume, "GetUIVolume" }, // 2010540689
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetDialogueVolume, "SetDialogueVolume" }, // 2324546147
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetEnviromentVolume, "SetEnviromentVolume" }, // 3114400121
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMasterVolume, "SetMasterVolume" }, // 2982535940
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetMusicVolume, "SetMusicVolume" }, // 3856035735
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetSFXVolume, "SetSFXVolume" }, // 3710530108
		{ &Z_Construct_UFunction_USettingsGameInstanceSubsystem_SetUIVolume, "SetUIVolume" }, // 3575605323
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::ClassParams = {
	&USettingsGameInstanceSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingsGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_USettingsGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_USettingsGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingsGameInstanceSubsystem.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<USettingsGameInstanceSubsystem>()
{
	return USettingsGameInstanceSubsystem::StaticClass();
}
USettingsGameInstanceSubsystem::USettingsGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsGameInstanceSubsystem);
USettingsGameInstanceSubsystem::~USettingsGameInstanceSubsystem() {}
// End Class USettingsGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_SettingsGameInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingsGameInstanceSubsystem, USettingsGameInstanceSubsystem::StaticClass, TEXT("USettingsGameInstanceSubsystem"), &Z_Registration_Info_UClass_USettingsGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsGameInstanceSubsystem), 3982917070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_SettingsGameInstanceSubsystem_h_3727417475(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_SettingsGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_SettingsGameInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
