// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelRandomizer.h"

// Sets default values
ALevelRandomizer::ALevelRandomizer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	_CurrentLevel = ECurrentLevel::TOTAL_LEVEL;

	_CurrentReward = ERewards::TOTAL_REWARDS;
	
	for (size_t i{ 0 }; i < static_cast<size_t>(ECurrentLevel::TOTAL_LEVEL); ++i)
	{
		LevelLocations.Add(FVector(0,0,0));
	}
}

// Called when the game starts or when spawned
void ALevelRandomizer::BeginPlay()
{
	Super::BeginPlay();
	
	_LevelCounter = 0;
}

// Called every frame
void ALevelRandomizer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelRandomizer::SetCurrentReward(ERewards newReward)
{
	_CurrentReward = newReward;
}

ERewards ALevelRandomizer::RandomizeReward()
{
	int temporaryReward = static_cast<int>(_CurrentReward);

	int currentRewardHolder = temporaryReward;

	while (temporaryReward == currentRewardHolder)
	{
		temporaryReward = FMath::RandRange(0, static_cast<int>(ERewards::TOTAL_REWARDS) - 1);
	}

	return static_cast<ERewards>(temporaryReward);
}

FVector ALevelRandomizer::RandomizeLevel()
{
	if (_LevelCounter == 3) return BossLocation;

	int temporaryLevel = static_cast<int>(_CurrentLevel);

	int currentLevelHolder = temporaryLevel;

	while (temporaryLevel == currentLevelHolder)
	{
		temporaryLevel = FMath::RandRange(0, static_cast<int>(ECurrentLevel::TOTAL_LEVEL) - 1);
	}

	_CurrentLevel = static_cast<ECurrentLevel>(temporaryLevel);

	_LevelCounter++;

	return LevelLocations[static_cast<int>(_CurrentLevel)];
}

