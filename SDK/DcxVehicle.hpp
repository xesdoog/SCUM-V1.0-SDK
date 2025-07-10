#ifndef UE4SS_SDK_DcxVehicle_HPP
#define UE4SS_SDK_DcxVehicle_HPP

#include "DcxVehicle_enums.hpp"

struct FDcxAnalogControlArray
{
    TArray<float> Items;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDcxAnimNodeWheelSimulator : public FAnimNode_SkeletalControlBase
{
}; // Size: 0xE0

struct FDcxDrivableSurfaceToTireFrictionPair
{
    class UPhysicalMaterial* SurfaceMaterial;                                         // 0x0000 (size: 0x8)
    float FrictionScale;                                                              // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FDcxGear
{
    int32 GearNum;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FDcxMath
{
}; // Size: 0x1

struct FDcxVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0x780

struct FDcxVehicleClutchData
{
    float BitePoint;                                                                  // 0x0000 (size: 0x4)
    float Strength;                                                                   // 0x0004 (size: 0x4)
    TEnumAsByte<EDcxVehicleClutchAccuracyMode::Type> AccuracyMode;                    // 0x0008 (size: 0x1)
    int32 EstimateIterations;                                                         // 0x000C (size: 0x4)

}; // Size: 0x10

struct FDcxVehicleDifferentialData4W
{
    TEnumAsByte<EDcxVehicleDifferential4W::Type> DifferentialType;                    // 0x0000 (size: 0x1)
    float FrontRearSplit;                                                             // 0x0004 (size: 0x4)
    float FrontLeftRightSplit;                                                        // 0x0008 (size: 0x4)
    float RearLeftRightSplit;                                                         // 0x000C (size: 0x4)
    float CenterBias;                                                                 // 0x0010 (size: 0x4)
    float FrontBias;                                                                  // 0x0014 (size: 0x4)
    float RearBias;                                                                   // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FDcxVehicleDriveInputRate
{
    float RiseRate;                                                                   // 0x0000 (size: 0x4)
    float FallRate;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FDcxVehicleDriveState
{
    FDcxAnalogControlArray AnalogControls;                                            // 0x0000 (size: 0x10)
    FDcxGear CurrentGear;                                                             // 0x0010 (size: 0x4)
    FDcxGear TargetGear;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FDcxVehicleEngineData
{
    FRuntimeFloatCurve TorqueCurve;                                                   // 0x0000 (size: 0x88)
    float MOI;                                                                        // 0x0088 (size: 0x4)
    float IdleRPM;                                                                    // 0x008C (size: 0x4)
    float MaxRPM;                                                                     // 0x0090 (size: 0x4)
    float DampingRateFullThrottle;                                                    // 0x0094 (size: 0x4)
    float DampingRateZeroThrottleClutchEngaged;                                       // 0x0098 (size: 0x4)
    float DampingRateZeroThrottleClutchDisengaged;                                    // 0x009C (size: 0x4)

}; // Size: 0xA0

struct FDcxVehicleGearData
{
    float Ratio;                                                                      // 0x0000 (size: 0x4)
    float DownRatio;                                                                  // 0x0004 (size: 0x4)
    float UpRatio;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FDcxVehicleGearboxData
{
    TEnumAsByte<EDcxVehicleGearbox::Type> Type;                                       // 0x0000 (size: 0x1)
    float FinalRatio;                                                                 // 0x0004 (size: 0x4)
    float SwitchTime;                                                                 // 0x0008 (size: 0x4)
    TArray<FDcxVehicleGearData> ForwardGears;                                         // 0x0010 (size: 0x10)
    float ReverseGearRatio;                                                           // 0x0020 (size: 0x4)
    float Latency;                                                                    // 0x0024 (size: 0x4)
    float NeutralGearUpRatio;                                                         // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FDcxVehicleSuspensionData
{
    float NaturalFrequency;                                                           // 0x0000 (size: 0x4)
    float SpringDamperRatio;                                                          // 0x0004 (size: 0x4)
    float MaxCompression;                                                             // 0x0008 (size: 0x4)
    float MaxDroop;                                                                   // 0x000C (size: 0x4)
    float ForceOffset;                                                                // 0x0010 (size: 0x4)
    float CamberAtRest;                                                               // 0x0014 (size: 0x4)
    float CamberAtMaxCompression;                                                     // 0x0018 (size: 0x4)
    float CamberAtMaxDroop;                                                           // 0x001C (size: 0x4)

}; // Size: 0x20

struct FDcxVehicleTireLoadFilterData
{
    float MinNormalizedLoad;                                                          // 0x0000 (size: 0x4)
    float MinFilteredNormalizedLoad;                                                  // 0x0004 (size: 0x4)
    float MaxNormalizedLoad;                                                          // 0x0008 (size: 0x4)
    float MaxFilteredNormalizedLoad;                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

struct FDcxVehicleWheelConfiguration
{
    FName BoneName;                                                                   // 0x0000 (size: 0x8)
    FVector Offset;                                                                   // 0x0008 (size: 0xC)
    class UStaticMesh* CollisionMesh;                                                 // 0x0018 (size: 0x8)
    bool bUsePresetShape;                                                             // 0x0020 (size: 0x1)
    FDcxVehicleWheelData WheelData;                                                   // 0x0024 (size: 0x20)
    FDcxVehicleSuspensionData SuspensionData;                                         // 0x0044 (size: 0x20)
    class UDcxVehicleTire* Tire;                                                      // 0x0068 (size: 0x8)
    bool bIsDriven;                                                                   // 0x0070 (size: 0x1)
    TEnumAsByte<EDcxVehicleWheelSweep::Type> SweepType;                               // 0x0071 (size: 0x1)

}; // Size: 0x78

struct FDcxVehicleWheelData
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    float Width;                                                                      // 0x0004 (size: 0x4)
    float Mass;                                                                       // 0x0008 (size: 0x4)
    float DampingRate;                                                                // 0x000C (size: 0x4)
    float MaxBrakeTorque;                                                             // 0x0010 (size: 0x4)
    float MaxHandBrakeTorque;                                                         // 0x0014 (size: 0x4)
    float MaxSteer;                                                                   // 0x0018 (size: 0x4)
    float ToeAngle;                                                                   // 0x001C (size: 0x4)

}; // Size: 0x20

struct FDcxVehicleWheelState
{
    FVector SuspensionLineStart;                                                      // 0x0000 (size: 0xC)
    FVector SuspensionLineDirection;                                                  // 0x000C (size: 0xC)
    float SuspensionLineLength;                                                       // 0x0018 (size: 0x4)
    bool bIsInAir;                                                                    // 0x001C (size: 0x1)
    bool bWasOnGround;                                                                // 0x001D (size: 0x1)
    class AActor* TireContactActor;                                                   // 0x0020 (size: 0x8)
    class UPhysicalMaterial* TireSurfaceMaterial;                                     // 0x0028 (size: 0x8)
    FVector TireContactPoint;                                                         // 0x0030 (size: 0xC)
    FVector TireContactNormal;                                                        // 0x003C (size: 0xC)
    float TireFriction;                                                               // 0x0048 (size: 0x4)
    float SuspensionJounce;                                                           // 0x004C (size: 0x4)
    float SuspensionSpringForce;                                                      // 0x0050 (size: 0x4)
    FVector TireLongitudinalDirection;                                                // 0x0054 (size: 0xC)
    FVector TireLateralDirection;                                                     // 0x0060 (size: 0xC)
    float LongitudinalSlip;                                                           // 0x006C (size: 0x4)
    float LateralSlip;                                                                // 0x0070 (size: 0x4)
    float SteerAngle;                                                                 // 0x0074 (size: 0x4)

}; // Size: 0xB0

class ADcxVehicle : public APawn
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0280 (size: 0x8)
    class UDcxVehicleWheelsComponent* VehicleWheels;                                  // 0x0288 (size: 0x8)

    class UDcxVehicleWheelsComponent* GetVehicleWheels();
    class USkeletalMeshComponent* GetMesh();
    void DcxVehicleSetBasisVectors(const FVector& Up, const FVector& Forward);
}; // Size: 0x290

class ADcxVehicle4W : public ADcxVehicle
{

    class UDcxVehicleDriveComponent4W* GetVehicleDrive4W();
}; // Size: 0x290

class ADcxVehicleNW : public ADcxVehicle
{

    class UDcxVehicleDriveComponentNW* GetVehicleDriveNW();
}; // Size: 0x290

class ADcxVehicleNoDrive : public ADcxVehicle
{

    class UDcxVehicleNoDriveComponent* GetVehicleNoDrive();
}; // Size: 0x290

class ADcxVehicleTank : public ADcxVehicle
{

    class UDcxVehicleDriveComponentTank* GetVehicleDriveTank();
}; // Size: 0x290

class UDcxVehicleAnimInstance : public UAnimInstance
{
    class UDcxVehicleWheelsComponent* VehicleWheels;                                  // 0x0A40 (size: 0x8)

}; // Size: 0xA50

class UDcxVehicleDriveComponent : public UDcxVehicleWheelsComponent
{
    FDcxVehicleEngineData EngineData;                                                 // 0x0278 (size: 0xA0)
    FDcxVehicleGearboxData GearboxData;                                               // 0x0318 (size: 0x30)
    bool HasReducedGearbox;                                                           // 0x0348 (size: 0x1)
    FDcxVehicleGearboxData GearboxDataReduced;                                        // 0x0350 (size: 0x30)
    FDcxVehicleClutchData ClutchData;                                                 // 0x0380 (size: 0x10)
    bool bAutoReverse;                                                                // 0x0390 (size: 0x1)
    float WrongDirectionThreshold;                                                    // 0x0394 (size: 0x4)
    bool bAutoBrake;                                                                  // 0x0398 (size: 0x1)
    float StopThreshold;                                                              // 0x039C (size: 0x4)
    FRuntimeFloatCurve SteerCurve;                                                    // 0x03A0 (size: 0x88)

    void SetTargetGear(int32 NewGear, bool bImmediate);
    void SetStickyFrictionEnabled(bool Value);
    void SetGearboxType(TEnumAsByte<EDcxVehicleGearbox::Type> NewGearboxType);
    void SetGearboxData(FDcxVehicleGearboxData NewGearboxData);
    void SetEngineRotationSpeed(float RPM);
    void SetEngineData(FDcxVehicleEngineData NewEngineData);
    void SetClutchData(FDcxVehicleClutchData NewClutchData);
    int32 GetTargetGear();
    bool GetStickyFrictionEnabled();
    TEnumAsByte<EDcxVehicleGearbox::Type> GetGearboxType();
    FDcxVehicleGearboxData GetGearboxData();
    float GetEngineRotationSpeed();
    FDcxVehicleEngineData GetEngineData();
    int32 GetCurrentGear();
    FDcxVehicleClutchData GetClutchData();
}; // Size: 0x430

class UDcxVehicleDriveComponent4W : public UDcxVehicleDriveComponent
{
    FDcxVehicleDifferentialData4W DifferentialData;                                   // 0x0430 (size: 0x1C)
    float AckermannGeometryAccuracy;                                                  // 0x044C (size: 0x4)

    void SetDifferentialData(FDcxVehicleDifferentialData4W NewDifferentialData);
    class UDcxVehicleDriveRawInput4W* GetRawInput4W();
    FDcxVehicleDifferentialData4W GetDifferentialData();
}; // Size: 0x450

class UDcxVehicleDriveComponentNW : public UDcxVehicleDriveComponent
{

    void SetDrivenWheel(int32 WheelIndex, bool bIsDriven);
    bool IsDrivenWheel(int32 WheelIndex);
    class UDcxVehicleDriveRawInputNW* GetRawInputNW();
}; // Size: 0x430

class UDcxVehicleDriveComponentTank : public UDcxVehicleDriveComponent
{
    TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> DriveModel;                   // 0x0430 (size: 0x1)

    void SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> ControlModel);
    class UDcxVehicleDriveRawInputTank* GetRawInputTank();
    TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> GetDriveModel();
}; // Size: 0x438

class UDcxVehicleDriveRawInput : public UDcxVehicleWheelsRawInput
{
    int32 ClutchIndex;                                                                // 0x0040 (size: 0x4)
    bool bGearUp;                                                                     // 0x0044 (size: 0x1)
    bool bGearDown;                                                                   // 0x0045 (size: 0x1)

    void SetGearUp(const bool bGearUpPressed);
    void SetGearDown(const bool bGearDownPressed);
    void SetClutch(const float Clutch);
    bool GetGearUp();
    bool GetGearDown();
    float GetClutch();
}; // Size: 0x48

class UDcxVehicleDriveRawInput4W : public UDcxVehicleDriveRawInput
{

    void SetSteer(const float Steer);
    void SetHandbrake(const float Handbrake);
    void SetBrake(const float Brake);
    float GetSteer();
    float GetHandbrake();
    float GetBrake();
}; // Size: 0x48

class UDcxVehicleDriveRawInputNW : public UDcxVehicleDriveRawInput4W
{
}; // Size: 0x48

class UDcxVehicleDriveRawInputTank : public UDcxVehicleDriveRawInput
{

    void SetRightThrust(float Thrust);
    void SetRightBrake(float Brake);
    void SetLeftThrust(float Thrust);
    void SetLeftBrake(float Brake);
    float GetRightThrust();
    float GetRightBrake();
    float GetLeftThrust();
    float GetLeftBrake();
}; // Size: 0x50

class UDcxVehicleNoDriveComponent : public UDcxVehicleWheelsComponent
{
    bool bUseRawInput;                                                                // 0x0278 (size: 0x1)
    float MaxDriveTorque;                                                             // 0x027C (size: 0x4)

    void SetSteerAngle(int32 WheelIndex, float SteerAngle);
    void SetDriveTorque(int32 WheelIndex, float DriveTorque);
    void SetBrakeTorque(int32 WheelIndex, float BrakeTorque);
    float GetSteerAngle(int32 WheelIndex);
    class UDcxVehicleNoDriveRawInput* GetRawInputND();
    float GetDriveTorque(int32 WheelIndex);
    float GetBrakeTorque(int32 WheelIndex);
}; // Size: 0x280

class UDcxVehicleNoDriveRawInput : public UDcxVehicleWheelsRawInput
{

    void SetSteer(const float NewSteer);
    void SetBrake(const float NewBrake);
    float GetSteer();
    float GetBrake();
}; // Size: 0x40

class UDcxVehicleTire : public UDataAsset
{
    float LateralStiffnessX;                                                          // 0x0034 (size: 0x4)
    float LateralStiffnessY;                                                          // 0x0038 (size: 0x4)
    float LongitudinalStiffnessPerUnitGravity;                                        // 0x003C (size: 0x4)
    float CamberStiffnessPerUnitGravity;                                              // 0x0040 (size: 0x4)
    FRuntimeFloatCurve FrictionVsSlipGraph;                                           // 0x0048 (size: 0x88)
    TArray<FDcxDrivableSurfaceToTireFrictionPair> DrivableSurfaceToTireFrictionPairs; // 0x00D0 (size: 0x10)

}; // Size: 0xE0

class UDcxVehicleWheelsComponent : public UPawnMovementComponent
{
    float ChassisMass;                                                                // 0x0170 (size: 0x4)
    FVector InertiaTensorScale;                                                       // 0x0174 (size: 0xC)
    TArray<FDcxVehicleWheelConfiguration> WheelConfigurations;                        // 0x0180 (size: 0x10)
    TEnumAsByte<ECollisionChannel> SuspensionTraceCollisionChannel;                   // 0x0190 (size: 0x1)
    FDcxVehicleTireLoadFilterData TireLoadFilter;                                     // 0x0194 (size: 0x10)
    bool bUseAvoidance;                                                               // 0x01A4 (size: 0x1)
    float AvoidanceWeight;                                                            // 0x01A8 (size: 0x4)
    int32 AvoidanceUID;                                                               // 0x01AC (size: 0x4)
    FNavAvoidanceMask AvoidanceGroup;                                                 // 0x01B0 (size: 0x4)
    FNavAvoidanceMask GroupsToAvoid;                                                  // 0x01B4 (size: 0x4)
    FNavAvoidanceMask GroupsToIgnore;                                                 // 0x01B8 (size: 0x4)
    float ThresholdLongitudinalSpeed;                                                 // 0x01BC (size: 0x4)
    int32 LowForwardSpeedSubStepCount;                                                // 0x01C0 (size: 0x4)
    int32 HighForwardSpeedSubStepCount;                                               // 0x01C4 (size: 0x4)
    float DragCoefficient;                                                            // 0x01C8 (size: 0x4)
    float DragArea;                                                                   // 0x01CC (size: 0x4)
    FDcxVehicleDriveInputRate ThrottleRate;                                           // 0x01D0 (size: 0x8)
    FDcxVehicleDriveInputRate BrakeRate;                                              // 0x01D8 (size: 0x8)
    FDcxVehicleDriveInputRate HandbrakeRate;                                          // 0x01E0 (size: 0x8)
    FDcxVehicleDriveInputRate SteerRate;                                              // 0x01E8 (size: 0x8)
    float AvoidanceRadius;                                                            // 0x01F0 (size: 0x4)
    float AvoidanceHeight;                                                            // 0x01F4 (size: 0x4)
    float AvoidanceConsiderationRadius;                                               // 0x01F8 (size: 0x4)
    float AvoidanceThrottleStep;                                                      // 0x01FC (size: 0x4)
    float AvoidanceBrakeStep;                                                         // 0x0200 (size: 0x4)
    float AvoidanceSteerStep;                                                         // 0x0204 (size: 0x4)
    bool bRecreateRequired;                                                           // 0x0209 (size: 0x1)
    class UDcxVehicleWheelsRawInput* RawInput;                                        // 0x0210 (size: 0x8)
    TArray<float> SmoothAnalogControls;                                               // 0x0218 (size: 0x10)
    FDcxVehicleDriveState ReplicatedState;                                            // 0x0228 (size: 0x18)
    bool bWasAvoidanceUpdated;                                                        // 0x0240 (size: 0x1)
    FVector AvoidanceVelocity;                                                        // 0x0244 (size: 0xC)
    FVector AvoidanceLockVelocity;                                                    // 0x0250 (size: 0xC)
    float AvoidanceLockTimer;                                                         // 0x025C (size: 0x4)

    void SetWheelOffset(int32 WheelIndex, FVector Offset);
    void SetWheelData(int32 WheelIndex, FDcxVehicleWheelData NewWheelData);
    void SetTire(int32 WheelId, class UDcxVehicleTire* NewTire);
    void SetSuspensionData(int32 WheelIndex, FDcxVehicleSuspensionData NewSuspensionData);
    void SetGroupsToIgnore(const FNavAvoidanceMask& Mask);
    void SetGroupsToAvoid(const FNavAvoidanceMask& Mask);
    void SetChassisMass(float Mass);
    void SetAvoidanceGroup(const FNavAvoidanceMask& Mask);
    void ServerUpdateState(const FDcxAnalogControlArray& AnalogControls, const FDcxGear& CurrentGear, const FDcxGear& TargetGear);
    bool IsWheelInAir(int32 WheelIndex);
    bool IsWheelDisabled(int32 WheelIndex);
    bool GetWheelState(int32 WheelIndex, FDcxVehicleWheelState& WheelState);
    float GetWheelRotationSpeed(int32 WheelIndex);
    float GetWheelRotationAngle(int32 WheelIndex);
    FVector GetWheelOffset(int32 WheelIndex);
    FDcxVehicleWheelData GetWheelData(int32 WheelIndex);
    class UDcxVehicleTire* GetTire(int32 WheelIndex);
    FDcxVehicleSuspensionData GetSuspensionData(int32 WheelIndex);
    class UDcxVehicleWheelsRawInput* GetRawInput();
    int32 GetNumWheels();
    float GetForwardSpeed();
    float GetChassisMass();
    FName GetBoneName(int32 WheelIndex);
    float GetAnalogControl(uint8 Control);
    void EnableWheel(int32 WheelIndex);
    void EnableAvoidance(bool bEnabled);
    void DisableWheel(int32 WheelIndex);
}; // Size: 0x278

class UDcxVehicleWheelsRawInput : public UObject
{
    int32 ThrottleIndex;                                                              // 0x0028 (size: 0x4)
    TArray<float> RawAnalogControls;                                                  // 0x0030 (size: 0x10)

    void SetThrottle(const float Throttle);
    float GetThrottle();
}; // Size: 0x40

#endif
