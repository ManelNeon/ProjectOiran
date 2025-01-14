// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "YokaiShokanEnemy.h"
#include "CloseUpEnemy.generated.h"

/**
 * 
 */
UCLASS()
class YOKAISHOKAN_API ACloseUpEnemy : public AYokaiShokanEnemy
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Level Randomizer")
	void BP_SetCanAttack();

protected:
	
	void DamageThis(float damage, FVector hitDirection) override;
	
};
