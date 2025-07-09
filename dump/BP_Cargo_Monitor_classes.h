// BlueprintGeneratedClass BP_Cargo_Monitor.BP_Cargo_Monitor_C
// Size: 0x24c (Inherited: 0x220)
struct ABP_Cargo_Monitor_C : AActor {
	struct UWidgetComponent* LockStateText; // 0x220(0x08)
	struct UWidgetComponent* ClockText; // 0x228(0x08)
	struct URectLightComponent* RectLight; // 0x230(0x08)
	struct UStaticMeshComponent* SM_Monitor_LP_01; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	float _time; // 0x248(0x04)

	void GetLockStateWidget(struct UUI_Diegetic_LockState_C*& LockStateWidget); // Function BP_Cargo_Monitor.BP_Cargo_Monitor_C.GetLockStateWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void GetTimerWidget(struct UKillBoxTimerWidget*& KillBoxTimerWidget); // Function BP_Cargo_Monitor.BP_Cargo_Monitor_C.GetTimerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
};

