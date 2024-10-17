// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYokaiShokan_init() {}
	YOKAISHOKAN_API UFunction* Z_Construct_UDelegateFunction_YokaiShokan_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_YokaiShokan;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_YokaiShokan()
	{
		if (!Z_Registration_Info_UPackage__Script_YokaiShokan.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_YokaiShokan_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/YokaiShokan",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4ABEBD49,
				0xDC578E09,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_YokaiShokan.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_YokaiShokan.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_YokaiShokan(Z_Construct_UPackage__Script_YokaiShokan, TEXT("/Script/YokaiShokan"), Z_Registration_Info_UPackage__Script_YokaiShokan, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4ABEBD49, 0xDC578E09));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
