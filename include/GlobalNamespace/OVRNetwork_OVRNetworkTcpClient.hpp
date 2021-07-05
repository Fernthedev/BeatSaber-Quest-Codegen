// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: TcpClient
  class TcpClient;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OVRNetwork/OVRNetworkTcpClient
  class OVRNetwork::OVRNetworkTcpClient : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState
    struct ConnectionState;
    // public System.Action connectionStateChangedCallback
    // Size: 0x8
    // Offset: 0x10
    System::Action* connectionStateChangedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action`4<System.Int32,System.Byte[],System.Int32,System.Int32> payloadReceivedCallback
    // Size: 0x8
    // Offset: 0x18
    System::Action_4<int, ::Array<uint8_t>*, int, int>* payloadReceivedCallback;
    // Field size check
    static_assert(sizeof(System::Action_4<int, ::Array<uint8_t>*, int, int>*) == 0x8);
    // private System.Net.Sockets.TcpClient tcpClient
    // Size: 0x8
    // Offset: 0x20
    System::Net::Sockets::TcpClient* tcpClient;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::TcpClient*) == 0x8);
    // private System.Byte[][] receivedBuffers
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Array<uint8_t>*>* receivedBuffers;
    // Field size check
    static_assert(sizeof(::Array<::Array<uint8_t>*>*) == 0x8);
    // private System.Int32 receivedBufferIndex
    // Size: 0x4
    // Offset: 0x30
    int receivedBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 receivedBufferDataSize
    // Size: 0x4
    // Offset: 0x34
    int receivedBufferDataSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.ManualResetEvent readyReceiveDataEvent
    // Size: 0x8
    // Offset: 0x38
    System::Threading::ManualResetEvent* readyReceiveDataEvent;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // Creating value type constructor for type: OVRNetworkTcpClient
    OVRNetworkTcpClient(System::Action* connectionStateChangedCallback_ = {}, System::Action_4<int, ::Array<uint8_t>*, int, int>* payloadReceivedCallback_ = {}, System::Net::Sockets::TcpClient* tcpClient_ = {}, ::Array<::Array<uint8_t>*>* receivedBuffers_ = {}, int receivedBufferIndex_ = {}, int receivedBufferDataSize_ = {}, System::Threading::ManualResetEvent* readyReceiveDataEvent_ = {}) noexcept : connectionStateChangedCallback{connectionStateChangedCallback_}, payloadReceivedCallback{payloadReceivedCallback_}, tcpClient{tcpClient_}, receivedBuffers{receivedBuffers_}, receivedBufferIndex{receivedBufferIndex_}, receivedBufferDataSize{receivedBufferDataSize_}, readyReceiveDataEvent{readyReceiveDataEvent_} {}
    // public OVRNetwork/OVRNetworkTcpClient/ConnectionState get_connectionState()
    // Offset: 0x12EF2C8
    GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState get_connectionState();
    // public System.Boolean get_Connected()
    // Offset: 0x12EF2F4
    bool get_Connected();
    // public System.Void Connect(System.Int32 listeningPort)
    // Offset: 0x12EF308
    void Connect(int listeningPort);
    // private System.Void ConnectCallback(System.IAsyncResult ar)
    // Offset: 0x12EF45C
    void ConnectCallback(System::IAsyncResult* ar);
    // public System.Void Disconnect()
    // Offset: 0x12EF75C
    void Disconnect();
    // public System.Void Tick()
    // Offset: 0x12EF9B0
    void Tick();
    // private System.Void OnReadDataCallback(System.IAsyncResult ar)
    // Offset: 0x12EFBB4
    void OnReadDataCallback(System::IAsyncResult* ar);
    // public System.Void .ctor()
    // Offset: 0x12F0098
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNetwork::OVRNetworkTcpClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNetwork::OVRNetworkTcpClient*, creationType>()));
    }
  }; // OVRNetwork/OVRNetworkTcpClient
  #pragma pack(pop)
  static check_size<sizeof(OVRNetwork::OVRNetworkTcpClient), 56 + sizeof(System::Threading::ManualResetEvent*)> __GlobalNamespace_OVRNetwork_OVRNetworkTcpClientSizeCheck;
  static_assert(sizeof(OVRNetwork::OVRNetworkTcpClient) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*, "", "OVRNetwork/OVRNetworkTcpClient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::get_connectionState
// Il2CppName: get_connectionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::get_connectionState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "get_connectionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::get_Connected
// Il2CppName: get_Connected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::get_Connected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "get_Connected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)(int)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Connect)> {
  const MethodInfo* get() {
    static auto* listeningPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listeningPort});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectCallback
// Il2CppName: ConnectCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)(System::IAsyncResult*)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectCallback)> {
  const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "ConnectCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Disconnect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Tick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::OnReadDataCallback
// Il2CppName: OnReadDataCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)(System::IAsyncResult*)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::OnReadDataCallback)> {
  const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "OnReadDataCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
