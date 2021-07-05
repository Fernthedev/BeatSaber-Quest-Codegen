// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerResponse
#include "GlobalNamespace/BaseMasterServerResponse.hpp"
// Including type: MasterServer.IMasterServerAcknowledgeMessage
#include "MasterServer/IMasterServerAcknowledgeMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: BaseMasterServerAcknowledgeMessage
  class BaseMasterServerAcknowledgeMessage : public GlobalNamespace::BaseMasterServerResponse/*, public MasterServer::IMasterServerAcknowledgeMessage*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDF0C10
    // private System.Boolean <messageHandled>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool messageHandled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BaseMasterServerAcknowledgeMessage
    BaseMasterServerAcknowledgeMessage(bool messageHandled_ = {}) noexcept : messageHandled{messageHandled_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerAcknowledgeMessage
    operator MasterServer::IMasterServerAcknowledgeMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerAcknowledgeMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // public System.Boolean get_messageHandled()
    // Offset: 0x132145C
    bool get_messageHandled();
    // private System.Void set_messageHandled(System.Boolean value)
    // Offset: 0x1321464
    void set_messageHandled(bool value);
    // public BaseMasterServerAcknowledgeMessage Init(System.Boolean messageHandled)
    // Offset: 0x1321470
    GlobalNamespace::BaseMasterServerAcknowledgeMessage* Init(bool messageHandled);
    // public override System.Byte get_resultCode()
    // Offset: 0x13213F4
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Byte BaseMasterServerResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x13213FC
    // Implemented from: BaseMasterServerResponse
    // Base method: System.String BaseMasterServerResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x132147C
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x13214E4
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // protected System.Void .ctor()
    // Offset: 0x1321564
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMasterServerAcknowledgeMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseMasterServerAcknowledgeMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMasterServerAcknowledgeMessage*, creationType>()));
    }
  }; // BaseMasterServerAcknowledgeMessage
  #pragma pack(pop)
  static check_size<sizeof(BaseMasterServerAcknowledgeMessage), 20 + sizeof(bool)> __GlobalNamespace_BaseMasterServerAcknowledgeMessageSizeCheck;
  static_assert(sizeof(BaseMasterServerAcknowledgeMessage) == 0x15);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerAcknowledgeMessage*, "", "BaseMasterServerAcknowledgeMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerAcknowledgeMessage::get_messageHandled
// Il2CppName: get_messageHandled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseMasterServerAcknowledgeMessage::*)()>(&GlobalNamespace::BaseMasterServerAcknowledgeMessage::get_messageHandled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerAcknowledgeMessage*), "get_messageHandled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerAcknowledgeMessage::set_messageHandled
// Il2CppName: set_messageHandled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerAcknowledgeMessage::*)(bool)>(&GlobalNamespace::BaseMasterServerAcknowledgeMessage::set_messageHandled)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerAcknowledgeMessage*), "set_messageHandled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerAcknowledgeMessage::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BaseMasterServerAcknowledgeMessage* (GlobalNamespace::BaseMasterServerAcknowledgeMessage::*)(bool)>(&GlobalNamespace::BaseMasterServerAcknowledgeMessage::Init)> {
  const MethodInfo* get() {
    static auto* messageHandled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerAcknowledgeMessage*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageHandled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerAcknowledgeMessage::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::BaseMasterServerAcknowledgeMessage::*)()>(&GlobalNamespace::BaseMasterServerAcknowledgeMessage::get_resultCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerAcknowledgeMessage*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerAcknowledgeMessage::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BaseMasterServerAcknowledgeMessage::*)()>(&GlobalNamespace::BaseMasterServerAcknowledgeMessage::get_resultCodeString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerAcknowledgeMessage*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerAcknowledgeMessage::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerAcknowledgeMessage::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BaseMasterServerAcknowledgeMessage::Serialize)> {
  const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerAcknowledgeMessage*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerAcknowledgeMessage::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerAcknowledgeMessage::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BaseMasterServerAcknowledgeMessage::Deserialize)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerAcknowledgeMessage*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerAcknowledgeMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
