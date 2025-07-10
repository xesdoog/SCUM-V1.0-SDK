// AnimBlueprintGeneratedClass ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C
// Size: 0x14f4 (Inherited: 0x320)
struct UABP_BlackHawk_Crossbow_C : UWeaponCrossbowAnimInstance {
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
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xa98(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0xba0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xbc0(0x20)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xbe0(0x830)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1410(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1430(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1450(0xa0)
	float IronSightsHideAlpha; // 0x14f0(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_BlackHawk_Crossbow(int32_t EntryPoint); // Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.ExecuteUbergraph_ABP_BlackHawk_Crossbow // (Final|UbergraphFunction) // @ game+0x297fc00
};

