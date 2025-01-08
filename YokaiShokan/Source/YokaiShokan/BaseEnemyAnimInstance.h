// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseEnemyAnimInstance.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	ROARING_STATE,
	RUNNING_STATE,
	RIGHT_STRAFE_STATE,
	LEFT_STRAFE_STATE,
	ATTACK_STATE,
	HIT_STATE,
	DEAD_STATE,
	TOTAL_STATE
};

UCLASS()
class YOKAISHOKAN_API UBaseEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "Enemy Animation Blueprint Functions", meta = (BlueprintThreadSafe))
	EEnemyState GetCurrentState();

	UFUNCTION(BlueprintCallable, Category = "Enemy Animation Blueprint Functions")
	void SetCurrentState(EEnemyState state);

protected:

	UPROPERTY(EditAnywhere, Category = "Defaults")
	EEnemyState _CurrentState;
};
