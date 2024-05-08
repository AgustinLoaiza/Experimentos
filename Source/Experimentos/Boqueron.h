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
	FString Surtidor;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Motor;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Municion;  
	UPROPERTY(VisibleAnywhere, Category = "Boqueron") 
	FString CentroMedico; 
	UPROPERTY(VisibleAnywhere, Category = "Boqueron") 
	FString ComponenteChino;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron") 
	FString Armeria; 
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Disparador;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString Escudo;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	FString MuroEspinas;

	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AArmeria* newArmeria;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class ACentroMedico* newCentroMedico;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AComponenteChino* newComponenteChino;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AMotor* newMotor;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AMunicion* newMunicion;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AGasolinera* newGasolinera;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class ADisparador* newDisparador;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AEscudo* newEscudo;
	UPROPERTY(VisibleAnywhere, Category = "Boqueron")
	class AMuroEspinas* newMuroEspinas;


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

	void SetMesh(UStaticMeshComponent* _MeshBoqueron) override;
	void SetSurtidor(FString _Surtidor) override;
	void SetMotor(FString _Motor) override;
	void SetMunicion(FString _Municion) override;
	void SetCentroMedico(FString _CentroMedico) override;
	void SetComponenteChino(FString _ComponenteChino) override;
	void SetArmeria(FString _Armeria) override;  
	void SetFuncionEspecial(FString _Disparador);
	void SetEscudo(FString _Escudo);
	void SetMuroEspinas(FString _MuroEspinas);
	void BuildMotor();
	void BuildMunicion();
	void BuildCentroMedico();
	void BuildComponenteChino();
	void BuildArmeria();
	void BuildGasolinera();
	void BuildFuncionEspecial();
	void BuildEscudo();
	void BuildMuroEspinas();

	void Caracteristicas(); 


	
};
