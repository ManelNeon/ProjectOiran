// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioManagerInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
#ifdef YOKAISHOKAN_AudioManagerInstanceSubsystem_generated_h
#error "AudioManagerInstanceSubsystem.generated.h already included, missing '#pragma once' in AudioManagerInstanceSubsystem.h"
#endif
#define YOKAISHOKAN_AudioManagerInstanceSubsystem_generated_h

#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUIVolume); \
	DECLARE_FUNCTION(execGetUIVolume); \
	DECLARE_FUNCTION(execSetEnviromentVolume); \
	DECLARE_FUNCTION(execGetEnviromentVolume); \
	DECLARE_FUNCTION(execSetDialogueVolume); \
	DECLARE_FUNCTION(execGetDialogueVolume); \
	DECLARE_FUNCTION(execSetSFXVolume); \
	DECLARE_FUNCTION(execGetSFXVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execSetMasterVolume); \
	DECLARE_FUNCTION(execGetMasterVolume); \
	DECLARE_FUNCTION(execFadeOutCurrentMusic); \
	DECLARE_FUNCTION(execPlayMusic); \
	DECLARE_FUNCTION(execPlaySound);


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioManagerInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UAudioManagerInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAudioManagerInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(UAudioManagerInstanceSubsystem)


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioManagerInstanceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioManagerInstanceSubsystem(UAudioManagerInstanceSubsystem&&); \
	UAudioManagerInstanceSubsystem(const UAudioManagerInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioManagerInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioManagerInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioManagerInstanceSubsystem) \
	NO_API virtual ~UAudioManagerInstanceSubsystem();


#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_12_PROLOG
#define FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class UAudioManagerInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_YokaiShokan_YokaiShokan_Source_YokaiShokan_AudioManagerInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
