// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class CPPTEST_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Damage")
		int32 totalDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		float damageTimeInSeconds;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Damage")
		float damagePerSecond;

	UFUNCTION(BlueprintCallable, Category = "Damage")
		void CalculateValues();

	UFUNCTION(BlueprintNativeEvent, Category = "Damage")
		void CalledFromCpp();
	// Sets default values for this actor's properties
	AMyActor();

	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitProperties() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent);


	
	
};
