#ifndef UE4SS_SDK_SCUE4_HPP
#define UE4SS_SDK_SCUE4_HPP

struct FSafeBool
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString Base;                                                                     // 0x0010 (size: 0x10)
    FString Shift;                                                                    // 0x0020 (size: 0x10)
    uint8 Flag;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSafeByte
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString Base;                                                                     // 0x0010 (size: 0x10)
    FString Shift;                                                                    // 0x0020 (size: 0x10)
    uint8 Flag;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSafeColor
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString TrueR;                                                                    // 0x0010 (size: 0x10)
    FString TrueG;                                                                    // 0x0020 (size: 0x10)
    FString TrueB;                                                                    // 0x0030 (size: 0x10)
    FString TrueA;                                                                    // 0x0040 (size: 0x10)
    FString ShiftR;                                                                   // 0x0050 (size: 0x10)
    FString ShiftG;                                                                   // 0x0060 (size: 0x10)
    FString ShiftB;                                                                   // 0x0070 (size: 0x10)
    FString ShiftA;                                                                   // 0x0080 (size: 0x10)
    uint8 Flag;                                                                       // 0x0090 (size: 0x1)

}; // Size: 0x98

struct FSafeFloat
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString Base;                                                                     // 0x0010 (size: 0x10)
    FString Shift;                                                                    // 0x0020 (size: 0x10)
    uint8 Flag;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSafeInt
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString Base;                                                                     // 0x0010 (size: 0x10)
    FString Shift;                                                                    // 0x0020 (size: 0x10)
    uint8 Flag;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSafeName
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString Base;                                                                     // 0x0010 (size: 0x10)
    FString Shift;                                                                    // 0x0020 (size: 0x10)
    uint8 Flag;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSafeRotator
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString TrueX;                                                                    // 0x0010 (size: 0x10)
    FString TrueY;                                                                    // 0x0020 (size: 0x10)
    FString TrueZ;                                                                    // 0x0030 (size: 0x10)
    FString ShiftX;                                                                   // 0x0040 (size: 0x10)
    FString ShiftY;                                                                   // 0x0050 (size: 0x10)
    FString ShiftZ;                                                                   // 0x0060 (size: 0x10)
    uint8 Flag;                                                                       // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FSafeString
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString Base;                                                                     // 0x0010 (size: 0x10)
    FString Shift;                                                                    // 0x0020 (size: 0x10)
    uint8 Flag;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSafeText
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString Base;                                                                     // 0x0010 (size: 0x10)
    FString Shift;                                                                    // 0x0020 (size: 0x10)
    uint8 Flag;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSafeTransform
{
    FSafeVector3D Scale;                                                              // 0x0000 (size: 0x78)
    FSafeVector3D position;                                                           // 0x0078 (size: 0x78)
    FSafeRotator Rotation;                                                            // 0x00F0 (size: 0x78)

}; // Size: 0x168

struct FSafeVector2D
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString TrueX;                                                                    // 0x0010 (size: 0x10)
    FString TrueY;                                                                    // 0x0020 (size: 0x10)
    FString ShiftX;                                                                   // 0x0030 (size: 0x10)
    FString ShiftY;                                                                   // 0x0040 (size: 0x10)
    uint8 Flag;                                                                       // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FSafeVector3D
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString TrueX;                                                                    // 0x0010 (size: 0x10)
    FString TrueY;                                                                    // 0x0020 (size: 0x10)
    FString TrueZ;                                                                    // 0x0030 (size: 0x10)
    FString ShiftX;                                                                   // 0x0040 (size: 0x10)
    FString ShiftY;                                                                   // 0x0050 (size: 0x10)
    FString ShiftZ;                                                                   // 0x0060 (size: 0x10)
    uint8 Flag;                                                                       // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FSafeVector4D
{
    FString Internal;                                                                 // 0x0000 (size: 0x10)
    FString TrueX;                                                                    // 0x0010 (size: 0x10)
    FString TrueY;                                                                    // 0x0020 (size: 0x10)
    FString TrueZ;                                                                    // 0x0030 (size: 0x10)
    FString TrueW;                                                                    // 0x0040 (size: 0x10)
    FString ShiftX;                                                                   // 0x0050 (size: 0x10)
    FString ShiftY;                                                                   // 0x0060 (size: 0x10)
    FString ShiftZ;                                                                   // 0x0070 (size: 0x10)
    FString ShiftW;                                                                   // 0x0080 (size: 0x10)
    uint8 Flag;                                                                       // 0x0090 (size: 0x1)

}; // Size: 0x98

class USCLibrary : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class USCUE4Settings : public UObject
{
    FString KeyGeneratorPath;                                                         // 0x0028 (size: 0x10)

}; // Size: 0x38

class USafeGameInstance : public UGameInstance
{
}; // Size: 0x1A8

class USafeGameInstanceSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x30

#endif
