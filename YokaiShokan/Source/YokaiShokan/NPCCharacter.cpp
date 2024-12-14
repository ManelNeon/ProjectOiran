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

// Called to bind functionality to input
void ANPCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

}

void ANPCCharacter::Interact()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, TEXT("HELLO WORLD AHEA"));
}

bool ANPCCharacter::OnEnterRange(AActor* OtherActor)
{
	auto player = Cast<AYokaiShokanCharacter>(OtherActor);

	if (!player) return false;

	_Target = player;

	return true;
}

bool ANPCCharacter::OnExitRange(AActor* OtherActor)
{
	auto player = Cast<AYokaiShokanCharacter>(OtherActor);

	if (!player) return false;
	
	_Target = nullptr;

	return true;
}

