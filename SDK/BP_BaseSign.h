// BlueprintGeneratedClass BP_BaseSign.BP_BaseSign_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_BaseSign_C : AActor {
	struct UStaticMeshComponent* ArrowPlane; // 0x220(0x08)
	struct UTextRenderComponent* TextRender; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct FText Text; // 0x238(0x18)
	float FontSize; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct UMaterialInterface* TextMaterial; // 0x258(0x08)
	struct FVector2D TextOffset; // 0x260(0x08)
	struct FVector2D ArrowOffset; // 0x268(0x08)
	struct FVector2D ArrowScale; // 0x270(0x08)
	enum class SignArrowDirection Direction; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	struct FLinearColor Color; // 0x27c(0x10)
	float Text Draw Distance; // 0x28c(0x04)

	void UserConstructionScript(); // Function BP_BaseSign.BP_BaseSign_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
};

