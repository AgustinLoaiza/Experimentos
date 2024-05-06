// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obrero.h"
#include "Ingeniero.generated.h"

UCLASS()
class EXPERIMENTOS_API AIngeniero : public AActor, public IObrero
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIngeniero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion) override;
	virtual void BuildMesh() override;
	virtual void BuildPowerUps() override;
	virtual void FuncionEspecial() override;
	virtual void BuildEscudo() override;
	class UStaticMesh* CentroMedico = LoadObject<UStaticMesh>(nullptr, TEXT("StaticMesh'/Game/Mallas/0f1a3d0cc128_Fortaleza_militar__.0f1a3d0cc128_Fortaleza_militar__'"));
	virtual class ABoqueron* GetBoqueron() override;
	ABoqueron* Boqueron;
};
