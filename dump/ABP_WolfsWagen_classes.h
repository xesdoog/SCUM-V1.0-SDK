// AnimBlueprintGeneratedClass ABP_WolfsWagen.ABP_WolfsWagen_C
// Size: 0xd40 (Inherited: 0xa80)
struct UABP_WolfsWagen_C : UDcxWheeledVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa80(0x08)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa88(0x158)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xbe0(0x10)
	struct FDcxAnimNodeWheelSimulator DcxAnimGraphNodeWheelSimulator; // 0xbf0(0xe0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xcd0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xcf0(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xd10(0x30)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_WolfsWagen.ABP_WolfsWagen_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_ABP_WolfsWagen(int32_t EntryPoint); // Function ABP_WolfsWagen.ABP_WolfsWagen_C.ExecuteUbergraph_ABP_WolfsWagen // (Final|UbergraphFunction) // @ game+0x297fc00
};

