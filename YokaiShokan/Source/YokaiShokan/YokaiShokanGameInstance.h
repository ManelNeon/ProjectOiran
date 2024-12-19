// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "YokaiShokanGameInstance.generated.h"

UENUM(BlueprintType)
enum class ECurrentLevel : uint8
{
	FIRST_LEVEL,
	SECOND_LEVEL,
	TOTAL_LEVEL
};

UENUM(BlueprintType)
enum class ERewards : uint8
{
	HEALTH,
	SKILL_POINTS,
	LORE_ITEM,
	TOTAL_REWARDS
};


UCLASS()
class YOKAISHOKAN_API UYokaiShokanGameInstance : public UGameInstance
{
	GENERATED_BODY()

//************************// Character Permanent Stats //************************//
public:

	UFUNCTION(BlueprintCallable, Category = "Character | Stats", meta = (DisplayName = "Get % HP"))
	float GetCurrentHealthPercentage();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats", meta = (DisplayName = "Get HP"))
	float GetCurrentHealth();

	void HealPlayer(float amount);

	//returns True if player is alive, false if he is dead
	bool DamagePlayer(float damage);

	UPROPERTY(EditAnywhere, Category = "Character | Stats")
	float MaxHealth;

protected:

	float _CurrentHealth;

//************************// Permanent Settings Options //************************//
public:

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


//************************// Level Randomization //************************//
public:

	UFUNCTION(BlueprintPure, Category = "Levels | Randomization")
	ECurrentLevel GetCurrentLevel();

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	void SetCurrentLevel(ECurrentLevel currentLevel);

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	ECurrentLevel GetDifferentLevel();

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	void IncrementLevelCounter();

	UFUNCTION(BlueprintPure, Category = "Levels | Randomization")
	ERewards GetCurrentReward();

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	void SetCurrentReward(ERewards currentReward);

	UFUNCTION(BlueprintPure, Category = "Levels | Randomization")
	ERewards GetDifferentReward();

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	void SetIsInsideRoguelite(bool isInside);

	virtual void Init() override;

protected:

	//Counts the level we're in so that we teleport the player to the boss in the end
	int _LevelCounter;

	ECurrentLevel _CurrentLevel;

	ERewards _CurrentReward;

	bool _IsInsideRoguelite;
	
};
