// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Disparador.generated.h"

UCLASS()
class EXPERIMENTOS_API ADisparador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADisparador();

	UStaticMeshComponent* MeshDisparador;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Disparar(FVector FireDirection);

	uint32 bCanFire : 1;

	FVector GunOffset;

	float FireRate;

	int vida = 150;

	FTimerHandle TimerHandle_ShotTimerExpired;

	void ShotTimerExpired();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Dureza(); 
};
