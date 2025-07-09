// BlueprintGeneratedClass BP_Dropping_01.BP_Dropping_01_C
// Size: 0x2ac (Inherited: 0x220)
struct ABP_Dropping_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPhysicsConstraintComponent* MyConstraintComp1; // 0x228(0x08)
	struct UPhysicsConstraintComponent* MyConstraintComp; // 0x230(0x08)
	struct UStaticMeshComponent* Shit_03; // 0x238(0x08)
	struct UStaticMeshComponent* Shit_02; // 0x240(0x08)
	struct UStaticMeshComponent* Shit_01; // 0x248(0x08)
	struct USceneComponent* SharedRoot; // 0x250(0x08)
	struct FVector OffsetTimeline_Offset_509AAF33465941489534FEBEC2819093; // 0x258(0x0c)
	enum class ETimelineDirection OffsetTimeline__Direction_509AAF33465941489534FEBEC2819093; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* OffsetTimeline; // 0x268(0x08)
	struct FVector Shit_01_Relative_Location; // 0x270(0x0c)
	bool HasSpawnedEffects; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	struct FVector DecalSize; // 0x280(0x0c)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UParticleSystem* ParticlesToSpawn; // 0x290(0x08)
	struct UMaterialInterface* DecalToSpawn; // 0x298(0x08)
	struct USoundBase* SoundToSpawn; // 0x2a0(0x08)
	float LifeTime; // 0x2a8(0x04)

	void OffsetTimeline__FinishedFunc(); // Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x297fc00
	void OffsetTimeline__UpdateFunc(); // Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x297fc00
	void AutoDestroy(); // Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_Dropping_01(int32_t EntryPoint); // Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

