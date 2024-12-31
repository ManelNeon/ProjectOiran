// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	EMPTY_STATE,
	IDLE_STATE,
	RUNNING_STATE,
	ATTACK_STATE,
	SPECIALATTACK_STATE,
	TOTAL_STATE
};

UCLASS()
class YOKAISHOKAN_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintPure, Category = "Player Animation Blueprint Functions", meta = (BlueprintThreadSafe))
	ECharacterState GetCurrentState();

	UFUNCTION(BlueprintCallable, Category = "Player Animation Blueprint Functions")
	void SetCurrentState(ECharacterState state);

protected:

	ECharacterState _CurrentState;
};
