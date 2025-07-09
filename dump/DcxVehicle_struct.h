// Enum DcxVehicle.EDcxVehicleClutchAccuracyMode
enum class EDcxVehicleClutchAccuracyMode : uint8 {
	Estimate = 0,
	BestPossible = 1,
	EDcxVehicleClutchAccuracyMode_MAX = 2
};

// Enum DcxVehicle.EDcxVehicleDifferential4W
enum class EDcxVehicleDifferential4W : uint8 {
	LS_4WD = 0,
	LS_FrontWD = 1,
	LS_RearWD = 2,
	Open_4WD = 3,
	Open_FrontWD = 4,
	Open_RearWD = 5,
	EDcxVehicleDifferential4W_MAX = 6
};

// Enum DcxVehicle.EDcxVehicleWheelOrder4W
enum class EDcxVehicleWheelOrder4W : uint8 {
	FrontLeft = 0,
	FrontRight = 1,
	RearLeft = 2,
	RearRight = 3,
	EDcxVehicleWheelOrder4W_MAX = 4
};

// Enum DcxVehicle.EDcxVehicleDriveControl4W
enum class EDcxVehicleDriveControl4W : uint8 {
	Throttle = 0,
	Brake = 1,
	Handbrake = 2,
	Steer = 3,
	Clutch = 4,
	NumControls = 5,
	EDcxVehicleDriveControl4W_MAX = 6
};

// Enum DcxVehicle.EDcxVehicleDriveControlNW
enum class EDcxVehicleDriveControlNW : uint8 {
	Throttle = 0,
	Brake = 1,
	Handbrake = 2,
	Steer = 3,
	Clutch = 4,
	NumControls = 5,
	EDcxVehicleDriveControlNW_MAX = 6
};

// Enum DcxVehicle.EDcxVehicleDriveControlModelTank
enum class EDcxVehicleDriveControlModelTank : uint8 {
	Standard = 0,
	Special = 1,
	EDcxVehicleDriveControlModelTank_MAX = 2
};

// Enum DcxVehicle.EDcxVehicleDriveControlTank
enum class EDcxVehicleDriveControlTank : uint8 {
	Throttle = 0,
	BrakeLeft = 1,
	BrakeRight = 2,
	ThrustLeft = 3,
	ThrustRight = 4,
	Clutch = 5,
	NumControls = 6,
	EDcxVehicleDriveControlTank_MAX = 7
};

// Enum DcxVehicle.EDcxVehicleGearbox
enum class EDcxVehicleGearbox : uint8 {
	Automatic = 0,
	SemiAutomatic = 1,
	Manual = 2,
	EDcxVehicleGearbox_MAX = 3
};

// Enum DcxVehicle.EDcxVehicleNoDriveControl
enum class EDcxVehicleNoDriveControl : uint8 {
	Throttle = 0,
	Brake = 1,
	Steer = 2,
	NumControls = 3,
	EDcxVehicleNoDriveControl_MAX = 4
};

// Enum DcxVehicle.EDcxVehicleWheelSweep
enum class EDcxVehicleWheelSweep : uint8 {
	Both = 0,
	Simple = 1,
	Complex = 2,
	EDcxVehicleWheelSweep_MAX = 3
};

// ScriptStruct DcxVehicle.DcxAnalogControlArray
// Size: 0x10 (Inherited: 0x00)
struct FDcxAnalogControlArray {
	struct TArray<float> Items; // 0x00(0x10)
};

// ScriptStruct DcxVehicle.DcxAnimNodeWheelSimulator
// Size: 0xe0 (Inherited: 0xc8)
struct FDcxAnimNodeWheelSimulator : FAnimNode_SkeletalControlBase {
	char pad_C8[0x18]; // 0xc8(0x18)
};

// ScriptStruct DcxVehicle.DcxGear
// Size: 0x04 (Inherited: 0x00)
struct FDcxGear {
	int32_t GearNum; // 0x00(0x04)
};

