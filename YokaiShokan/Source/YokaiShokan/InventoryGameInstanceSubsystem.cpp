// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryGameInstanceSubsystem.h"

void UInventoryGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Inventory System Initialized"));

	for (size_t i{ 0 }; i < 9; ++i) _CurrentLoreItemsPosession.Add(false);

	_LoreItemsToAdd = _CurrentLoreItemsPosession;
}

void UInventoryGameInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Inventory System DeInitialized"));
}

TArray<bool> UInventoryGameInstanceSubsystem::GetCurrentLoreItems()
{
	return _CurrentLoreItemsPosession;
}

void UInventoryGameInstanceSubsystem::SetRandomPossessionLoreItemInRun()
{
	if (GetIfPlayerGotAllLoreItems()) return;

	int arraySize = _LoreItemsToAdd.Num() - 1;

	int index = FMath::RandRange(0, arraySize);

	while (_LoreItemsToAdd[index]) index = FMath::RandRange(0, arraySize);

	_LoreItemsToAdd[index] = true;
}

void UInventoryGameInstanceSubsystem::FinishRunVariables()
{
	int arrayInRun = _LoreItemsToAdd.Num() - 1;

	for (size_t i{ 0 }; i < arrayInRun; ++i)
	{
		_CurrentLoreItemsPosession[i] = _LoreItemsToAdd[i];
	}

	_LoreItemsToAdd = _CurrentLoreItemsPosession;

	_Currency += _CurrencyToAdd;

	_CurrencyToAdd = 0;
}

void UInventoryGameInstanceSubsystem::SetRandomPossessionLoreItem()
{
	if (GetIfPlayerGotAllLoreItems()) return;
	
	int arraySize = _CurrentLoreItemsPosession.Num() - 1;
	
	int index = FMath::RandRange(0, arraySize);

	while(_CurrentLoreItemsPosession[index]) index = FMath::RandRange(0, arraySize);

	_CurrentLoreItemsPosession[index] = true;
}

bool UInventoryGameInstanceSubsystem::GetIfPlayerGotAllLoreItems()
{
	int arraySize = _CurrentLoreItemsPosession.Num();

	for (size_t i{ 0 }; i < arraySize; ++i)
	{
		if (!_CurrentLoreItemsPosession[i]) return false;
	}

	return true;
}


int UInventoryGameInstanceSubsystem::GetCurrency()
{
	return _Currency;
}

void UInventoryGameInstanceSubsystem::TakeCurrency(int quantity)
{
	_Currency -= quantity;
}

void UInventoryGameInstanceSubsystem::AddCurrency(int quantity)
{
	_Currency += quantity;
}

void UInventoryGameInstanceSubsystem::AddTemporaryCurrency(int quantity)
{
	_CurrencyToAdd += quantity;
}

void UInventoryGameInstanceSubsystem::ClearBeforeRun()
{
	_CurrencyToAdd = 0;

	_LoreItemsToAdd = _CurrentLoreItemsPosession;
}