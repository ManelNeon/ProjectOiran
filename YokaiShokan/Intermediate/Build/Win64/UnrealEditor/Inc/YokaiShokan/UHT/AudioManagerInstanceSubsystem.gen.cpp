// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/AudioManagerInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioManagerInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UAudioManagerInstanceSubsystem();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UAudioManagerInstanceSubsystem_NoRegister();
// End Cross Module References

// Begin Class UAudioManagerInstanceSubsystem Function GetDialogueVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventGetDialogueVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventGetDialogueVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "GetDialogueVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::AudioManagerInstanceSubsystem_eventGetDialogueVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::AudioManagerInstanceSubsystem_eventGetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execGetDialogueVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDialogueVolume();
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function GetDialogueVolume

// Begin Class UAudioManagerInstanceSubsystem Function GetEnviromentVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventGetEnviromentVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventGetEnviromentVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "GetEnviromentVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::AudioManagerInstanceSubsystem_eventGetEnviromentVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::AudioManagerInstanceSubsystem_eventGetEnviromentVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execGetEnviromentVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEnviromentVolume();
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function GetEnviromentVolume

// Begin Class UAudioManagerInstanceSubsystem Function GetMasterVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventGetMasterVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "GetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::AudioManagerInstanceSubsystem_eventGetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::AudioManagerInstanceSubsystem_eventGetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execGetMasterVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMasterVolume();
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function GetMasterVolume

// Begin Class UAudioManagerInstanceSubsystem Function GetMusicVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "GetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::AudioManagerInstanceSubsystem_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::AudioManagerInstanceSubsystem_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function GetMusicVolume

// Begin Class UAudioManagerInstanceSubsystem Function GetSFXVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventGetSFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "GetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::AudioManagerInstanceSubsystem_eventGetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::AudioManagerInstanceSubsystem_eventGetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execGetSFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSFXVolume();
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function GetSFXVolume

// Begin Class UAudioManagerInstanceSubsystem Function GetUIVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventGetUIVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventGetUIVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "GetUIVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::AudioManagerInstanceSubsystem_eventGetUIVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::AudioManagerInstanceSubsystem_eventGetUIVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execGetUIVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUIVolume();
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function GetUIVolume

// Begin Class UAudioManagerInstanceSubsystem Function SetDialogueVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventSetDialogueVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventSetDialogueVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "SetDialogueVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::AudioManagerInstanceSubsystem_eventSetDialogueVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::AudioManagerInstanceSubsystem_eventSetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execSetDialogueVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function SetDialogueVolume

// Begin Class UAudioManagerInstanceSubsystem Function SetEnviromentVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventSetEnviromentVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventSetEnviromentVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "SetEnviromentVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::AudioManagerInstanceSubsystem_eventSetEnviromentVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::AudioManagerInstanceSubsystem_eventSetEnviromentVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execSetEnviromentVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnviromentVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function SetEnviromentVolume

// Begin Class UAudioManagerInstanceSubsystem Function SetMasterVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventSetMasterVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventSetMasterVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "SetMasterVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::AudioManagerInstanceSubsystem_eventSetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::AudioManagerInstanceSubsystem_eventSetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execSetMasterVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMasterVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function SetMasterVolume

// Begin Class UAudioManagerInstanceSubsystem Function SetMusicVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventSetMusicVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventSetMusicVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::AudioManagerInstanceSubsystem_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::AudioManagerInstanceSubsystem_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function SetMusicVolume

// Begin Class UAudioManagerInstanceSubsystem Function SetSFXVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventSetSFXVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventSetSFXVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "SetSFXVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::AudioManagerInstanceSubsystem_eventSetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::AudioManagerInstanceSubsystem_eventSetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execSetSFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSFXVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function SetSFXVolume

