// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.ConnectionRequestResult
#include "LiteNetLib/ConnectionRequestResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetManager
  class NetManager;
  // Forward declaring type: NetConnectRequestPacket
  class NetConnectRequestPacket;
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::ConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectionRequest*, "LiteNetLib", "ConnectionRequest");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.ConnectionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectionRequest : public ::Il2CppObject {
    public:
    public:
    // private readonly LiteNetLib.NetManager _listener
    // Size: 0x8
    // Offset: 0x10
    ::LiteNetLib::NetManager* listener;
    // Field size check
    static_assert(sizeof(::LiteNetLib::NetManager*) == 0x8);
    // private System.Int32 _used
    // Size: 0x4
    // Offset: 0x18
    int used;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: used and: Data
    char __padding1[0x4] = {};
    // public readonly LiteNetLib.Utils.NetDataReader Data
    // Size: 0x8
    // Offset: 0x20
    ::LiteNetLib::Utils::NetDataReader* Data;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetDataReader*) == 0x8);
    // private LiteNetLib.ConnectionRequestResult <Result>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    ::LiteNetLib::ConnectionRequestResult Result;
    // Field size check
    static_assert(sizeof(::LiteNetLib::ConnectionRequestResult) == 0x4);
    // Padding between fields: Result and: ConnectionTime
    char __padding3[0x4] = {};
    // System.Int64 ConnectionTime
    // Size: 0x8
    // Offset: 0x30
    int64_t ConnectionTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Byte ConnectionNumber
    // Size: 0x1
    // Offset: 0x38
    uint8_t ConnectionNumber;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: ConnectionNumber and: RemoteEndPoint
    char __padding5[0x7] = {};
    // public readonly System.Net.IPEndPoint RemoteEndPoint
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::IPEndPoint* RemoteEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    public:
    // Get instance field reference: private readonly LiteNetLib.NetManager _listener
    [[deprecated("Use field access instead!")]] ::LiteNetLib::NetManager*& dyn__listener();
    // Get instance field reference: private System.Int32 _used
    [[deprecated("Use field access instead!")]] int& dyn__used();
    // Get instance field reference: public readonly LiteNetLib.Utils.NetDataReader Data
    [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::NetDataReader*& dyn_Data();
    // Get instance field reference: private LiteNetLib.ConnectionRequestResult <Result>k__BackingField
    [[deprecated("Use field access instead!")]] ::LiteNetLib::ConnectionRequestResult& dyn_$Result$k__BackingField();
    // Get instance field reference: System.Int64 ConnectionTime
    [[deprecated("Use field access instead!")]] int64_t& dyn_ConnectionTime();
    // Get instance field reference: System.Byte ConnectionNumber
    [[deprecated("Use field access instead!")]] uint8_t& dyn_ConnectionNumber();
    // Get instance field reference: public readonly System.Net.IPEndPoint RemoteEndPoint
    [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_RemoteEndPoint();
    // LiteNetLib.ConnectionRequestResult get_Result()
    // Offset: 0x21A8188
    ::LiteNetLib::ConnectionRequestResult get_Result();
    // private System.Void set_Result(LiteNetLib.ConnectionRequestResult value)
    // Offset: 0x21A8190
    void set_Result(::LiteNetLib::ConnectionRequestResult value);
    // System.Void .ctor(System.Int64 connectionId, System.Byte connectionNumber, LiteNetLib.Utils.NetDataReader netDataReader, System.Net.IPEndPoint endPoint, LiteNetLib.NetManager listener)
    // Offset: 0x21A81F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionRequest* New_ctor(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader* netDataReader, ::System::Net::IPEndPoint* endPoint, ::LiteNetLib::NetManager* listener) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::ConnectionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionRequest*, creationType>(connectionId, connectionNumber, netDataReader, endPoint, listener)));
    }
    // private System.Boolean TryActivate()
    // Offset: 0x21A8198
    bool TryActivate();
    // System.Void UpdateRequest(LiteNetLib.NetConnectRequestPacket connRequest)
    // Offset: 0x21A81C4
    void UpdateRequest(::LiteNetLib::NetConnectRequestPacket* connRequest);
    // public LiteNetLib.NetPeer AcceptIfKey(System.String key)
    // Offset: 0x21A8250
    ::LiteNetLib::NetPeer* AcceptIfKey(::StringW key);
    // public LiteNetLib.NetPeer Accept()
    // Offset: 0x21A8970
    ::LiteNetLib::NetPeer* Accept();
    // public System.Void Reject(System.Byte[] rejectData, System.Int32 start, System.Int32 length, System.Boolean force)
    // Offset: 0x21A89D8
    void Reject(::ArrayW<uint8_t> rejectData, int start, int length, bool force);
    // public System.Void Reject(System.Byte[] rejectData, System.Int32 start, System.Int32 length)
    // Offset: 0x21A8A70
    void Reject(::ArrayW<uint8_t> rejectData, int start, int length);
    // public System.Void RejectForce(System.Byte[] rejectData, System.Int32 start, System.Int32 length)
    // Offset: 0x21A8A78
    void RejectForce(::ArrayW<uint8_t> rejectData, int start, int length);
    // public System.Void RejectForce()
    // Offset: 0x21A8A80
    void RejectForce();
    // public System.Void RejectForce(System.Byte[] rejectData)
    // Offset: 0x21A8A94
    void RejectForce(::ArrayW<uint8_t> rejectData);
    // public System.Void RejectForce(LiteNetLib.Utils.NetDataWriter rejectData)
    // Offset: 0x21A8AB4
    void RejectForce(::LiteNetLib::Utils::NetDataWriter* rejectData);
    // public System.Void Reject()
    // Offset: 0x21A8ADC
    void Reject();
    // public System.Void Reject(System.Byte[] rejectData)
    // Offset: 0x21A8AF0
    void Reject(::ArrayW<uint8_t> rejectData);
    // public System.Void Reject(LiteNetLib.Utils.NetDataWriter rejectData)
    // Offset: 0x21A8B10
    void Reject(::LiteNetLib::Utils::NetDataWriter* rejectData);
  }; // LiteNetLib.ConnectionRequest
  #pragma pack(pop)
  static check_size<sizeof(ConnectionRequest), 64 + sizeof(::System::Net::IPEndPoint*)> __LiteNetLib_ConnectionRequestSizeCheck;
  static_assert(sizeof(ConnectionRequest) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::ConnectionRequestResult (LiteNetLib::ConnectionRequest::*)()>(&LiteNetLib::ConnectionRequest::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::set_Result
// Il2CppName: set_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::LiteNetLib::ConnectionRequestResult)>(&LiteNetLib::ConnectionRequest::set_Result)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LiteNetLib", "ConnectionRequestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "set_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::TryActivate
// Il2CppName: TryActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::ConnectionRequest::*)()>(&LiteNetLib::ConnectionRequest::TryActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "TryActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::UpdateRequest
// Il2CppName: UpdateRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::LiteNetLib::NetConnectRequestPacket*)>(&LiteNetLib::ConnectionRequest::UpdateRequest)> {
  static const MethodInfo* get() {
    static auto* connRequest = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetConnectRequestPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "UpdateRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connRequest});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::AcceptIfKey
// Il2CppName: AcceptIfKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (LiteNetLib::ConnectionRequest::*)(::StringW)>(&LiteNetLib::ConnectionRequest::AcceptIfKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "AcceptIfKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (LiteNetLib::ConnectionRequest::*)()>(&LiteNetLib::ConnectionRequest::Accept)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::Reject
// Il2CppName: Reject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>, int, int, bool)>(&LiteNetLib::ConnectionRequest::Reject)> {
  static const MethodInfo* get() {
    static auto* rejectData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "Reject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rejectData, start, length, force});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::Reject
// Il2CppName: Reject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>, int, int)>(&LiteNetLib::ConnectionRequest::Reject)> {
  static const MethodInfo* get() {
    static auto* rejectData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "Reject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rejectData, start, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::RejectForce
// Il2CppName: RejectForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>, int, int)>(&LiteNetLib::ConnectionRequest::RejectForce)> {
  static const MethodInfo* get() {
    static auto* rejectData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "RejectForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rejectData, start, length});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::RejectForce
// Il2CppName: RejectForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)()>(&LiteNetLib::ConnectionRequest::RejectForce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "RejectForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::RejectForce
// Il2CppName: RejectForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>)>(&LiteNetLib::ConnectionRequest::RejectForce)> {
  static const MethodInfo* get() {
    static auto* rejectData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "RejectForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rejectData});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::RejectForce
// Il2CppName: RejectForce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&LiteNetLib::ConnectionRequest::RejectForce)> {
  static const MethodInfo* get() {
    static auto* rejectData = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "RejectForce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rejectData});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::Reject
// Il2CppName: Reject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)()>(&LiteNetLib::ConnectionRequest::Reject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "Reject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::Reject
// Il2CppName: Reject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>)>(&LiteNetLib::ConnectionRequest::Reject)> {
  static const MethodInfo* get() {
    static auto* rejectData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "Reject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rejectData});
  }
};
// Writing MetadataGetter for method: LiteNetLib::ConnectionRequest::Reject
// Il2CppName: Reject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::ConnectionRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&LiteNetLib::ConnectionRequest::Reject)> {
  static const MethodInfo* get() {
    static auto* rejectData = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::ConnectionRequest*), "Reject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rejectData});
  }
};
