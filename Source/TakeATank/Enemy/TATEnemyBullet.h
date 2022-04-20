// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TATEnemyBullet.generated.h"

class USphereComponent;

UCLASS()
class TAKEATANK_API ATATEnemyBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATATEnemyBullet();

	UPROPERTY(EditAnywhere)
	USphereComponent* Collision;

	FVector BallVelocity;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
