// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TakeATankTractor.generated.h"

class UBoxComponent;
//class UTankDriverComponent;
class USpringArmComponent;
class ATakeATankCamera;
//class UPowerUp;

UCLASS()
class TAKEATANK_API ATakeATankTractor : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATakeATankTractor();

	void HandleAccInput(float Value);
	void HandleTurnInput(float Value);

	void PitchCamera(float Value);
	void YawCamera(float Value);

	/*void EquipPowerup(UPowerUp* NewPowerUp);
	bool HasEquippedPowerup() { return PowerUp != nullptr; }*/

	UPROPERTY(VisibleAnywhere)
	FVector2D CameraInput;

	UPROPERTY(EditAnywhere)
	ATakeATankCamera* Cam;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollision;

	//UPROPERTY(VisibleAnywhere)
	//	UTankDriverComponent* MoveComp;

	////UPROPERTY(EditAnywhere)
	////TSubclassOf<UPowerUp> PowerUpClass;

	//UPROPERTY()
	//	UPowerUp* PowerUp;

	//bool bPowerActivated = false;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void HandleActivatePowerUp();
};
