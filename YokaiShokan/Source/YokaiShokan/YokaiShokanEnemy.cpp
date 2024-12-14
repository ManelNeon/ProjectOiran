// Fill out your copyright notice in the Description page of Project Settings.


#include "YokaiShokanEnemy.h"

// Sets default values
AYokaiShokanEnemy::AYokaiShokanEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AYokaiShokanEnemy::BeginPlay()
{
	Super::BeginPlay();

	_CurrentHealth = _MaxHealth;
}

void AYokaiShokanEnemy::SetLevelRandomizer(ALevelRandomizer* levelManager)
{
	_LevelManager = levelManager;
}

void AYokaiShokanEnemy::DamageThis(float damage)
{
	_CurrentHealth -= damage;

	if (_CurrentHealth <= 0)
	{
		_LevelManager->DeleteEnemyFromList(this);
		Destroy();
		return;
	}

	if (_CurrentHealth > _MaxHealth) _CurrentHealth = _MaxHealth;
}

