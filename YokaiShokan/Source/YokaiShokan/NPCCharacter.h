// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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

	UFUNCTION(BlueprintCallable, Category = "NPC")
	void Interact();

	UFUNCTION(BlueprintCallable, Category = "NPC")
	bool OnEnterRange(AActor* OtherActor);

	UFUNCTION(BlueprintCallable, Category = "NPC")
	bool OnExitRange(AActor* OtherActor);

	UFUNCTION()
	void RotateTowardsPlayer(AActor* Target, float RotationSpeed, float DeltaTime);

	AActor* _Target;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
