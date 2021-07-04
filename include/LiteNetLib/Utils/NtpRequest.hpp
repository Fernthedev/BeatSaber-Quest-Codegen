// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.INetSocketListener
#include "LiteNetLib/INetSocketListener.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetSocket
  class NetSocket;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NtpPacket
  class NtpPacket;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketError
  struct SocketError;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NtpRequest
  class NtpRequest : public ::Il2CppObject/*, public LiteNetLib::INetSocketListener*/ {
    public:
    // private readonly LiteNetLib.NetSocket _socket
    // Size: 0x8
    // Offset: 0x10
    LiteNetLib::NetSocket* socket;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetSocket*) == 0x8);
    // private readonly System.Action`1<LiteNetLib.Utils.NtpPacket> _onRequestComplete
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete;
    // Field size check
    static_assert(sizeof(System::Action_1<LiteNetLib::Utils::NtpPacket*>*) == 0x8);
    // private readonly System.Net.IPEndPoint _ntpEndPoint
    // Size: 0x8
    // Offset: 0x20
    System::Net::IPEndPoint* ntpEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // Creating value type constructor for type: NtpRequest
    NtpRequest(LiteNetLib::NetSocket* socket_ = {}, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete_ = {}, System::Net::IPEndPoint* ntpEndPoint_ = {}) noexcept : socket{socket_}, onRequestComplete{onRequestComplete_}, ntpEndPoint{ntpEndPoint_} {}
    // Creating interface conversion operator: operator LiteNetLib::INetSocketListener
    operator LiteNetLib::INetSocketListener() noexcept {
      return *reinterpret_cast<LiteNetLib::INetSocketListener*>(this);
    }
    // static field const value: static public System.Int32 DefaultPort
    static constexpr const int DefaultPort = 123;
    // Get static field: static public System.Int32 DefaultPort
    static int _get_DefaultPort();
    // Set static field: static public System.Int32 DefaultPort
    static void _set_DefaultPort(int value);
    // private System.Void .ctor(System.Net.IPEndPoint endPoint, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x23E26F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtpRequest* New_ctor(System::Net::IPEndPoint* endPoint, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NtpRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtpRequest*, creationType>(endPoint, onRequestComplete)));
    }
    // static public LiteNetLib.Utils.NtpRequest Create(System.Net.IPEndPoint endPoint, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x23E27E4
    static LiteNetLib::Utils::NtpRequest* Create(System::Net::IPEndPoint* endPoint, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete);
    // static public LiteNetLib.Utils.NtpRequest Create(System.Net.IPAddress ipAddress, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x23E2854
    static LiteNetLib::Utils::NtpRequest* Create(System::Net::IPAddress* ipAddress, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete);
    // static public LiteNetLib.Utils.NtpRequest Create(System.String ntpServerAddress, System.Int32 port, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x23E28CC
    static LiteNetLib::Utils::NtpRequest* Create(::Il2CppString* ntpServerAddress, int port, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete);
    // static public LiteNetLib.Utils.NtpRequest Create(System.String ntpServerAddress, System.Action`1<LiteNetLib.Utils.NtpPacket> onRequestComplete)
    // Offset: 0x23E2950
    static LiteNetLib::Utils::NtpRequest* Create(::Il2CppString* ntpServerAddress, System::Action_1<LiteNetLib::Utils::NtpPacket*>* onRequestComplete);
    // public System.Void Send()
    // Offset: 0x23E29D0
    void Send();
    // public System.Void Close()
    // Offset: 0x23E2AA0
    void Close();
    // private System.Void LiteNetLib.INetSocketListener.OnMessageReceived(System.Byte[] data, System.Int32 length, System.Net.Sockets.SocketError errorCode, System.Net.IPEndPoint remoteEndPoint)
    // Offset: 0x23E2AC0
    void LiteNetLib_INetSocketListener_OnMessageReceived(::Array<uint8_t>* data, int length, System::Net::Sockets::SocketError errorCode, System::Net::IPEndPoint* remoteEndPoint);
  }; // LiteNetLib.Utils.NtpRequest
  #pragma pack(pop)
  static check_size<sizeof(NtpRequest), 32 + sizeof(System::Net::IPEndPoint*)> __LiteNetLib_Utils_NtpRequestSizeCheck;
  static_assert(sizeof(NtpRequest) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpRequest*, "LiteNetLib.Utils", "NtpRequest");
// Writing includes for template specializations
#include "System/Net/IPEndPoint.hpp"
#include "System/Action_1.hpp"
#include "System/Net/IPAddress.hpp"
#include "System/Net/Sockets/SocketError.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NtpRequest* (*)(System::Net::IPEndPoint*, System::Action_1<LiteNetLib::Utils::NtpPacket*>*)>(&LiteNetLib::Utils::NtpRequest::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<System::Action_1<LiteNetLib::Utils::NtpPacket*>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NtpRequest* (*)(System::Net::IPAddress*, System::Action_1<LiteNetLib::Utils::NtpPacket*>*)>(&LiteNetLib::Utils::NtpRequest::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::IPAddress*>(), ::il2cpp_utils::ExtractIndependentType<System::Action_1<LiteNetLib::Utils::NtpPacket*>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NtpRequest* (*)(::Il2CppString*, int, System::Action_1<LiteNetLib::Utils::NtpPacket*>*)>(&LiteNetLib::Utils::NtpRequest::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Action_1<LiteNetLib::Utils::NtpPacket*>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpRequest::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NtpRequest* (*)(::Il2CppString*, System::Action_1<LiteNetLib::Utils::NtpPacket*>*)>(&LiteNetLib::Utils::NtpRequest::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpRequest*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Action_1<LiteNetLib::Utils::NtpPacket*>*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpRequest::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpRequest::*)()>(&LiteNetLib::Utils::NtpRequest::Send)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpRequest*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpRequest::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpRequest::*)()>(&LiteNetLib::Utils::NtpRequest::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpRequest*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpRequest::LiteNetLib_INetSocketListener_OnMessageReceived
// Il2CppName: LiteNetLib.INetSocketListener.OnMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpRequest::*)(::Array<uint8_t>*, int, System::Net::Sockets::SocketError, System::Net::IPEndPoint*)>(&LiteNetLib::Utils::NtpRequest::LiteNetLib_INetSocketListener_OnMessageReceived)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpRequest*), "LiteNetLib.INetSocketListener.OnMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Sockets::SocketError>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>()});
  }
};
