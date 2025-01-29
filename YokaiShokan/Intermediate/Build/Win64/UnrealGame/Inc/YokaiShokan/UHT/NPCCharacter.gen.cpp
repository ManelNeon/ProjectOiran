// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/NPCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ANPCCharacter();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UDialogueBox_NoRegister();
// End Cross Module References

// Begin Class ANPCCharacter Function GetCurrentDialogueBox
struct Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics
{
	struct NPCCharacter_eventGetCurrentDialogueBox_Parms
	{
		UDialogueBox* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC | Functions" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventGetCurrentDialogueBox_Parms, ReturnValue), Z_Construct_UClass_UDialogueBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "GetCurrentDialogueBox", nullptr, nullptr, Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::NPCCharacter_eventGetCurrentDialogueBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::NPCCharacter_eventGetCurrentDialogueBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execGetCurrentDialogueBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueBox**)Z_Param__Result=P_THIS->GetCurrentDialogueBox();
	P_NATIVE_END;
}
// End Class ANPCCharacter Function GetCurrentDialogueBox

// Begin Class ANPCCharacter Function GetTarget
struct Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics
{
	struct NPCCharacter_eventGetTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC | Functions" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::NPCCharacter_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::NPCCharacter_eventGetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCCharacter_GetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_GetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execGetTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTarget();
	P_NATIVE_END;
}
// End Class ANPCCharacter Function GetTarget

// Begin Class ANPCCharacter Function RestartDialogue
struct Z_Construct_UFunction_ANPCCharacter_RestartDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC | Functions" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_RestartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "RestartDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_RestartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_RestartDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPCCharacter_RestartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_RestartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execRestartDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartDialogue();
	P_NATIVE_END;
}
// End Class ANPCCharacter Function RestartDialogue

// Begin Class ANPCCharacter Function RotateTowardsPlayer
struct Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics
{
	struct NPCCharacter_eventRotateTowardsPlayer_Parms
	{
		AActor* Target;
		float RotationSpeed;
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventRotateTowardsPlayer_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventRotateTowardsPlayer_Parms, RotationSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventRotateTowardsPlayer_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "RotateTowardsPlayer", nullptr, nullptr, Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::NPCCharacter_eventRotateTowardsPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::NPCCharacter_eventRotateTowardsPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execRotateTowardsPlayer)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RotationSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateTowardsPlayer(Z_Param_Target,Z_Param_RotationSpeed,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ANPCCharacter Function RotateTowardsPlayer

// Begin Class ANPCCharacter Function SetCurrentDialogueBox
struct Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics
{
	struct NPCCharacter_eventSetCurrentDialogueBox_Parms
	{
		UDialogueBox* dialogueBox;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC | Functions" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dialogueBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogueBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::NewProp_dialogueBox = { "dialogueBox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventSetCurrentDialogueBox_Parms, dialogueBox), Z_Construct_UClass_UDialogueBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dialogueBox_MetaData), NewProp_dialogueBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::NewProp_dialogueBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "SetCurrentDialogueBox", nullptr, nullptr, Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::NPCCharacter_eventSetCurrentDialogueBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::NPCCharacter_eventSetCurrentDialogueBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execSetCurrentDialogueBox)
{
	P_GET_OBJECT(UDialogueBox,Z_Param_dialogueBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentDialogueBox(Z_Param_dialogueBox);
	P_NATIVE_END;
}
// End Class ANPCCharacter Function SetCurrentDialogueBox

// Begin Class ANPCCharacter Function SetTarget
struct Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics
{
	struct NPCCharacter_eventSetTarget_Parms
	{
		AActor* target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC | Functions" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventSetTarget_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::NewProp_target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "SetTarget", nullptr, nullptr, Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::NPCCharacter_eventSetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::NPCCharacter_eventSetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCCharacter_SetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_SetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execSetTarget)
{
	P_GET_OBJECT(AActor,Z_Param_target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTarget(Z_Param_target);
	P_NATIVE_END;
}
// End Class ANPCCharacter Function SetTarget

// Begin Class ANPCCharacter Function StartDialogue
struct Z_Construct_UFunction_ANPCCharacter_StartDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC | Functions" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "StartDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_StartDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPCCharacter_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execStartDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDialogue();
	P_NATIVE_END;
}
// End Class ANPCCharacter Function StartDialogue

// Begin Class ANPCCharacter
void ANPCCharacter::StaticRegisterNativesANPCCharacter()
{
	UClass* Class = ANPCCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentDialogueBox", &ANPCCharacter::execGetCurrentDialogueBox },
		{ "GetTarget", &ANPCCharacter::execGetTarget },
		{ "RestartDialogue", &ANPCCharacter::execRestartDialogue },
		{ "RotateTowardsPlayer", &ANPCCharacter::execRotateTowardsPlayer },
		{ "SetCurrentDialogueBox", &ANPCCharacter::execSetCurrentDialogueBox },
		{ "SetTarget", &ANPCCharacter::execSetTarget },
		{ "StartDialogue", &ANPCCharacter::execStartDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCCharacter);
UClass* Z_Construct_UClass_ANPCCharacter_NoRegister()
{
	return ANPCCharacter::StaticClass();
}
struct Z_Construct_UClass_ANPCCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPCCharacter.h" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueArray_MetaData[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguesVoicesArray_MetaData[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialoguesVoicesArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialoguesVoicesArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCCharacter_GetCurrentDialogueBox, "GetCurrentDialogueBox" }, // 4047509486
		{ &Z_Construct_UFunction_ANPCCharacter_GetTarget, "GetTarget" }, // 2210126401
		{ &Z_Construct_UFunction_ANPCCharacter_RestartDialogue, "RestartDialogue" }, // 2033284533
		{ &Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer, "RotateTowardsPlayer" }, // 3581951209
		{ &Z_Construct_UFunction_ANPCCharacter_SetCurrentDialogueBox, "SetCurrentDialogueBox" }, // 3455647146
		{ &Z_Construct_UFunction_ANPCCharacter_SetTarget, "SetTarget" }, // 4026535320
		{ &Z_Construct_UFunction_ANPCCharacter_StartDialogue, "StartDialogue" }, // 687628372
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DialogueArray_Inner = { "DialogueArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DialogueArray = { "DialogueArray", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCCharacter, DialogueArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueArray_MetaData), NewProp_DialogueArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DialoguesVoicesArray_Inner = { "DialoguesVoicesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DialoguesVoicesArray = { "DialoguesVoicesArray", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCCharacter, DialoguesVoicesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguesVoicesArray_MetaData), NewProp_DialoguesVoicesArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DialogueArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DialogueArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DialoguesVoicesArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DialoguesVoicesArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCCharacter_Statics::ClassParams = {
	&ANPCCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANPCCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCCharacter()
{
	if (!Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton, Z_Construct_UClass_ANPCCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<ANPCCharacter>()
{
	return ANPCCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCCharacter);
ANPCCharacter::~ANPCCharacter() {}
// End Class ANPCCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_NPCCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCCharacter, ANPCCharacter::StaticClass, TEXT("ANPCCharacter"), &Z_Registration_Info_UClass_ANPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCCharacter), 3526221772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_NPCCharacter_h_2127688985(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_NPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_NPCCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
