// BlueprintGeneratedClass BP_ConZBase.BP_ConZBase_C
// Size: 0x558 (Inherited: 0x548)
struct ABP_ConZBase_C : AConZBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)

	void ReceiveBeginPlay(); // Function BP_ConZBase.BP_ConZBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ReceiveTick(float DeltaSeconds); // Function BP_ConZBase.BP_ConZBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_ConZBase(int32_t EntryPoint); // Function BP_ConZBase.BP_ConZBase_C.ExecuteUbergraph_BP_ConZBase // (Final|UbergraphFunction) // @ game+0x297fc00
};

