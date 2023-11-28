// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PVZ_USFX_LAB02/Zombie.h"

#include "Estrategia_Zombie_Principal.h"

#include "Suscriptores_Zombies.h"
#include "Mutar.h"

#include "Zombie_Explosivo.generated.h"

/**
 * 
 */
class ANotificador_Zombies_1;
class AEstrategia_Zombie_Explocion;
class AEstrategia_Zombie_Tranquilo;
class AEstrategia_Zombie_Curacion;
class AEstrategia_Zombie_Normal;
class AEstrategia_Zombie_Inmune; 

UCLASS()
class PVZ_USFX_LAB02_API AZombie_Explosivo : public AZombie, public ISuscriptores_Zombies, public IMutar
{
	GENERATED_BODY()

public:
	AZombie_Explosivo();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
public:

	AEstrategia_Zombie_Explocion* EstrategiaExplosivo;
	AEstrategia_Zombie_Tranquilo* EstrategiaTranquilo;
	AEstrategia_Zombie_Curacion* EstrategiaCuracion;
	AEstrategia_Zombie_Inmune* EstrategiaInmune;
	AEstrategia_Zombie_Normal* EstrategiaNormal;

public: 

	IEstrategia_Zombie_Principal* Estrategia;

public:

	void SetEstrategia(AActor* Estrategia_);

	void LLamarExplotar();

	void LLamarCurar();

	void LlamarInmune();
	
	void LlamarNormal();


	enum class EEstadoZombie
	{
		Normal,
		Explosivo,
		Curacion,
		Inmune,
		Tranquilo
	};


private:
	// Estrategia actual del zombie
	EEstadoZombie m_EstadoActual;


private:
	UPROPERTY()
	ANotificador_Zombies_1* Notificador_1;

public:
	virtual void Destroyed() override;

	virtual void ActualizarZombies(class APublicador_Zombies* Publicador_Zombies) override;

	virtual void Mutar();

	void DefinirNotificadorZombies(ANotificador_Zombies_1* myNotificador_1);



};
