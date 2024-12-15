// Fill out your copyright notice in the Description page of Project Settings.


#include "YokaiShokanGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UYokaiShokanGameInstance::Init()
{
	_CurrentHealth = MaxHealth;

	_CurrentLevel = ECurrentLevel::TOTAL_LEVEL;

	_CurrentReward = ERewards::TOTAL_REWARDS;
}

float UYokaiShokanGameInstance::GetCurrentHealthPercentage()
{
	return _CurrentHealth / MaxHealth;
}

float UYokaiShokanGameInstance::GetCurrentHealth()
{
	return _CurrentHealth;
}

ECurrentLevel UYokaiShokanGameInstance::GetCurrentLevel()
{
	return _CurrentLevel;
}

void UYokaiShokanGameInstance::SetCurrentLevel(ECurrentLevel currentLevel)
{
	_CurrentLevel = currentLevel;
}

void UYokaiShokanGameInstance::SetIsInsideRoguelite(bool isInside)
{
	_IsInsideRoguelite = isInside;
}

ERewards UYokaiShokanGameInstance::GetCurrentReward()
{
	return _CurrentReward;
}

void UYokaiShokanGameInstance::SetCurrentReward(ERewards currentReward)
{
	_CurrentReward = currentReward;
}

ERewards UYokaiShokanGameInstance::GetDifferentReward()
{
	int temporaryReward = static_cast<int>(_CurrentReward);

	int currentRewardHolder = temporaryReward;

	while (temporaryReward == currentRewardHolder)
	{
		temporaryReward = FMath::RandRange(0, static_cast<int>(ERewards::TOTAL_REWARDS) - 1);
	}

	return static_cast<ERewards>(temporaryReward);
}

void UYokaiShokanGameInstance::HealPlayer(float amount)
{
	_CurrentHealth += amount;

	if (_CurrentHealth > MaxHealth) _CurrentHealth = MaxHealth;
}

bool UYokaiShokanGameInstance::DamagePlayer(float damage)
{
	_CurrentHealth -= damage;

	if (_CurrentHealth > 0)
		return true;

	_CurrentHealth = 0;
	
	UGameplayStatics::OpenLevel(this, "L_MainMenu");

	return false;
}