// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
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

	

	
}

void ATower::BeginPlay() {
	Super::BeginPlay(); 

	BoxCollider->OnComponentHit.AddDynamic(this, &ATower::OnHit); 
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

void ATower::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, TEXT("Tower is Overlapping with Tank")); 
	}

	Fire(); 
}