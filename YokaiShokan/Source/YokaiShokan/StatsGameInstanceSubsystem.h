// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StatsGameInstanceSubsystem.generated.h"

UENUM(BlueprintType)
enum class ESkillPointAvailability : uint8
{
	AVAILABLE,
	DISABLED,
	ACQUIRED,
	TOTAL_AVAILABILITY
};

UCLASS(Blueprintable)
class YOKAISHOKAN_API UStatsGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Character | Stats", meta = (DisplayName = "Get % HP"))
	float GetCurrentHealthPercentage();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats", meta = (DisplayName = "Get HP"))
	float GetCurrentHealth();

	UFUNCTION(BlueprintPure, Category = "Character | Stats")
	float GetMaxHealth();

	UFUNCTION(BlueprintPure, Category = "Character | Stats")
	float GetDamageStat();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void IncreasePlayerHealth();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void IncreasePlayerDamage();

	void HealPlayer(float amount);

	//returns True if player is alive, false if he is dead
	bool DamagePlayer(float damage);

	UFUNCTION(BlueprintPure, Category = "Character | Stats")
	int GetPlayerLevel();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void IncrementPlayerLevel();

	//SkillTree
	UFUNCTION(BlueprintPure, Category = "Character | Stats")
	TArray<ESkillPointAvailability> GetSkillPointAvailability();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void SetSkillPointAvailability(int index, ESkillPointAvailability skillPointStatus);

	UFUNCTION(BlueprintPure, Category = "Character | Stats")
	int GetAmountOfSkillPoints();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void IncrementSkillPoints();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void RemoveSkillPoints(int quantity);

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void IncrementSkillPointsInRun();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void ClearTheSkillPoinsInRun();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void SetSkillPointsInRunToZero();

protected:

	float _MaxHealth;

	float _CurrentHealth;

	int _PlayerLevel;

	float _DamageStat;

	//SkillTree
	TArray<ESkillPointAvailability> _SkillPointAvailability;

	int _SkillPointsToAdd;

	int _AmountOfSkillPoints;
};
