// Fill out your copyright notice in the Description page of Project Settings.


#include "YokaiShokanGameInstance.h"

void UYokaiShokanGameInstance::Init()
{
	Super::Init();

	_IsFirstTimeInHub = true;
}

bool UYokaiShokanGameInstance::GetIfIsFirstTimeInHub()
{
	return _IsFirstTimeInHub;
}

void UYokaiShokanGameInstance::NoLongerFirstTimeInHub()
{
	_IsFirstTimeInHub = false;
}
