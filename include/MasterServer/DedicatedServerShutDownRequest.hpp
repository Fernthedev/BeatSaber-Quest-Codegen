// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerShutDownRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerShutDownRequest : public ::Il2CppObject/*, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: DedicatedServerShutDownRequest
    DedicatedServerShutDownRequest(::Il2CppString* dedicatedServerId_ = {}, int64_t dedicatedServerCreationTime_ = {}) noexcept : dedicatedServerId{dedicatedServerId_}, dedicatedServerCreationTime{dedicatedServerCreationTime_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerUnreliableMessage
    operator MasterServer::IMasterServerUnreliableMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // Get instance field reference: private System.String <dedicatedServerId>k__BackingField
    ::Il2CppString*& dyn_$dedicatedServerId$k__BackingField();
    // Get instance field reference: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    int64_t& dyn_$dedicatedServerCreationTime$k__BackingField();
    // static public PacketPool`1<MasterServer.DedicatedServerShutDownRequest> get_pool()
    // Offset: 0x121CCC4
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerShutDownRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x121CD0C
    ::Il2CppString* get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x121CD14
    void set_dedicatedServerId(::Il2CppString* value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x121CD1C
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x121CD24
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.DedicatedServerShutDownRequest Init(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime)
    // Offset: 0x121CD2C
    MasterServer::DedicatedServerShutDownRequest* Init(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x121CD34
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x121CD78
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x121CDC0
    void Release();
    // public System.Void .ctor()
    // Offset: 0x121CE1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerShutDownRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::DedicatedServerShutDownRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerShutDownRequest*, creationType>()));
    }
  }; // MasterServer.DedicatedServerShutDownRequest
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerShutDownRequest), 24 + sizeof(int64_t)> __MasterServer_DedicatedServerShutDownRequestSizeCheck;
  static_assert(sizeof(DedicatedServerShutDownRequest) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerShutDownRequest*, "MasterServer", "DedicatedServerShutDownRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerShutDownRequest*>* (*)()>(&MasterServer::DedicatedServerShutDownRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::DedicatedServerShutDownRequest::*)()>(&MasterServer::DedicatedServerShutDownRequest::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)(::Il2CppString*)>(&MasterServer::DedicatedServerShutDownRequest::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::DedicatedServerShutDownRequest::*)()>(&MasterServer::DedicatedServerShutDownRequest::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)(int64_t)>(&MasterServer::DedicatedServerShutDownRequest::set_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::DedicatedServerShutDownRequest* (MasterServer::DedicatedServerShutDownRequest::*)(::Il2CppString*, int64_t)>(&MasterServer::DedicatedServerShutDownRequest::Init)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerShutDownRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerShutDownRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)()>(&MasterServer::DedicatedServerShutDownRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
