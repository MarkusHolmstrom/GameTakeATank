// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Public/EngineGlobals.h"
#include "GameFramework/Actor.h"
#include "TakeATankEnemyTank.generated.h"

class UBoxComponent;
class USphereComponent;
class UCapsuleComponent;
class ATATEnemyBullet;

UCLASS()
class TAKEATANK_API ATakeATankEnemyTank : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATakeATankEnemyTank();

	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxCollision;
	// Collision to detect when player is close enough
	UPROPERTY(EditAnywhere)
	USphereComponent* SphereCollision;

	UPROPERTY(EditAnywhere)
	FString SphereCollisionName;

	// Detect if tratcor is behind tank and this tank can be towed
	UPROPERTY(EditAnywhere)
	UCapsuleComponent* TowingCollision;

	UPROPERTY(EditAnywhere)
	FString TowingCollisionName;

	UPROPERTY(EditDefaultsOnly, Category = "Enemy")
	TSubclassOf<ATATEnemyBullet> EnemyBulletClass;

	UPROPERTY(EditAnywhere)
	FName TractorName;
	UPROPERTY(EditAnywhere)
	bool bChasing = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void SpawnBullet();
};
