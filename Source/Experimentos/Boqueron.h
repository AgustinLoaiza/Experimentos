// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanosDeAsedio.h"
#include "Boqueron.generated.h"

UCLASS()
class EXPERIMENTOS_API ABoqueron : public AActor, public IPlanosDeAsedio
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoqueron();

private:
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Gasolinera;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Motor;

public:
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	UStaticMeshComponent* MeshBoqueron;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetGasolinera(FString _Gasolinera);
	void SetMesh(UStaticMeshComponent* _MeshBoqueron);
	void SetMotor(FString _Motor);

	void Caracteristicas();

};
