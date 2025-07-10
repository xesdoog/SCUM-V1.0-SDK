#ifndef UE4SS_SDK_MIDIDevice_HPP
#define UE4SS_SDK_MIDIDevice_HPP

#include "MIDIDevice_enums.hpp"

struct FFoundMIDIDevice
{
    int32 DeviceID;                                                                   // 0x0000 (size: 0x4)
    FString DeviceName;                                                               // 0x0008 (size: 0x10)
    bool bCanReceiveFrom;                                                             // 0x0018 (size: 0x1)
    bool bCanSendTo;                                                                  // 0x0019 (size: 0x1)
    bool bIsAlreadyInUse;                                                             // 0x001A (size: 0x1)
    bool bIsDefaultInputDevice;                                                       // 0x001B (size: 0x1)
    bool bIsDefaultOutputDevice;                                                      // 0x001C (size: 0x1)

}; // Size: 0x20

struct FMIDIDeviceInfo
{
    int32 DeviceID;                                                                   // 0x0000 (size: 0x4)
    FString DeviceName;                                                               // 0x0008 (size: 0x10)
    bool bIsAlreadyInUse;                                                             // 0x0018 (size: 0x1)
    bool bIsDefaultDevice;                                                            // 0x0019 (size: 0x1)

}; // Size: 0x20

class UMIDIDeviceController : public UMIDIDeviceControllerBase
{
    FMIDIDeviceControllerOnMidiEvent OnMidiEvent;                                     // 0x0028 (size: 0x10)
    void OnMIDIEvent(class UMIDIDeviceController* MIDIDeviceController, int32 Timestamp, EMIDIEventType EventType, int32 Channel, int32 ControlID, int32 Velocity, int32 RawEventType);
    int32 DeviceID;                                                                   // 0x0038 (size: 0x4)
    FString DeviceName;                                                               // 0x0040 (size: 0x10)

}; // Size: 0x60

class UMIDIDeviceControllerBase : public UObject
{
}; // Size: 0x28

class UMIDIDeviceInputController : public UMIDIDeviceControllerBase
{
    FMIDIDeviceInputControllerOnMIDINoteOn OnMIDINoteOn;                              // 0x0028 (size: 0x10)
    void OnMIDINoteOn(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity);
    FMIDIDeviceInputControllerOnMIDINoteOff OnMIDINoteOff;                            // 0x0038 (size: 0x10)
    void OnMIDINoteOff(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity);
    FMIDIDeviceInputControllerOnMIDIPitchBend OnMIDIPitchBend;                        // 0x0048 (size: 0x10)
    void OnMIDIPitchBend(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Pitch);
    FMIDIDeviceInputControllerOnMIDIAftertouch OnMIDIAftertouch;                      // 0x0058 (size: 0x10)
    void OnMIDIAftertouch(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Amount);
    FMIDIDeviceInputControllerOnMIDIControlChange OnMIDIControlChange;                // 0x0068 (size: 0x10)
    void OnMIDIControlChange(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Type, int32 Value);
    FMIDIDeviceInputControllerOnMIDIProgramChange OnMIDIProgramChange;                // 0x0078 (size: 0x10)
    void OnMIDIProgramChange(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 ControlID, int32 Velocity);
    FMIDIDeviceInputControllerOnMIDIChannelAftertouch OnMIDIChannelAftertouch;        // 0x0088 (size: 0x10)
    void OnMIDIChannelAftertouch(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Amount);
    int32 DeviceID;                                                                   // 0x00B0 (size: 0x4)
    FString DeviceName;                                                               // 0x00B8 (size: 0x10)

}; // Size: 0xD8

class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{

    void GetMIDIOutputDeviceIDByName(const FString DeviceName, int32& DeviceID);
    void GetMIDIInputDeviceIDByName(const FString DeviceName, int32& DeviceID);
    void GetDefaultMIDIOutputDeviceID(int32& DeviceID);
    void GetDefaultMIDIInputDeviceID(int32& DeviceID);
    void FindMIDIDevices(TArray<FFoundMIDIDevice>& OutMIDIDevices);
    void FindAllMIDIDeviceInfo(TArray<FMIDIDeviceInfo>& OutMIDIInputDevices, TArray<FMIDIDeviceInfo>& OutMIDIOutputDevices);
    class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(const int32 DeviceID);
    class UMIDIDeviceInputController* CreateMIDIDeviceInputController(const int32 DeviceID, const int32 MIDIBufferSize);
    class UMIDIDeviceController* CreateMIDIDeviceController(const int32 DeviceID, const int32 MIDIBufferSize);
}; // Size: 0x28

class UMIDIDeviceOutputController : public UMIDIDeviceControllerBase
{
    int32 DeviceID;                                                                   // 0x0028 (size: 0x4)
    FString DeviceName;                                                               // 0x0030 (size: 0x10)

    void SendMIDIProgramChange(int32 Channel, int32 ProgramNumber);
    void SendMIDIPitchBend(int32 Channel, int32 Pitch);
    void SendMIDINoteOn(int32 Channel, int32 Note, int32 Velocity);
    void SendMIDINoteOff(int32 Channel, int32 Note, int32 Velocity);
    void SendMIDINoteAftertouch(int32 Channel, int32 Note, float Amount);
    void SendMIDIEvent(EMIDIEventType EventType, int32 Channel, int32 data1, int32 data2);
    void SendMIDIControlChange(int32 Channel, int32 Type, int32 Value);
    void SendMIDIChannelAftertouch(int32 Channel, float Amount);
}; // Size: 0x48

#endif
