// AnimBlueprintGeneratedClass ABP_Cruiser.ABP_Cruiser_C
// Size: 0x1040 (Inherited: 0xab0)
struct UABP_Cruiser_C : UDcxBikeAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xab0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xab8(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xae8(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0xb08(0x108)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xc10(0x10)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xc20(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xd28(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xe30(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf38(0x108)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Cruiser.ABP_Cruiser_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cruiser_AnimGraphNode_ModifyBone_75146FCC423D7FD28BBE0CBB0DC7A823(); // Function ABP_Cruiser.ABP_Cruiser_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cruiser_AnimGraphNode_ModifyBone_75146FCC423D7FD28BBE0CBB0DC7A823 // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cruiser_AnimGraphNode_ModifyBone_48F00FD346927156618C1CBD4999625E(); // Function ABP_Cruiser.ABP_Cruiser_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cruiser_AnimGraphNode_ModifyBone_48F00FD346927156618C1CBD4999625E // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cruiser_AnimGraphNode_ModifyBone_E2DE869845F4A1C73C5008A2F65B188A(); // Function ABP_Cruiser.ABP_Cruiser_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cruiser_AnimGraphNode_ModifyBone_E2DE869845F4A1C73C5008A2F65B188A // (BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Cruiser(int32_t EntryPoint); // Function ABP_Cruiser.ABP_Cruiser_C.ExecuteUbergraph_ABP_Cruiser // (Final|UbergraphFunction) // @ game+0x297fc00
};

