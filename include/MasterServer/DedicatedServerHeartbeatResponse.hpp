// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedUnreliableMessage
#include "BGNet/Core/Messages/IUnconnectedUnreliableMessage.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerServerToClientMessage
#include "MasterServer/IDedicatedServerMasterServerServerToClientMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: DedicatedServerHeartbeatResponse
  class DedicatedServerHeartbeatResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::DedicatedServerHeartbeatResponse);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::DedicatedServerHeartbeatResponse*, "MasterServer", "DedicatedServerHeartbeatResponse");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerHeartbeatResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerHeartbeatResponse : public ::Il2CppObject/*, public ::BGNet::Core::Messages::IUnconnectedUnreliableMessage, public ::MasterServer::IDedicatedServerMasterServerServerToClientMessage*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedUnreliableMessage
    operator ::BGNet::Core::Messages::IUnconnectedUnreliableMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedUnreliableMessage
    inline ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* i_IUnconnectedUnreliableMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerServerToClientMessage
    operator ::MasterServer::IDedicatedServerMasterServerServerToClientMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: i_IDedicatedServerMasterServerServerToClientMessage
    inline ::MasterServer::IDedicatedServerMasterServerServerToClientMessage* i_IDedicatedServerMasterServerServerToClientMessage() noexcept {
      return reinterpret_cast<::MasterServer::IDedicatedServerMasterServerServerToClientMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.DedicatedServerHeartbeatResponse> get_pool()
    // Offset: 0x1695DD0
    static ::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerHeartbeatResponse*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x1695E7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerHeartbeatResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::DedicatedServerHeartbeatResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerHeartbeatResponse*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1695E18
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1695E1C
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x1695E20
    void Release();
  }; // MasterServer.DedicatedServerHeartbeatResponse
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerHeartbeatResponse*>* (*)()>(&MasterServer::DedicatedServerHeartbeatResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerHeartbeatResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerHeartbeatResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerHeartbeatResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerHeartbeatResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerHeartbeatResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerHeartbeatResponse::*)()>(&MasterServer::DedicatedServerHeartbeatResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerHeartbeatResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
