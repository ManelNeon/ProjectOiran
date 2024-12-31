// Fill out your copyright notice in the Description page of Project Settings.


#include "YokaiShokanEnemy.h"
#include "BaseEnemyAnimInstance.h"
#include "StatsGameInstanceSubsystem.h"

// Sets default values
AYokaiShokanEnemy::AYokaiShokanEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_MaxHealth = 100;

	_DamageValue = 20;

	_CurrentHealth = _MaxHealth;

	_Marker = nullptr;
}

// Called when the game starts or when spawned
void AYokaiShokanEnemy::BeginPlay()
{
	Super::BeginPlay();

	int playerLevel = GetGameInstance()->GetSubsystem<UStatsGameInstanceSubsystem>()->GetPlayerLevel();
	
	if (playerLevel == 1) return;
	

	_CurrentHealth = _MaxHealth + (playerLevel * 5);

	_DamageValue += (playerLevel * 2);
}

void AYokaiShokanEnemy::SetLevelRandomizer(ALevelRandomizer* levelManager)
{
	_LevelManager = levelManager;
}

void AYokaiShokanEnemy::SetMarkerWidget(UUserWidget* widget)
{
	_Marker = widget;
}


void AYokaiShokanEnemy::DamageThis(float damage, FVector hitDirection)
{
	auto animInstance = Cast<UBaseEnemyAnimInstance>(GetMesh()->GetAnimInstance());

	animInstance->SetCurrentState(EEnemyState::HIT_STATE);

	_CurrentHealth -= damage;

	if (_CurrentHealth <= 0)
	{
		_LevelManager->DeleteEnemyFromList(this);

		animInstance->SetCurrentState(EEnemyState::DEAD_STATE);

		_Marker->RemoveFromParent();

		_Marker = nullptr;

		return;
	}

	LaunchCharacter(hitDirection, false, false);
}

float AYokaiShokanEnemy::GetDamageValue()
{
	return _DamageValue;
}


