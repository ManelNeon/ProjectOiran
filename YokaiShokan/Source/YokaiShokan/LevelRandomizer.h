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
	void DeleteEnemyFromList(AActor* actor, bool isCloseUpEnemy);

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	void WaveEnder();

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	void LevelEnder();

	UFUNCTION(BlueprintPure, Category = "Level Randomizer")
	bool IsLastEnemy();

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	void SetANewEnemyToAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	FVector _RewardSpawnLocation;

	//Variable where we'll store the zone epicenter (to make the possible spawning zone)
	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	TArray<FVector> _ZonesEpicenters;

	//Variable where you'll set the range for the zone, this is, how much the enemis can spawn from left to right, this needs some testing in engine and is not at all optimal
	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	TArray<FVector> _ZonesEpicentersRange;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	TArray<int> _NumberOfWaves;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	AActor* _ZoneDivider;
	
	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	UClass* _CloseUpEnemyClass;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	UClass* _FromAfarEnemyClass;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	UClass* _HealthPickupBP;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	UClass* _SkillPointsPickupBP;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	UClass* _LoreItemPickupBP;

	UPROPERTY(EditAnywhere, Category = "Level Randomizer")
	USoundWave* _LevelEnderSFX;

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	void SpawnEnemies(int minimumQuantity, int maxQuantity);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Level Randomizer")
	void BP_RotatePlayerTowardsExit();

	AActor* GetRandomEnemy();

	UFUNCTION(BlueprintPure, Category = "Level Randomizer")
	AActor* GetZoneDivider();

	UFUNCTION(BlueprintCallable, Category = "Level Randomizer")
	void SetZoneDividerNull();

	TArray<AActor*> _CloseUpEnemiesList;

	TArray<AActor*> _FromAfarEnemiesList;

	int _CurrentWave;

	int _CurrentZone;

	AActor* _AttackingEnemy;
};
