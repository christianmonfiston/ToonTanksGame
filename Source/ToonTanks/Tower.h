// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Tank.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundBase.h"
#include "Components/InputComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Projectile.h"
#include "GameFramework/SpringArmComponent.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()

protected: 
	virtual void BeginPlay() override; 

public: 

	virtual void Tick(float DelTaTime) override; 

public: 

	ATower(); 

public: 

	void DebugMessage(); 

public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UCapsuleComponent* MainComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UCapsuleComponent* MainCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UCapsuleComponent* SecondaryCapsule;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class USceneComponent* ProjectileSpawnPoint;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* TankMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* TankPrimaryMesh;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		ATank* Tank; 


public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AProjectile> ProjectileClass; 

	UFUNCTION()
		void Fire();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USphereComponent* SphereCollider; 

	UFUNCTION()
		void ProcedesToLineTrace(); 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FireRange = 300.f; 

	UFUNCTION()
		void RotateTurret();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundBase* ProjectileSound; 
};
