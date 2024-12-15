// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelRandomizer.h"
#include "PickUp.generated.h"

UCLASS()
class YOKAISHOKAN_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUp();

	void SetLevelRandomizer(ALevelRandomizer* levelRandomizer);

	UFUNCTION(BlueprintPure, Category = "PickUp Functions")
	ALevelRandomizer* GetLevelRandomizer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	ALevelRandomizer* _LevelRandomizer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
