// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent`1<T0>
  template<typename T0>
  class UnityEvent_1;
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: PlayerEditorConnectionEvents
  class PlayerEditorConnectionEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerEditorConnectionEvents : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent
    class MessageEvent;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent
    class ConnectionChangeEvent;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers
    class MessageTypeSubscribers;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.MessageTypeSubscribers> messageTypeSubscribers
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*>* messageTypeSubscribers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*>*) == 0x8);
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.ConnectionChangeEvent connectionEvent
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* connectionEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*) == 0x8);
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.ConnectionChangeEvent disconnectionEvent
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* disconnectionEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.MessageTypeSubscribers> messageTypeSubscribers
    System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*>*& dyn_messageTypeSubscribers();
    // Get instance field reference: public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.ConnectionChangeEvent connectionEvent
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*& dyn_connectionEvent();
    // Get instance field reference: public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.ConnectionChangeEvent disconnectionEvent
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*& dyn_disconnectionEvent();
    // public System.Void InvokeMessageIdSubscribers(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x203BA08
    void InvokeMessageIdSubscribers(System::Guid messageId, ::ArrayW<uint8_t> data, int playerId);
    // public UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> AddAndCreate(System.Guid messageId)
    // Offset: 0x203ACB4
    UnityEngine::Events::UnityEvent_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* AddAndCreate(System::Guid messageId);
    // public System.Void UnregisterManagedCallback(System.Guid messageId, UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> callback)
    // Offset: 0x203AFA0
    void UnregisterManagedCallback(System::Guid messageId, UnityEngine::Events::UnityAction_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);
    // public System.Void .ctor()
    // Offset: 0x203BF70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerEditorConnectionEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerEditorConnectionEvents*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
  #pragma pack(pop)
  static check_size<sizeof(PlayerEditorConnectionEvents), 32 + sizeof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*)> __UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEventsSizeCheck;
  static_assert(sizeof(PlayerEditorConnectionEvents) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::InvokeMessageIdSubscribers
// Il2CppName: InvokeMessageIdSubscribers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::*)(System::Guid, ::ArrayW<uint8_t>, int)>(&UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::InvokeMessageIdSubscribers)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*), "InvokeMessageIdSubscribers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId, data, playerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::AddAndCreate
// Il2CppName: AddAndCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::UnityEvent_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* (UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::*)(System::Guid)>(&UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::AddAndCreate)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*), "AddAndCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::UnregisterManagedCallback
// Il2CppName: UnregisterManagedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::*)(System::Guid, UnityEngine::Events::UnityAction_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*)>(&UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::UnregisterManagedCallback)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Networking.PlayerConnection", "MessageEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*), "UnregisterManagedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId, callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
