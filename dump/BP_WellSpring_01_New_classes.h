// BlueprintGeneratedClass BP_WellSpring_01_New.BP_WellSpring_01_New_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_WellSpring_01_New_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAkComponent* Ak_spring; // 0x228(0x08)
	struct UParticleSystemComponent* ParticleSystemComponent03; // 0x230(0x08)
	struct UParticleSystemComponent* ParticleSystemComponent02; // 0x238(0x08)
	struct UParticleSystemComponent* ParticleSystemComponent01; // 0x240(0x08)
	struct UParticleSystemComponent* ParticleSystemComponent0; // 0x248(0x08)
	struct UReplenishableResourceComponent* ReplenishableResource; // 0x250(0x08)

	void ReceiveBeginPlay(); // Function BP_WellSpring_01_New.BP_WellSpring_01_New_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_WellSpring_01_New(int32_t EntryPoint); // Function BP_WellSpring_01_New.BP_WellSpring_01_New_C.ExecuteUbergraph_BP_WellSpring_01_New // (Final|UbergraphFunction) // @ game+0x297fc00
};

