// Fill out your copyright notice in the Description page of Project Settings.


#include "TakeATankCamera.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TakeATank\Tractor\TakeATankTractor.h"

// Sets default values
ATakeATankCamera::ATakeATankCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));

	SpringArm->SetupAttachment(Root);
	Camera->SetupAttachment(SpringArm);

}

// Called when the game starts or when spawned
void ATakeATankCamera::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* Controller = GetWorld()->GetFirstPlayerController();
	Controller->SetViewTarget(this);
}

// Called every frame
void ATakeATankCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (FollowActor == nullptr)
	{
		FollowActor = UGameplayStatics::GetActorOfClass(GetWorld(), ATakeATankTractor::StaticClass());
		//return;
	}

	FVector Loc = GetActorLocation();
	Loc = FMath::Lerp(Loc, FollowActor->GetActorLocation(), FollowSpeed * DeltaTime);

	SetActorLocation(Loc);
}

