// Copyright Epic Games, Inc. All Rights Reserved.

#include "YokaiShokanCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "KismetMathLibrary.generated.h"
#include "Engine/LocalPlayer.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AYokaiShokanCharacter

AYokaiShokanCharacter::AYokaiShokanCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	_IsDashing = false;

	_CanDash = true;

	_CurrentHealthPoints = HealthPoints;
}

void AYokaiShokanCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

//////////////////////////////////////////////////////////////////////////// Input

void AYokaiShokanCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AYokaiShokanCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AYokaiShokanCharacter::Look);

		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Triggered, this, &AYokaiShokanCharacter::DashPressed);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void AYokaiShokanCharacter::Move(const FInputActionValue& Value)
{
	if (_IsDashing) return;
	
	// input is a Vector2D
	 FVector2D _MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), _MovementVector.Y);
		AddMovementInput(GetActorRightVector(), _MovementVector.X);
	}
}

void AYokaiShokanCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AYokaiShokanCharacter::DashPressed()
{
	if (_IsDashing || !_CanDash) return;

	_CanDash = false;
	
	_IsDashing = true;

	FVector finalDirection = FVector(GetVelocity().X * DashMultiplier, GetVelocity().Y * DashMultiplier, 0);

	UE_LOG(LogTemp, Warning, TEXT("%s"), *finalDirection.ToString());

	if (finalDirection.X == 0 && finalDirection.Y == 0)
	{
		finalDirection = FVector(FirstPersonCameraComponent->GetForwardVector().X * 1000 * DashMultiplier, FirstPersonCameraComponent->GetForwardVector().Y * 1000 * DashMultiplier, 0);
		UE_LOG(LogTemp, Warning, TEXT("Did the Thing"));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *finalDirection.ToString());
	}

	if (!CanJump())
	{
		finalDirection.X /= DashJumpNerf;
		finalDirection.Y /= DashJumpNerf;
	}

	LaunchCharacter(finalDirection, false, false);

	GetWorldTimerManager().SetTimer(_MemberTimerHandle, this, &AYokaiShokanCharacter::EndDash, 1, false, DashCooldown);

	_IsDashing = false;
}

void AYokaiShokanCharacter::EndDash()
{	
	UE_LOG(LogTemp, Warning, TEXT("Can Dash Again"));

	_CanDash = true;
}

float AYokaiShokanCharacter::GetCurrentPercentageHealth()
{
	return (_CurrentHealthPoints / HealthPoints);
}

void AYokaiShokanCharacter::DamagePlayer(float damage)
{
	if (_CurrentHealthPoints - damage > 0)
		_CurrentHealthPoints -= damage;
	else
	{
		_CurrentHealthPoints = 0;
		UE_LOG(LogTemp, Warning, TEXT("Is Dead"));
	}
}

bool AYokaiShokanCharacter::GetDashAvailability()
{
	return _CanDash;
}