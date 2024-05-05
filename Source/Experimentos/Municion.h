// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TimerManager.h"
#include "Municion.generated.h"

/**
 * 
 */
UCLASS()
class EXPERIMENTOS_API AMunicion : public AStaticMeshActor
{
	GENERATED_BODY()

public:

	UStaticMeshComponent* MeshMunicion;
	AMunicion();

	virtual void AgarrarMunicion();
	virtual void SoltarMunicion(FTransform TargetLocation);
};
