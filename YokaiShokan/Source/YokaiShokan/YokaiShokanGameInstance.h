// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "YokaiShokanGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class YOKAISHOKAN_API UYokaiShokanGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BluePrintCallable, Category = "Character | Stats", meta = (DisplayName = "Get % HP"))
	float GetCurrentHealthPercentage();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats", meta = (DisplayName = "Get HP"))
	float GetCurrentHealth();

	void HealPlayer(float amount);

	//returns True if player is alive, false if he is dead
	bool DamagePlayer(float damage);

	UPROPERTY(EditAnywhere, Category = "Character | Stats")
	float MaxHealth;

	virtual void Init() override;

protected:

	float _CurrentHealth;
	
};
