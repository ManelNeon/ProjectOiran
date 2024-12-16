// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DialogueBox.h"
#include "Components/SphereComponent.h"
#include "NPCCharacter.generated.h"

UCLASS()
class YOKAISHOKAN_API ANPCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "NPC")
	TArray<FString> DialogueArray;

	UFUNCTION()
	void RotateTowardsPlayer(AActor* Target, float RotationSpeed, float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "NPC | Functions")
	void SetTarget(AActor* target);

	UFUNCTION(BlueprintCallable, Category = "NPC | Functions")
	AActor* GetTarget();

	UFUNCTION(BlueprintPure, Category = "NPC | Functions")
	UDialogueBox* GetCurrentDialogueBox();

	UFUNCTION(BlueprintCallable, Category = "NPC | Functions")
	void SetCurrentDialogueBox(UDialogueBox* dialogueBox);

	UFUNCTION(BlueprintCallable, Category = "NPC | Functions")
	void StartDialogue();

	UFUNCTION(BlueprintCallable, Category = "NPC | Functions")
	void RunThroughDialogue();

	UFUNCTION(BlueprintCallable, Category = "NPC | Functions")
	void RestartDialogue();

	UDialogueBox* _CurrentDialogueBox;

	bool _IsPlaying;
	
	FString _CurrentString;

	int _CharIndex;

	int _DialogueIndex;

	AActor* _Target;

	FTimerHandle _TimerHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
