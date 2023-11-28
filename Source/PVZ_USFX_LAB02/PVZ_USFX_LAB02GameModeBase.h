// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02GameModeBase.generated.h"

/**
 *
 */
class AZombie;
class AZombieComun;
class APlant;
class APlanta_Ataque;
class ALanza_Guisantes;

class AZombie_Explosivo;
class AEstrategia_Zombie_Explocion;
class AEstrategia_Zombie_Tranquilo;
class AEstrategia_Zombie_Curacion;
class ANotificador_Zombies_1;

class AZombieCubo;
UCLASS()
class PVZ_USFX_LAB02_API APVZ_USFX_LAB02GameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
	// Sets default values for this actor's properties
	APVZ_USFX_LAB02GameModeBase();

	void Patrones();

	void EjemploPatrones();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle Temporizador;
	FTimerHandle TemporizadorX;
	FTimerHandle TemporizadorY;

	void Spawn();

	FVector contador;


	int contador2;
	bool cantidad ;

	FVector localizacion;


	// Declarar un vector de objetos
	TArray<AZombie*> Zombies;
	TArray<AZombie_Explosivo*> ZombiesExplosivos;


	// Declarar un contenedor tipo TMap de objetos
	TMap<FString, APlant*> Plantas;

	// Declarar un vector de objetos

	TArray<APlant*> Plantas2;

	float TiempoTranscurrido;

	void aumentovelocidad();

	void MostrarEnergiaDePlantas();


	AZombieComun* NuevoZombie;

	AZombie_Explosivo* NuevoZombieExplosivo;
	AEstrategia_Zombie_Explocion* EstrategiaExplosivo;
	AEstrategia_Zombie_Tranquilo* EstrategiaTranquilo;
	AEstrategia_Zombie_Curacion* EstrategiaCuracion;
	ANotificador_Zombies_1* NotificadorZombies_1;

	FTimerHandle Temporizador2;

	FString NombrePlanta;

	ALanza_Guisantes* NuevaPlantaGuisante;



	int FilaActual;
	int ColumnaActual;

	void prueba();

	void spawnZombie();

	int contadorZombies = 0;
	bool contadorZombies2 = true;

	AZombieCubo* NewZombieCubo;



};

