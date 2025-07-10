// AnimBlueprintGeneratedClass ABP_CityBike.ABP_CityBike_C
// Size: 0x1250 (Inherited: 0xab0)
struct UABP_CityBike_C : UDcxBikeAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xab0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xab8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0xae8(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbf0(0x20)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xc10(0x10)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0xc20(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0xd28(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xe30(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xf38(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1040(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1148(0x108)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_CityBike.ABP_CityBike_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CityBike_AnimGraphNode_ModifyBone_453D7CF24A697472620E189F0D96A210(); // Function ABP_CityBike.ABP_CityBike_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CityBike_AnimGraphNode_ModifyBone_453D7CF24A697472620E189F0D96A210 // (BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_CityBike(int32_t EntryPoint); // Function ABP_CityBike.ABP_CityBike_C.ExecuteUbergraph_ABP_CityBike // (Final|UbergraphFunction) // @ game+0x297fc00
};

