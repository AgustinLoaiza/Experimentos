// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanosDeAsedio.h"
#include "Boqueron.generated.h"

UCLASS()
class EXPERIMENTOS_API ABoqueron : public AActor, public IPlanosDeAsedio
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoqueron();

private:
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString PowerUp;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Disparador;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Escudo;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString MuroEspinas;

	/*UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	AArmeria* Armeria;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	ACentroMedico* CentroMedico;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	AComponenteChino* ComponenteChino;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	AMotor* Motor;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	AMunicion* Municion;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	AGasolinera* Gasolinera; 
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	ADisparador* Disparador;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	AEscudo* Escudo;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	AMuroEspinas* MuroEspinas;*/


public:
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	UStaticMeshComponent* MeshBoqueron;

	FVector UbicacionBoqueron;

	float TiempoTranscurrido = 0.0f;

	float contador1= 0.0f;
	float contador2= 0.0f;
	float contador3= 0.0f;

	//Generacion de murallas
	float espacios = 100.0f;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetMesh(UStaticMeshComponent* _MeshBoqueron);
	void SetPowerUp(FString _PowerUp);
	void SetFuncionEspecial(FString _Disparador);
	void SetEscudo(FString _Escudo);
	void SetMuroEspinas(FString _MuroEspinas);
	void BuildPowerUp();
	void BuildFuncionEspecial();
	void BuildEscudo();
	void BuildMuroEspinas();

	/*void SetMesh(UStaticMeshComponent* _MeshBoqueron);
	void SetPowerUp(AGasolinera* _Gasolinera);
	void SetFuncionEspecial(ADisparador* _Disparador);
	void SetEscudo(AEscudo* _Escudo);
	void SetMuroEspinas(AMuroEspinas* _MuroEspinas);
	void BuildPowerUp();
	void BuildFuncionEspecial();
	void BuildEscudo();
	void BuildMuroEspinas();*/

	void Caracteristicas();

};
