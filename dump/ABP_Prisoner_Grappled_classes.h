// AnimBlueprintGeneratedClass ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C
// Size: 0x378 (Inherited: 0x2c0)
struct UABP_Prisoner_Grappled_C : UPrisonerAnimInstance_Grappled {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x80)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Prisoner_Grappled(int32_t EntryPoint); // Function ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C.ExecuteUbergraph_ABP_Prisoner_Grappled // (Final|UbergraphFunction) // @ game+0x297fc00
};

