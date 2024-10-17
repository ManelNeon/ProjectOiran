// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "YokaiShokanProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef YOKAISHOKAN_YokaiShokanProjectile_generated_h
#error "YokaiShokanProjectile.generated.h already included, missing '#pragma once' in YokaiShokanProjectile.h"
#endif
#define YOKAISHOKAN_YokaiShokanProjectile_generated_h

#define FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAYokaiShokanProjectile(); \
	friend struct Z_Construct_UClass_AYokaiShokanProjectile_Statics; \
public: \
	DECLARE_CLASS(AYokaiShokanProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/YokaiShokan"), NO_API) \
	DECLARE_SERIALIZER(AYokaiShokanProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AYokaiShokanProjectile(AYokaiShokanProjectile&&); \
	AYokaiShokanProjectile(const AYokaiShokanProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AYokaiShokanProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AYokaiShokanProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AYokaiShokanProjectile) \
	NO_API virtual ~AYokaiShokanProjectile();


#define FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h_12_PROLOG
#define FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YOKAISHOKAN_API UClass* StaticClass<class AYokaiShokanProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_simon_Documents_GitHub_YokaiShokan_YokaiShokan_Source_YokaiShokan_YokaiShokanProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
