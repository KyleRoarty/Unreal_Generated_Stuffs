// Fill out your copyright notice in the Description page of Project Settings.

#include "CubeActor.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"



// Sets default values
ACubeActor::ACubeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Color Timeline"));
	MyTimeline->SetTimelineLength(1.0);
	ColorChange = CreateDefaultSubobject<UCurveLinearColor>(TEXT("Color Curve"));
	FOnTimelineLinearColor function{};
	function.BindUFunction(this, "LinearColor");
	MyTimeline->AddInterpLinearColor(ColorChange, function);

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube Root"));
	MyBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Hitbox"));
	MyBox->InitBoxExtent(FVector(55, 55, 55));
	this->SetRootComponent(MyBox);

	MyMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	MyMesh->SetRelativeLocation(FVector(0, 0, -50));
	MyBox->SetWorldLocation(FVector(0, 0, 50));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MyMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	static ConstructorHelpers::FObjectFinder<UMaterial> MyMaterialAsset(TEXT("/Game/Mesh/Color.Color"));
		
	if (MyMeshAsset.Succeeded()) {
		MyMesh->SetStaticMesh(MyMeshAsset.Object);
		MyBox->OnComponentBeginOverlap.AddDynamic(this, &ACubeActor::OnComponentBeginOverlap);
	}
	if (MyMaterialAsset.Succeeded()) {
		MyMaterial = MyMaterialAsset.Object;
		MyMID = MyMesh->CreateAndSetMaterialInstanceDynamicFromMaterial(0, MyMaterial);
	}
}

void ACubeActor::LinearColor()
{
	FLinearColor newColor = ColorChange->GetLinearColorValue(MyTimeline->GetPlaybackPosition());
	MyMID->SetVectorParameterValue(FName("MyColor"), newColor);
	MyMesh->SetMaterial(0, MyMID);
}

// Called when the game starts or when spawned
void ACubeActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACubeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACubeActor::OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
{
	FLinearColor current;
	MyMID->GetVectorParameterValue(FName("MyColor"), current);
	PlayFromStart_Wrapper(current, FLinearColor::MakeRandomColor(), ColorChange, 1.0);
	//MyMID->SetVectorParameterValue(FName("MyColor"), FLinearColor::MakeRandomColor());
	//MyMesh->SetMaterial(0, MyMID);
}

float ACubeActor::GetColorFromIndex(FLinearColor color, int index)
{
	switch (index)
	{
	case 0:
		return color.R;
	case 1:
		return color.G;
	case 2:
		return color.B;
	case 3:
		return color.A;
	default:
		return 0;
	}
}

void ACubeActor::PlayFromStart_Wrapper(FLinearColor curr, FLinearColor next, UCurveLinearColor *lerp, float len)
{
	MyTimeline->Stop();

	TArray<FRichCurveEditInfo> Curves = lerp->GetCurves();
	for (int i = 0; i < 4; i++) {
		FRichCurve *EditKey = Curves[i].CurveToEdit;
		EditKey->Reset();
		EditKey->AddKey(0, GetColorFromIndex(curr, i), false);
		EditKey->AddKey(len, GetColorFromIndex(next, i), false);
	}

	MyTimeline->PlayFromStart();
}
