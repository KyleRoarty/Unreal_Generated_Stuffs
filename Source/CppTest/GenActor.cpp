// Fill out your copyright notice in the Description page of Project Settings.

#include "GenActor.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"


// Sets default values
AGenActor::AGenActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = mesh;

	if (verts.Num() == 0) {
		verts.Add(FVector(-50, -50, 0));
		verts.Add(FVector(-50, 50, 0));
		verts.Add(FVector(50, 50, 0));
		verts.Add(FVector(50, -50, 0));
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> BlahMaterial(TEXT("Material'/Game/StarterContent/Materials/M_ColorGrid_LowSpec.M_ColorGrid_LowSpec'"));
	//MyMaterial->BaseColor = FColorMaterialInput::Constant;
	MyMaterial = BlahMaterial.Object;
	mesh->SetMaterial(0, MyMaterial);
	mesh->OnComponentBeginOverlap.AddDynamic(this, &AGenActor::OnComponentBeginOverlap);
	mesh->OnComponentEndOverlap.AddDynamic(this, &AGenActor::OnOverlapEnd);
	mesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	//mesh->bUseAsyncCooking = true;

}

// Called when the game starts or when spawned
void AGenActor::BeginPlay()
{
	Super::BeginPlay();

	CreateTriangle(verts, FVector2D(.0625, .0625));
}

// Called every frame
void AGenActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AGenActor::CreateTriangle(TArray<FVector> vertices, FVector2D center)
{
	int32 len = vertices.Num();

	TArray<int32> Triangles = GetTriangles(len);
	TArray<FVector> normals = GetNormals(len);
	TArray<FVector2D> UV0 = GetUV(vertices, center, FVector2D(.0625, .0625), FVector2D(50, 50));
	TArray<FProcMeshTangent> tangents = GetTangents(len);
	TArray<FLinearColor> vertexColors = GetColors(len);

	mesh->CreateMeshSection_LinearColor(0, vertices, Triangles, normals, UV0, vertexColors, tangents, true);
	mesh->ContainsPhysicsTriMeshData(true);
	mesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
}

template<typename return_type, class ret_type, class mem_type>
inline TArray<return_type> AGenActor::PointArray(mem_type Vertices, ret_type Member)
{
	TArray<return_type> return_array;
	for (FProcMeshVertex vertex : Vertices)
	{
		return_array.Add(vertex.*Member);
	}

	return return_array;
}

void AGenActor::OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FProcMeshSection *mesh_sect = this->mesh->GetProcMeshSection(0);
	actor_point = OtherActor->GetActorLocation();
	actor_rvec = GetWorld()->GetFirstPlayerController()->GetActorRightVector();

	TArray<FVector2D> updated_uv = GetUV(PointArray<FVector>(mesh_sect->ProcVertexBuffer, &FProcMeshVertex::Position),
		FVector2D(.1875, .1875), FVector2D(.0625, .0625), FVector2D(50, 50));

	this->mesh->UpdateMeshSection_LinearColor(0, PointArray<FVector>(mesh_sect->ProcVertexBuffer, &FProcMeshVertex::Position),
		PointArray<FVector>(mesh_sect->ProcVertexBuffer, &FProcMeshVertex::Normal), updated_uv,
		PointArray<FLinearColor>(mesh_sect->ProcVertexBuffer, &FProcMeshVertex::Color), PointArray<FProcMeshTangent>(mesh_sect->ProcVertexBuffer, &FProcMeshVertex::Tangent));
}

void AGenActor::OnOverlapEnd(class UPrimitiveComponent * OverlappedComp, class AActor * OtherActor, class UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	FProcMeshSection *mesh_sect = this->mesh->GetProcMeshSection(0);
	FVector curr_pos = OtherActor->GetActorLocation();
	FVector block_pos = this->GetActorLocation();

	FVector w_height = FVector(0, 0, 35);

	// Right side width vector oriented to the actor rvec
	float width = 5;
	FVector r_width_ori = width*actor_rvec;

	TArray<TArray<FVector>> updated_position_r = GetSplit_Tri(PointArray<FVector>(mesh_sect->ProcVertexBuffer, &FProcMeshVertex::Position), actor_point, curr_pos, r_width_ori, w_height, block_pos);
	TArray<TArray<FVector>> updated_position_l = GetSplit_Tri(PointArray<FVector>(mesh_sect->ProcVertexBuffer, &FProcMeshVertex::Position), actor_point, curr_pos, -r_width_ori, w_height, block_pos);
	TArray<int> split_inds = GetSplitIndices(updated_position_l, updated_position_r);

	if (split_inds[0] != -1 && split_inds[1] != -1) {
		if (updated_position_l.IsValidIndex(split_inds[0])) {
			AGenActor *other_half = GetWorld()->SpawnActorDeferred<AGenActor>(AGenActor::StaticClass(), FTransform(FVector(0, 0, 0)));
			other_half->verts = updated_position_l[split_inds[0]];
			other_half->FinishSpawning(FTransform(block_pos));
		}
		if (updated_position_r.IsValidIndex(split_inds[1])) {
			AGenActor *other_half = GetWorld()->SpawnActorDeferred<AGenActor>(AGenActor::StaticClass(), FTransform(FVector(0, 0, 0)));
			other_half->verts = updated_position_r[split_inds[1]];
			other_half->FinishSpawning(FTransform(block_pos));
		}
		this->Destroy();
	}
}
TArray<TArray<FVector>> AGenActor::GetSplit_Tri(TArray<FVector> positions, FVector wep_start, FVector wep_end, FVector wep_width, FVector wep_height, FVector block_pos)
{
	TArray<FVector> split_one, split_two;
	FVector int_point;
	FVector tri_normal;
	bool add = true;

	//Top of weapon initially, bottom of weapon initially, top of weapon currently, bottom of weapon currently
	FVector a, b, c, d;
	//Subtracting block_pos normalizes
	a = wep_start + wep_height + wep_width - block_pos;
	b = wep_start - wep_height + wep_width - block_pos;
	c = wep_end + wep_height + wep_width - block_pos;
	d = wep_end - wep_height + wep_width - block_pos;

	for (int i = 0; i < positions.Num(); i++) {
		int j = (i + 1) % positions.Num();

		if (add) {
			split_one.Add(positions[i]);
		}
		else {
			split_two.Add(positions[i]);
		}

		if (FMath::SegmentTriangleIntersection(positions[i], positions[j], a, b, c, int_point, tri_normal)) {
			split_one.Add(int_point);
			split_two.Add(int_point);
			add = !add;
		}
		else if (FMath::SegmentTriangleIntersection(positions[i], positions[j], b, c, d, int_point, tri_normal)) {
			split_one.Add(int_point);
			split_two.Add(int_point);
			add = !add;
		}
	}

	if (add) {
		return { split_one, split_two };
	}

	return { positions, {} };
}

