// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsGameInstanceSubsystem.h"

void UStatsGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Stats Manager Initialized"));

	_MaxHealth = 100;

	_CurrentHealth = _MaxHealth;

	_DamageStat = 25;

	//SkillTree Stats
	for (size_t i{ 0 }; i < 10; ++i)
	{
		_SkillPointAvailability.Add(ESkillPointAvailability::DISABLED);
	}

	_SkillPointAvailability[0] = ESkillPointAvailability::AVAILABLE;

	_SkillPointAvailability[1] = ESkillPointAvailability::AVAILABLE;

	_AmountOfSkillPoints = 0;

	_SkillPointsToAdd = 0;

	_PlayerLevel = 1;
}

void UStatsGameInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Stats Manager DeInitialized"));
}


float UStatsGameInstanceSubsystem::GetCurrentHealthPercentage()
{
	return _CurrentHealth / _MaxHealth;
}

float UStatsGameInstanceSubsystem::GetCurrentHealth()
{
	return _CurrentHealth;
}

float UStatsGameInstanceSubsystem::GetMaxHealth()
{
	return _MaxHealth;
}

float UStatsGameInstanceSubsystem::GetDamageStat()
{
	return _DamageStat;
}

void UStatsGameInstanceSubsystem::IncreasePlayerHealth()
{
	_MaxHealth += 30;
	_CurrentHealth = _MaxHealth;
}

void UStatsGameInstanceSubsystem::IncreasePlayerDamage()
{
	_DamageStat += 10;
}

void UStatsGameInstanceSubsystem::HealPlayer(float amount)
{
	_CurrentHealth += amount;

	if (_CurrentHealth > _MaxHealth) _CurrentHealth = _MaxHealth;
}

bool UStatsGameInstanceSubsystem::DamagePlayer(float damage)
{
	_CurrentHealth -= damage;

	if (_CurrentHealth > 0) return true;

	_CurrentHealth = 0;

	return false;
}

TArray<ESkillPointAvailability> UStatsGameInstanceSubsystem::GetSkillPointAvailability()
{
	return _SkillPointAvailability;
}

void UStatsGameInstanceSubsystem::SetSkillPointAvailability(int index, ESkillPointAvailability skillPointStatus)
{
	_SkillPointAvailability[index] = skillPointStatus;
}


int UStatsGameInstanceSubsystem::GetAmountOfSkillPoints()
{
	return _AmountOfSkillPoints;
}

void UStatsGameInstanceSubsystem::IncrementSkillPoints()
{
	_AmountOfSkillPoints++;
}

void UStatsGameInstanceSubsystem::RemoveSkillPoints(int quantity)
{
	_AmountOfSkillPoints -= quantity;
}

void UStatsGameInstanceSubsystem::IncrementSkillPointsInRun()
{
	_SkillPointsToAdd++;
}

void UStatsGameInstanceSubsystem::ClearTheSkillPoinsInRun()
{
	_AmountOfSkillPoints += _SkillPointsToAdd;

	_SkillPointsToAdd = 0;
}

int UStatsGameInstanceSubsystem::GetPlayerLevel()
{
	return _PlayerLevel;
}

void UStatsGameInstanceSubsystem::IncrementPlayerLevel()
{
	_PlayerLevel++;

	_DamageStat += 5;

	_MaxHealth += 15;

	_CurrentHealth = _MaxHealth;
}

void UStatsGameInstanceSubsystem::SetSkillPointsInRunToZero()
{
	_SkillPointsToAdd = 0;
}