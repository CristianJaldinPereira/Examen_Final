// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie_Explosivo.h"
#include "Notificador_Zombies_1.h"
#include "Estrategia_Zombie_Tranquilo.h"
#include "Estrategia_Zombie_Explocion.h"
#include "Estrategia_Zombie_Curacion.h"
#include "Estrategia_Zombie_Normal.h"
#include "Estrategia_Zombie_Inmune.h"


AZombie_Explosivo::AZombie_Explosivo()
{
	PrimaryActorTick.bCanEverTick = true;

	
}

void AZombie_Explosivo::BeginPlay()
{
	Super::BeginPlay();


	EstrategiaTranquilo = GetWorld()->SpawnActor<AEstrategia_Zombie_Tranquilo>(AEstrategia_Zombie_Tranquilo::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	EstrategiaExplosivo = GetWorld()->SpawnActor<AEstrategia_Zombie_Explocion>(AEstrategia_Zombie_Explocion::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	EstrategiaCuracion = GetWorld()->SpawnActor<AEstrategia_Zombie_Curacion>(AEstrategia_Zombie_Curacion::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	EstrategiaInmune = GetWorld()->SpawnActor<AEstrategia_Zombie_Inmune>(AEstrategia_Zombie_Inmune::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
    EstrategiaNormal = GetWorld()->SpawnActor<AEstrategia_Zombie_Normal>(AEstrategia_Zombie_Normal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//Notificador_1 = GetWorld()->SpawnActor<ANotificador_Zombies_1>(ANotificador_Zombies_1::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);



	int EstrategiaAleatoria = FMath::RandRange(1, 3);
	if (EstrategiaAleatoria == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie esta curandose"));
		Estrategia = EstrategiaCuracion;
		LLamarCurar();
	}
	else if (EstrategiaAleatoria == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie esta Inmune"));
		Estrategia = EstrategiaInmune;
		LlamarInmune();
	}
	else if (EstrategiaAleatoria == 3)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie esta Normal"));
		Estrategia = EstrategiaNormal;
		LlamarNormal();
	}
	


}

void AZombie_Explosivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}



void AZombie_Explosivo::SetEstrategia(AActor* Estrategia_)
{
	Estrategia = Cast<IEstrategia_Zombie_Principal>(Estrategia_);

}

void AZombie_Explosivo::LLamarExplotar()
{
	Estrategia->Explotar(this);

}

void AZombie_Explosivo::LLamarCurar()
{
	Estrategia->Curacion(this);
}

void AZombie_Explosivo::LlamarInmune()
{
	Estrategia->Inmune(this);
}

void AZombie_Explosivo::LlamarNormal()
{
		Estrategia->Normal(this);
}

void AZombie_Explosivo::Destroyed()
{
	Super::Destroyed();
	Notificador_1->DesuscribirZombie(this);

}

void AZombie_Explosivo::ActualizarZombies(APublicador_Zombies* Publicador_Zombies)
{
	Mutar();
}

void AZombie_Explosivo::Mutar()
{
 
	FString Estado = Notificador_1->GetEstado();

	if (!Estado.Compare("Normal"))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Inmune"));
		Estrategia = EstrategiaNormal;
		LlamarNormal();
	}
	else if (!Estado.Compare("Explosivo"))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("A punto de explotar"));
		Estrategia = EstrategiaExplosivo;
		LLamarExplotar();
	}
	else if (!Estado.Compare("Curacion"))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Curandose"));
		Estrategia = EstrategiaCuracion;
		LLamarCurar();
	}
	else if (!Estado.Compare("Inmune"))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Curandose"));
		Estrategia = EstrategiaInmune;
		LlamarInmune();
	}
}

void AZombie_Explosivo::DefinirNotificadorZombies(ANotificador_Zombies_1* myNotificador_1)
{
	Notificador_1 = myNotificador_1;
	Notificador_1->SuscribirZombie(this);

	

}
