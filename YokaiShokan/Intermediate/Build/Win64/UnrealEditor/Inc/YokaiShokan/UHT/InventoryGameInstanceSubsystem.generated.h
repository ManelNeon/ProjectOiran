// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryGameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOKAISHOKAN_InventoryGameInstanceSubsystem_generated_h
#error "InventoryGameInstanceSubsystem.generated.h already included, missing '#pragma once' in InventoryGameInstanceSubsystem.h"
#endif
#define YOKAISHOKAN_InventoryGameInstanceSubsystem_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearBeforeRun); \
	DECLARE_FUNCTION(execAddTemporaryCurrency); \
	DECLARE_FUNCTION(execAddCurrency); \
	DECLARE_FUNCTION(execTakeCurrency); \
	DECLARE_FUNCTION(execGetCurrency); \
	DECLARE_FUNCTION(execGetIfPlayerGotAllLoreItems); \
	DECLARE_FUNCTION(execSetRandomPossessionLoreItem); \
	DECLARE_FUNCTION(execFinishRunVariables); \
	DECLARE_FUNCTION(execSetRandomPossessionLoreItemInRun); \
	DECLARE_FUNCTION(execGetCurrentLoreItems);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UInventoryGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UInventoryGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(UInventoryGameInstanceSubsystem)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryGameInstanceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryGameInstanceSubsystem(UInventoryGameInstanceSubsystem&&); \
	UInventoryGameInstanceSubsystem(const UInventoryGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryGameInstanceSubsystem) \
	NO_API virtual ~UInventoryGameInstanceSubsystem();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_9_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class UInventoryGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_InventoryGameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
