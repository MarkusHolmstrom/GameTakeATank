// Fill out your copyright notice in the Description page of Project Settings.


#include "TakeATankEnemyTank.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "TakeATank/Enemy/TATEnemyBullet.h"
#include "TakeATank/Tractor/TakeATankTractor.h"

// Sets default values
ATakeATankEnemyTank::ATakeATankEnemyTank()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	BoxCollision->SetCollisionResponseToAllChannels(ECR_Block);
	RootComponent = BoxCollision;
	

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SphereCollision->SetupAttachment(BoxCollision);
	SphereCollisionName = "SphereCollision";

	TowingCollisionName = "CapTowingCollision";
	TowingCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapTowingCollision"));
	TowingCollision->SetupAttachment(BoxCollision);
	TractorName = "Tractor";

}

// Called when the game starts or when spawned
void ATakeATankEnemyTank::BeginPlay()
{
	Super::BeginPlay();
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ATakeATankEnemyTank::OnOverlapBegin);
	SphereCollision->OnComponentEndOverlap.AddDynamic(this, &ATakeATankEnemyTank::OnOverlapEnd);
	TowingCollision->OnComponentBeginOverlap.AddDynamic(this, &ATakeATankEnemyTank::OnOverlapBegin);
	TowingCollision->OnComponentEndOverlap.AddDynamic(this, &ATakeATankEnemyTank::OnOverlapEnd);
}

// Called every frame
void ATakeATankEnemyTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bChasing)
	{
		SpawnBullet();
		//GEngine->AddOnScreenDebugMessage(0, 1.f, FColor::White, TEXT("shooting..."));
	}


	
}


void ATakeATankEnemyTank::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Is the tractor close enough behind this tank?
	if (OtherActor->ActorHasTag(TractorName) && OverlappedComp->GetFName().ToString() == TowingCollisionName)
	{
		bChasing = false;
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.f, FColor::White, TEXT("behind you!..."));
		
	}
	// Is tractor within range
	else if (OtherActor->ActorHasTag(TractorName) && OverlappedComp->GetFName().ToString() == TowingCollisionName)
	{
		bChasing = true;
		
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 1.f, FColor::Red, FString::Printf(TEXT("My Name: %s"), *OverlappedComp->GetFName().ToString()));
		
	}
	
}

void ATakeATankEnemyTank::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Is tractor out of range
	if (OtherActor->ActorHasTag(TractorName))
	{
		bChasing = false;
	}
}


void ATakeATankEnemyTank::SpawnBullet()
{
	FTransform SpawnTrans = GetActorTransform();
	//SpawnTrans.AddToTranslation(GetActorForwardVector() + 100.0f);
	GetWorld()->SpawnActor(EnemyBulletClass, &SpawnTrans);
}

