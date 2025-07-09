// BlueprintGeneratedClass BPC_Kinglet_Duster.BPC_Kinglet_Duster_C
// Size: 0x1a60 (Inherited: 0x19f0)
struct ABPC_Kinglet_Duster_C : AAirplane {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x19f0(0x08)
	struct UVehicleCameraComponent* VehicleCamera; // 0x19f8(0x08)
	struct UStaticMeshComponent* Propeller Alt Mesh; // 0x1a00(0x08)
	struct UBoxComponent* DamageRegion_WingRight; // 0x1a08(0x08)
	struct UBoxComponent* DamageRegion_WingLeft; // 0x1a10(0x08)
	struct UBoxComponent* DamageRegion_LandingGearBack; // 0x1a18(0x08)
	struct UBoxComponent* DamageRegion_LandingGearFront; // 0x1a20(0x08)
	struct UBoxComponent* DamageRegion_Elevator; // 0x1a28(0x08)
	struct UBoxComponent* DamageRegion_Rudder; // 0x1a30(0x08)
	struct UCapsuleComponent* DamageRegion_FuselageBack; // 0x1a38(0x08)
	struct UCapsuleComponent* DamageRegion_FuselageFront; // 0x1a40(0x08)
	struct UBoxComponent* DamageRegion_Propeller; // 0x1a48(0x08)
	struct UParticleSystemComponent* LeftWingAirFlowParticles; // 0x1a50(0x08)
	struct UParticleSystemComponent* RightWingAirFlowParticles; // 0x1a58(0x08)

	void ReceiveBeginPlay(); // Function BPC_Kinglet_Duster.BPC_Kinglet_Duster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_BPC_Kinglet_Duster(int32_t EntryPoint); // Function BPC_Kinglet_Duster.BPC_Kinglet_Duster_C.ExecuteUbergraph_BPC_Kinglet_Duster // (Final|UbergraphFunction) // @ game+0x297fc00
};

