// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelRandomizer.generated.h"

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
class YOKAISHOKAN_API ALevelRandomizer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelRandomizer();

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	TArray<FVector> LevelLocations;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	TArray<FVector> RewardsLocations;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	FVector BossLocation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	FVector RandomizeLevel();

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	ERewards RandomizeReward();

	UFUNCTION(BlueprintCallable, Category = "Level Randommizer")
	void SetCurrentReward(ERewards newReward);

	ERewards _CurrentReward;

	ECurrentLevel _CurrentLevel;

private:

	uint8 _LevelCounter;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
