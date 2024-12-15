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

public:

	UFUNCTION(BlueprintCallable, Category = "Character | Stats", meta = (DisplayName = "Get % HP"))
	float GetCurrentHealthPercentage();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats", meta = (DisplayName = "Get HP"))
	float GetCurrentHealth();

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	ECurrentLevel GetCurrentLevel();

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	void SetCurrentLevel(ECurrentLevel currentLevel);

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	ERewards GetCurrentReward();

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	void SetCurrentReward(ERewards currentReward);

	UFUNCTION(BlueprintPure, Category = "Levels | Randomization")
	ERewards GetDifferentReward();

	UFUNCTION(BlueprintCallable, Category = "Levels | Randomization")
	void SetIsInsideRoguelite(bool isInside);
	
	void HealPlayer(float amount);

	//returns True if player is alive, false if he is dead
	bool DamagePlayer(float damage);

	UPROPERTY(EditAnywhere, Category = "Character | Stats")
	float MaxHealth;

	virtual void Init() override;

protected:

	float _CurrentHealth;

	ECurrentLevel _CurrentLevel;

	ERewards _CurrentReward;

	bool _IsInsideRoguelite;
	
};
