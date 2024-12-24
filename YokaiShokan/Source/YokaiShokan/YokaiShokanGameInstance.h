// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "YokaiShokanGameInstance.generated.h"


UCLASS()
class YOKAISHOKAN_API UYokaiShokanGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	virtual void Init() override;
};
