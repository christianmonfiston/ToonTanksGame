// Fill out your copyright notice in the Description page of Project Settings.
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "BasePawn.h"
#include "Components/PrimitiveComponent.h"
#include "Components/InputComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "HealthComponent.h"
#include "Projectile.h"
#include "DrawDebugHelpers.h"
#include "Tank.h"


ATank::ATank() {
	PrimaryActorTick.bCanEverTick = true;


	MainComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Root Capsule"));
	RootComponent = MainComponent;

	MainCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Main Capsule")); 
	MainCapsule->SetupAttachment(MainComponent);

	SecondaryCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Secondary Capsule"));
	SecondaryCapsule->SetupAttachment(MainCapsule);


	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn")); 
	ProjectileSpawnPoint->SetupAttachment(MainCapsule); 


	
	TankMesh = CreateDefaultSubobject<UStaticMeshComponent>("TANK MESH"); 
	TankMesh->SetupAttachment(SecondaryCapsule); 

	TankPrimaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Seconday Mesh")); 
	TankPrimaryMesh->SetupAttachment(SecondaryCapsule); 


	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	BoxComp->SetupAttachment(RootComponent);

	


	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &ATank::OnComponentBeginOverlap); 


	


}

void ATank::BeginPlay() {
	Super::BeginPlay(); 

	//TankLocation = GetActorLocation(); 

	ActorLocation = GetActorLocation();
	float Radius = 300.0f;

	//DrawDebugSphere(GetWorld(), ActorLocation, Radius, 45.0f, FColor::Green, true, 1.f);
	//Fire(); 

}

void ATank::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	ActorLocation = GetActorLocation();
	float Radius = 300.0f;

	 UGameplayStatics::GetWorldDeltaSeconds(this);


	 VisualizeActor = GetActorLocation(); 

	 ProjectileTesting->Testing();



}

void ATank::Debug() {
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("CHILD CLASS IS WORKING"));
	}
}

void ATank::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) {

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ATank::MoveForward); 
	PlayerInputComponent->BindAxis("Turn", this, &ATank::RotateTurret); 
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ATank::Fire);

	   
}

void ATank::MoveForward(float Value) {


	float Speed = 1000.f;

	FVector DeltaLocation = FVector::ZeroVector;

	float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this); 

	DeltaLocation.X = Value * Speed * DeltaTime;

	AddActorLocalOffset(DeltaLocation, true);

}

void ATank::RotateTurret(float Value) {
	
	TankTurnRate = 200.f;

	FRotator DeltaRotation = FRotator::ZeroRotator; 
	float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);

	DeltaRotation.Yaw = Value * TankTurnRate * DeltaTime;

	AddActorLocalRotation(DeltaRotation, true); 
	
}

void ATank::DisplayDeltaSeconds() {
	float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);
	if (GEngine) {
		
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("DELTATIME IS EQUAL: "), 15.f));
	}

}




void ATank::Fire() {

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("LEFT MOUSE CLICK FIRING")); 
	}

	DrawLine(); 

	FVector Location = ProjectileSpawnPoint->GetComponentLocation();
	FRotator Rotation = ProjectileSpawnPoint->GetComponentRotation();

	
	UGameplayStatics::PlaySoundAtLocation(this, ProjectileSound, Location); 


	GetWorld()->SpawnActor<AProjectile>(ProjectileClass, Location, Rotation);

	UGameplayStatics::SpawnEmitterAtLocation(this, ProjectileTrail, Location);
	
}

void ATank::DrawLine() {

	Start = GetActorLocation();

	FVector ForwardVector = GetActorForwardVector();
	End = Start + (ForwardVector * 1000.f);


	DrawDebugLine(GetWorld(), Start, End, FColor::Yellow, true);

	if (&ATank::DrawLine) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 12.f, FColor::Magenta, TEXT("Debug Line is happening"));
		}
	}



}

void ATank::ActorDrawLine() {
	Start = GetActorLocation();

	FVector ForwardVector = GetActorForwardVector();
	End = Start + (ForwardVector * 1000.f);

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, true);
	ProjectileTesting->Testing(); 

	
	
}


void ATank::ActorSpawn() {



	FVector Location = ProjectileSpawnPoint->GetComponentLocation(); 
	FRotator Rotation = ProjectileSpawnPoint->GetComponentRotation(); 



	GetWorld()->SpawnActor<AProjectile>(ProjectileClass, Location, Rotation);

}



void ATank::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Collision is Working"));
	}
}


