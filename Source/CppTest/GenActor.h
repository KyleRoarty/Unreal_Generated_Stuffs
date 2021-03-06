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
		FVector actor_point;
	UPROPERTY()
		FVector actor_rvec;

	UFUNCTION()
		void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void CreateTriangle(TArray<FVector> vertices, FVector2D uv_center);
	template <typename return_type, class ret_type, class mem_type>
	TArray<return_type> PointArray(mem_type Vertices, ret_type Member);
	float GetArea(TArray<FVector> points);
	TArray<int>GetSplitIndices(TArray<TArray<FVector>> many_l_verts, TArray<TArray<FVector>> many_r_verts);
	TArray<TArray<FVector>> GetSplit_Tri(TArray<FVector> positions, FVector wep_start, FVector wep_end, FVector wep_width, FVector wep_height, FVector block_pos);

	TArray<int32> GetTriangles(int32 num_vertices);
	TArray<FVector2D> GetUV(TArray<FVector> positions, FVector2D center, FVector2D uv_range, FVector2D point_range);
	TArray<FVector> GetNormals(int32 num_vertices);
	TArray<FProcMeshTangent> GetTangents(int32 num_vertices);
	TArray<FLinearColor> GetColors(int32 num_vertices);

private:

	
	
};
