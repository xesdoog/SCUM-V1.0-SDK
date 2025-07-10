// BlueprintGeneratedClass 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C
// Size: 0xb0 (Inherited: 0xa0)
struct U590A1_Reload_Event_Chamber_C : UInsertCartridge {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	int32_t LoadedAmmoCount; // 0xa8(0x04)
	int32_t MaxAmmoCount; // 0xac(0x04)

	float ExecuteUsingData(struct FWeaponReloadData& Data); // Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.ExecuteUsingData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	bool CanExecuteUsingData(struct FWeaponReloadData& Data); // Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.CanExecuteUsingData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x297fc00
	void OnActionAnimNotify(enum class ECharacterActionNotifyType notifyType); // Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.OnActionAnimNotify // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_590A1_Reload_Event_Chamber(int32_t EntryPoint); // Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.ExecuteUbergraph_590A1_Reload_Event_Chamber // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

