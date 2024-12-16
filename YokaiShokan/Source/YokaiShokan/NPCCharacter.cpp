// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "Kismet/GameplayStatics.h"
#include "YokaiShokanCharacter.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
ANPCCharacter::ANPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_Target = nullptr;

	_CurrentString = "";

	_CharIndex = 0;

	_DialogueIndex = -1;
}

// Called when the game starts or when spawned
void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (_Target)
	{
		RotateTowardsPlayer(_Target, 2.0f, DeltaTime);
	}
}

void ANPCCharacter::RotateTowardsPlayer(AActor* Target, float RotationSpeed, float DeltaTime)
{
	FVector ThisLocation = this->GetActorLocation();
	FVector PlayerLocation = Target->GetActorLocation();

	FVector Direction = PlayerLocation - ThisLocation;
	Direction.Z = 0.0f;

	if (Direction.IsNearlyZero()) return;

	FRotator TargetRotation = UKismetMathLibrary::MakeRotFromX(Direction);

	FRotator CurrentRotation = this->GetActorRotation();
	FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, RotationSpeed);

	this->SetActorRotation(NewRotation);
}

void ANPCCharacter::SetTarget(AActor* target)
{
	_Target = target;
}

AActor* ANPCCharacter::GetTarget()
{
	return _Target;
}

UDialogueBox* ANPCCharacter::GetCurrentDialogueBox()
{
	return _CurrentDialogueBox;
}

void ANPCCharacter::SetCurrentDialogueBox(UDialogueBox* dialogueBox)
{
	_CurrentDialogueBox = dialogueBox;
}

void ANPCCharacter::StartDialogue()
{
	auto size = DialogueArray.Num() - 1;

	if (_DialogueIndex >= size) return;

	if (!_CurrentDialogueBox) return;

	_CharIndex = 0;

	if (_IsPlaying)
	{
		_IsPlaying = false;

		_CurrentDialogueBox->GetTextBlock()->SetText(FText::FromString(DialogueArray[_DialogueIndex]));

		return;
	}

	_DialogueIndex++;

	_IsPlaying = true;

	_CurrentDialogueBox->GetTextBlock()->SetText(FText::FromString(""));

	GetWorldTimerManager().SetTimer(_TimerHandle, this, &ANPCCharacter::RunThroughDialogue, 0.05f, false);
}

void ANPCCharacter::RunThroughDialogue()
{
	if (!_IsPlaying) return;

	FString currentText = _CurrentDialogueBox->GetTextBlock()->GetText().ToString();

	currentText += DialogueArray[_DialogueIndex][_CharIndex];

	_CurrentDialogueBox->GetTextBlock()->SetText(FText::FromString(currentText));

	_CharIndex++;

	if (_CharIndex >= DialogueArray[_DialogueIndex].Len())
	{
		_IsPlaying = false;
		return;
	}

	GetWorldTimerManager().SetTimer(_TimerHandle, this, &ANPCCharacter::RunThroughDialogue, 0.05f, false);
}

void ANPCCharacter::RestartDialogue()
{
	_CharIndex = 0;

	_DialogueIndex = -1;
}