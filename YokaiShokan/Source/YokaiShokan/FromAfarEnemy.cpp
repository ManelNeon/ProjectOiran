// Fill out your copyright notice in the Description page of Project Settings.


#include "FromAfarEnemy.h"

void AFromAfarEnemy::DamageThis(float damage, FVector hitDirection)
{
	_CurrentHealth -= damage;

	if (_CurrentHealth <= 0)
	{
		_LevelManager->DeleteEnemyFromList(this, false);

		_Marker->RemoveFromParent();

		_Marker = nullptr;

		Destroy();

		return;
	}

	LaunchCharacter(hitDirection, false, false);
}

void AFromAfarEnemy::BeginPlay()
{
	_MaxHealth = 60;

	_DamageValue = 25;

	Super::BeginPlay();
}