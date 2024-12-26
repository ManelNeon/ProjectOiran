// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsGameInstanceSubsystem.h"

void USettingsGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Settings Manager Initialized"));
}

void USettingsGameInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Settings Manager DeInitialized"));
}