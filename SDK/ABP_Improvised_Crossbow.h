// AnimBlueprintGeneratedClass ABP_Improvised_Crossbow.ABP_Improvised_Crossbow_C
// Size: 0x13b0 (Inherited: 0x320)
struct UABP_Improvised_Crossbow_C : UWeaponCrossbowAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x328(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x358(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3d8(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_7; // 0x458(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x4a0(0x158)
	struct FAnimNode_Slot AnimGraphNode_Slot_6; // 0x5f8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0x640(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x688(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x6d0(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x780(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x7a8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x7d0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x7f8(0xa0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x898(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x948(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x990(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x9d8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xa20(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xa48(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xa70(0x28)
	char pad_A98[0x8]; // 0xa98(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xaa0(0x830)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x12d0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x12f0(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1310(0xa0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Improvised_Crossbow.ABP_Improvised_Crossbow_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Improvised_Crossbow(int32_t EntryPoint); // Function ABP_Improvised_Crossbow.ABP_Improvised_Crossbow_C.ExecuteUbergraph_ABP_Improvised_Crossbow // (Final|UbergraphFunction) // @ game+0x297fc00
};

