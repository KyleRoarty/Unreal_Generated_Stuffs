// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "GenActor.generated.h"
UCLASS()
class CPPTEST_API AGenActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

	AGenActor();
	TArray<FVector> verts;
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent * mesh;
	UPROPERTY(EditAnywhere)
		UMaterial *MyMaterial;
	UPROPERTY()
		FVector int_point;
	UPROPERTY()
		FVector actor_point;
	UPROPERTY()
		FVector actor_rvec;
	UFUNCTION()
		void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION()
		void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void CreateTriangle(TArray<FVector> vertices, FVector2D uv_center);
	template <typename return_type, class ret_type, class mem_type>
	TArray<return_type> PointArray(mem_type Vertices, ret_type Member);
	float GetArea(TArray<FVector> points);
	TArray<int>GetSplitIndices(float ref, TArray<float>l_half, TArray<float>r_half);
	TArray<TArray<FVector>> GetSplit_Tri(TArray<FVector> positions, FVector a, FVector b, FVector c, FVector d);
	TArray<int32> GetTriangles(int32 num_vertices);
	TArray<FVector2D> GetUV(TArray<FVector> positions, FVector2D center, FVector2D uv_range, FVector2D point_range);
	TArray<FVector> GetNormals(int32 num_vertices);
	TArray<FProcMeshTangent> GetTangents(int32 num_vertices);
	TArray<FLinearColor> GetColors(int32 num_vertices);
private:

	
	
};
