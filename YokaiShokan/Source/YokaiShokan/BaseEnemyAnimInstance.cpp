// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemyAnimInstance.h"

EEnemyState UBaseEnemyAnimInstance::GetCurrentState()
{
	return _CurrentState;
}

void UBaseEnemyAnimInstance::SetCurrentState(EEnemyState state)
{
	_CurrentState = state;
}