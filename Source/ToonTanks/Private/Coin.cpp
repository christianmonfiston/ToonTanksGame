// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Particles/ParticleSystem.h"

#include "Sound/SoundBase.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"
#include "Coin.h"

// Sets default values
ACoin::ACoin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BOX COMPONENT")); 
	RootComponent = BoxComponent; 

	CoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component")); 

	CoinMesh->SetupAttachment(BoxComponent); 

	FVector BoxSize = FVector(60.f, 60.f, 60.f); 
	BoxComponent->SetBoxExtent(BoxSize); 



}

// Called when the game starts or when spawned
void ACoin::BeginPlay()
{
	Super::BeginPlay();


	
}

// Called every frame
void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void ACoin::DebugMessage() {

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald, TEXT("Coin class is working")); 
	}
}

