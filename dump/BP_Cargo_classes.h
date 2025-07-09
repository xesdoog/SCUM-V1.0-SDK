// BlueprintGeneratedClass BP_Cargo.BP_Cargo_C
// Size: 0x408 (Inherited: 0x388)
struct ABP_Cargo_C : ABP_CargoDropContainer_Empty_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UChildActorComponent* Monitor; // 0x390(0x08)
	struct UChildActorComponent* ArmoryBox6; // 0x398(0x08)
	struct UChildActorComponent* ArmoryBox5; // 0x3a0(0x08)
	struct UChildActorComponent* ArmoryBox4; // 0x3a8(0x08)
	struct UChildActorComponent* ArmoryBox3; // 0x3b0(0x08)
	struct UChildActorComponent* ArmoryBox2; // 0x3b8(0x08)
	struct UChildActorComponent* ArmoryBox1; // 0x3c0(0x08)
	struct UParticleSystemComponent* DoorSparks; // 0x3c8(0x08)
	struct UChildActorComponent* ChildActor4; // 0x3d0(0x08)
	struct UChildActorComponent* ChildActor3; // 0x3d8(0x08)
	struct UChildActorComponent* ChildActor2; // 0x3e0(0x08)
	struct UChildActorComponent* ChildActor_1; // 0x3e8(0x08)
	struct UStaticMeshComponent* Frame; // 0x3f0(0x08)
	int32_t NumberOfZombies; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct ABP_Cargo_Monitor_C* MonitorReference; // 0x400(0x08)

	void GetMonitorBlueprintReference(struct ABP_Cargo_Monitor_C*& CargoMonitor); // Function BP_Cargo.BP_Cargo_C.GetMonitorBlueprintReference // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void SetupScreen(); // Function BP_Cargo.BP_Cargo_C.SetupScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void AddLocker(struct UChildActorComponent* Locker); // Function BP_Cargo.BP_Cargo_C.AddLocker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void SetupLockers(); // Function BP_Cargo.BP_Cargo_C.SetupLockers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function BP_Cargo.BP_Cargo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void OnDoorOpened(); // Function BP_Cargo.BP_Cargo_C.OnDoorOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_Cargo(int32_t EntryPoint); // Function BP_Cargo.BP_Cargo_C.ExecuteUbergraph_BP_Cargo // (Final|UbergraphFunction) // @ game+0x297fc00
};

