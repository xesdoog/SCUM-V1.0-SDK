// AnimBlueprintGeneratedClass ABP_DT11B.ABP_DT11B_C
// Size: 0xa08 (Inherited: 0x310)
struct UABP_DT11B_C : UWeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x318(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x348(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_7; // 0x3c8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_6; // 0x410(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0x458(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x4a0(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x4e8(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x598(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x5c0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x5e8(0x28)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x610(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x6c0(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x708(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x750(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x798(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x7c0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7e8(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x810(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x8b0(0x158)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_DT11B.ABP_DT11B_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_DT11B(int32_t EntryPoint); // Function ABP_DT11B.ABP_DT11B_C.ExecuteUbergraph_ABP_DT11B // (Final|UbergraphFunction) // @ game+0x297fc00
};

