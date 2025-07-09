// AnimBlueprintGeneratedClass ABP_Drum.ABP_Drum_C
// Size: 0x1490 (Inherited: 0x2e0)
struct UABP_Drum_C : UWeaponAttachmentMagazineAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2e8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_7; // 0x318(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_6; // 0x360(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0x3a8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x3f0(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x438(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x4e8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x510(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x538(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x560(0xa0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x600(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x6b0(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x6f8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x740(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x788(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x7b0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x7d8(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x800(0x158)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x958(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x978(0x20)
	char pad_998[0x8]; // 0x998(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x9a0(0x830)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x11d0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1270(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x12f0(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1370(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1410(0x80)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Drum.ABP_Drum_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Drum(int32_t EntryPoint); // Function ABP_Drum.ABP_Drum_C.ExecuteUbergraph_ABP_Drum // (Final|UbergraphFunction) // @ game+0x297fc00
};

