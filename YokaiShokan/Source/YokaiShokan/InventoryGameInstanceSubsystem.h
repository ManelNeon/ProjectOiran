// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InventoryGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class YOKAISHOKAN_API UInventoryGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	UFUNCTION(BlueprintPure, Category = "Inventory System")
	TArray<bool> GetCurrentLoreItems();

	UFUNCTION(BlueprintCallable, Category = "Inventory System")
	void SetRandomPossessionLoreItem();

	UFUNCTION(BlueprintPure, Category = "Inventory System")
	bool GetIfPlayerGotAllLoreItems();

	UFUNCTION(BlueprintPure, Category = "Inventory System")
	int GetCurrency();

	UFUNCTION(BlueprintCallable, Category = "Inventory System")
	void TakeCurrency(int quantity);

	UFUNCTION(BlueprintCallable, Category = "Inventory System")
	void AddCurrency(int quantity);

protected:

	int _Currency;

	//True if has, false if doesn't
	TArray<bool> _CurrentLoreItemsPosession;
};
