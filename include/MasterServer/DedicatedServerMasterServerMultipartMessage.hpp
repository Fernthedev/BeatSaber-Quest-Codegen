// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseMultipartMessage
#include "BGNet/Core/Messages/BaseMultipartMessage.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerMessage
#include "MasterServer/IDedicatedServerMasterServerMessage.hpp"
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
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: DedicatedServerMasterServerMultipartMessage
  class DedicatedServerMasterServerMultipartMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(MasterServer::DedicatedServerMasterServerMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerMasterServerMultipartMessage*, "MasterServer", "DedicatedServerMasterServerMultipartMessage");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerMasterServerMultipartMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerMasterServerMultipartMessage : public BGNet::Core::Messages::BaseMultipartMessage/*, public MasterServer::IDedicatedServerMasterServerMessage*/ {
    public:
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerMasterServerMessage
    operator MasterServer::IDedicatedServerMasterServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerMasterServerMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.DedicatedServerMasterServerMultipartMessage> get_pool()
    // Offset: 0x2C4E450
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerMasterServerMultipartMessage*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x2C4E4F4
    // Implemented from: BGNet.Core.Messages.BaseMultipartMessage
    // Base method: System.Void BaseMultipartMessage::.ctor()
    // Base method: System.Void BaseReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerMasterServerMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::DedicatedServerMasterServerMultipartMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerMasterServerMultipartMessage*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x2C4E498
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Release()
    void Release();
  }; // MasterServer.DedicatedServerMasterServerMultipartMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerMasterServerMultipartMessage::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerMasterServerMultipartMessage*>* (*)()>(&MasterServer::DedicatedServerMasterServerMultipartMessage::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerMasterServerMultipartMessage*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerMasterServerMultipartMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::DedicatedServerMasterServerMultipartMessage::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerMasterServerMultipartMessage::*)()>(&MasterServer::DedicatedServerMasterServerMultipartMessage::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerMasterServerMultipartMessage*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
