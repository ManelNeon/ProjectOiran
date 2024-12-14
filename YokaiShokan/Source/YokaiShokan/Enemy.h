// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LevelRandomizer.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class YOKAISHOKAN_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	void SetLevelRandomizer(ALevelRandomizer* levelManager);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	ALevelRandomizer* _LevelManager;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
