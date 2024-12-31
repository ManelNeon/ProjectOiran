// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TutorialEnemy.generated.h"

UCLASS()
class YOKAISHOKAN_API ATutorialEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATutorialEnemy();

	UFUNCTION(BlueprintCallable, Category = "Tutorial Enemy | Widget")
	void SetMarkerWidget(UUserWidget* widget);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Tutorial Enemy | Stats")
	void DamageThis(float damage, FVector hitDirection);

	UFUNCTION(BlueprintPure, Category = "Tutorial Enemy | Stats")
	float GetDamageValue();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Tutorial Enemy | Functions")
	void BP_EnemyDies();

	float _CurrentHealth;

	float _MaxHealth;

	float _DamageValue;

	bool _IsDead;

	UUserWidget* _Marker;
};
