// Fill out your copyright notice in the Description page of Project Settings.


#include "TakeATankTractor.h"

#include "Components/BoxComponent.h"
//#include "TankDriverComponent.h" // Needed for MoveComp
//#include "..\..\Source\Tanks\PowerUp.h"
//#include "Kismet/GameplayStatics.h"

// Sets default values
ATakeATankTractor::ATakeATankTractor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("SphereCollision"));
	//RootComponent = BoxCollision;

	//MoveComp = CreateDefaultSubobject<UTankDriverComponent>(TEXT("DriveComponent"));

	CameraInput = FVector2D(0, 0);
	//if (Cam != nullptr)
	//{
	//	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.0f, FColor::Cyan, FString::Printf(TEXT("Error: no camera found!!")));
	//}
}

// Called when the game starts or when spawned
void ATakeATankTractor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATakeATankTractor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Camera things:
	//if (Cam != nullptr)
	//{
	//	//Rotation:
	//	FRotator NewRot = Cam->GetActorRotation();
	//	NewRot.Yaw += CameraInput.X;
	//	NewRot.Pitch = FMath::Clamp(NewRot.Pitch += CameraInput.Y, -25.0f, 15.0f);
	//	//NewRot.Pitch += CameraInput.Y;
	//	Cam->SetActorRotation(NewRot);
	//	Turret->SetRotation(NewRot);
	//	/*FRotator SpringArmRot = Cam->SpringArm->GetComponentRotation();
	//	SpringArmRot.Pitch += CameraInput.Y;*/
	//	//Cam->SpringArm->SetWorldRotation(SpringArmRot);
	//}
	//else
	//{
	//	//Cam = UGameplayStatics::GetActorOfClass(GetWorld(), ATankCamera::StaticClass());
	//	// APlayerCameraManager* PlayerCamera = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	//	//Cam = PlayerCamera->getcamera
	//}

}

void ATakeATankTractor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void ATakeATankTractor::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}


void ATakeATankTractor::PitchCamera(float Value)
{
	//CameraInput.Y = Value;
}

void ATakeATankTractor::YawCamera(float Value)
{
	/*CameraInput.X = Value;*/

}

