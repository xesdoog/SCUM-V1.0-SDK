// BlueprintGeneratedClass BP_NavigationInvoker.BP_NavigationInvoker_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_NavigationInvoker_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNavigationInvokerComponent* NavigationInvoker; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ReceiveBeginPlay(); // Function BP_NavigationInvoker.BP_NavigationInvoker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ReceiveTick(float DeltaSeconds); // Function BP_NavigationInvoker.BP_NavigationInvoker_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_NavigationInvoker(int32_t EntryPoint); // Function BP_NavigationInvoker.BP_NavigationInvoker_C.ExecuteUbergraph_BP_NavigationInvoker // (Final|UbergraphFunction) // @ game+0x297fc00
};

