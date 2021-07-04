// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerConnection
#include "UnityEngine/Networking/PlayerConnection/PlayerConnection.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
  // [CompilerGeneratedAttribute] Offset: D91BE8
  class PlayerConnection::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    // public System.Guid messageId
    // Size: 0x10
    // Offset: 0x10
    System::Guid messageId;
    // Field size check
    static_assert(sizeof(System::Guid) == 0x10);
    // Creating value type constructor for type: $$c__DisplayClass12_0
    $$c__DisplayClass12_0(System::Guid messageId_ = {}) noexcept : messageId{messageId_} {}
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return messageId;
    }
    // System.Boolean <Register>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers x)
    // Offset: 0x1C1C68C
    bool $Register$b__0(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers* x);
    // public System.Void .ctor()
    // Offset: 0x1C1B320
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerConnection::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerConnection::$$c__DisplayClass12_0*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(PlayerConnection::$$c__DisplayClass12_0), 16 + sizeof(System::Guid)> __UnityEngine_Networking_PlayerConnection_PlayerConnection_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(PlayerConnection::$$c__DisplayClass12_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass12_0");
// Writing includes for template specializations
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents_MessageTypeSubscribers.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0::$Register$b__0
// Il2CppName: <Register>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0::*)(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*)>(&UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0::$Register$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0*), "<Register>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
