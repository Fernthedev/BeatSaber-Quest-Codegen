// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.BaseMasterServerMultipartMessage
#include "MasterServer/BaseMasterServerMultipartMessage.hpp"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.HandshakeMultipartMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class HandshakeMultipartMessage : public MasterServer::BaseMasterServerMultipartMessage/*, public MasterServer::IHandshakeMessage*/ {
    public:
    // Creating value type constructor for type: HandshakeMultipartMessage
    HandshakeMultipartMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeMessage
    operator MasterServer::IHandshakeMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.HandshakeMultipartMessage> get_pool()
    // Offset: 0x1217D9C
    static GlobalNamespace::PacketPool_1<MasterServer::HandshakeMultipartMessage*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x1217E40
    // Implemented from: MasterServer.BaseMasterServerMultipartMessage
    // Base method: System.Void BaseMasterServerMultipartMessage::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandshakeMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::HandshakeMultipartMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandshakeMultipartMessage*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x1217DE4
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.HandshakeMultipartMessage
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::HandshakeMultipartMessage*, "MasterServer", "HandshakeMultipartMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::HandshakeMultipartMessage::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::HandshakeMultipartMessage*>* (*)()>(&MasterServer::HandshakeMultipartMessage::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HandshakeMultipartMessage*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::HandshakeMultipartMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::HandshakeMultipartMessage::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::HandshakeMultipartMessage::*)()>(&MasterServer::HandshakeMultipartMessage::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::HandshakeMultipartMessage*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
