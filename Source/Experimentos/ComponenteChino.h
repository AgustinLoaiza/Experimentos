// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TimerManager.h"
#include "FuncionChina.h"
#include "ComponenteChino.generated.h"

/**
 * 
 */
UCLASS()
class EXPERIMENTOS_API AComponenteChino : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:

	UStaticMeshComponent* MeshChino;
	AComponenteChino();

	virtual void ComprarComponente();
	virtual void UtilizarComponente(FTransform TargetLocation);

	UFuncionChina* FuncionChina;
};
