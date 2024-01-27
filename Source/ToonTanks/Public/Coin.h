// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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



#include "Coin.generated.h"

UCLASS()
class TOONTANKS_API ACoin : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* CoinMesh; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBoxComponent* BoxComponent; 

	UFUNCTION()
		void DebugMessage(); 

public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator CoinRotation;

public: 

	UFUNCTION()
		void RotateCoin(); 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RotationRate = 10.f; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator NewRotation; 

	UPROPERTY(EditANywhere, BlueprintReadWrite)
		float TimeDelta = UGameplayStatics::GetWorldDeltaSeconds(this); 
	
};
