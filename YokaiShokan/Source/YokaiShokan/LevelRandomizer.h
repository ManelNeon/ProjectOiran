// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelRandomizer.generated.h"

UCLASS()
class YOKAISHOKAN_API ALevelRandomizer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelRandomizer();

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	void DeleteEnemyFromList(AActor* actor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	FVector _RewardSpawnLocation;

	//Variable where we'll store the zone epicenter (to make the possible spawning zone)
	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	TArray<FVector> _ZonesEpicenters;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	TArray<int> _NumberOfWaves;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	AActor* _ZoneDivider;
	
	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	UClass* _BaseEnemyClass;

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	void SpawnEnemies(int minimumQuantity, int maxQuantity);

	TArray<AActor*> _EnemyList;

	int _CurrentWave;

	int _CurrentZone;
};
