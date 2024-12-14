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
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ANPCCharacter();
YOKAISHOKAN_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
// End Cross Module References

// Begin Class ANPCCharacter Function Interact
struct Z_Construct_UFunction_ANPCCharacter_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "Interact", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_Interact_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPCCharacter_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact();
	P_NATIVE_END;
}
// End Class ANPCCharacter Function Interact

// Begin Class ANPCCharacter Function OnEnterRange
struct Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics
{
	struct NPCCharacter_eventOnEnterRange_Parms
	{
		AActor* OtherActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventOnEnterRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCCharacter_eventOnEnterRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCCharacter_eventOnEnterRange_Parms), &Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "OnEnterRange", nullptr, nullptr, Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::NPCCharacter_eventOnEnterRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::NPCCharacter_eventOnEnterRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCCharacter_OnEnterRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_OnEnterRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execOnEnterRange)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnEnterRange(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ANPCCharacter Function OnEnterRange

// Begin Class ANPCCharacter Function OnExitRange
struct Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics
{
	struct NPCCharacter_eventOnExitRange_Parms
	{
		AActor* OtherActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCCharacter_eventOnExitRange_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCCharacter_eventOnExitRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCCharacter_eventOnExitRange_Parms), &Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "OnExitRange", nullptr, nullptr, Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::NPCCharacter_eventOnExitRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::NPCCharacter_eventOnExitRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCCharacter_OnExitRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_OnExitRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCCharacter::execOnExitRange)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnExitRange(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ANPCCharacter Function OnExitRange

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

// Begin Class ANPCCharacter
void ANPCCharacter::StaticRegisterNativesANPCCharacter()
{
	UClass* Class = ANPCCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &ANPCCharacter::execInteract },
		{ "OnEnterRange", &ANPCCharacter::execOnEnterRange },
		{ "OnExitRange", &ANPCCharacter::execOnExitRange },
		{ "RotateTowardsPlayer", &ANPCCharacter::execRotateTowardsPlayer },
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCCharacter_Interact, "Interact" }, // 2921527141
		{ &Z_Construct_UFunction_ANPCCharacter_OnEnterRange, "OnEnterRange" }, // 3998460870
		{ &Z_Construct_UFunction_ANPCCharacter_OnExitRange, "OnExitRange" }, // 1697103618
		{ &Z_Construct_UFunction_ANPCCharacter_RotateTowardsPlayer, "RotateTowardsPlayer" }, // 3581951209
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
		{ Z_Construct_UClass_ANPCCharacter, ANPCCharacter::StaticClass, TEXT("ANPCCharacter"), &Z_Registration_Info_UClass_ANPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCCharacter), 2238868759U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_NPCCharacter_h_4152093484(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_NPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_NPCCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
