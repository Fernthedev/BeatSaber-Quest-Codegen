// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerAcknowledgeMessage
#include "GlobalNamespace/BaseMasterServerAcknowledgeMessage.hpp"
// Including type: MasterServer.IHandshakeMessage
#include "MasterServer/IHandshakeMessage.hpp"
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
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.HandshakeMessageReceivedAcknowledge
  // [TokenAttribute] Offset: FFFFFFFF
  class HandshakeMessageReceivedAcknowledge : public GlobalNamespace::BaseMasterServerAcknowledgeMessage/*, public MasterServer::IHandshakeMessage*/ {
    public:
    // Creating value type constructor for type: HandshakeMessageReceivedAcknowledge
    HandshakeMessageReceivedAcknowledge() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeMessage
    operator MasterServer::IHandshakeMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.HandshakeMessageReceivedAcknowledge> get_pool()
    // Offset: 0x121D5F0
    static GlobalNamespace::PacketPool_1<MasterServer::HandshakeMessageReceivedAcknowledge*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x121D694
    // Implemented from: BaseMasterServerAcknowledgeMessage
    // Base method: System.Void BaseMasterServerAcknowledgeMessage::.ctor()
    // Base method: System.Void BaseMasterServerResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandshakeMessageReceivedAcknowledge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::HandshakeMessageReceivedAcknowledge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandshakeMessageReceivedAcknowledge*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x121D638
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::Release()
    void Release();
  }; // MasterServer.HandshakeMessageReceivedAcknowledge
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::HandshakeMessageReceivedAcknowledge*, "MasterServer", "HandshakeMessageReceivedAcknowledge");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::HandshakeMessageReceivedAcknowledge::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::HandshakeMessageReceivedAcknowledge*>* (*)()>(&MasterServer::HandshakeMessageReceivedAcknowledge::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HandshakeMessageReceivedAcknowledge*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::HandshakeMessageReceivedAcknowledge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::HandshakeMessageReceivedAcknowledge::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::HandshakeMessageReceivedAcknowledge::*)()>(&MasterServer::HandshakeMessageReceivedAcknowledge::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HandshakeMessageReceivedAcknowledge*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
