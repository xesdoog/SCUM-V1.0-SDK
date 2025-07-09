// AnimBlueprintGeneratedClass ABP_Barba.ABP_Barba_C
// Size: 0x1208 (Inherited: 0x350)
struct UABP_Barba_C : UConZBoatAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x358(0x30)
	char pad_388[0x8]; // 0x388(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_6; // 0x390(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_5; // 0x540(0x1b0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x6f0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x710(0x108)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x818(0xa0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x8b8(0x18)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x8d0(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8f0(0xa0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x990(0x18)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x9a8(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9c8(0x108)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_4; // 0xad0(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_3; // 0xc80(0x1b0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xe30(0x20)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_2; // 0xe50(0x1b0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt; // 0x1000(0x1b0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x11b0(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x11d0(0x18)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x11e8(0x20)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Barba.ABP_Barba_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_ModifyBone_C8C2075C41781387344743B87F36D0A8(); // Function ABP_Barba.ABP_Barba_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_ModifyBone_C8C2075C41781387344743B87F36D0A8 // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_BlendListByBool_9A28A6B04E089F77C497F3B8790B66F6(); // Function ABP_Barba.ABP_Barba_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_BlendListByBool_9A28A6B04E089F77C497F3B8790B66F6 // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_ModifyBone_02D0E3FE4C19A427EE1960828858C487(); // Function ABP_Barba.ABP_Barba_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_ModifyBone_02D0E3FE4C19A427EE1960828858C487 // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_LookAt_E8B5F8DA4C7B6E0AFAABE38B0451AB31(); // Function ABP_Barba.ABP_Barba_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_LookAt_E8B5F8DA4C7B6E0AFAABE38B0451AB31 // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_LookAt_F5A485A44FA6AEA38D3E5CB7274DD12C(); // Function ABP_Barba.ABP_Barba_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Barba_AnimGraphNode_LookAt_F5A485A44FA6AEA38D3E5CB7274DD12C // (BlueprintEvent) // @ game+0x297fc00
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Barba.ABP_Barba_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Barba(int32_t EntryPoint); // Function ABP_Barba.ABP_Barba_C.ExecuteUbergraph_ABP_Barba // (Final|UbergraphFunction) // @ game+0x297fc00
};

