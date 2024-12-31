// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"

ECharacterState UPlayerAnimInstance::GetCurrentState()
{
	return _CurrentState;
}

void UPlayerAnimInstance::SetCurrentState(ECharacterState state)
{
	_CurrentState = state;
}
