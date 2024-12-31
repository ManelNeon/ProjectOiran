// Fill out your copyright notice in the Description page of Project Settings.


#include "TutorialGameMode.h"

void ATutorialGameMode::BeginPlay()
{
	Super::BeginPlay();

	_IsFirstEnemy = false;

	_IsFirstDash = true;
}

bool ATutorialGameMode::GetIsFirstEnemy()
{
	return _IsFirstEnemy;
}

void ATutorialGameMode::TrueifyIsFirstEnemy()
{
	_IsFirstEnemy = true;
}

bool ATutorialGameMode::GetIsFirstDash()
{
	return _IsFirstDash;
}

void ATutorialGameMode::SetIsFirstDash(bool state)
{
	_IsFirstDash = state;
}