// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: DisconnectInfo
  struct DisconnectInfo;
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
  // Forward declaring type: UnconnectedMessageType
  struct UnconnectedMessageType;
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketError
  struct SocketError;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.INetEventListener
  class INetEventListener {
    public:
    // Creating value type constructor for type: INetEventListener
    INetEventListener() noexcept {}
    // public System.Void OnPeerConnected(LiteNetLib.NetPeer peer)
    // Offset: 0xFFFFFFFF
    void OnPeerConnected(LiteNetLib::NetPeer* peer);
    // public System.Void OnPeerDisconnected(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    // Offset: 0xFFFFFFFF
    void OnPeerDisconnected(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo);
    // public System.Void OnNetworkError(System.Net.IPEndPoint endPoint, System.Net.Sockets.SocketError socketError)
    // Offset: 0xFFFFFFFF
    void OnNetworkError(System::Net::IPEndPoint* endPoint, System::Net::Sockets::SocketError socketError);
    // public System.Void OnNetworkReceive(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0xFFFFFFFF
    void OnNetworkReceive(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void OnNetworkReceiveUnconnected(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType)
    // Offset: 0xFFFFFFFF
    void OnNetworkReceiveUnconnected(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType);
    // public System.Void OnNetworkLatencyUpdate(LiteNetLib.NetPeer peer, System.Int32 latency)
    // Offset: 0xFFFFFFFF
    void OnNetworkLatencyUpdate(LiteNetLib::NetPeer* peer, int latency);
    // public System.Void OnConnectionRequest(LiteNetLib.ConnectionRequest request)
    // Offset: 0xFFFFFFFF
    void OnConnectionRequest(LiteNetLib::ConnectionRequest* request);
  }; // LiteNetLib.INetEventListener
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::INetEventListener*, "LiteNetLib", "INetEventListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::INetEventListener::OnPeerConnected
// Il2CppName: OnPeerConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetEventListener::*)(LiteNetLib::NetPeer*)>(&LiteNetLib::INetEventListener::OnPeerConnected)> {
  const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetEventListener*), "OnPeerConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer});
  }
};
// Writing MetadataGetter for method: LiteNetLib::INetEventListener::OnPeerDisconnected
// Il2CppName: OnPeerDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetEventListener::*)(LiteNetLib::NetPeer*, LiteNetLib::DisconnectInfo)>(&LiteNetLib::INetEventListener::OnPeerDisconnected)> {
  const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    static auto* disconnectInfo = &::il2cpp_utils::GetClassFromName("LiteNetLib", "DisconnectInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetEventListener*), "OnPeerDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, disconnectInfo});
  }
};
// Writing MetadataGetter for method: LiteNetLib::INetEventListener::OnNetworkError
// Il2CppName: OnNetworkError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetEventListener::*)(System::Net::IPEndPoint*, System::Net::Sockets::SocketError)>(&LiteNetLib::INetEventListener::OnNetworkError)> {
  const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* socketError = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetEventListener*), "OnNetworkError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, socketError});
  }
};
// Writing MetadataGetter for method: LiteNetLib::INetEventListener::OnNetworkReceive
// Il2CppName: OnNetworkReceive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetEventListener::*)(LiteNetLib::NetPeer*, LiteNetLib::NetPacketReader*, LiteNetLib::DeliveryMethod)>(&LiteNetLib::INetEventListener::OnNetworkReceive)> {
  const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacketReader")->byval_arg;
    static auto* deliveryMethod = &::il2cpp_utils::GetClassFromName("LiteNetLib", "DeliveryMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetEventListener*), "OnNetworkReceive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, reader, deliveryMethod});
  }
};
// Writing MetadataGetter for method: LiteNetLib::INetEventListener::OnNetworkReceiveUnconnected
// Il2CppName: OnNetworkReceiveUnconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetEventListener::*)(System::Net::IPEndPoint*, LiteNetLib::NetPacketReader*, LiteNetLib::UnconnectedMessageType)>(&LiteNetLib::INetEventListener::OnNetworkReceiveUnconnected)> {
  const MethodInfo* get() {
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacketReader")->byval_arg;
    static auto* messageType = &::il2cpp_utils::GetClassFromName("LiteNetLib", "UnconnectedMessageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetEventListener*), "OnNetworkReceiveUnconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEndPoint, reader, messageType});
  }
};
// Writing MetadataGetter for method: LiteNetLib::INetEventListener::OnNetworkLatencyUpdate
// Il2CppName: OnNetworkLatencyUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetEventListener::*)(LiteNetLib::NetPeer*, int)>(&LiteNetLib::INetEventListener::OnNetworkLatencyUpdate)> {
  const MethodInfo* get() {
    static auto* peer = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPeer")->byval_arg;
    static auto* latency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetEventListener*), "OnNetworkLatencyUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, latency});
  }
};
// Writing MetadataGetter for method: LiteNetLib::INetEventListener::OnConnectionRequest
// Il2CppName: OnConnectionRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INetEventListener::*)(LiteNetLib::ConnectionRequest*)>(&LiteNetLib::INetEventListener::OnConnectionRequest)> {
  const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("LiteNetLib", "ConnectionRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::INetEventListener*), "OnConnectionRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
