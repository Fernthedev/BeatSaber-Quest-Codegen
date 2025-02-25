// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketError
  struct SocketError;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
  // Forward declaring type: ThreadPriority
  struct ThreadPriority;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: INetSocketListener
  class INetSocketListener;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetSocket
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSocket : public ::Il2CppObject {
    public:
    // private System.Net.Sockets.Socket _udpSocketv4
    // Size: 0x8
    // Offset: 0x10
    System::Net::Sockets::Socket* udpSocketv4;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Net.Sockets.Socket _udpSocketv6
    // Size: 0x8
    // Offset: 0x18
    System::Net::Sockets::Socket* udpSocketv6;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Threading.Thread _threadv4
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Thread* threadv4;
    // Field size check
    static_assert(sizeof(System::Threading::Thread*) == 0x8);
    // private System.Threading.Thread _threadv6
    // Size: 0x8
    // Offset: 0x28
    System::Threading::Thread* threadv6;
    // Field size check
    static_assert(sizeof(System::Threading::Thread*) == 0x8);
    // private readonly LiteNetLib.INetSocketListener _listener
    // Size: 0x8
    // Offset: 0x30
    LiteNetLib::INetSocketListener* listener;
    // Field size check
    static_assert(sizeof(LiteNetLib::INetSocketListener*) == 0x8);
    // private System.Int32 <LocalPort>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int LocalPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean IsRunning
    // Size: 0x1
    // Offset: 0x3C
    bool IsRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NetSocket
    NetSocket(System::Net::Sockets::Socket* udpSocketv4_ = {}, System::Net::Sockets::Socket* udpSocketv6_ = {}, System::Threading::Thread* threadv4_ = {}, System::Threading::Thread* threadv6_ = {}, LiteNetLib::INetSocketListener* listener_ = {}, int LocalPort_ = {}, bool IsRunning_ = {}) noexcept : udpSocketv4{udpSocketv4_}, udpSocketv6{udpSocketv6_}, threadv4{threadv4_}, threadv6{threadv6_}, listener{listener_}, LocalPort{LocalPort_}, IsRunning{IsRunning_} {}
    // static field const value: static public System.Int32 ReceivePollingTime
    static constexpr const int ReceivePollingTime = 500000;
    // Get static field: static public System.Int32 ReceivePollingTime
    static int _get_ReceivePollingTime();
    // Set static field: static public System.Int32 ReceivePollingTime
    static void _set_ReceivePollingTime(int value);
    // static field const value: static private System.Int32 SioUdpConnreset
    static constexpr const int SioUdpConnreset = -1744830452;
    // Get static field: static private System.Int32 SioUdpConnreset
    static int _get_SioUdpConnreset();
    // Set static field: static private System.Int32 SioUdpConnreset
    static void _set_SioUdpConnreset(int value);
    // Get static field: static private readonly System.Net.IPAddress MulticastAddressV6
    static System::Net::IPAddress* _get_MulticastAddressV6();
    // Set static field: static private readonly System.Net.IPAddress MulticastAddressV6
    static void _set_MulticastAddressV6(System::Net::IPAddress* value);
    // Get static field: static readonly System.Boolean IPv6Support
    static bool _get_IPv6Support();
    // Set static field: static readonly System.Boolean IPv6Support
    static void _set_IPv6Support(bool value);
    // Get instance field reference: private System.Net.Sockets.Socket _udpSocketv4
    System::Net::Sockets::Socket*& dyn__udpSocketv4();
    // Get instance field reference: private System.Net.Sockets.Socket _udpSocketv6
    System::Net::Sockets::Socket*& dyn__udpSocketv6();
    // Get instance field reference: private System.Threading.Thread _threadv4
    System::Threading::Thread*& dyn__threadv4();
    // Get instance field reference: private System.Threading.Thread _threadv6
    System::Threading::Thread*& dyn__threadv6();
    // Get instance field reference: private readonly LiteNetLib.INetSocketListener _listener
    LiteNetLib::INetSocketListener*& dyn__listener();
    // Get instance field reference: private System.Int32 <LocalPort>k__BackingField
    int& dyn_$LocalPort$k__BackingField();
    // Get instance field reference: public System.Boolean IsRunning
    bool& dyn_IsRunning();
    // public System.Int32 get_LocalPort()
    // Offset: 0x1C26BAC
    int get_LocalPort();
    // private System.Void set_LocalPort(System.Int32 value)
    // Offset: 0x1C26BB4
    void set_LocalPort(int value);
    // public System.Int16 get_Ttl()
    // Offset: 0x1C26BBC
    int16_t get_Ttl();
    // public System.Void set_Ttl(System.Int16 value)
    // Offset: 0x1C1D53C
    void set_Ttl(int16_t value);
    // static private System.Void .cctor()
    // Offset: 0x1C26BD8
    static void _cctor();
    // public System.Void .ctor(LiteNetLib.INetSocketListener listener)
    // Offset: 0x1C1F078
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSocket* New_ctor(LiteNetLib::INetSocketListener* listener) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetSocket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSocket*, creationType>(listener)));
    }
    // private System.Boolean IsActive()
    // Offset: 0x1C26C94
    bool IsActive();
    // private System.Void ReceiveLogic(System.Object state)
    // Offset: 0x1C26CB8
    void ReceiveLogic(::Il2CppObject* state);
    // public System.Boolean Bind(System.Net.IPAddress addressIPv4, System.Net.IPAddress addressIPv6, System.Int32 port, System.Boolean reuseAddress, System.Boolean ipv6, System.Threading.ThreadPriority priority)
    // Offset: 0x1C22BB8
    bool Bind(System::Net::IPAddress* addressIPv4, System::Net::IPAddress* addressIPv6, int port, bool reuseAddress, bool ipv6, System::Threading::ThreadPriority priority);
    // private System.Boolean BindSocket(System.Net.Sockets.Socket socket, System.Net.IPEndPoint ep, System.Boolean reuseAddress)
    // Offset: 0x1C27220
    bool BindSocket(System::Net::Sockets::Socket* socket, System::Net::IPEndPoint* ep, bool reuseAddress);
    // public System.Boolean SendBroadcast(System.Byte[] data, System.Int32 offset, System.Int32 size, System.Int32 port)
    // Offset: 0x1C23570
    bool SendBroadcast(::Array<uint8_t>* data, int offset, int size, int port);
    // public System.Int32 SendTo(System.Byte[] data, System.Int32 offset, System.Int32 size, System.Net.IPEndPoint remoteEndPoint, ref System.Net.Sockets.SocketError errorCode)
    // Offset: 0x1C1D558
    int SendTo(::Array<uint8_t>* data, int offset, int size, System::Net::IPEndPoint* remoteEndPoint, ByRef<System::Net::Sockets::SocketError> errorCode);
    // public System.Void Close(System.Boolean suspend)
    // Offset: 0x1C243B0
    void Close(bool suspend);
  }; // LiteNetLib.NetSocket
  #pragma pack(pop)
  static check_size<sizeof(NetSocket), 60 + sizeof(bool)> __LiteNetLib_NetSocketSizeCheck;
  static_assert(sizeof(NetSocket) == 0x3D);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetSocket*, "LiteNetLib", "NetSocket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetSocket::get_LocalPort
