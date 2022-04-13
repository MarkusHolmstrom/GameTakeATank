// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TractorComponent.generated.h"

class ATakeATankCamera;
class USpringArmComponent;

UCLASS( ClassGroup=(Tractor), meta=(BlueprintSpawnableComponent) )
class TAKEATANK_API UTractorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTractorComponent();


	UPROPERTY(VisibleAnywhere)
	FVector2D CameraInput;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;


	//UPROPERTY(EditAnywhere)
	//ATakeATankCamera* Camera;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
