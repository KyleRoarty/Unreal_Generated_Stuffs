// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CubeActor.generated.h"

UCLASS()
class CPPTEST_API ACubeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubeActor();
	UPROPERTY()
		UCurveLinearColor *ColorChange;
	UPROPERTY()
		UTimelineComponent *MyTimeline;
	UPROPERTY()
		UBoxComponent *MyBox;
	UPROPERTY()
		UStaticMeshComponent *MyMesh;
	UPROPERTY()
		UMaterial *MyMaterial;
	UPROPERTY(Transient)
		UMaterialInstanceDynamic *MyMID;
	UFUNCTION()
		void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void LinearColor();
	UFUNCTION()
		float GetColorFromIndex(FLinearColor color, int index);
	UPROPERTY()
		UTexture *MyTexture;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UFUNCTION()
		void PlayFromStart_Wrapper(FLinearColor curr, FLinearColor next, UCurveLinearColor *lerp, float len);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
