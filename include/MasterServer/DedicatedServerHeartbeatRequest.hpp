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
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerHeartbeatRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerHeartbeatRequest : public ::Il2CppObject/*, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IDedicatedServerClientToServerMessage*/ {
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
    // public System.Int32 cpuUtilization
    // Size: 0x4
    // Offset: 0x20
    int cpuUtilization;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 occupiedServerSlots
    // Size: 0x4
    // Offset: 0x24
    int occupiedServerSlots;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 unoccupiedServerSlots
    // Size: 0x4
    // Offset: 0x28
    int unoccupiedServerSlots;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DedicatedServerHeartbeatRequest
    DedicatedServerHeartbeatRequest(::Il2CppString* dedicatedServerId_ = {}, int64_t dedicatedServerCreationTime_ = {}, int cpuUtilization_ = {}, int occupiedServerSlots_ = {}, int unoccupiedServerSlots_ = {}) noexcept : dedicatedServerId{dedicatedServerId_}, dedicatedServerCreationTime{dedicatedServerCreationTime_}, cpuUtilization{cpuUtilization_}, occupiedServerSlots{occupiedServerSlots_}, unoccupiedServerSlots{unoccupiedServerSlots_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerUnreliableMessage
    operator MasterServer::IMasterServerUnreliableMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // Get instance field: private System.String <dedicatedServerId>k__BackingField
    ::Il2CppString* _get_$dedicatedServerId$k__BackingField();
    // Set instance field: private System.String <dedicatedServerId>k__BackingField
    void _set_$dedicatedServerId$k__BackingField(::Il2CppString* value);
    // Get instance field: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    int64_t _get_$dedicatedServerCreationTime$k__BackingField();
    // Set instance field: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    void _set_$dedicatedServerCreationTime$k__BackingField(int64_t value);
    // Get instance field: public System.Int32 cpuUtilization
    int _get_cpuUtilization();
    // Set instance field: public System.Int32 cpuUtilization
    void _set_cpuUtilization(int value);
    // Get instance field: public System.Int32 occupiedServerSlots
    int _get_occupiedServerSlots();
    // Set instance field: public System.Int32 occupiedServerSlots
    void _set_occupiedServerSlots(int value);
    // Get instance field: public System.Int32 unoccupiedServerSlots
    int _get_unoccupiedServerSlots();
    // Set instance field: public System.Int32 unoccupiedServerSlots
    void _set_unoccupiedServerSlots(int value);
    // static public PacketPool`1<MasterServer.DedicatedServerHeartbeatRequest> get_pool()
    // Offset: 0x121673C
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerHeartbeatRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x1216784
    ::Il2CppString* get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x121678C
    void set_dedicatedServerId(::Il2CppString* value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x1216794
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x121679C
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.DedicatedServerHeartbeatRequest Init(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Int32 cpuUtilization, System.Int32 occupiedServerSlots, System.Int32 unoccupiedServerSlots)
    // Offset: 0x12167A4
    MasterServer::DedicatedServerHeartbeatRequest* Init(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, int cpuUtilization, int occupiedServerSlots, int unoccupiedServerSlots);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12167B4
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1216828
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x12168A0
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12168FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerHeartbeatRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::DedicatedServerHeartbeatRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerHeartbeatRequest*, creationType>()));
    }
  }; // MasterServer.DedicatedServerHeartbeatRequest
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerHeartbeatRequest), 40 + sizeof(int)> __MasterServer_DedicatedServerHeartbeatRequestSizeCheck;
  static_assert(sizeof(DedicatedServerHeartbeatRequest) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerHeartbeatRequest*, "MasterServer", "DedicatedServerHeartbeatRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerHeartbeatRequest*>* (*)()>(&MasterServer::DedicatedServerHeartbeatRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::DedicatedServerHeartbeatRequest::*)()>(&MasterServer::DedicatedServerHeartbeatRequest::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerHeartbeatRequest::*)(::Il2CppString*)>(&MasterServer::DedicatedServerHeartbeatRequest::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::DedicatedServerHeartbeatRequest::*)()>(&MasterServer::DedicatedServerHeartbeatRequest::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerHeartbeatRequest::*)(int64_t)>(&MasterServer::DedicatedServerHeartbeatRequest::set_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::DedicatedServerHeartbeatRequest* (MasterServer::DedicatedServerHeartbeatRequest::*)(::Il2CppString*, int64_t, int, int, int)>(&MasterServer::DedicatedServerHeartbeatRequest::Init)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* cpuUtilization = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* occupiedServerSlots = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* unoccupiedServerSlots = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime, cpuUtilization, occupiedServerSlots, unoccupiedServerSlots});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerHeartbeatRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerHeartbeatRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerHeartbeatRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerHeartbeatRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerHeartbeatRequest::*)()>(&MasterServer::DedicatedServerHeartbeatRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
