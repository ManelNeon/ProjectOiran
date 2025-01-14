// Fill out your copyright notice in the Description page of Project Settings.

#include "CloseUpEnemy.h"
#include "BaseEnemyAnimInstance.h"

void ACloseUpEnemy::DamageThis(float damage, FVector hitDirection)
{
	auto animInstance = Cast<UBaseEnemyAnimInstance>(GetMesh()->GetAnimInstance());

	animInstance->SetCurrentState(EEnemyState::HIT_STATE);

	_CurrentHealth -= damage;

	if (_CurrentHealth <= 0)
	{
		_LevelManager->DeleteEnemyFromList(this, true);

		animInstance->SetCurrentState(EEnemyState::DEAD_STATE);

		_Marker->RemoveFromParent();

		_Marker = nullptr;

		return;
	}

	LaunchCharacter(hitDirection, false, false);
}