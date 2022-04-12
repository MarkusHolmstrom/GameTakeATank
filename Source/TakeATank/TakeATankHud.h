// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TakeATankHud.generated.h"

UCLASS(config = Game)
class ATakeATankHud : public AHUD
{
	GENERATED_BODY()

public:
	ATakeATankHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
