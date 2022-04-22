// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TractorComponent.generated.h"

class ATakeATankCamera;
class USpringArmComponent;
class ATakeATankEnemyTank;

UCLASS( ClassGroup=(Tractor), meta=(BlueprintSpawnableComponent) )
class TAKEATANK_API UTractorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTractorComponent();

	UPROPERTY(EditAnywhere)
	AActor* Tractor;

	UPROPERTY(EditAnywhere)
	float MinZPosition;

	UPROPERTY(EditAnywhere)
	float MaxXAngle;
	// Needed to check the tractors angles not every frame
	UPROPERTY(EditAnywhere)
	float CheckTimer;
	UPROPERTY(EditAnywhere)
	float Timer;

	UFUNCTION()
	bool CheckIfTractorTipped(float DeltaTime);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
