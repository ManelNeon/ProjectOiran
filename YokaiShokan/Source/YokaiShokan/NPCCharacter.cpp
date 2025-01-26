// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "YokaiShokanCharacter.h"
#include "AudioManagerInstanceSubsystem.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
ANPCCharacter::ANPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_Target = nullptr;

	_CurrentString = "";

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

	if (!_CurrentDialogueBox) return;

	auto yokaiGameInstance = GetGameInstance()->GetSubsystem<UAudioManagerInstanceSubsystem>();

	if (yokaiGameInstance->_CurrentDialogue != nullptr)
	{
		yokaiGameInstance->StopDialogue();
	}

	if (_DialogueIndex >= size) return;

	_DialogueIndex++;

	_CurrentDialogueBox->GetTextBlock()->SetText(FText::FromString(DialogueArray[_DialogueIndex]));

	yokaiGameInstance->PlayDialogue(DialoguesVoicesArray[_DialogueIndex]);
}

void ANPCCharacter::RestartDialogue()
{
	_DialogueIndex = -1;

	_CurrentDialogueBox = nullptr;
}