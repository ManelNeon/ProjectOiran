// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsGameInstanceSubsystem.h"
#include "Kismet/GameplayStatics.h"

void UStatsGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Stats Manager Initialized"));

	_CurrentHealth = MaxHealth;

	_DamageStat = 25;

	//SkillTree Stats
	for (size_t i{ 0 }; i < 10; ++i)
	{
		_SkillPointAvailability.Add(ESkillPointAvailability::DISABLED);
	}

	_SkillPointAvailability[0] = ESkillPointAvailability::AVAILABLE;

	_SkillPointAvailability[1] = ESkillPointAvailability::AVAILABLE;

	_AmountOfSkillPoints = 0;

	_PlayerLevel = 1;
}

void UStatsGameInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Stats Manager DeInitialized"));
}


float UStatsGameInstanceSubsystem::GetCurrentHealthPercentage()
{
	return _CurrentHealth / MaxHealth;
}

float UStatsGameInstanceSubsystem::GetCurrentHealth()
{
	return _CurrentHealth;
}

float UStatsGameInstanceSubsystem::GetMaxHealth()
{
	return MaxHealth;
}

float UStatsGameInstanceSubsystem::GetDamageStat()
{
	return _DamageStat;
}

void UStatsGameInstanceSubsystem::IncreasePlayerHealth()
{
	MaxHealth += 30;
	_CurrentHealth = MaxHealth;
}

void UStatsGameInstanceSubsystem::IncreasePlayerDamage()
{
	_DamageStat += 10;
}

void UStatsGameInstanceSubsystem::HealPlayer(float amount)
{
	_CurrentHealth += amount;

	if (_CurrentHealth > MaxHealth) _CurrentHealth = MaxHealth;
}

bool UStatsGameInstanceSubsystem::DamagePlayer(float damage)
{
	_CurrentHealth -= damage;

	if (_CurrentHealth > 0)
		return true;

	_CurrentHealth = 0;

	UGameplayStatics::OpenLevel(this, "L_MainMenu");

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

int UStatsGameInstanceSubsystem::GetPlayerLevel()
{
	return _PlayerLevel;
}

void UStatsGameInstanceSubsystem::IncrementPlayerLevel()
{
	_PlayerLevel++;

	_DamageStat += 5;

	MaxHealth += 15;

	_CurrentHealth = MaxHealth;
}