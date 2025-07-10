// BlueprintGeneratedClass BP_ChristmasGhost.BP_ChristmasGhost_C
// Size: 0x330 (Inherited: 0x300)
struct ABP_ChristmasGhost_C : AChristmasGhost {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct USkeletalMeshComponent* Ghost; // 0x308(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x310(0x08)
	struct TArray<struct USkeletalMesh*> PossibleMeshes; // 0x318(0x10)
	struct UAnimMontage* MontageToPlay; // 0x328(0x08)

	void OnNotifyEnd_BD830BA54751BA88132EE8B90C969374(struct FName NotifyName); // Function BP_ChristmasGhost.BP_ChristmasGhost_C.OnNotifyEnd_BD830BA54751BA88132EE8B90C969374 // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void OnNotifyBegin_BD830BA54751BA88132EE8B90C969374(struct FName NotifyName); // Function BP_ChristmasGhost.BP_ChristmasGhost_C.OnNotifyBegin_BD830BA54751BA88132EE8B90C969374 // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void OnInterrupted_BD830BA54751BA88132EE8B90C969374(struct FName NotifyName); // Function BP_ChristmasGhost.BP_ChristmasGhost_C.OnInterrupted_BD830BA54751BA88132EE8B90C969374 // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void OnBlendOut_BD830BA54751BA88132EE8B90C969374(struct FName NotifyName); // Function BP_ChristmasGhost.BP_ChristmasGhost_C.OnBlendOut_BD830BA54751BA88132EE8B90C969374 // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void OnCompleted_BD830BA54751BA88132EE8B90C969374(struct FName NotifyName); // Function BP_ChristmasGhost.BP_ChristmasGhost_C.OnCompleted_BD830BA54751BA88132EE8B90C969374 // (BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function BP_ChristmasGhost.BP_ChristmasGhost_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_ChristmasGhost(int32_t EntryPoint); // Function BP_ChristmasGhost.BP_ChristmasGhost_C.ExecuteUbergraph_BP_ChristmasGhost // (Final|UbergraphFunction) // @ game+0x297fc00
};

