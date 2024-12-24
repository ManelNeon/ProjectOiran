// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsGameInstanceSubsystem.h"

void USettingsGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Settings Manager Initialized"));

	_MasterVolume = 1;

	_MusicVolume = 1;

	_SFXVolume = 1;

	_DialogueVolume = 1;

	_EnviromentVolume = 1;

	_UIVolume = 1;
}

void USettingsGameInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Settings Manager DeInitialized"));
}

float USettingsGameInstanceSubsystem::GetMasterVolume()
{
	return _MasterVolume;
}

float USettingsGameInstanceSubsystem::GetMusicVolume()
{
	return _MusicVolume;
}

float USettingsGameInstanceSubsystem::GetSFXVolume()
{
	return _SFXVolume;
}

float USettingsGameInstanceSubsystem::GetDialogueVolume()
{
	return _DialogueVolume;
}

float USettingsGameInstanceSubsystem::GetEnviromentVolume()
{
	return _EnviromentVolume;
}

float USettingsGameInstanceSubsystem::GetUIVolume()
{
	return _UIVolume;
}

void USettingsGameInstanceSubsystem::SetMasterVolume(float value)
{
	_MasterVolume = value;
}

void USettingsGameInstanceSubsystem::SetMusicVolume(float value)
{
	_MusicVolume = value;
}

void USettingsGameInstanceSubsystem::SetSFXVolume(float value)
{
	_SFXVolume = value;
}

void USettingsGameInstanceSubsystem::SetDialogueVolume(float value)
{
	_DialogueVolume = value;
}

void USettingsGameInstanceSubsystem::SetEnviromentVolume(float value)
{
	_EnviromentVolume = value;
}

void USettingsGameInstanceSubsystem::SetUIVolume(float value)
{
	_UIVolume = value;
}

