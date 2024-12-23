// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryGameInstanceSubsystem.h"

void UInventoryGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Inventory System Initialized"));

	for (size_t i{ 0 }; i < 4; ++i) _CurrentLoreItemsPosession.Add(false);
}

void UInventoryGameInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Inventory System DeInitialized"));
}

TArray<bool> UInventoryGameInstanceSubsystem::GetCurrentLoreItems()
{
	return _CurrentLoreItemsPosession;
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