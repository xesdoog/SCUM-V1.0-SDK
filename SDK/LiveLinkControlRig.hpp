#ifndef UE4SS_SDK_LiveLinkControlRig_HPP
#define UE4SS_SDK_LiveLinkControlRig_HPP

struct FRigUnit_LiveLinkBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase
{
    FName SubjectName;                                                                // 0x0008 (size: 0x8)
    bool bDrawDebug;                                                                  // 0x0010 (size: 0x1)
    FLinearColor DebugColor;                                                          // 0x0014 (size: 0x10)
    FTransform DebugDrawOffset;                                                       // 0x0030 (size: 0x30)
    FSubjectFrameHandle SubjectFrame;                                                 // 0x0060 (size: 0x18)

}; // Size: 0x80

struct FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase
{
    FName SubjectName;                                                                // 0x0008 (size: 0x8)
    bool bDrawDebug;                                                                  // 0x0010 (size: 0x1)
    FLinearColor DebugColor;                                                          // 0x0014 (size: 0x10)
    FTransform DebugDrawOffset;                                                       // 0x0030 (size: 0x30)
    FTransform Transform;                                                             // 0x0060 (size: 0x30)

}; // Size: 0x90

struct FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase
{
    FSubjectFrameHandle SubjectFrame;                                                 // 0x0008 (size: 0x18)
    FName ParameterName;                                                              // 0x0020 (size: 0x8)
    float Value;                                                                      // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase
{
    FSubjectFrameHandle SubjectFrame;                                                 // 0x0008 (size: 0x18)
    FName TransformName;                                                              // 0x0020 (size: 0x8)
    EBoneGetterSetterMode Space;                                                      // 0x0028 (size: 0x1)
    FTransform Transform;                                                             // 0x0030 (size: 0x30)

}; // Size: 0x60

#endif
