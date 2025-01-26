// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelRandomizer.h"
#include "YokaiShokanEnemy.h"
#include "YokaiShokanGameInstance.h"
#include "LevelManagerInstanceSubsystem.h"
#include "AudioManagerInstanceSubsystem.h"
#include "PickUp.h"

// Sets default values
ALevelRandomizer::ALevelRandomizer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	_CurrentZone = 0;

	_CurrentWave = 0;
}

// Called when the game starts or when spawned
void ALevelRandomizer::BeginPlay()
{
	Super::BeginPlay();
}

void ALevelRandomizer::DeleteEnemyFromList(AActor* actor, bool isCloseUpEnemy)
{
	int index = -1;

	int numberOfFromAfarEnemies = _FromAfarEnemiesList.Num();

	int numberOfCloseUpEnemies = _CloseUpEnemiesList.Num();

	if (isCloseUpEnemy)
	{
		for (int i{ 0 }; i < numberOfCloseUpEnemies; ++i)
		{
			UE_LOG(LogTemp, Warning, TEXT("Looping Through Array"));

			if (_CloseUpEnemiesList[i] == actor)
			{
				UE_LOG(LogTemp, Warning, TEXT("Found Index"));
				index = i;
				break;
			}
		}

		if (index == -1)
		{
			UE_LOG(LogTemp, Warning, TEXT("Index is Out Of Range"));
			return;
		}

		_CloseUpEnemiesList.RemoveAt(index);

		UE_LOG(LogTemp, Warning, TEXT("Index is Out Of Range"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Got Amount Of Enemies"));

		for (int i{ 0 }; i < numberOfFromAfarEnemies; ++i)
		{
			UE_LOG(LogTemp, Warning, TEXT("Looping Through Array"));

			if (_FromAfarEnemiesList[i] == actor)
			{
				UE_LOG(LogTemp, Warning, TEXT("Found Index"));
				index = i;
				break;
			}
		}

		if (index == -1)
		{
			UE_LOG(LogTemp, Warning, TEXT("Index is Out Of Range"));
			return;
		}

		_FromAfarEnemiesList.RemoveAt(index);
	}

	numberOfFromAfarEnemies = _FromAfarEnemiesList.Num();

	numberOfCloseUpEnemies = _CloseUpEnemiesList.Num();

	int numberOfEnemies = numberOfFromAfarEnemies + numberOfCloseUpEnemies;

	//Until Here, We're Deleting the enemy from the array, now we'll check if the number of enemies is 0 and move on to the next wave
	if (numberOfEnemies != 0) return;

	UE_LOG(LogTemp, Warning, TEXT("No Enemies"));

	WaveEnder();
}

void ALevelRandomizer::WaveEnder()
{
	//now we're checking if the wave is the last one, if not, we increment and then spawn new enemies
	if (_CurrentWave < _NumberOfWaves[_CurrentZone] - 1)
	{
		_CurrentWave++;
		SpawnEnemies(4, 6);
		return;
	}

	if (_ZoneDivider == nullptr)
	{
		LevelEnder();
		return;
	}

	BP_RotatePlayerTowardsExit();

	_CurrentWave = 0;
	_CurrentZone++;

	SpawnEnemies(3, 5);
}

void ALevelRandomizer::LevelEnder()
{
	auto gameInstance = GetGameInstance()->GetSubsystem<ULevelManagerInstanceSubsystem>();

	if (!gameInstance) return;

	UE_LOG(LogTemp, Warning, TEXT("Found Game Instance"));

	APickUp* pickUp = nullptr;

	switch (gameInstance->GetCurrentReward())
	{
		case ERewards::HEALTH:
			pickUp = Cast<APickUp>(GetWorld()->SpawnActor(_HealthPickupBP));
			UE_LOG(LogTemp, Warning, TEXT("It's Health"));
			pickUp->SetLevelRandomizer(this);
			break;
		case ERewards::SKILL_POINTS:
			pickUp = Cast<APickUp>(GetWorld()->SpawnActor(_SkillPointsPickupBP));
			UE_LOG(LogTemp, Warning, TEXT("It's Health"));
			pickUp->SetLevelRandomizer(this);
			break;
		case ERewards::LORE_ITEM:
			pickUp = Cast<APickUp>(GetWorld()->SpawnActor(_LoreItemPickupBP));
			UE_LOG(LogTemp, Warning, TEXT("It's Health"));
			pickUp->SetLevelRandomizer(this);
			break;
		case ERewards::TOTAL_REWARDS:
			UE_LOG(LogTemp, Warning, TEXT("It's Nothing"));
			break;
	}

	auto yokaiGameInstance = GetGameInstance()->GetSubsystem<UAudioManagerInstanceSubsystem>();

	if (yokaiGameInstance != nullptr && _LevelEnderSFX != nullptr) yokaiGameInstance->PlaySound(_LevelEnderSFX);

	if (!pickUp) return;

	pickUp->SetActorLocation(_RewardSpawnLocation);
}

bool ALevelRandomizer::IsLastEnemy()
{
	int size = _CloseUpEnemiesList.Num();

	return (size == 1);
}

void ALevelRandomizer::SpawnEnemies(int minimumQuantity, int maxQuantity)
{
	_CloseUpEnemiesList.Empty();

	_FromAfarEnemiesList.Empty();

	int randomNumber = FMath::RandRange(minimumQuantity, maxQuantity);

	int amountOfAfarEnemies = randomNumber / 3;

	if (amountOfAfarEnemies == 0) amountOfAfarEnemies = 1;

	for (size_t i{ 0 }; i < amountOfAfarEnemies; ++i)
	{
		_FromAfarEnemiesList.Add(GetWorld()->SpawnActor(_FromAfarEnemyClass));

		float xRangeValue = _ZonesEpicentersRange[_CurrentZone].X;

		float yRangeValue = _ZonesEpicentersRange[_CurrentZone].Y;

		FVector randomLocation = FVector(_ZonesEpicenters[_CurrentZone].X + FMath::RandRange(-xRangeValue, xRangeValue), _ZonesEpicenters[_CurrentZone].Y + FMath::RandRange(-yRangeValue, yRangeValue), _ZonesEpicenters[_CurrentZone].Z);

		Cast<AYokaiShokanEnemy>(_FromAfarEnemiesList[i])->SetLevelRandomizer(this);

		_FromAfarEnemiesList[i]->SetActorLocation(randomLocation);

		UE_LOG(LogTemp, Warning, TEXT("Afar Enemy Added"));
	}

	randomNumber = randomNumber - amountOfAfarEnemies;

	for (size_t i{ 0 }; i < randomNumber; ++i)
	{
		float xRangeValue = _ZonesEpicentersRange[_CurrentZone].X;

		float yRangeValue = _ZonesEpicentersRange[_CurrentZone].Y;

		FVector randomLocation = FVector(_ZonesEpicenters[_CurrentZone].X + FMath::RandRange(-xRangeValue, xRangeValue), _ZonesEpicenters[_CurrentZone].Y + FMath::RandRange(-yRangeValue, yRangeValue), _ZonesEpicenters[_CurrentZone].Z);

		_CloseUpEnemiesList.Add(GetWorld()->SpawnActor(_CloseUpEnemyClass, &randomLocation));

		Cast<AYokaiShokanEnemy>(_CloseUpEnemiesList[i])->SetLevelRandomizer(this);
		
		_CloseUpEnemiesList[i]->SetActorLocation(randomLocation);

		UE_LOG(LogTemp, Warning, TEXT("Close up Enemy Added"));
	}

	//Set an enemy to attack
	auto enemyToAttack = Cast<AYokaiShokanEnemy>(GetRandomEnemy());

	enemyToAttack->BP_SetCanAttack();

	_AttackingEnemy = enemyToAttack;
}

AActor* ALevelRandomizer::GetRandomEnemy()
{
	int numberOfEnemies = _CloseUpEnemiesList.Num() - 1;

	int randomNumber = FMath::RandRange(0, numberOfEnemies);

	return _CloseUpEnemiesList[randomNumber];
}

AActor* ALevelRandomizer::GetZoneDivider()
{
	return _ZoneDivider;
}

void ALevelRandomizer::SetANewEnemyToAttack()
{
	int size = _CloseUpEnemiesList.Num();
	
	if (size == 0) return;

	if (size == 1) 
	{
		_AttackingEnemy = nullptr;

		auto enemyToAttack = Cast <AYokaiShokanEnemy>(GetRandomEnemy());
		
		enemyToAttack->BP_SetCanAttack();

		return;
	}

	AActor* temporaryActor = _AttackingEnemy;

	while (temporaryActor == _AttackingEnemy)
	{
		temporaryActor = GetRandomEnemy();
	}

	_AttackingEnemy = temporaryActor;

	auto enemyToAttack = Cast<AYokaiShokanEnemy>(_AttackingEnemy);

	enemyToAttack->BP_SetCanAttack();
}

void ALevelRandomizer::SetZoneDividerNull()
{
	_ZoneDivider = nullptr;
}