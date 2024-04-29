// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obrero.h"
#include "Mecanico.generated.h"

UCLASS()
class EXPERIMENTOS_API AMecanico : public AActor, public IObrero 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMecanico();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BuildBoqueron(FVector UbicacionBoqueron) override;
	virtual void BuildMotor() override;
	virtual void BuildMesh() override;
	class UStaticMesh* Motor = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	virtual void BuildGasolinera() override;
	virtual class ABoqueron* GetBoqueron() override;
	ABoqueron* Boqueron;

};
