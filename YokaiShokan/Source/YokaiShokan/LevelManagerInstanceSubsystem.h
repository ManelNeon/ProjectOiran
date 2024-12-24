// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LevelManagerInstanceSubsystem.generated.h"

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

UCLASS(Blueprintable)
class YOKAISHOKAN_API ULevelManagerInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

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

	UFUNCTION(BlueprintPure, Category = "Levels | Randomization")
	bool GetIsInsideRoguelite();

protected:

	//Counts the level we're in so that we teleport the player to the boss in the end
	int _LevelCounter;

	ECurrentLevel _CurrentLevel;

	ERewards _CurrentReward;

	bool _IsInsideRoguelite;
	
};
