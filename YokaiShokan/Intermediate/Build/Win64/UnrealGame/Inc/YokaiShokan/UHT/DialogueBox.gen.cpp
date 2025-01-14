// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "YokaiShokan/DialogueBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBox() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_YokaiShokan();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UDialogueBox();
YOKAISHOKAN_API UClass* Z_Construct_UClass_UDialogueBox_NoRegister();
// End Cross Module References

// Begin Class UDialogueBox Function GetTextBlock
struct Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics
{
	struct DialogueBox_eventGetTextBlock_Parms
	{
		UTextBlock* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Box | Functions" },
		{ "ModuleRelativePath", "DialogueBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBox_eventGetTextBlock_Parms, ReturnValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBox, nullptr, "GetTextBlock", nullptr, nullptr, Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::DialogueBox_eventGetTextBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::DialogueBox_eventGetTextBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBox_GetTextBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBox_GetTextBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBox::execGetTextBlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextBlock**)Z_Param__Result=P_THIS->GetTextBlock();
	P_NATIVE_END;
}
// End Class UDialogueBox Function GetTextBlock

// Begin Class UDialogueBox
void UDialogueBox::StaticRegisterNativesUDialogueBox()
{
	UClass* Class = UDialogueBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTextBlock", &UDialogueBox::execGetTextBlock },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBox);
UClass* Z_Construct_UClass_UDialogueBox_NoRegister()
{
	return UDialogueBox::StaticClass();
}
struct Z_Construct_UClass_UDialogueBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueBox.h" },
		{ "ModuleRelativePath", "DialogueBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueBox_GetTextBlock, "GetTextBlock" }, // 116375191
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBox_Statics::NewProp_TextBox = { "TextBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBox, TextBox), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBox_MetaData), NewProp_TextBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBox_Statics::NewProp_TextBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_YokaiShokan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBox_Statics::ClassParams = {
	&UDialogueBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBox()
{
	if (!Z_Registration_Info_UClass_UDialogueBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBox.OuterSingleton, Z_Construct_UClass_UDialogueBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBox.OuterSingleton;
}
template<> YOKAISHOKAN_API UClass* StaticClass<UDialogueBox>()
{
	return UDialogueBox::StaticClass();
}
UDialogueBox::UDialogueBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBox);
UDialogueBox::~UDialogueBox() {}
// End Class UDialogueBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_DialogueBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBox, UDialogueBox::StaticClass, TEXT("UDialogueBox"), &Z_Registration_Info_UClass_UDialogueBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBox), 3389741535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_DialogueBox_h_529003306(TEXT("/Script/YokaiShokan"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_DialogueBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_DialogueBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
