// AnimBlueprintGeneratedClass ABP_Prisoner_Fishing.ABP_Prisoner_Fishing_C
// Size: 0xe50 (Inherited: 0x2e0)
struct UABP_Prisoner_Fishing_C : UPrisonerAnimInstance_Fishing {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2e8(0x30)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0x318(0x190)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x4a8(0x118)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x5c0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x660(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x6e0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x780(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x800(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x880(0xa0)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x920(0x190)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0xab0(0x190)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0xc40(0x190)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xdd0(0x80)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Prisoner_Fishing.ABP_Prisoner_Fishing_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Prisoner_Fishing(int32_t EntryPoint); // Function ABP_Prisoner_Fishing.ABP_Prisoner_Fishing_C.ExecuteUbergraph_ABP_Prisoner_Fishing // (Final|UbergraphFunction) // @ game+0x297fc00
};

