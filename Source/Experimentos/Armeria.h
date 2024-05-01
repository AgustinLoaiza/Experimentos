// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TimerManager.h"
#include "Armeria.generated.h"

/**
 * 
 */
UCLASS()
class EXPERIMENTOS_API AArmeria : public AStaticMeshActor
{
	GENERATED_BODY()

public:

	UStaticMeshComponent* MeshMotor;
	AArmeria();

	virtual void AgregarArmeria();
	virtual void SoltarArmeria(FTransform TargetLocation);
	//virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	float Velocidad;
	UPROPERTY()
	float TiempoTranscurrido;
	UPROPERTY()
	bool Verificar = 0;
	
};
