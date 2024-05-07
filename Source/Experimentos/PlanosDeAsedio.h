// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlanosDeAsedio.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlanosDeAsedio : public UInterface
{
	GENERATED_BODY() 
};

/**
 * 
 */
class EXPERIMENTOS_API IPlanosDeAsedio
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetPowerUp(FString PowerUp) = 0;
	virtual void SetMesh(UStaticMeshComponent* MeshBoqueron) = 0;
	virtual void SetFuncionEspecial(FString Disparador) = 0;
	virtual void SetEscudo(FString Escudo) = 0;
	virtual void SetMuroEspinas(FString MuroEspinas) = 0;

	/*virtual void SetPowerUp(ASurtidor* Surtidor) = 0;
	virtual void SetMesh(UStaticMeshComponent* MeshBoqueron) = 0;
	virtual void SetFuncionEspecial(ADisparador* Disparador) = 0;
	virtual void SetEscudo(AEscudo* Escudo) = 0;
	virtual void SetMuroEspinas(AMuroEspinas* MuroEspinas) = 0;*/
};
