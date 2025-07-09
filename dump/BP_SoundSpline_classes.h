// BlueprintGeneratedClass BP_SoundSpline.BP_SoundSpline_C
// Size: 0x291 (Inherited: 0x288)
struct ABP_SoundSpline_C : ASoundSpline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	bool Is_Club_Spline; // 0x290(0x01)

	void ReceiveBeginPlay(); // Function BP_SoundSpline.BP_SoundSpline_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SoundSpline.BP_SoundSpline_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_SoundSpline(int32_t EntryPoint); // Function BP_SoundSpline.BP_SoundSpline_C.ExecuteUbergraph_BP_SoundSpline // (Final|UbergraphFunction) // @ game+0x297fc00
};

