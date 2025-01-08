// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryGameInstanceSubsystem.h"

void UInventoryGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Inventory System Initialized"));

	for (size_t i{ 0 }; i < 9; ++i) _CurrentLoreItemsPosession.Add(false);
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

	int arraySize = _CurrentLoreItemsPosession.Num() - 1;

	int index = FMath::RandRange(0, arraySize);

	bool isStillRunning = true;

	while (isStillRunning)
	{
		index = FMath::RandRange(0, arraySize);

		if (!_CurrentLoreItemsPosession[index]) isStillRunning = false;

		UE_LOG(LogTemp, Warning, TEXT("Before setting array size."));

		int arrayInRun = _LoreItemsToAdd.Num() - 1;

		UE_LOG(LogTemp, Warning, TEXT("After setting array size."));

		if (arrayInRun == -1)
		{
			isStillRunning = false;

			UE_LOG(LogTemp, Warning, TEXT("The array is empty."));
		}
		else
		{
			for (size_t i{ 0 }; i < arrayInRun; ++i)
			{
				UE_LOG(LogTemp, Warning, TEXT("Looping through obtained in this run lore items."));

				if (_LoreItemsToAdd[i] == index)
				{
					UE_LOG(LogTemp, Warning, TEXT("The array has found a spot."));
					isStillRunning = true;
					break;
				}
			}
		}
	}

	_LoreItemsToAdd.Add(index);
}

void UInventoryGameInstanceSubsystem::FinishRunVariables()
{
	int arrayInRun = _LoreItemsToAdd.Num() - 1;

	for (size_t i{ 0 }; i < arrayInRun; ++i)
	{
		_CurrentLoreItemsPosession[_LoreItemsToAdd[i]] = true;
	}

	_LoreItemsToAdd.Empty();

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

	_LoreItemsToAdd.Empty();
}