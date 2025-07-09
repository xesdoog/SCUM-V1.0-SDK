// BlueprintGeneratedClass BP_ConZBaseElement.BP_ConZBaseElement_C
// Size: 0x3e0 (Inherited: 0x380)
struct ABP_ConZBaseElement_C : AConZBaseElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* _hismComponent; // 0x388(0x08)
	struct TMap<struct UStaticMesh*, struct UHierarchicalInstancedStaticMeshComponent*> MeshMap; // 0x390(0x50)

	void ExecuteUbergraph_BP_ConZBaseElement(int32_t EntryPoint); // Function BP_ConZBaseElement.BP_ConZBaseElement_C.ExecuteUbergraph_BP_ConZBaseElement // (Final|UbergraphFunction) // @ game+0x297fc00
};

