// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TutorialEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef YOKAISHOKAN_TutorialEnemy_generated_h
#error "TutorialEnemy.generated.h already included, missing '#pragma once' in TutorialEnemy.h"
#endif
#define YOKAISHOKAN_TutorialEnemy_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDamageValue); \
	DECLARE_FUNCTION(execDamageThis); \
	DECLARE_FUNCTION(execSetMarkerWidget);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_CALLBACK_WRAPPERS
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorialEnemy(); \
	friend struct Z_Construct_UClass_ATutorialEnemy_Statics; \
public: \
	DECLARE_CLASS(ATutorialEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(ATutorialEnemy)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATutorialEnemy(ATutorialEnemy&&); \
	ATutorialEnemy(const ATutorialEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorialEnemy) \
	NO_API virtual ~ATutorialEnemy();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_9_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_CALLBACK_WRAPPERS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class ATutorialEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_TutorialEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
