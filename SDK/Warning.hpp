#ifndef UE4SS_SDK_Warning_HPP
#define UE4SS_SDK_Warning_HPP

class UWarning_C : public UWarning
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0280 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0288 (size: 0x8)
    bool _shouldShake;                                                                // 0x0290 (size: 0x1)
    float _shakeTime;                                                                 // 0x0294 (size: 0x4)
    float _shakeLength;                                                               // 0x0298 (size: 0x4)
    bool _shouldFade;                                                                 // 0x029C (size: 0x1)
    float _fadeLength;                                                                // 0x02A0 (size: 0x4)
    float _fadeDelay;                                                                 // 0x02A4 (size: 0x4)
    bool _isReadyForNextMessage;                                                      // 0x02A8 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Warning(int32 EntryPoint);
}; // Size: 0x2A9

#endif
