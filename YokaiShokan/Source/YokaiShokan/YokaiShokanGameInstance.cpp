// Fill out your copyright notice in the Description page of Project Settings.


#include "YokaiShokanGameInstance.h"

void UYokaiShokanGameInstance::Init()
{
	_CurrentHealth = MaxHealth;
}

float UYokaiShokanGameInstance::GetCurrentHealthPercentage()
{
	return _CurrentHealth / MaxHealth;
}

float UYokaiShokanGameInstance::GetCurrentHealth()
{
	return _CurrentHealth;
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
	
	return false;
}