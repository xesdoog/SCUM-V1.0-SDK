#ifndef UE4SS_SDK_BattlEye_HPP
#define UE4SS_SDK_BattlEye_HPP

class UBattlEyeClient : public UObject
{
}; // Size: 0xC0

class UBattlEyeCommsComponent : public UActorComponent
{

    void Server_ServerCommand(FString Command);
    void Server_SendMessageToServer(const TArray<uint8>& packet);
    void Client_SendMessageToClient(const TArray<uint8>& packet);
}; // Size: 0xC8

class UBattlEyeServer : public UObject
{
}; // Size: 0x100

#endif
