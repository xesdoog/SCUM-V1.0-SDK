// AnimBlueprintGeneratedClass ABP_WireCutters.ABP_WireCutters_C
// Size: 0x358 (Inherited: 0x2c0)
struct UABP_WireCutters_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2f8(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x310(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WireCutters.ABP_WireCutters_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_WireCutters(int32_t EntryPoint); // Function ABP_WireCutters.ABP_WireCutters_C.ExecuteUbergraph_ABP_WireCutters // (Final|UbergraphFunction) // @ game+0x297fc00
};

