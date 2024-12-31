// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioManagerInstanceSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

//Subsystem Specific Functions
void UAudioManagerInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Audio Manager Initialized"));

	//Audio Manager  Variables

	_CurrentMusic = nullptr;

	//Audio Settings Variables
	_MasterVolume = 1;

	_MusicVolume = 1;

	_SFXVolume = 1;

	_DialogueVolume = 1;

	_EnviromentVolume = 1;

	_UIVolume = 1;
}

void UAudioManagerInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Audio Manager DeInitialized"));
}

bool UAudioManagerInstanceSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (this->IsInBlueprint() && Super::ShouldCreateSubsystem(Outer)) return true;

	return false;
}

//Audio Manager Functions
void UAudioManagerInstanceSubsystem::PlaySound(USoundWave* sound)
{
	float randomPitch = FMath::FRandRange(0.9, 1.1);

	UGameplayStatics::SpawnSound2D(GetWorld(), sound, 1, randomPitch, 0, nullptr, true, true);
}

void UAudioManagerInstanceSubsystem::PlayMusic(USoundWave* music)
{
	return;

	/*if (_CurrentMusic != nullptr)
	{
		return;
	}

	_CurrentMusic = UGameplayStatics::SpawnSound2D(GetWorld(), music, 1, 1, 0, nullptr, true, false);*/
}

//Audio Settings Functions
float UAudioManagerInstanceSubsystem::GetMasterVolume()
{
	return _MasterVolume;
}

float UAudioManagerInstanceSubsystem::GetMusicVolume()
{
	return _MusicVolume;
}

float UAudioManagerInstanceSubsystem::GetSFXVolume()
{
	return _SFXVolume;
}

float UAudioManagerInstanceSubsystem::GetDialogueVolume()
{
	return _DialogueVolume;
}

float UAudioManagerInstanceSubsystem::GetEnviromentVolume()
{
	return _EnviromentVolume;
}

float UAudioManagerInstanceSubsystem::GetUIVolume()
{
	return _UIVolume;
}

void UAudioManagerInstanceSubsystem::SetMasterVolume(float value)
{
	_MasterVolume = value;
}

void UAudioManagerInstanceSubsystem::SetMusicVolume(float value)
{
	_MusicVolume = value;
}

void UAudioManagerInstanceSubsystem::SetSFXVolume(float value)
{
	_SFXVolume = value;
}

void UAudioManagerInstanceSubsystem::SetDialogueVolume(float value)
{
	_DialogueVolume = value;
}

void UAudioManagerInstanceSubsystem::SetEnviromentVolume(float value)
{
	_EnviromentVolume = value;
}

void UAudioManagerInstanceSubsystem::SetUIVolume(float value)
{
	_UIVolume = value;
}


