// Fill out your copyright notice in the Description page of Project Settings.


#include "LoreItem.h"

// Sets default values
ALoreItem::ALoreItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALoreItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALoreItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

