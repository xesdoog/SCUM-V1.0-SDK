// AnimBlueprintGeneratedClass ABP_Tractor_New.ABP_Tractor_New_C
// Size: 0xcf0 (Inherited: 0xa50)
struct UABP_Tractor_New_C : UDcxVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa50(0x08)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa58(0x158)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xbb0(0x10)
	struct FDcxAnimNodeWheelSimulator DcxAnimGraphNodeWheelSimulator; // 0xbc0(0xe0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xca0(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xcc0(0x30)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Tractor_New.ABP_Tractor_New_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Tractor_New(int32_t EntryPoint); // Function ABP_Tractor_New.ABP_Tractor_New_C.ExecuteUbergraph_ABP_Tractor_New // (Final|UbergraphFunction) // @ game+0x297fc00
};

