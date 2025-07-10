#ifndef UE4SS_SDK_BP_Menu_Design_HPP
#define UE4SS_SDK_BP_Menu_Design_HPP

class ABP_Menu_Design_C : public ABuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)
    class UParticleSystemComponent* Sparks3;                                          // 0x04D0 (size: 0x8)
    class UParticleSystemComponent* Sparks2;                                          // 0x04D8 (size: 0x8)
    class UParticleSystemComponent* Sparks1;                                          // 0x04E0 (size: 0x8)
    class UParticleSystemComponent* Smoke4;                                           // 0x04E8 (size: 0x8)
    class UParticleSystemComponent* Smoke3;                                           // 0x04F0 (size: 0x8)
    class UParticleSystemComponent* Smoke2;                                           // 0x04F8 (size: 0x8)
    class UParticleSystemComponent* Smoke1;                                           // 0x0500 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0508 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0510 (size: 0x8)
    class UStaticMeshComponent* SM_Monitor_LP_01;                                     // 0x0518 (size: 0x8)
    class UStaticMeshComponent* SM_Menu_Design_Fan_02;                                // 0x0520 (size: 0x8)
    class UChildActorComponent* BP_Sliding_Doors_02;                                  // 0x0528 (size: 0x8)
    class UChildActorComponent* BP_Sliding_Doors_012;                                 // 0x0530 (size: 0x8)
    class UChildActorComponent* BP_Sliding_Doors_011;                                 // 0x0538 (size: 0x8)
    class UChildActorComponent* BP_Sliding_Doors_01;                                  // 0x0540 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent0;                                 // 0x0548 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0550 (size: 0x8)
    float PrisonerMoveInsideTimeline_NewTrack_0_18E89A024149A17A3D64EEA95389DBF2;     // 0x0558 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PrisonerMoveInsideTimeline__Direction_18E89A024149A17A3D64EEA95389DBF2; // 0x055C (size: 0x1)
    class UTimelineComponent* PrisonerMoveInsideTimeline;                             // 0x0560 (size: 0x8)
    float YawAngle;                                                                   // 0x0568 (size: 0x4)
    float RotationSpeed;                                                              // 0x056C (size: 0x4)
    class AActor* PrisonerHolder;                                                     // 0x0570 (size: 0x8)
    class AActor* PrisonerHolderInitialLocationMarker;                                // 0x0578 (size: 0x8)
    class AActor* PrisonerHolderFinalLocationMarker;                                  // 0x0580 (size: 0x8)
    bool _isPrisonerInsideDoor;                                                       // 0x0588 (size: 0x1)

    void PrisonerMoveInsideTimeline__FinishedFunc();
    void PrisonerMoveInsideTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StartPrisonerEnterSequence(bool backwards);
    void BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void ExecuteUbergraph_BP_Menu_Design(int32 EntryPoint);
}; // Size: 0x589

#endif
