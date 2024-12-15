// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelRandomizer.h"
#include "YokaiShokanEnemy.h"
#include "YokaiShokanGameInstance.h"
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

void ALevelRandomizer::DeleteEnemyFromList(AActor* actor)
{
	int index = -1;

	int numberOfEnemies = _EnemyList.Num();

	UE_LOG(LogTemp, Warning, TEXT("Got Amount Of Enemies"));

	for (int i{ 0 }; i < numberOfEnemies; ++i)
	{
		UE_LOG(LogTemp, Warning, TEXT("Looping Through Array"));
		
		if (_EnemyList[i] == actor)
		{
			UE_LOG(LogTemp, Warning, TEXT("Found Index"));
			index = i;
			break;
		}
	}
	
	if (index == -1) UE_LOG(LogTemp, Warning, TEXT("Index is Out Of Range"));

	_EnemyList.RemoveAt(index);

	UE_LOG(LogTemp, Warning, TEXT("Removed Index"));

	numberOfEnemies = _EnemyList.Num();

	UE_LOG(LogTemp, Warning, TEXT("Enemy List Size: %d"), numberOfEnemies);

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

	//now that we have gone through all the waves, we'll destroy the _ZoneDivider if it's not a nullptr and we'll set the wave to zero and increment the zone, spawning new enemies
	_ZoneDivider->Destroy();

	_ZoneDivider = nullptr;

	_CurrentWave = 0;
	_CurrentZone++;

	SpawnEnemies(3, 5);
}

void ALevelRandomizer::LevelEnder()
{
	auto gameInstance = Cast<UYokaiShokanGameInstance>(GetGameInstance());

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

	if (!pickUp) return;

	pickUp->SetActorLocation(_RewardSpawnLocation);
}

void ALevelRandomizer::SpawnEnemies(int minimumQuantity, int maxQuantity)
{
	_EnemyList.Empty();

	int randomNumber = FMath::RandRange(minimumQuantity, maxQuantity);

	for (size_t i{ 0 }; i < randomNumber; ++i)
	{
		_EnemyList.Add(GetWorld()->SpawnActor(_BaseEnemyClass));

		float xRangeValue = _ZonesEpicentersRange[_CurrentZone].X;

		float yRangeValue = _ZonesEpicentersRange[_CurrentZone].Y;

		FVector randomLocation = FVector(_ZonesEpicenters[_CurrentZone].X + FMath::RandRange(-xRangeValue, xRangeValue), _ZonesEpicenters[_CurrentZone].Y + FMath::RandRange(-yRangeValue, yRangeValue), _ZonesEpicenters[_CurrentZone].Z);
		
		Cast<AYokaiShokanEnemy>(_EnemyList[i])->SetLevelRandomizer(this);
		
		_EnemyList[i]->SetActorLocation(randomLocation);

		UE_LOG(LogTemp, Warning, TEXT("Enemy Added"));
	}
}