// ScriptStruct DcxVehicle.DcxMath
// Size: 0x01 (Inherited: 0x00)
struct FDcxMath {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct DcxVehicle.DcxVehicleAnimInstanceProxy
// Size: 0x780 (Inherited: 0x770)
struct FDcxVehicleAnimInstanceProxy : FAnimInstanceProxy {
	char pad_770[0x10]; // 0x770(0x10)
};

// ScriptStruct DcxVehicle.DcxVehicleClutchData
// Size: 0x10 (Inherited: 0x00)
struct FDcxVehicleClutchData {
	float BitePoint; // 0x00(0x04)
	float Strength; // 0x04(0x04)
	enum class EDcxVehicleClutchAccuracyMode AccuracyMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t EstimateIterations; // 0x0c(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleDifferentialData4W
// Size: 0x1c (Inherited: 0x00)
struct FDcxVehicleDifferentialData4W {
	enum class EDcxVehicleDifferential4W DifferentialType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FrontRearSplit; // 0x04(0x04)
	float FrontLeftRightSplit; // 0x08(0x04)
	float RearLeftRightSplit; // 0x0c(0x04)
	float CenterBias; // 0x10(0x04)
	float FrontBias; // 0x14(0x04)
	float RearBias; // 0x18(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleDriveInputRate
// Size: 0x08 (Inherited: 0x00)
struct FDcxVehicleDriveInputRate {
	float RiseRate; // 0x00(0x04)
	float FallRate; // 0x04(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleDriveState
// Size: 0x18 (Inherited: 0x00)
struct FDcxVehicleDriveState {
	struct FDcxAnalogControlArray AnalogControls; // 0x00(0x10)
	struct FDcxGear CurrentGear; // 0x10(0x04)
	struct FDcxGear TargetGear; // 0x14(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleEngineData
// Size: 0xa0 (Inherited: 0x00)
struct FDcxVehicleEngineData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float MOI; // 0x88(0x04)
	float IdleRPM; // 0x8c(0x04)
	float MaxRPM; // 0x90(0x04)
	float DampingRateFullThrottle; // 0x94(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x98(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x9c(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleGearboxData
// Size: 0x30 (Inherited: 0x00)
struct FDcxVehicleGearboxData {
	enum class EDcxVehicleGearbox Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FinalRatio; // 0x04(0x04)
	float SwitchTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FDcxVehicleGearData> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float Latency; // 0x24(0x04)
	float NeutralGearUpRatio; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleGearData
// Size: 0x0c (Inherited: 0x00)
struct FDcxVehicleGearData {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleSuspensionData
// Size: 0x20 (Inherited: 0x00)
struct FDcxVehicleSuspensionData {
	float NaturalFrequency; // 0x00(0x04)
	float SpringDamperRatio; // 0x04(0x04)
	float MaxCompression; // 0x08(0x04)
	float MaxDroop; // 0x0c(0x04)
	float ForceOffset; // 0x10(0x04)
	float CamberAtRest; // 0x14(0x04)
	float CamberAtMaxCompression; // 0x18(0x04)
	float CamberAtMaxDroop; // 0x1c(0x04)
};

// ScriptStruct DcxVehicle.DcxDrivableSurfaceToTireFrictionPair
// Size: 0x10 (Inherited: 0x00)
struct FDcxDrivableSurfaceToTireFrictionPair {
	struct UPhysicalMaterial* SurfaceMaterial; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleTireLoadFilterData
// Size: 0x10 (Inherited: 0x00)
struct FDcxVehicleTireLoadFilterData {
	float MinNormalizedLoad; // 0x00(0x04)
	float MinFilteredNormalizedLoad; // 0x04(0x04)
	float MaxNormalizedLoad; // 0x08(0x04)
	float MaxFilteredNormalizedLoad; // 0x0c(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleWheelData
// Size: 0x20 (Inherited: 0x00)
struct FDcxVehicleWheelData {
	float Radius; // 0x00(0x04)
	float Width; // 0x04(0x04)
	float Mass; // 0x08(0x04)
	float DampingRate; // 0x0c(0x04)
	float MaxBrakeTorque; // 0x10(0x04)
	float MaxHandBrakeTorque; // 0x14(0x04)
	float MaxSteer; // 0x18(0x04)
	float ToeAngle; // 0x1c(0x04)
};

// ScriptStruct DcxVehicle.DcxVehicleWheelConfiguration
// Size: 0x78 (Inherited: 0x00)
struct FDcxVehicleWheelConfiguration {
	struct FName BoneName; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct UStaticMesh* CollisionMesh; // 0x18(0x08)
	bool bUsePresetShape; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FDcxVehicleWheelData WheelData; // 0x24(0x20)
	struct FDcxVehicleSuspensionData SuspensionData; // 0x44(0x20)
	char pad_64[0x4]; // 0x64(0x04)
	struct UDcxVehicleTire* Tire; // 0x68(0x08)
	bool bIsDriven; // 0x70(0x01)
	enum class EDcxVehicleWheelSweep SweepType; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct DcxVehicle.DcxVehicleWheelState
// Size: 0xb0 (Inherited: 0x00)
struct FDcxVehicleWheelState {
	struct FVector SuspensionLineStart; // 0x00(0x0c)
	struct FVector SuspensionLineDirection; // 0x0c(0x0c)
	float SuspensionLineLength; // 0x18(0x04)
	bool bIsInAir; // 0x1c(0x01)
	bool bWasOnGround; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct AActor* TireContactActor; // 0x20(0x08)
	struct UPhysicalMaterial* TireSurfaceMaterial; // 0x28(0x08)
	struct FVector TireContactPoint; // 0x30(0x0c)
	struct FVector TireContactNormal; // 0x3c(0x0c)
	float TireFriction; // 0x48(0x04)
	float SuspensionJounce; // 0x4c(0x04)
	float SuspensionSpringForce; // 0x50(0x04)
	struct FVector TireLongitudinalDirection; // 0x54(0x0c)
	struct FVector TireLateralDirection; // 0x60(0x0c)
	float LongitudinalSlip; // 0x6c(0x04)
	float LateralSlip; // 0x70(0x04)
	float SteerAngle; // 0x74(0x04)
	char pad_78[0x38]; // 0x78(0x38)
};

