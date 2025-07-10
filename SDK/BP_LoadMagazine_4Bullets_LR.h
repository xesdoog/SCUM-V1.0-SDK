// BlueprintGeneratedClass BP_LoadMagazine_4Bullets_LR.BP_LoadMagazine_4Bullets_LR_C
// Size: 0xd0 (Inherited: 0x90)
struct UBP_LoadMagazine_4Bullets_LR_C : UItemActionSequenceLoadMagazine {
	struct FName StartSectionOneLoadedBullet; // 0x90(0x08)
	struct FName StartSectionTwoOrEvenNumberOfLoadedBullets; // 0x98(0x08)
	struct FName StartSectionThreeOrOddNumberOfLoadedBullets; // 0xa0(0x08)
	struct FName EndSectionEmpty; // 0xa8(0x08)
	struct FName EndSectionOneLoadedBullet; // 0xb0(0x08)
	struct FName EndSectionTwoLoadedBullets; // 0xb8(0x08)
	struct FName EndSectionThreeOrOddNumberOfLoadedBullets; // 0xc0(0x08)
	struct FName EndSectionFourOrEvenNumberOfLoadedBullets; // 0xc8(0x08)

	struct FName GetEndSectionName(); // Function BP_LoadMagazine_4Bullets_LR.BP_LoadMagazine_4Bullets_LR_C.GetEndSectionName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
	float Begin(); // Function BP_LoadMagazine_4Bullets_LR.BP_LoadMagazine_4Bullets_LR_C.Begin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	bool CanBeSelected(struct UItemActionDescription* Description); // Function BP_LoadMagazine_4Bullets_LR.BP_LoadMagazine_4Bullets_LR_C.CanBeSelected // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
};

