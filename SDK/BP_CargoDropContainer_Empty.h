// BlueprintGeneratedClass BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C
// Size: 0x388 (Inherited: 0x318)
struct ABP_CargoDropContainer_Empty_C : ACargoDropContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoxComponent* Box3; // 0x320(0x08)
	struct UBoxComponent* entrance; // 0x328(0x08)
	struct UChildActorComponent* WarningLightR; // 0x330(0x08)
	struct UChildActorComponent* WarningLightL; // 0x338(0x08)
	struct UParticleSystemComponent* DustParticles; // 0x340(0x08)
	struct UBoxComponent* Box2; // 0x348(0x08)
	struct UBoxComponent* Box1; // 0x350(0x08)
	struct UStaticMeshComponent* SM_CargoFlare; // 0x358(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x360(0x08)
	struct UParticleSystemComponent* FlareParticles; // 0x368(0x08)
	struct UBoxComponent* Box; // 0x370(0x08)
	struct UChildActorComponent* BP_CargoDrop_01_Door; // 0x378(0x08)
	struct UStaticMeshComponent* Parachute; // 0x380(0x08)

	void OnDoorOpened(); // Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnDoorOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void OnWarning(); // Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnWarning // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_CargoDropContainer_Empty(int32_t EntryPoint); // Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ExecuteUbergraph_BP_CargoDropContainer_Empty // (Final|UbergraphFunction) // @ game+0x297fc00
};

