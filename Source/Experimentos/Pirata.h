// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obrero.h"
#include "Pirata.generated.h"

UCLASS()
class EXPERIMENTOS_API APirata : public AActor, public IObrero
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APirata();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion) override;
	virtual void BuildMesh() override;
	virtual void BuildPowerUps() override;
	class UStaticMesh* ComponenteChino = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	virtual class ABoqueron* GetBoqueron() override;
	ABoqueron* Boqueron;

};