// Begin Class UAudioManagerInstanceSubsystem Function SetUIVolume
struct Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics
{
	struct AudioManagerInstanceSubsystem_eventSetUIVolume_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings | Audio" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerInstanceSubsystem_eventSetUIVolume_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerInstanceSubsystem, nullptr, "SetUIVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::AudioManagerInstanceSubsystem_eventSetUIVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::AudioManagerInstanceSubsystem_eventSetUIVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerInstanceSubsystem::execSetUIVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIVolume(Z_Param_value);
	P_NATIVE_END;
}
// End Class UAudioManagerInstanceSubsystem Function SetUIVolume

// Begin Class UAudioManagerInstanceSubsystem
void UAudioManagerInstanceSubsystem::StaticRegisterNativesUAudioManagerInstanceSubsystem()
{
	UClass* Class = UAudioManagerInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueVolume", &UAudioManagerInstanceSubsystem::execGetDialogueVolume },
		{ "GetEnviromentVolume", &UAudioManagerInstanceSubsystem::execGetEnviromentVolume },
		{ "GetMasterVolume", &UAudioManagerInstanceSubsystem::execGetMasterVolume },
		{ "GetMusicVolume", &UAudioManagerInstanceSubsystem::execGetMusicVolume },
		{ "GetSFXVolume", &UAudioManagerInstanceSubsystem::execGetSFXVolume },
		{ "GetUIVolume", &UAudioManagerInstanceSubsystem::execGetUIVolume },
		{ "SetDialogueVolume", &UAudioManagerInstanceSubsystem::execSetDialogueVolume },
		{ "SetEnviromentVolume", &UAudioManagerInstanceSubsystem::execSetEnviromentVolume },
		{ "SetMasterVolume", &UAudioManagerInstanceSubsystem::execSetMasterVolume },
		{ "SetMusicVolume", &UAudioManagerInstanceSubsystem::execSetMusicVolume },
		{ "SetSFXVolume", &UAudioManagerInstanceSubsystem::execSetSFXVolume },
		{ "SetUIVolume", &UAudioManagerInstanceSubsystem::execSetUIVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioManagerInstanceSubsystem);
UClass* Z_Construct_UClass_UAudioManagerInstanceSubsystem_NoRegister()
{
	return UAudioManagerInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAudioManagerInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AudioManagerInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AudioManagerInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetDialogueVolume, "GetDialogueVolume" }, // 2821046202
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetEnviromentVolume, "GetEnviromentVolume" }, // 456549654
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMasterVolume, "GetMasterVolume" }, // 583163947
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetMusicVolume, "GetMusicVolume" }, // 1422710464
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetSFXVolume, "GetSFXVolume" }, // 2080924637
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_GetUIVolume, "GetUIVolume" }, // 648349868
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetDialogueVolume, "SetDialogueVolume" }, // 1911554942
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetEnviromentVolume, "SetEnviromentVolume" }, // 2270295076
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMasterVolume, "SetMasterVolume" }, // 4047840453
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetMusicVolume, "SetMusicVolume" }, // 4018933662
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetSFXVolume, "SetSFXVolume" }, // 4234916157
		{ &Z_Construct_UFunction_UAudioManagerInstanceSubsystem_SetUIVolume, "SetUIVolume" }, // 2585465572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioManagerInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioManagerInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManagerInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioManagerInstanceSubsystem_Statics::ClassParams = {
	&UAudioManagerInstanceSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManagerInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioManagerInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioManagerInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UAudioManagerInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioManagerInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UAudioManagerInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioManagerInstanceSubsystem.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<UAudioManagerInstanceSubsystem>()
{
	return UAudioManagerInstanceSubsystem::StaticClass();
}
UAudioManagerInstanceSubsystem::UAudioManagerInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioManagerInstanceSubsystem);
UAudioManagerInstanceSubsystem::~UAudioManagerInstanceSubsystem() {}
// End Class UAudioManagerInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioManagerInstanceSubsystem, UAudioManagerInstanceSubsystem::StaticClass, TEXT("UAudioManagerInstanceSubsystem"), &Z_Registration_Info_UClass_UAudioManagerInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioManagerInstanceSubsystem), 431419138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_4123254009(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
