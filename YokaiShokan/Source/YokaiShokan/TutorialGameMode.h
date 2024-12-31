// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "YokaiShokanGameMode.h"
#include "TutorialGameMode.generated.h"

/**
 * 
 */
UCLASS()
class YOKAISHOKAN_API ATutorialGameMode : public AYokaiShokanGameMode
{
	GENERATED_BODY()
		
public:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Tutorial | Functions")
	void BP_FirstTimeDash();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Tutorial | Functions")
	void BP_TookAHit();

	UFUNCTION(BlueprintPure, Category = "Tutorial | Functions")
	bool GetIsFirstEnemy();

	UFUNCTION(BlueprintCallable, Category = "Tutorial | Functions")
	void TrueifyIsFirstEnemy();

	bool GetIsFirstDash();

	void SetIsFirstDash(bool state);

protected:

	bool _IsFirstEnemy;

	bool _IsFirstDash;
};
