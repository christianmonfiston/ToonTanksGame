// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Projectile.h"
#include "GameFramework/SpringArmComponent.h"
#include "Tower.h"


ATower::ATower() {

	PrimaryActorTick.bCanEverTick = true; 

	MainComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Root Capsule"));
	RootComponent = MainComponent;

	MainCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Main Capsule"));
	MainCapsule->SetupAttachment(MainComponent);

	SecondaryCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Secondary Capsule"));
	SecondaryCapsule->SetupAttachment(MainCapsule);


	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn"));
	ProjectileSpawnPoint->SetupAttachment(TankMesh);



	TankMesh = CreateDefaultSubobject<UStaticMeshComponent>("TANK MESH");
	TankMesh->SetupAttachment(SecondaryCapsule);

	TankPrimaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Seconday Mesh"));
	TankPrimaryMesh->SetupAttachment(SecondaryCapsule);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider")); 

	BoxCollider->SetupAttachment(MainCapsule); 

	FVector Extent = FVector(100.f, 100.f, 100.f);
	BoxCollider->SetBoxExtent(Extent); 

	
}

void ATower::BeginPlay() {
	Super::BeginPlay(); 

	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ATower::OnBoxBeginOverlap); 

	FVector Location = GetActorLocation();
	FVector Extent = FVector(100.f, 100.f, 100.f); 

	DrawDebugBox(GetWorld(), Location, Extent, FColor::Green, true); 
	
	
}

void ATower::Tick(float DeltaTime) {

	Super::Tick(DeltaTime); 

	//DebugMessage(); 
}


void ATower::DebugMessage() {

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald, TEXT("TOWER CLASS IS WORKING")); 
	}
}


void ATower::Fire() {

	
	FVector Location = ProjectileSpawnPoint->GetComponentLocation();
	FRotator Rotation = ProjectileSpawnPoint->GetComponentRotation(); 


	GetWorld()->SpawnActor<AProjectile>(ProjectileClass, Location, Rotation); 
}



void ATower::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {

	Fire();


	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Orange, TEXT("Tower is overlapping with Tank"));
	}

}