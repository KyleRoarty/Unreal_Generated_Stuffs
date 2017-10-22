// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	totalDamage = 200;
	damageTimeInSeconds = 1.f;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();
	CalculateValues();
}

void AMyActor::CalculateValues()
{
	damagePerSecond = totalDamage / damageTimeInSeconds;
}

void AMyActor::CalledFromCpp_Implementation()
{
	//Stuff goes here

}

#if WITH_EDITOR
void AMyActor::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) 
{
	CalculateValues();

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif