#ifndef UE4SS_SDK_BP_Dropping_01_HPP
#define UE4SS_SDK_BP_Dropping_01_HPP

class ABP_Dropping_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPhysicsConstraintComponent* MyConstraintComp1;                             // 0x0228 (size: 0x8)
    class UPhysicsConstraintComponent* MyConstraintComp;                              // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Shit_03;                                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Shit_02;                                              // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Shit_01;                                              // 0x0248 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0250 (size: 0x8)
    FVector OffsetTimeline_Offset_509AAF33465941489534FEBEC2819093;                   // 0x0258 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> OffsetTimeline__Direction_509AAF33465941489534FEBEC2819093; // 0x0264 (size: 0x1)
    class UTimelineComponent* OffsetTimeline;                                         // 0x0268 (size: 0x8)
    FVector Shit_01_Relative_Location;                                                // 0x0270 (size: 0xC)
    bool HasSpawnedEffects;                                                           // 0x027C (size: 0x1)
    FVector DecalSize;                                                                // 0x0280 (size: 0xC)
    class UParticleSystem* ParticlesToSpawn;                                          // 0x0290 (size: 0x8)
    class UMaterialInterface* DecalToSpawn;                                           // 0x0298 (size: 0x8)
    class USoundBase* SoundToSpawn;                                                   // 0x02A0 (size: 0x8)
    float LifeTime;                                                                   // 0x02A8 (size: 0x4)

    void OffsetTimeline__FinishedFunc();
    void OffsetTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void AutoDestroy();
    void ExecuteUbergraph_BP_Dropping_01(int32 EntryPoint);
}; // Size: 0x2AC

#endif
