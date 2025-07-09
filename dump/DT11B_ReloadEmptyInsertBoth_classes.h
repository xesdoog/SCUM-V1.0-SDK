// BlueprintGeneratedClass DT11B_ReloadEmptyInsertBoth.DT11B_ReloadEmptyInsertBoth_C
// Size: 0xa9 (Inherited: 0xa0)
struct UDT11B_ReloadEmptyInsertBoth_C : UInsertCartridge {
	int32_t RequestedAmmoCount; // 0xa0(0x04)
	int32_t InsertedAmmoCount; // 0xa4(0x04)
	bool FinalSectionReached; // 0xa8(0x01)

	float ExecuteUsingData(struct FWeaponReloadData& Data); // Function DT11B_ReloadEmptyInsertBoth.DT11B_ReloadEmptyInsertBoth_C.ExecuteUsingData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	bool CanExecuteUsingData(struct FWeaponReloadData& Data); // Function DT11B_ReloadEmptyInsertBoth.DT11B_ReloadEmptyInsertBoth_C.CanExecuteUsingData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
};

