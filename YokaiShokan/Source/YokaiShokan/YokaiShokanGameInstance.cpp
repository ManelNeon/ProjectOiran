// Fill out your copyright notice in the Description page of Project Settings.


#include "YokaiShokanGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UYokaiShokanGameInstance::Init()
{
	Super::Init();

	//Character Stats
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
	
	//Level Randomization
	_CurrentLevel = ECurrentLevel::TOTAL_LEVEL;

	_CurrentReward = ERewards::TOTAL_REWARDS;

	_LevelCounter = 0;

	_IsInsideRoguelite = false;

	//Settings
	_MasterVolume = 1;

	_MusicVolume = 1;

	_SFXVolume = 1;

	_DialogueVolume = 1;

	_EnviromentVolume = 1;

	_UIVolume = 1;
}

//Character Stats Functions

float UYokaiShokanGameInstance::GetCurrentHealthPercentage()
{
	return _CurrentHealth / MaxHealth;
}

float UYokaiShokanGameInstance::GetCurrentHealth()
{
	return _CurrentHealth;
}

float UYokaiShokanGameInstance::GetMaxHealth()
{
	return MaxHealth;
}

float UYokaiShokanGameInstance::GetDamageStat()
{
	return _DamageStat;
}

void UYokaiShokanGameInstance::IncreasePlayerHealth()
{
	MaxHealth += 30;
	_CurrentHealth = MaxHealth;
}

void UYokaiShokanGameInstance::IncreasePlayerDamage()
{
	_DamageStat += 10;
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

TArray<ESkillPointAvailability> UYokaiShokanGameInstance::GetSkillPointAvailability()
{
	return _SkillPointAvailability;
}

void UYokaiShokanGameInstance::SetSkillPointAvailability(int index, ESkillPointAvailability skillPointStatus)
{
	_SkillPointAvailability[index] = skillPointStatus;
}


int UYokaiShokanGameInstance::GetAmountOfSkillPoints()
{
	return _AmountOfSkillPoints;
}

void UYokaiShokanGameInstance::IncrementSkillPoints()
{
	_AmountOfSkillPoints++;
}

void UYokaiShokanGameInstance::RemoveSkillPoints(int quantity)
{
	_AmountOfSkillPoints -= quantity;
}

int UYokaiShokanGameInstance::GetPlayerLevel()
{
	return _PlayerLevel;
}

void UYokaiShokanGameInstance::IncrementPlayerLevel()
{
	_PlayerLevel++;

	_DamageStat += 5;

	MaxHealth += 15;

	_CurrentHealth = MaxHealth;
}

//Setttings Functions

float UYokaiShokanGameInstance::GetMasterVolume()
{
	return _MasterVolume;
}

float UYokaiShokanGameInstance::GetMusicVolume()
{
	return _MusicVolume;
}

float UYokaiShokanGameInstance::GetSFXVolume()
{
	return _SFXVolume;
}

float UYokaiShokanGameInstance::GetDialogueVolume()
{
	return _DialogueVolume;
}

float UYokaiShokanGameInstance::GetEnviromentVolume()
{
	return _EnviromentVolume;
}

float UYokaiShokanGameInstance::GetUIVolume()
{
	return _UIVolume;
}

void UYokaiShokanGameInstance::SetMasterVolume(float value)
{
	_MasterVolume = value;
}

void UYokaiShokanGameInstance::SetMusicVolume(float value)
{
	_MusicVolume = value;
}

void UYokaiShokanGameInstance::SetSFXVolume(float value)
{
	_SFXVolume = value;
}

void UYokaiShokanGameInstance::SetDialogueVolume(float value)
{
	_DialogueVolume = value;
}

void UYokaiShokanGameInstance::SetEnviromentVolume(float value)
{
	_EnviromentVolume = value;
}

void UYokaiShokanGameInstance::SetUIVolume(float value)
{
	_UIVolume = value;
}

//Level Randomization Functions

ECurrentLevel UYokaiShokanGameInstance::GetCurrentLevel()
{
	return _CurrentLevel;
}

void UYokaiShokanGameInstance::SetCurrentLevel(ECurrentLevel currentLevel)
{
	_CurrentLevel = currentLevel;
}

ECurrentLevel UYokaiShokanGameInstance::GetDifferentLevel()
{
	if (_LevelCounter == 5) return ECurrentLevel::TOTAL_LEVEL;

	int temporaryLevel = static_cast<int>(_CurrentLevel);

	int currentLevelHolder = temporaryLevel;

	while (temporaryLevel == currentLevelHolder)
	{
		temporaryLevel = FMath::RandRange(0, static_cast<int>(ECurrentLevel::TOTAL_LEVEL) - 1);
	}

	return static_cast<ECurrentLevel>(temporaryLevel);
}

void UYokaiShokanGameInstance::IncrementLevelCounter()
{
	_LevelCounter++;
}

void UYokaiShokanGameInstance::SetIsInsideRoguelite(bool isInside)
{
	_IsInsideRoguelite = isInside;

	_LevelCounter = 0;
}

bool UYokaiShokanGameInstance::GetIsInsideRoguelite()
{
	return _IsInsideRoguelite;
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