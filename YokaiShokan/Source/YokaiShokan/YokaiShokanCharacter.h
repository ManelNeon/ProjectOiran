// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "YokaiShokanCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UENUM(BlueprintType)
enum class AttackState : uint8
{
	LIGHT_ATTACK_DAGGER,
	HEAVY_ATTACK_DAGGER,
	SPECIAL_ATTACK_ONE_DAGGER,
	SPECIAL_ATTACK_TWO_DAGGER,
	TOTAL_ATTACKS
};

UCLASS(config=Game)
class AYokaiShokanCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Dash Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category =Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* DashAction;

	/** Special One Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SpecialOneAction;

	/** Special Two Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SpecialTwoAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sounds | Input", meta = (AllowPrivateAccess = "true"))
	USoundWave* DashSound;
	
public:
	AYokaiShokanCharacter();

	UPROPERTY(EditAnywhere , Category = "Character | Dash Movement", meta = (DisplayName = "Dash Force"))
	float DashMultiplier = 10;

	UPROPERTY(EditAnywhere, Category = "Character | Dash Movement", meta = (DisplayName = "Dash Cooldown"))
	float DashCooldown = 4;

	//Because the dash is that much more powerful when jumping, this will nerf it
	UPROPERTY(EditAnywhere, Category = "Character | Dash Movement", meta = (DisplayName = "Dash Jump Nerf"))
	float DashJumpNerf = 10;

	UFUNCTION(BlueprintCallable, Category = "Character | Dash Movement")
	bool GetDashAvailability();

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void HealPlayer(float amount);

	UFUNCTION(BlueprintCallable, Category = "Character | Stats")
	void DamagePlayer(float damage, FVector direction);

protected:
	virtual void BeginPlay();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Tutorial Enemy | Functions")
	void BP_PlayerDeath();

public:
		
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	void Dash();

	void DashEndFunction();

	void SpecialAttackOne();

	void SpecialAttackTwo();

	bool _CanDash;

	bool _IsDashing;

	FTimerHandle _MemberTimerHandle;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

