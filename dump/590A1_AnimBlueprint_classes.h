// AnimBlueprintGeneratedClass 590A1_AnimBlueprint.590A1_AnimBlueprint_C
// Size: 0xe24 (Inherited: 0x310)
struct U590A1_AnimBlueprint_C : UWeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x318(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x348(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_7; // 0x3c8(0x48)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x410(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x518(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x538(0x20)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x558(0xb0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x608(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6a8(0x80)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x728(0x158)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x880(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x900(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_6; // 0x980(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0x9c8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0xa10(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0xa58(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xb08(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xb30(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xb58(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0xb80(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xbc8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xc10(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xc58(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xd08(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xd30(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xd58(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xd80(0xa0)
	float IronSightsHideAlpha; // 0xe20(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_590A1_AnimBlueprint(int32_t EntryPoint); // Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.ExecuteUbergraph_590A1_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x297fc00
};

