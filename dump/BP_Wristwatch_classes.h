// BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C
// Size: 0x2c0 (Inherited: 0x2b8)
struct ABP_Wristwatch_C : AWristwatch {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)

	void ReceiveBeginPlay(); // Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ReceiveTick(float DeltaSeconds); // Function BP_Wristwatch.BP_Wristwatch_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void SetDisplayBrightness(float Value); // Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_Wristwatch(int32_t EntryPoint); // Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch // (Final|UbergraphFunction) // @ game+0x297fc00
};

