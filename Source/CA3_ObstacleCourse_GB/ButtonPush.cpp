// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonPush.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UButtonPush::UButtonPush()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UButtonPush::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UButtonPush::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Ensure this component is attached to an actor before trying to use it
	if (GetOwner())
	{
		FVector Start = GetOwner()->GetActorLocation();
		FVector End = Start + GetOwner()->GetActorForwardVector() * MaxGrabDistance;

		// Make sure to provide all necessary parameters to DrawDebugLine
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, -1.f, 0, 5.f);
	}
}

