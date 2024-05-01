// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TimerManager.h"
#include "CentroMedico.generated.h"

/**
 * 
 */
UCLASS()
class EXPERIMENTOS_API ACentroMedico : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	UStaticMeshComponent* MeshCentroMedico;
	ACentroMedico();

	virtual void AgarrarCentroMedico();
	virtual void SoltarCentroMedico(FTransform TargetLocation);
	//virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	float Velocidad;
	UPROPERTY()
	float TiempoTranscurrido;
	UPROPERTY()
	bool Verificar = 0;
	
};
