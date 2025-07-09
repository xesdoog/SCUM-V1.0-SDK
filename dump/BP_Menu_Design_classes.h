// BlueprintGeneratedClass BP_Menu_Design.BP_Menu_Design_C
// Size: 0x589 (Inherited: 0x4c8)
struct ABP_Menu_Design_C : ABuilding {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UParticleSystemComponent* Sparks3; // 0x4d0(0x08)
	struct UParticleSystemComponent* Sparks2; // 0x4d8(0x08)
	struct UParticleSystemComponent* Sparks1; // 0x4e0(0x08)
	struct UParticleSystemComponent* Smoke4; // 0x4e8(0x08)
	struct UParticleSystemComponent* Smoke3; // 0x4f0(0x08)
	struct UParticleSystemComponent* Smoke2; // 0x4f8(0x08)
	struct UParticleSystemComponent* Smoke1; // 0x500(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x508(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x510(0x08)
	struct UStaticMeshComponent* SM_Monitor_LP_01; // 0x518(0x08)
	struct UStaticMeshComponent* SM_Menu_Design_Fan_02; // 0x520(0x08)
	struct UChildActorComponent* BP_Sliding_Doors_02; // 0x528(0x08)
	struct UChildActorComponent* BP_Sliding_Doors_012; // 0x530(0x08)
	struct UChildActorComponent* BP_Sliding_Doors_011; // 0x538(0x08)
	struct UChildActorComponent* BP_Sliding_Doors_01; // 0x540(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x548(0x08)
	struct USceneComponent* SharedRoot; // 0x550(0x08)
	float PrisonerMoveInsideTimeline_NewTrack_0_18E89A024149A17A3D64EEA95389DBF2; // 0x558(0x04)
	enum class ETimelineDirection PrisonerMoveInsideTimeline__Direction_18E89A024149A17A3D64EEA95389DBF2; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* PrisonerMoveInsideTimeline; // 0x560(0x08)
	float YawAngle; // 0x568(0x04)
	float RotationSpeed; // 0x56c(0x04)
	struct AActor* PrisonerHolder; // 0x570(0x08)
	struct AActor* PrisonerHolderInitialLocationMarker; // 0x578(0x08)
	struct AActor* PrisonerHolderFinalLocationMarker; // 0x580(0x08)
	bool _isPrisonerInsideDoor; // 0x588(0x01)

	void PrisonerMoveInsideTimeline__FinishedFunc(); // Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x297fc00
	void PrisonerMoveInsideTimeline__UpdateFunc(); // Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function BP_Menu_Design.BP_Menu_Design_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ReceiveTick(float DeltaSeconds); // Function BP_Menu_Design.BP_Menu_Design_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void StartPrisonerEnterSequence(bool backwards); // Function BP_Menu_Design.BP_Menu_Design_C.StartPrisonerEnterSequence // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_Menu_Design(int32_t EntryPoint); // Function BP_Menu_Design.BP_Menu_Design_C.ExecuteUbergraph_BP_Menu_Design // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

