// AnimBlueprintGeneratedClass ABP_Laika.ABP_Laika_C
// Size: 0xb98 (Inherited: 0xa50)
struct UABP_Laika_C : UDcxVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa50(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xa58(0x30)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa88(0x10)
	struct FDcxAnimNodeWheelSimulator DcxAnimGraphNodeWheelSimulator; // 0xa98(0xe0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb78(0x20)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Laika.ABP_Laika_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_Laika(int32_t EntryPoint); // Function ABP_Laika.ABP_Laika_C.ExecuteUbergraph_ABP_Laika // (Final|UbergraphFunction) // @ game+0x297fc00
};

