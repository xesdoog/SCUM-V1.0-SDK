// Class DcxVehicle.DcxVehicle
// Size: 0x290 (Inherited: 0x280)
struct ADcxVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x280(0x08)
	struct UDcxVehicleWheelsComponent* VehicleWheels; // 0x288(0x08)

	struct UDcxVehicleWheelsComponent* GetVehicleWheels(); // Function DcxVehicle.DcxVehicle.GetVehicleWheels // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9561c0
	struct USkeletalMeshComponent* GetMesh(); // Function DcxVehicle.DcxVehicle.GetMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955d00
	void DcxVehicleSetBasisVectors(struct FVector& Up, struct FVector& Forward); // Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x955340
};

// Class DcxVehicle.DcxVehicle4W
// Size: 0x290 (Inherited: 0x290)
struct ADcxVehicle4W : ADcxVehicle {

	struct UDcxVehicleDriveComponent4W* GetVehicleDrive4W(); // Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956100
};

// Class DcxVehicle.DcxVehicleAnimInstance
// Size: 0xa50 (Inherited: 0x2c0)
struct UDcxVehicleAnimInstance : UAnimInstance {
	char pad_2C0[0x780]; // 0x2c0(0x780)
	struct UDcxVehicleWheelsComponent* VehicleWheels; // 0xa40(0x08)
	char pad_A48[0x8]; // 0xa48(0x08)
};

// Class DcxVehicle.DcxVehicleWheelsComponent
// Size: 0x278 (Inherited: 0x138)
struct UDcxVehicleWheelsComponent : UPawnMovementComponent {
	char pad_138[0x38]; // 0x138(0x38)
	float ChassisMass; // 0x170(0x04)
	struct FVector InertiaTensorScale; // 0x174(0x0c)
	struct TArray<struct FDcxVehicleWheelConfiguration> WheelConfigurations; // 0x180(0x10)
	enum class ECollisionChannel SuspensionTraceCollisionChannel; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	struct FDcxVehicleTireLoadFilterData TireLoadFilter; // 0x194(0x10)
	bool bUseAvoidance; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	float AvoidanceWeight; // 0x1a8(0x04)
	int32_t AvoidanceUID; // 0x1ac(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x1b0(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x1b4(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x1b8(0x04)
	float ThresholdLongitudinalSpeed; // 0x1bc(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x1c0(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x1c4(0x04)
	float DragCoefficient; // 0x1c8(0x04)
	float DragArea; // 0x1cc(0x04)
	struct FDcxVehicleDriveInputRate ThrottleRate; // 0x1d0(0x08)
	struct FDcxVehicleDriveInputRate BrakeRate; // 0x1d8(0x08)
	struct FDcxVehicleDriveInputRate HandbrakeRate; // 0x1e0(0x08)
	struct FDcxVehicleDriveInputRate SteerRate; // 0x1e8(0x08)
	float AvoidanceRadius; // 0x1f0(0x04)
	float AvoidanceHeight; // 0x1f4(0x04)
	float AvoidanceConsiderationRadius; // 0x1f8(0x04)
	float AvoidanceThrottleStep; // 0x1fc(0x04)
	float AvoidanceBrakeStep; // 0x200(0x04)
	float AvoidanceSteerStep; // 0x204(0x04)
	char pad_208[0x1]; // 0x208(0x01)
	bool bRecreateRequired; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct UDcxVehicleWheelsRawInput* RawInput; // 0x210(0x08)
	struct TArray<float> SmoothAnalogControls; // 0x218(0x10)
	struct FDcxVehicleDriveState ReplicatedState; // 0x228(0x18)
	bool bWasAvoidanceUpdated; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FVector AvoidanceVelocity; // 0x244(0x0c)
	struct FVector AvoidanceLockVelocity; // 0x250(0x0c)
	float AvoidanceLockTimer; // 0x25c(0x04)
	char pad_260[0x18]; // 0x260(0x18)

