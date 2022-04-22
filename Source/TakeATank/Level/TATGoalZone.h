// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TATGoalZone.generated.h"

class UBoxComponent;
class USceneComponent;
class ATakeATankEnemyTank;

UCLASS()
class TAKEATANK_API ATATGoalZone : public AActor
{
	GENERATED_BODY()

public:	
	ATATGoalZone();

	UPROPERTY(EditAnywhere)
	UBoxComponent* GoalZone;

	UPROPERTY(EditAnywhere)
	FName TankTag;

	UPROPERTY(EditAnywhere)
	TArray<FTransform> TankPositions;

	UPROPERTY(EditAnywhere)
	int MaxNumberOfTanks;

	UPROPERTY(VisibleAnywhere)
	int NumberOfTanks;

	UPROPERTY(EditDefaultsOnly, Category = "Prop")
	TSubclassOf<AActor> TankProp;

	UPROPERTY(EditAnywhere)
	bool bTankInserted;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void AddTankToZone(int number);
		
};
