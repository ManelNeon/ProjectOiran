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
#include "YokaiShokanGameInstance.h"
#include "Kismet/GameplayStatics.h"
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

		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Started, this, &AYokaiShokanCharacter::Dash);

		EnhancedInputComponent->BindAction(LightAttackAction, ETriggerEvent::Started, this, &AYokaiShokanCharacter::LightAttack);

		EnhancedInputComponent->BindAction(HeavyAttackAction, ETriggerEvent::Started, this, &AYokaiShokanCharacter::HeavyAttack);

		EnhancedInputComponent->BindAction(SpecialOneAction, ETriggerEvent::Started, this, &AYokaiShokanCharacter::SpecialAttackOne);

		EnhancedInputComponent->BindAction(SpecialTwoAction, ETriggerEvent::Started, this, &AYokaiShokanCharacter::SpecialAttackTwo);

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

void AYokaiShokanCharacter::Jump()
{
	if (_IsDashing) return;

	Super::Jump();
}

void AYokaiShokanCharacter::HealPlayer(float amount)
{
	auto gameInstance = GetGameInstance();

	auto yokaiGameInstance = Cast<UYokaiShokanGameInstance>(gameInstance);

	yokaiGameInstance->HealPlayer(amount);

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Healed Player"));
}

void AYokaiShokanCharacter::DamagePlayer(float damage)
{
	auto gameInstance = GetGameInstance();

	auto yokaiGameInstance = Cast<UYokaiShokanGameInstance>(gameInstance);

	if (yokaiGameInstance->DamagePlayer(damage))
	{
		//damge player animation only
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Damaged Player"));
		return;
	}

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Dead Player"));
}

void AYokaiShokanCharacter::Dash()
{
	if (_IsDashing)
	{
		_IsDashing = false;

		GetWorldTimerManager().SetTimer(_MemberTimerHandle, this, &AYokaiShokanCharacter::Dash, 1, false, DashCooldown - .2);

		return;
	}

	if (!_CanDash)
	{
		_CanDash = true;

		return;
	}

	_CanDash = false;
	
	_IsDashing = true;

	FVector finalDirection = FVector(GetVelocity().X * DashMultiplier, GetVelocity().Y * DashMultiplier, 0);

	if (finalDirection.X == 0 && finalDirection.Y == 0)
	{
		finalDirection = FVector(FirstPersonCameraComponent->GetForwardVector().X * 1000 * DashMultiplier, FirstPersonCameraComponent->GetForwardVector().Y * 1000 * DashMultiplier, 0);
	}

	if (!CanJump())
	{
		finalDirection.X /= DashJumpNerf;
		finalDirection.Y /= DashJumpNerf;
	}

	UGameplayStatics::PlaySound2D(GetWorld(), DashSound);

	LaunchCharacter(finalDirection, false, false);

	GetWorldTimerManager().SetTimer(_MemberTimerHandle, this, &AYokaiShokanCharacter::Dash, 1, false, .2);
}

bool AYokaiShokanCharacter::GetDashAvailability()
{
	return _CanDash;
}

void AYokaiShokanCharacter::LightAttack()
{
}

void AYokaiShokanCharacter::HeavyAttack()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Heavy Attack"));
}

void AYokaiShokanCharacter::SpecialAttackOne()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Special Attack One"));
}

void AYokaiShokanCharacter::SpecialAttackTwo()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Special Attack Two"));
}