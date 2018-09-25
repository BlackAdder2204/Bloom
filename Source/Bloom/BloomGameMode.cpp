// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BloomGameMode.h"
#include "BloomHUD.h"
#include "BloomCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABloomGameMode::ABloomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABloomHUD::StaticClass();
}