// Il2CppName: get_LocalPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::NetSocket::*)()>(&LiteNetLib::NetSocket::get_LocalPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "get_LocalPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::set_LocalPort
// Il2CppName: set_LocalPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetSocket::*)(int)>(&LiteNetLib::NetSocket::set_LocalPort)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "set_LocalPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::get_Ttl
// Il2CppName: get_Ttl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (LiteNetLib::NetSocket::*)()>(&LiteNetLib::NetSocket::get_Ttl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "get_Ttl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::set_Ttl
// Il2CppName: set_Ttl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetSocket::*)(int16_t)>(&LiteNetLib::NetSocket::set_Ttl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "set_Ttl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::NetSocket::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::NetSocket::*)()>(&LiteNetLib::NetSocket::IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::ReceiveLogic
// Il2CppName: ReceiveLogic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetSocket::*)(::Il2CppObject*)>(&LiteNetLib::NetSocket::ReceiveLogic)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "ReceiveLogic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::NetSocket::*)(System::Net::IPAddress*, System::Net::IPAddress*, int, bool, bool, System::Threading::ThreadPriority)>(&LiteNetLib::NetSocket::Bind)> {
  static const MethodInfo* get() {
    static auto* addressIPv4 = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* addressIPv6 = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reuseAddress = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ipv6 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadPriority")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addressIPv4, addressIPv6, port, reuseAddress, ipv6, priority});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::BindSocket
// Il2CppName: BindSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::NetSocket::*)(System::Net::Sockets::Socket*, System::Net::IPEndPoint*, bool)>(&LiteNetLib::NetSocket::BindSocket)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    static auto* ep = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* reuseAddress = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "BindSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket, ep, reuseAddress});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::SendBroadcast
// Il2CppName: SendBroadcast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::NetSocket::*)(::Array<uint8_t>*, int, int, int)>(&LiteNetLib::NetSocket::SendBroadcast)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "SendBroadcast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, size, port});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::SendTo
// Il2CppName: SendTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::NetSocket::*)(::Array<uint8_t>*, int, int, System::Net::IPEndPoint*, ByRef<System::Net::Sockets::SocketError>)>(&LiteNetLib::NetSocket::SendTo)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "SendTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, size, remoteEndPoint, errorCode});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetSocket::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetSocket::*)(bool)>(&LiteNetLib::NetSocket::Close)> {
  static const MethodInfo* get() {
    static auto* suspend = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetSocket*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{suspend});
  }
};
