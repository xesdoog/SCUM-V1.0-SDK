// AnimBlueprintGeneratedClass AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C
// Size: 0x768 (Inherited: 0x310)
struct UAnimBP_ImprovisedRifle9mm_C : UWeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x318(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x348(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x390(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x3d8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x420(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x468(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x518(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x540(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x568(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x590(0x158)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6e8(0x80)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_AnimBP_ImprovisedRifle9mm(int32_t EntryPoint); // Function AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C.ExecuteUbergraph_AnimBP_ImprovisedRifle9mm // (Final|UbergraphFunction) // @ game+0x297fc00
};

