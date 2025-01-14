// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "YokaiShokanEnemy.h"
#include "FromAfarEnemy.generated.h"

/**
 * 
 */
UCLASS()
class YOKAISHOKAN_API AFromAfarEnemy : public AYokaiShokanEnemy
{
	GENERATED_BODY()
	
public:
	void DamageThis(float damage, FVector hitDirection) override;

protected:
	virtual void BeginPlay() override;
};
