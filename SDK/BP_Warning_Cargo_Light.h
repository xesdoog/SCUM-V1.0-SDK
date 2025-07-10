// BlueprintGeneratedClass BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C
// Size: 0x241 (Inherited: 0x220)
struct ABP_Warning_Cargo_Light_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UChildActorComponent* SpotLight; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	float YawAngle; // 0x238(0x04)
	float RotationSpeed; // 0x23c(0x04)
	bool LightOn; // 0x240(0x01)

	void GetLight(bool& LightOn); // Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.GetLight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void SetLight(bool Enabled); // Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.SetLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void ReceiveTick(float DeltaSeconds); // Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BP_Warning_Cargo_Light(int32_t EntryPoint); // Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ExecuteUbergraph_BP_Warning_Cargo_Light // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

