// BlueprintGeneratedClass BPC_Kinglet_Mariner.BPC_Kinglet_Mariner_C
// Size: 0x1a58 (Inherited: 0x19f0)
struct ABPC_Kinglet_Mariner_C : AAirplane {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x19f0(0x08)
	struct UVehicleCameraComponent* VehicleCamera; // 0x19f8(0x08)
	struct UStaticMeshComponent* Propeller Alt Mesh; // 0x1a00(0x08)
	struct UBoxComponent* DamageRegion_WingRight; // 0x1a08(0x08)
	struct UBoxComponent* DamageRegion_WingLeft; // 0x1a10(0x08)
	struct UBoxComponent* DamageRegion_Floaters; // 0x1a18(0x08)
	struct UBoxComponent* DamageRegion_Elevator; // 0x1a20(0x08)
	struct UBoxComponent* DamageRegion_Rudder; // 0x1a28(0x08)
	struct UCapsuleComponent* DamageRegion_FuselageBack; // 0x1a30(0x08)
	struct UCapsuleComponent* DamageRegion_FuselageFront; // 0x1a38(0x08)
	struct UBoxComponent* DamageRegion_Propeller; // 0x1a40(0x08)
	struct UParticleSystemComponent* LeftWingAirFlowParticles; // 0x1a48(0x08)
	struct UParticleSystemComponent* RightWingAirFlowParticles; // 0x1a50(0x08)

	void ReceiveBeginPlay(); // Function BPC_Kinglet_Mariner.BPC_Kinglet_Mariner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BPC_Kinglet_Mariner(int32_t EntryPoint); // Function BPC_Kinglet_Mariner.BPC_Kinglet_Mariner_C.ExecuteUbergraph_BPC_Kinglet_Mariner // (Final|UbergraphFunction) // @ game+0x297fc00
};

