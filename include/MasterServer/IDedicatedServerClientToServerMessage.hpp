// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: MasterServer.IDedicatedServerMessage
#include "MasterServer/IDedicatedServerMessage.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IDedicatedServerClientToServerMessage
  class IDedicatedServerClientToServerMessage/*, public MasterServer::IDedicatedServerMessage*/ {
    public:
    // Creating value type constructor for type: IDedicatedServerClientToServerMessage
    IDedicatedServerClientToServerMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerMessage
    operator MasterServer::IDedicatedServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerMessage*>(this);
    }
    // public System.String get_dedicatedServerId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_dedicatedServerId();
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0xFFFFFFFF
    int64_t get_dedicatedServerCreationTime();
  }; // MasterServer.IDedicatedServerClientToServerMessage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IDedicatedServerClientToServerMessage*, "MasterServer", "IDedicatedServerClientToServerMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::IDedicatedServerClientToServerMessage::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::IDedicatedServerClientToServerMessage::*)()>(&MasterServer::IDedicatedServerClientToServerMessage::get_dedicatedServerId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IDedicatedServerClientToServerMessage*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IDedicatedServerClientToServerMessage::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::IDedicatedServerClientToServerMessage::*)()>(&MasterServer::IDedicatedServerClientToServerMessage::get_dedicatedServerCreationTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IDedicatedServerClientToServerMessage*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
