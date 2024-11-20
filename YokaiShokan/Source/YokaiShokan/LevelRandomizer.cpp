// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelRandomizer.h"

// Sets default values
ALevelRandomizer::ALevelRandomizer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	_CurrentLevel = ECurrentLevel::TOTAL_LEVEL;
	
	for (size_t i{ 0 }; i < static_cast<size_t>(ECurrentLevel::TOTAL_LEVEL); ++i)
	{
		LevelLocations.Add(FVector(0,0,0));
	}
}

// Called when the game starts or when spawned
void ALevelRandomizer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALevelRandomizer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ALevelRandomizer::RandomizeLevel()
{
	int temporaryLevel = static_cast<int>(_CurrentLevel);

	int currentLevelHolder = temporaryLevel;

	while (temporaryLevel == currentLevelHolder)
	{
		temporaryLevel = FMath::RandRange(0, static_cast<int>(ECurrentLevel::TOTAL_LEVEL) - 1);
	}

	_CurrentLevel = static_cast<ECurrentLevel>(temporaryLevel);
	
	return LevelLocations[static_cast<int>(_CurrentLevel)];
}

