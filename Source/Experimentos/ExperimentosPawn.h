// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//Incluimos todo relacionado a Gasolinera
#include "ComponenteGasolinera.h"
#include "Gasolinera.h"
//Incluimos todo relacionado a CentroMedico
#include "ComponenteMedico.h"
#include "CentroMedico.h"
//Incluimos todo relacionado a Motor
#include "ComponenteMotor.h"
#include "Motor.h"
//Incluimos todo relacionado a Municion
#include "ComponenteMunicion.h"
#include "Municion.h"
//Incluimos todo relacionado a Armeria
#include "ComponenteArmeria.h"
#include "Armeria.h"
//Incluimos todo relacionado al ComponenteChino
#include "MagiaChina.h"
#include "ComponenteChino.h"
//Incluimos el objeto
#include "ObjetoPrueba.h"

#include "ExperimentosPawn.generated.h"


UCLASS(Blueprintable)
class AExperimentosPawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	AExperimentosPawn();

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

	//Le damos un cargador a nuestra Nave
	int32 cargador = 50;

	//Le damos una vida a nuestra Nave
	int32 vida = 3;

	//Le damos Combustible a la nave
	int32 energia = 100;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

public:
	//Interaccion de Pawn con la Gasolinera
	UPROPERTY()
	UComponenteGasolinera* Gasolinera;
	UFUNCTION()
	void DropItemGasolinera();
	UFUNCTION()
	void TakeItemGasolinera(AGasolinera* InventoryItem);

	//Interaccion de Pawn con el CentroMedico
	UPROPERTY()
	UComponenteMedico* CentroMedico;
	UFUNCTION()
	void DropItemCentroMedico();
	UFUNCTION()
	void TakeItemCentroMedico(ACentroMedico* InventoryItem);

	//Interaccion de Pawn con el Motor
	UPROPERTY()
	UComponenteMotor* Motor;
	UFUNCTION()
	void DropItem();
	UFUNCTION()
	void TakeItem(AMotor* InventoryItem);
	
	//Interaccion de Pawn con la Municion
	UPROPERTY()
	UComponenteMunicion* Municion;
	UFUNCTION()
	void DropItemMunicion();
	UFUNCTION()
	void TakeItemMunicion(AMunicion* InventoryItem);

	//Interaccion de Pawn con la Armeria
	UPROPERTY()
	UComponenteArmeria* Armeria;
	UFUNCTION()
	void DropItemArmeria();
	UFUNCTION()
	void TakeItemArmeria(AArmeria* InventoryItem);
	bool DisparoMultiple = false;

	//Interaccion de Pawn con el ComponenteChino
	UPROPERTY()
	UMagiaChina* ComponenteChino;
	UFUNCTION()
	void DropItemChino();
	UFUNCTION()
	void TakeItemChino(AComponenteChino* InventoryItem);

	UFuncionChina* FuncionChina;

	//Interaccion de Pawn con todos los consumibles, la notificacion de la colision
	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};

