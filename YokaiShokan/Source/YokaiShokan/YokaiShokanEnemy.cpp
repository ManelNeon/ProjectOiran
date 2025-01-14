// Fill out your copyright notice in the Description page of Project Settings.


#include "YokaiShokanEnemy.h"
#include "StatsGameInstanceSubsystem.h"

// Sets default values
AYokaiShokanEnemy::AYokaiShokanEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_Marker = nullptr;
}

// Called when the game starts or when spawned
void AYokaiShokanEnemy::BeginPlay()
{
	Super::BeginPlay();

	_CurrentHealth = _MaxHealth;

	int playerLevel = GetGameInstance()->GetSubsystem<UStatsGameInstanceSubsystem>()->GetPlayerLevel();
	
	if (playerLevel == 1) return;
	
	_CurrentHealth = _MaxHealth + (playerLevel * 5);

	_DamageValue += (playerLevel * 2);
}

void AYokaiShokanEnemy::SetLevelRandomizer(ALevelRandomizer* levelManager)
{
	_LevelManager = levelManager;
}

ALevelRandomizer* AYokaiShokanEnemy::GetLevelRandomizer()
{
	return _LevelManager;
}

void AYokaiShokanEnemy::SetMarkerWidget(UUserWidget* widget)
{
	_Marker = widget;
}

void AYokaiShokanEnemy::DamageThis(float damage, FVector hitDirection)
{
}

float AYokaiShokanEnemy::GetDamageValue()
{
	return _DamageValue;
}


