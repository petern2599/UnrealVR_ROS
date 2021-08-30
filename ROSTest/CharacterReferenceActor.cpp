// Fill out your copyright notice in the Description page of Project Settings.

#include "ROSIntegration/Public/geometry_msgs/Vector3.h"
#include "ROSIntegration/Classes/RI/Topic.h"
#include "ROSIntegration/Classes/ROSIntegrationGameInstance.h"
#include "CharacterReferenceActor.h"

// Sets default values
ACharacterReferenceActor::ACharacterReferenceActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterReferenceActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterReferenceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Initialize a topic
	class UTopic* ExampleTopic = NewObject<UTopic>(UTopic::StaticClass());
	UROSIntegrationGameInstance* rosinst = Cast<UROSIntegrationGameInstance>(GetGameInstance());
	ExampleTopic->Init(rosinst->ROSIntegrationCore, TEXT("/player_position"), TEXT("geometry_msgs/Vector3"));

	//Get Character Position
	FVector MyCharacterPosition = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	//Publish to ROS
	TSharedPtr<ROSMessages::geometry_msgs::Vector3> Vector3Message(new ROSMessages::geometry_msgs::Vector3(MyCharacterPosition.X, MyCharacterPosition.Y, MyCharacterPosition.Z));
	ExampleTopic->Publish(Vector3Message);

	//Display Position in UE Log
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Player Location: %s"), *MyCharacterPosition.ToString()));
}

