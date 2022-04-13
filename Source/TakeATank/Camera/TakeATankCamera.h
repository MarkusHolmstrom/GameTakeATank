// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
//#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "TakeATankCamera.generated.h"

class UCameraComponent;


UCLASS()
class TAKEATANK_API ATakeATankCamera : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATakeATankCamera();

	UPROPERTY(VisibleAnywhere)
	FVector2D CameraInput;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
	float FollowSpeed = 5.0f;

	UPROPERTY(EditInstanceOnly)
	AActor* FollowActor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void PitchCamera(float Value);
	void YawCamera(float Value);
};
