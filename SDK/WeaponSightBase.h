// BlueprintGeneratedClass WeaponSightBase.WeaponSightBase_C
// Size: 0x9e8 (Inherited: 0x9e0)
struct AWeaponSightBase_C : AWeaponAttachmentSight {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)

	void AddMeshTranslucentSortPriority(struct AWeapon* owningWeapon, int32_t Value); // Function WeaponSightBase.WeaponSightBase_C.AddMeshTranslucentSortPriority // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function WeaponSightBase.WeaponSightBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void OnAttachedToItem(struct AItem* Item); // Function WeaponSightBase.WeaponSightBase_C.OnAttachedToItem // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void OnDetachedFromItem(struct AItem* Item); // Function WeaponSightBase.WeaponSightBase_C.OnDetachedFromItem // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_WeaponSightBase(int32_t EntryPoint); // Function WeaponSightBase.WeaponSightBase_C.ExecuteUbergraph_WeaponSightBase // (Final|UbergraphFunction) // @ game+0x297fc00
};

