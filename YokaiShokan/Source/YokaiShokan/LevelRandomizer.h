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

UCLASS()
class YOKAISHOKAN_API ALevelRandomizer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelRandomizer();

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	TArray<FVector> LevelLocations;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	FVector RandomizeLevel();

	ECurrentLevel _CurrentLevel;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
