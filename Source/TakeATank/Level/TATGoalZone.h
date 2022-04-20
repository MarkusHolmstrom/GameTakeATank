// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TATGoalZone.generated.h"

class UBoxComponent;

UCLASS()
class TAKEATANK_API ATATGoalZone : public AActor
{
	GENERATED_BODY()

public:	
	ATATGoalZone();

	UPROPERTY(EditAnywhere)
	UBoxComponent* GoalZone;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

		
};
