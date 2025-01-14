// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TutorialGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YOKAISHOKAN_TutorialGameMode_generated_h
#error "TutorialGameMode.generated.h already included, missing '#pragma once' in TutorialGameMode.h"
#endif
#define YOKAISHOKAN_TutorialGameMode_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsFirstDash); \
	DECLARE_FUNCTION(execTrueifyIsFirstEnemy); \
	DECLARE_FUNCTION(execGetIsFirstEnemy);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_CALLBACK_WRAPPERS
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorialGameMode(); \
	friend struct Z_Construct_UClass_ATutorialGameMode_Statics; \
public: \
	DECLARE_CLASS(ATutorialGameMode, AYokaiShokanGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(ATutorialGameMode)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutorialGameMode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATutorialGameMode(ATutorialGameMode&&); \
	ATutorialGameMode(const ATutorialGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorialGameMode) \
	NO_API virtual ~ATutorialGameMode();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_12_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_CALLBACK_WRAPPERS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class ATutorialGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
