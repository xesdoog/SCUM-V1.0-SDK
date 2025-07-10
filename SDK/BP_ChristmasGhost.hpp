#ifndef UE4SS_SDK_BP_ChristmasGhost_HPP
#define UE4SS_SDK_BP_ChristmasGhost_HPP

class ABP_ChristmasGhost_C : public AChristmasGhost
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class USkeletalMeshComponent* Ghost;                                              // 0x0308 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0310 (size: 0x8)
    TArray<class USkeletalMesh*> PossibleMeshes;                                      // 0x0318 (size: 0x10)
    class UAnimMontage* MontageToPlay;                                                // 0x0328 (size: 0x8)

    void OnNotifyEnd_BD830BA54751BA88132EE8B90C969374(FName NotifyName);
    void OnNotifyBegin_BD830BA54751BA88132EE8B90C969374(FName NotifyName);
    void OnInterrupted_BD830BA54751BA88132EE8B90C969374(FName NotifyName);
    void OnBlendOut_BD830BA54751BA88132EE8B90C969374(FName NotifyName);
    void OnCompleted_BD830BA54751BA88132EE8B90C969374(FName NotifyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ChristmasGhost(int32 EntryPoint);
}; // Size: 0x330

#endif
