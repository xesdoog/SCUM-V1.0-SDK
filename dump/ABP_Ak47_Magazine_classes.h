// AnimBlueprintGeneratedClass ABP_Ak47_Magazine.ABP_AK47_Magazine_C
// Size: 0xf50 (Inherited: 0x2e0)
struct UABP_AK47_Magazine_C : UWeaponAttachmentMagazineAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2e8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x318(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_7; // 0x398(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_6; // 0x3e0(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0x428(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x470(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x4b8(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x568(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x590(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x5b8(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x5e0(0xa0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x680(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x730(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x778(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x7c0(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x808(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x830(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x858(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x880(0x158)
	struct FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x9d8(0xa0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xa78(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xb28(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xba8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xc28(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xca8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xd28(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xda8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xe28(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xec8(0x80)
	struct FName LastSection; // 0xf48(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Ak47_Magazine.ABP_AK47_Magazine_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Ak47_Magazine.ABP_AK47_Magazine_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_AK47_Magazine(int32_t EntryPoint); // Function ABP_Ak47_Magazine.ABP_AK47_Magazine_C.ExecuteUbergraph_ABP_AK47_Magazine // (Final|UbergraphFunction) // @ game+0x297fc00
};

