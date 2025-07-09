// AnimBlueprintGeneratedClass ABP_Dirtbike.ABP_Dirtbike_C
// Size: 0x1040 (Inherited: 0xab0)
struct UABP_Dirtbike_C : UDcxBikeAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xab0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xab8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0xae8(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbf0(0x20)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xc10(0x10)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xc20(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xd28(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xe30(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf38(0x108)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Dirtbike.ABP_Dirtbike_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dirtbike_AnimGraphNode_ModifyBone_6550E27E4F4AB0F217556E96CDD9F41F(); // Function ABP_Dirtbike.ABP_Dirtbike_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dirtbike_AnimGraphNode_ModifyBone_6550E27E4F4AB0F217556E96CDD9F41F // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dirtbike_AnimGraphNode_ModifyBone_2C5B13D846972DC48D71548596D95069(); // Function ABP_Dirtbike.ABP_Dirtbike_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dirtbike_AnimGraphNode_ModifyBone_2C5B13D846972DC48D71548596D95069 // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dirtbike_AnimGraphNode_ModifyBone_4ACF0BAA4509FA2DA2E8828E7AF04ADD(); // Function ABP_Dirtbike.ABP_Dirtbike_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dirtbike_AnimGraphNode_ModifyBone_4ACF0BAA4509FA2DA2E8828E7AF04ADD // (BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Dirtbike(int32_t EntryPoint); // Function ABP_Dirtbike.ABP_Dirtbike_C.ExecuteUbergraph_ABP_Dirtbike // (Final|UbergraphFunction) // @ game+0x297fc00
};

