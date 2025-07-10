// BlueprintGeneratedClass BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C
// Size: 0xb8 (Inherited: 0x90)
struct UBP_LoadMagazine_3Bullets_Center_C : UItemActionSequenceLoadMagazine {
	struct FName StartSectionOneLoadedBullet; // 0x90(0x08)
	struct FName StartSectionTwoOrMoreLoadedBullets; // 0x98(0x08)
	struct FName EndSectionEmpty; // 0xa0(0x08)
	struct FName EndSectionOneLoadedBullet; // 0xa8(0x08)
	struct FName EndSectionTwoLoadedBullets; // 0xb0(0x08)

	struct FName GetEndSectionName(); // Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.GetEndSectionName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
	float Begin(); // Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.Begin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	bool CanBeSelected(struct UItemActionDescription* Description); // Function BP_LoadMagazine_3Bullets_Center.BP_LoadMagazine_3Bullets_Center_C.CanBeSelected // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
};

