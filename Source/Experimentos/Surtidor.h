// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obrero.h"
#include "Surtidor.generated.h"

UCLASS()
class EXPERIMENTOS_API ASurtidor : public AActor, public IObrero
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASurtidor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BuildBoqueron(FVector UbicacionBoqueron) override;
	virtual void BuildMotor() override;
	virtual void BuildMesh() override;
	class UStaticMesh* Gasolinera= LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	virtual void BuildGasolinera() override;
	virtual class ABoqueron* GetBoqueron() override;
	ABoqueron* Boqueron;
};
