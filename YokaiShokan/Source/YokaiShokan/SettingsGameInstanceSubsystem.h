// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SettingsGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class YOKAISHOKAN_API USettingsGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	UFUNCTION(BlueprintPure, Category = "Settings | Audio")
	float GetMasterVolume();

	UFUNCTION(BlueprintCallable, Category = "Settings | Audio")
	void SetMasterVolume(float value);

	UFUNCTION(BlueprintPure, Category = "Settings | Audio")
	float GetMusicVolume();

	UFUNCTION(BlueprintCallable, Category = "Settings | Audio")
	void SetMusicVolume(float value);

	UFUNCTION(BlueprintPure, Category = "Settings | Audio")
	float GetSFXVolume();

	UFUNCTION(BlueprintCallable, Category = "Settings | Audio")
	void SetSFXVolume(float value);

	UFUNCTION(BlueprintPure, Category = "Settings | Audio")
	float GetDialogueVolume();

	UFUNCTION(BlueprintCallable, Category = "Settings | Audio")
	void SetDialogueVolume(float value);

	UFUNCTION(BlueprintPure, Category = "Settings | Audio")
	float GetEnviromentVolume();

	UFUNCTION(BlueprintCallable, Category = "Settings | Audio")
	void SetEnviromentVolume(float value);

	UFUNCTION(BlueprintPure, Category = "Settings | Audio")
	float GetUIVolume();

	UFUNCTION(BlueprintCallable, Category = "Settings | Audio")
	void SetUIVolume(float value);

protected:

	float _MasterVolume;

	float _MusicVolume;

	float _SFXVolume;

	float _DialogueVolume;

	float _EnviromentVolume;

	float _UIVolume;
	
};