TArray<int32> AGenActor::GetTriangles(int32 num_vertices)
{
	TArray<int32> ret_tris;
	TArray<int32> side_nums;

	for (int i = 0; i < num_vertices; i++) {
		side_nums.Emplace(i);
	}

	while (side_nums.Num() >= 3) {
		ret_tris.Append({ side_nums[0], side_nums[1], side_nums[2] });
		ret_tris.Append({ side_nums[2], side_nums[1], side_nums[0] });
		side_nums.RemoveAt(1);
	}
	return ret_tris;
}

TArray<FVector2D> AGenActor::GetUV(TArray<FVector> positions, FVector2D center, FVector2D uv_range, FVector2D point_range)
{
	TArray<FVector2D> ret_uvs;
	for (FVector position : positions) {
		ret_uvs.Emplace(FVector2D((position.X / point_range.X)*uv_range.X + center.X, (position.Y / point_range.Y)*uv_range.Y + center.Y));
	}
	return ret_uvs;
}

TArray<FVector> AGenActor::GetNormals(int32 num_vertices)
{
	TArray<FVector> ret_norms;
	for (int i = 0; i < num_vertices; i++) {
		ret_norms.Emplace(FVector(0));
	}
	return ret_norms;
}

TArray<FProcMeshTangent> AGenActor::GetTangents(int32 num_vertices)
{
	TArray<FProcMeshTangent> ret_tans;
	for (int i = 0; i < num_vertices; i++) {
		ret_tans.Emplace(FProcMeshTangent());
	}
	return ret_tans;
}

TArray<FLinearColor> AGenActor::GetColors(int32 num_vertices)
{
	TArray<FLinearColor> ret_colors;
	for (int i = 0; i < num_vertices; i++) {
		ret_colors.Emplace(FLinearColor(ForceInitToZero));
	}
	return ret_colors;
}

float AGenActor::GetArea(TArray<FVector> points)
{
	TArray<int32> tris = GetTriangles(points.Num());
	float area = 0;
	if (tris.Num() % 3 != 0) {
		return -1;
	}

	for (int i = 2; i < tris.Num(); i += 3) {
		area += abs(.5 * (points[tris[i - 2]] - points[tris[i - 1]]).Size() * (points[tris[i]] - FMath::LinePlaneIntersection(points[tris[i - 2]], points[tris[i - 1]], points[tris[i]], (points[tris[i - 2]]-points[tris[i - 1]]))).Size());
	}

	return area;
}

TArray<int> AGenActor::GetSplitIndices(TArray<TArray<FVector>> many_l_verts, TArray<TArray<FVector>> many_r_verts)
{
	bool r_true;

	//For when one slice bisects, but the other doesn't.
	//We can assume that each split only splits the big object into 2 at most
	if (many_l_verts.Num() == 1) {
		return GetArea(many_r_verts[0]) > GetArea(many_r_verts[1]) ? { 0, 0 } : { 0, 1 };
	} else if (many_r_verts.Num() == 1) {
		return GetArea(many_l_verts[0]) > GetArea(many_l_verts[1]) ? { 0, 0 } : { 1, 0 };
	}

	//This should be multithreaded
	for (int i = 0; i < many_l_verts.Num(); i++) {
		TArray<FVector> l_verts = many_l_verts[i];
		for (int j = 0; j < many_r_verts.Num(); j++) {
			TArray<FVector> r_verts = many_r_verts[j];
			r_true = true;
			for (int k = 0; k < l_verts.Num(); k++) {
				FVector a, b;
				a = l_verts[k];
				b = l_verts[(k+1) % l_verts.Num()];

				for (int l = 0; l < r_verts.Num(); l++) {
					UE_LOG(LogTemp, Warning, TEXT("%s, %s"), *r_verts[l].ToString(), *FMath::ClosestPointOnSegment(r_verts[l], a, b).ToString());
					if (r_verts[l] == FMath::ClosestPointOnSegment(r_verts[l], a, b)) {
						r_true = false;
						break;
					}
				}

				if (!r_true) {
					break;
				}
			}
			if (r_true) {
				return { i, j };
			}
		}
	}
	return { -1, -1 };
}
