// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TimerManager.h"
#include "Gasolinera.generated.h"

/**
 * 
 */
UCLASS()
class EXPERIMENTOS_API AGasolinera : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	UStaticMeshComponent* MeshGasolinera;
	AGasolinera();

	virtual void RecogerGasolinera();
	virtual void SoltarGasolinera(FTransform TargetLocation);
	//virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	float Velocidad;
	UPROPERTY()
	float TiempoTranscurrido;
	UPROPERTY()
	bool Verificar = 0;
};