	void SetWheelOffset(int32_t WheelIndex, struct FVector Offset); // Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x957c00
	void SetWheelData(int32_t WheelIndex, struct FDcxVehicleWheelData NewWheelData); // Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData // (Final|Native|Public|BlueprintCallable) // @ game+0x957b10
	void SetTire(int32_t WheelId, struct UDcxVehicleTire* NewTire); // Function DcxVehicle.DcxVehicleWheelsComponent.SetTire // (Final|Native|Public|BlueprintCallable) // @ game+0x957a40
	void SetSuspensionData(int32_t WheelIndex, struct FDcxVehicleSuspensionData NewSuspensionData); // Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData // (Final|Native|Public|BlueprintCallable) // @ game+0x957800
	void SetGroupsToIgnore(struct FNavAvoidanceMask& Mask); // Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x957410
	void SetGroupsToAvoid(struct FNavAvoidanceMask& Mask); // Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x957380
	void SetChassisMass(float Mass); // Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass // (Final|Native|Public|BlueprintCallable) // @ game+0x956ab0
	void SetAvoidanceGroup(struct FNavAvoidanceMask& Mask); // Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9568d0
	void ServerUpdateState(struct FDcxAnalogControlArray AnalogControls, struct FDcxGear CurrentGear, struct FDcxGear TargetGear); // Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x956780
	bool IsWheelInAir(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelInAir // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9566e0
	bool IsWheelDisabled(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956640
	bool GetWheelState(int32_t WheelIndex, struct FDcxVehicleWheelState& WheelState); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x956490
	float GetWheelRotationSpeed(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9563f0
	float GetWheelRotationAngle(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956350
	struct FVector GetWheelOffset(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9562a0
	struct FDcxVehicleWheelData GetWheelData(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9561f0
	struct UDcxVehicleTire* GetTire(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetTire // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956060
	struct FDcxVehicleSuspensionData GetSuspensionData(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955f50
	struct UDcxVehicleWheelsRawInput* GetRawInput(); // Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955d90
	int32_t GetNumWheels(); // Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955d30
	float GetForwardSpeed(); // Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955b20
	float GetChassisMass(); // Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9557b0
	struct FName GetBoneName(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955650
	float GetAnalogControl(char Control); // Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9555c0
	void EnableWheel(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x955530
	void EnableAvoidance(bool bEnabled); // Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance // (Final|Native|Public|BlueprintCallable) // @ game+0x9554a0
	void DisableWheel(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x955410
};

// Class DcxVehicle.DcxVehicleDriveComponent
// Size: 0x430 (Inherited: 0x278)
struct UDcxVehicleDriveComponent : UDcxVehicleWheelsComponent {
	struct FDcxVehicleEngineData EngineData; // 0x278(0xa0)
	struct FDcxVehicleGearboxData GearboxData; // 0x318(0x30)
	bool HasReducedGearbox; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FDcxVehicleGearboxData GearboxDataReduced; // 0x350(0x30)
	struct FDcxVehicleClutchData ClutchData; // 0x380(0x10)
	bool bAutoReverse; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	float WrongDirectionThreshold; // 0x394(0x04)
	bool bAutoBrake; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	float StopThreshold; // 0x39c(0x04)
	struct FRuntimeFloatCurve SteerCurve; // 0x3a0(0x88)
	char pad_428[0x8]; // 0x428(0x08)

	void SetTargetGear(int32_t NewGear, bool bImmediate); // Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear // (Final|Native|Public|BlueprintCallable) // @ game+0x9578f0
	void SetStickyFrictionEnabled(bool Value); // Function DcxVehicle.DcxVehicleDriveComponent.SetStickyFrictionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x957770
	void SetGearboxType(enum class EDcxVehicleGearbox NewGearboxType); // Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType // (Final|Native|Public|BlueprintCallable) // @ game+0x957300
	void SetGearboxData(struct FDcxVehicleGearboxData NewGearboxData); // Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData // (Native|Public|BlueprintCallable) // @ game+0x9571d0
	void SetEngineRotationSpeed(float RPM); // Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x957030
	void SetEngineData(struct FDcxVehicleEngineData NewEngineData); // Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData // (Native|Public|BlueprintCallable) // @ game+0x956f00
	void SetClutchData(struct FDcxVehicleClutchData NewClutchData); // Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData // (Final|Native|Public|BlueprintCallable) // @ game+0x956bb0
	int32_t GetTargetGear(); // Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956000
	bool GetStickyFrictionEnabled(); // Function DcxVehicle.DcxVehicleDriveComponent.GetStickyFrictionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955f20
	enum class EDcxVehicleGearbox GetGearboxType(); // Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955c70
	struct FDcxVehicleGearboxData GetGearboxData(); // Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955bb0
	float GetEngineRotationSpeed(); // Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955af0
	struct FDcxVehicleEngineData GetEngineData(); // Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9559a0
	int32_t GetCurrentGear(); // Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955850
	struct FDcxVehicleClutchData GetClutchData(); // Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955810
};

// Class DcxVehicle.DcxVehicleDriveComponent4W
// Size: 0x450 (Inherited: 0x430)
struct UDcxVehicleDriveComponent4W : UDcxVehicleDriveComponent {
	struct FDcxVehicleDifferentialData4W DifferentialData; // 0x430(0x1c)
	float AckermannGeometryAccuracy; // 0x44c(0x04)

	void SetDifferentialData(struct FDcxVehicleDifferentialData4W NewDifferentialData); // Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData // (Final|Native|Public|BlueprintCallable) // @ game+0x956c40
	struct UDcxVehicleDriveRawInput4W* GetRawInput4W(); // Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955d60
	struct FDcxVehicleDifferentialData4W GetDifferentialData(); // Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955880
};

// Class DcxVehicle.DcxVehicleDriveComponentNW
// Size: 0x430 (Inherited: 0x430)
struct UDcxVehicleDriveComponentNW : UDcxVehicleDriveComponent {

	void SetDrivenWheel(int32_t WheelIndex, bool bIsDriven); // Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x956e30
	bool IsDrivenWheel(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9565a0
	struct UDcxVehicleDriveRawInputNW* GetRawInputNW(); // Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955df0
};

// Class DcxVehicle.DcxVehicleDriveComponentTank
// Size: 0x438 (Inherited: 0x430)
struct UDcxVehicleDriveComponentTank : UDcxVehicleDriveComponent {
	enum class EDcxVehicleDriveControlModelTank DriveModel; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)

	void SetDriveModel(enum class EDcxVehicleDriveControlModelTank ControlModel); // Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel // (Final|Native|Public|BlueprintCallable) // @ game+0x956ce0
	struct UDcxVehicleDriveRawInputTank* GetRawInputTank(); // Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955e20
	enum class EDcxVehicleDriveControlModelTank GetDriveModel(); // Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9558d0
};

// Class DcxVehicle.DcxVehicleWheelsRawInput
// Size: 0x40 (Inherited: 0x28)
struct UDcxVehicleWheelsRawInput : UObject {
	int32_t ThrottleIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<float> RawAnalogControls; // 0x30(0x10)

	void SetThrottle(float Throttle); // Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle // (Final|Native|Public|BlueprintCallable) // @ game+0x9579c0
	float GetThrottle(); // Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956030
};

// Class DcxVehicle.DcxVehicleDriveRawInput
// Size: 0x48 (Inherited: 0x40)
struct UDcxVehicleDriveRawInput : UDcxVehicleWheelsRawInput {
	int32_t ClutchIndex; // 0x40(0x04)
	bool bGearUp; // 0x44(0x01)
	bool bGearDown; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)

	void SetGearUp(bool bGearUpPressed); // Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp // (Final|Native|Public|BlueprintCallable) // @ game+0x957140
	void SetGearDown(bool bGearDownPressed); // Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown // (Final|Native|Public|BlueprintCallable) // @ game+0x9570b0
	void SetClutch(float Clutch); // Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch // (Final|Native|Public|BlueprintCallable) // @ game+0x956b30
	bool GetGearUp(); // Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955b80
	bool GetGearDown(); // Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955b50
	float GetClutch(); // Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9557e0
};

// Class DcxVehicle.DcxVehicleDriveRawInput4W
// Size: 0x48 (Inherited: 0x48)
struct UDcxVehicleDriveRawInput4W : UDcxVehicleDriveRawInput {

	void SetSteer(float Steer); // Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer // (Final|Native|Public|BlueprintCallable) // @ game+0x957620
	void SetHandbrake(float Handbrake); // Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake // (Final|Native|Public|BlueprintCallable) // @ game+0x9574a0
	void SetBrake(float Brake); // Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake // (Final|Native|Public|BlueprintCallable) // @ game+0x956960
	float GetSteer(); // Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955cd0
	float GetHandbrake(); // Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955ca0
	float GetBrake(); // Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9556e0
};

// Class DcxVehicle.DcxVehicleDriveRawInputNW
// Size: 0x48 (Inherited: 0x48)
struct UDcxVehicleDriveRawInputNW : UDcxVehicleDriveRawInput4W {
};

// Class DcxVehicle.DcxVehicleDriveRawInputTank
// Size: 0x50 (Inherited: 0x48)
struct UDcxVehicleDriveRawInputTank : UDcxVehicleDriveRawInput {
	char pad_48[0x8]; // 0x48(0x08)

	void SetRightThrust(float Thrust); // Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust // (Final|Native|Public|BlueprintCallable) // @ game+0x9575a0
	void SetRightBrake(float Brake); // Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake // (Final|Native|Public|BlueprintCallable) // @ game+0x9574a0
	void SetLeftThrust(float Thrust); // Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust // (Final|Native|Public|BlueprintCallable) // @ game+0x957520
	void SetLeftBrake(float Brake); // Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake // (Final|Native|Public|BlueprintCallable) // @ game+0x956960
	float GetRightThrust(); // Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955e50
	float GetRightBrake(); // Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955ca0
	float GetLeftThrust(); // Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955cd0
	float GetLeftBrake(); // Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9556e0
};

// Class DcxVehicle.DcxVehicleNoDrive
// Size: 0x290 (Inherited: 0x290)
struct ADcxVehicleNoDrive : ADcxVehicle {

	struct UDcxVehicleNoDriveComponent* GetVehicleNoDrive(); // Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956190
};

// Class DcxVehicle.DcxVehicleNoDriveComponent
// Size: 0x280 (Inherited: 0x278)
struct UDcxVehicleNoDriveComponent : UDcxVehicleWheelsComponent {
	bool bUseRawInput; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float MaxDriveTorque; // 0x27c(0x04)

	void SetSteerAngle(int32_t WheelIndex, float SteerAngle); // Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x9576a0
	void SetDriveTorque(int32_t WheelIndex, float DriveTorque); // Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x956d60
	void SetBrakeTorque(int32_t WheelIndex, float BrakeTorque); // Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x9569e0
	float GetSteerAngle(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955e80
	struct UDcxVehicleNoDriveRawInput* GetRawInputND(); // Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955dc0
	float GetDriveTorque(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955900
	float GetBrakeTorque(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955710
};

// Class DcxVehicle.DcxVehicleNoDriveRawInput
// Size: 0x40 (Inherited: 0x40)
struct UDcxVehicleNoDriveRawInput : UDcxVehicleWheelsRawInput {

	void SetSteer(float NewSteer); // Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer // (Final|Native|Public|BlueprintCallable) // @ game+0x9574a0
	void SetBrake(float NewBrake); // Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake // (Final|Native|Public|BlueprintCallable) // @ game+0x956960
	float GetSteer(); // Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x955ca0
	float GetBrake(); // Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9556e0
};

// Class DcxVehicle.DcxVehicleNW
// Size: 0x290 (Inherited: 0x290)
struct ADcxVehicleNW : ADcxVehicle {

	struct UDcxVehicleDriveComponentNW* GetVehicleDriveNW(); // Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956130
};

// Class DcxVehicle.DcxVehicleTank
// Size: 0x290 (Inherited: 0x290)
struct ADcxVehicleTank : ADcxVehicle {

	struct UDcxVehicleDriveComponentTank* GetVehicleDriveTank(); // Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x956160
};

// Class DcxVehicle.DcxVehicleTire
// Size: 0xe0 (Inherited: 0x30)
struct UDcxVehicleTire : UDataAsset {
	char pad_30[0x4]; // 0x30(0x04)
	float LateralStiffnessX; // 0x34(0x04)
	float LateralStiffnessY; // 0x38(0x04)
	float LongitudinalStiffnessPerUnitGravity; // 0x3c(0x04)
	float CamberStiffnessPerUnitGravity; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRuntimeFloatCurve FrictionVsSlipGraph; // 0x48(0x88)
	struct TArray<struct FDcxDrivableSurfaceToTireFrictionPair> DrivableSurfaceToTireFrictionPairs; // 0xd0(0x10)
};

