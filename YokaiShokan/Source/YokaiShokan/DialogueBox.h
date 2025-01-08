// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "DialogueBox.generated.h"

UCLASS(Abstract)
class YOKAISHOKAN_API UDialogueBox : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Dialogue Box | Functions")
	UTextBlock* GetTextBlock();

protected:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextBox;
};
