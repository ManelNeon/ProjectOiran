// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LevelRandomizer.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include "YokaiShokanEnemy.generated.h"

UCLASS()
class YOKAISHOKAN_API AYokaiShokanEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AYokaiShokanEnemy();

	void SetLevelRandomizer(ALevelRandomizer* levelManager);

	UFUNCTION(BlueprintCallable, Category = "Enemy | Widget")
	void SetMarkerWidget(UUserWidget* widget);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Enemy | Stats")
	void DamageThis(float damage, FVector hitDirection);

	UFUNCTION(BlueprintPure, Category = "Enemy | Stats")
	float GetDamageValue();

	ALevelRandomizer* _LevelManager;

	float _CurrentHealth;

	float _MaxHealth;

	float _DamageValue;

	bool _IsDead;

	UUserWidget* _Marker;
};
