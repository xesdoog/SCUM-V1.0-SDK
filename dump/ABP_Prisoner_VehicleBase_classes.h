// AnimBlueprintGeneratedClass ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C
// Size: 0x23e0 (Inherited: 0x10e0)
struct UABP_Prisoner_VehicleBase_C : UPrisonerAnimInstance_VehicleBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10e0(0x08)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x10e8(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x1188(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1228(0xc0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x12e8(0xe8)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik_4; // 0x13d0(0x190)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x1560(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x1580(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x15a0(0x80)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik_3; // 0x1620(0x190)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik_2; // 0x17b0(0x190)
	struct FAnimNode_Root AnimGraphNode_Root_2; // 0x1940(0x30)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik; // 0x1970(0x190)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x1b00(0xa0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x1ba0(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1bc0(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1be0(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1d38(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1d60(0x158)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1eb8(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1ed8(0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1f00(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1f20(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1fc0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1fe8(0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x2010(0xe8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x20f8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2178(0xa0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2218(0xe8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2300(0x30)
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x2330(0xb0)

	void VehicleLayer(struct FPoseLink& VehicleLayer); // Function ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C.VehicleLayer // (HasOutParms|BlueprintCallable) // @ game+0x297fc00
	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_VehicleBase_AnimGraphNode_BlendSpacePlayer_066B2E214413EFFE845083BC6DCC4BBF(); // Function ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_VehicleBase_AnimGraphNode_BlendSpacePlayer_066B2E214413EFFE845083BC6DCC4BBF // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_VehicleBase_AnimGraphNode_BlendListByBool_096572AA4BE82968AEB30CB47322E64D(); // Function ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_VehicleBase_AnimGraphNode_BlendListByBool_096572AA4BE82968AEB30CB47322E64D // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_VehicleBase_AnimGraphNode_BlendSpacePlayer_1D2A097647E27384A44631BCA2CD4353(); // Function ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_VehicleBase_AnimGraphNode_BlendSpacePlayer_1D2A097647E27384A44631BCA2CD4353 // (BlueprintEvent) // @ game+0x297fc00
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_VehicleBase_AnimGraphNode_BlendListByBool_1B4BEB6E42FF0F3D3B4CDEA3F00BA015(); // Function ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_VehicleBase_AnimGraphNode_BlendListByBool_1B4BEB6E42FF0F3D3B4CDEA3F00BA015 // (BlueprintEvent) // @ game+0x297fc00
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Prisoner_VehicleBase(int32_t EntryPoint); // Function ABP_Prisoner_VehicleBase.ABP_Prisoner_VehicleBase_C.ExecuteUbergraph_ABP_Prisoner_VehicleBase // (Final|UbergraphFunction) // @ game+0x297fc00
};

