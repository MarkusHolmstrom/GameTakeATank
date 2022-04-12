// Copyright Epic Games, Inc. All Rights Reserved.

#include "TakeATankGameMode.h"
#include "TakeATankPawn.h"
#include "TakeATankHud.h"

ATakeATankGameMode::ATakeATankGameMode()
{
	DefaultPawnClass = ATakeATankPawn::StaticClass();
	HUDClass = ATakeATankHud::StaticClass();
}
