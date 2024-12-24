// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelManagerInstanceSubsystem.h"

void ULevelManagerInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Level Manager Initialized"));

	_CurrentLevel = ECurrentLevel::TOTAL_LEVEL;

	_CurrentReward = ERewards::TOTAL_REWARDS;

	_LevelCounter = 0;

	_IsInsideRoguelite = false;
}

void ULevelManagerInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Level Manager DeInitialized"));
}

ECurrentLevel ULevelManagerInstanceSubsystem::GetCurrentLevel()
{
	return _CurrentLevel;
}

void ULevelManagerInstanceSubsystem::SetCurrentLevel(ECurrentLevel currentLevel)
{
	_CurrentLevel = currentLevel;
}

ECurrentLevel ULevelManagerInstanceSubsystem::GetDifferentLevel()
{
	if (_LevelCounter == 5) return ECurrentLevel::TOTAL_LEVEL;

	int temporaryLevel = static_cast<int>(_CurrentLevel);

	int currentLevelHolder = temporaryLevel;

	while (temporaryLevel == currentLevelHolder)
	{
		temporaryLevel = FMath::RandRange(0, static_cast<int>(ECurrentLevel::TOTAL_LEVEL) - 1);
	}

	return static_cast<ECurrentLevel>(temporaryLevel);
}

void ULevelManagerInstanceSubsystem::IncrementLevelCounter()
{
	_LevelCounter++;
}

void ULevelManagerInstanceSubsystem::SetIsInsideRoguelite(bool isInside)
{
	_IsInsideRoguelite = isInside;

	_LevelCounter = 0;
}

bool ULevelManagerInstanceSubsystem::GetIsInsideRoguelite()
{
	return _IsInsideRoguelite;
}


ERewards ULevelManagerInstanceSubsystem::GetCurrentReward()
{
	return _CurrentReward;
}

void ULevelManagerInstanceSubsystem::SetCurrentReward(ERewards currentReward)
{
	_CurrentReward = currentReward;
}

ERewards ULevelManagerInstanceSubsystem::GetDifferentReward()
{
	int temporaryReward = static_cast<int>(_CurrentReward);

	int currentRewardHolder = temporaryReward;

	while (temporaryReward == currentRewardHolder)
	{
		temporaryReward = FMath::RandRange(0, static_cast<int>(ERewards::TOTAL_REWARDS) - 1);
	}

	return static_cast<ERewards>(temporaryReward);
}