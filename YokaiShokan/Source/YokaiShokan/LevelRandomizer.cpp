// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelRandomizer.h"
#include "YokaiShokanEnemy.h"

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

	//Until Here, We're Deleting the enemy from the array, now we'll check if the number of enemies is 0 and move on to the next wave

	if (numberOfEnemies != 0) return;

	//now we're checking if the wave is the last one, if not, we increment and then spawn new enemies
	if (_CurrentWave < _NumberOfWaves[_CurrentZone] - 1)
	{
		_CurrentWave++;
		SpawnEnemies(4, 6);
		return;
	}

	//now that we have gone through all the waves, we'll destroy the _ZoneDivider if it's not a nullptr and we'll set the wave to zero and increment the zone, spawning new enemies
	if(_ZoneDivider)
		_ZoneDivider->Destroy();

	_CurrentWave = 0;
	_CurrentZone++;

	SpawnEnemies(3, 5);
}

void ALevelRandomizer::SpawnEnemies(int minimumQuantity, int maxQuantity)
{
	_EnemyList.Empty();

	int randomNumber = FMath::RandRange(minimumQuantity, maxQuantity);

	for (size_t i{ 0 }; i < randomNumber; ++i)
	{
		_EnemyList.Add(GetWorld()->SpawnActor(_BaseEnemyClass));

		FVector randomLocation = FVector(_ZonesEpicenters[_CurrentZone].X + FMath::RandRange(-1500, 1500), _ZonesEpicenters[_CurrentZone].Y + FMath::RandRange(-1500, 1500), _ZonesEpicenters[_CurrentZone].Z);
		
		Cast<AYokaiShokanEnemy>(_EnemyList[i])->SetLevelRandomizer(this);
		
		_EnemyList[i]->SetActorLocation(randomLocation);

		UE_LOG(LogTemp, Warning, TEXT("Enemy Added"));
	}
}
