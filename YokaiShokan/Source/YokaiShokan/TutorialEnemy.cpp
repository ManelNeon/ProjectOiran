// Fill out your copyright notice in the Description page of Project Settings.


#include "TutorialEnemy.h"
#include "BaseEnemyAnimInstance.h"
#include "Blueprint/UserWidget.h"

// Sets default values
ATutorialEnemy::ATutorialEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	_MaxHealth = 100;

	_DamageValue = 20;

	_CurrentHealth = _MaxHealth;

	_Marker = nullptr;
}

// Called when the game starts or when spawned
void ATutorialEnemy::BeginPlay()
{
	Super::BeginPlay();
}

void ATutorialEnemy::SetMarkerWidget(UUserWidget* widget)
{
	_Marker = widget;
}

void ATutorialEnemy::DamageThis(float damage, FVector hitDirection)
{
	auto animInstance = Cast<UBaseEnemyAnimInstance>(GetMesh()->GetAnimInstance());

	animInstance->SetCurrentState(EEnemyState::HIT_STATE);

	_CurrentHealth -= damage;

	if (_CurrentHealth <= 0)
	{
		animInstance->SetCurrentState(EEnemyState::DEAD_STATE);

		_Marker->RemoveFromParent();

		_Marker = nullptr;

		BP_EnemyDies();

		return;
	}

	LaunchCharacter(hitDirection, false, false);
}

float ATutorialEnemy::GetDamageValue()
{
	return _DamageValue;
}




