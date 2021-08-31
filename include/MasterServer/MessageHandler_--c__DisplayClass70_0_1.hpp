// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/MasterServer.<>c__DisplayClass70_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class MessageHandler::$$c__DisplayClass70_0_1 : public ::Il2CppObject {
    public:
    // public MasterServer.MessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x0
    MasterServer::MessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler*) == 0x8);
    // public System.Action`2<T,MasterServer.MessageHandler/MasterServer.MessageOrigin> customHandler
    // Size: 0x8
    // Offset: 0x0
    System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>* customHandler;
    // Field size check
    static_assert(sizeof(System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass70_0_1
    $$c__DisplayClass70_0_1(MasterServer::MessageHandler* $$4__this_ = {}, System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>* customHandler_ = {}) noexcept : $$4__this{$$4__this_}, customHandler{customHandler_} {}
    // Autogenerated instance field getter
    // Get instance field: public MasterServer.MessageHandler <>4__this
    MasterServer::MessageHandler* _get_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass70_0_1::_get_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<MasterServer::MessageHandler**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public MasterServer.MessageHandler <>4__this
    void _set_$$4__this(MasterServer::MessageHandler* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass70_0_1::_set_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      *reinterpret_cast<MasterServer::MessageHandler**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`2<T,MasterServer.MessageHandler/MasterServer.MessageOrigin> customHandler
    System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>* _get_customHandler() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass70_0_1::_get_customHandler");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "customHandler"))->offset;
      return *reinterpret_cast<System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Action`2<T,MasterServer.MessageHandler/MasterServer.MessageOrigin> customHandler
    void _set_customHandler(System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass70_0_1::_set_customHandler");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "customHandler"))->offset;
      *reinterpret_cast<System::Action_2<T, MasterServer::MessageHandler::MessageOrigin>**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // System.Void <CustomResponseHandler>b__0(T packet, MasterServer.MessageHandler/MasterServer.MessageOrigin origin)
    // Offset: 0xFFFFFFFF
    void $CustomResponseHandler$b__0(T packet, MasterServer::MessageHandler::MessageOrigin origin) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass70_0_1::<CustomResponseHandler>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<CustomResponseHandler>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(packet), ::il2cpp_utils::ExtractType(origin)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, packet, origin);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::$$c__DisplayClass70_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass70_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::$$c__DisplayClass70_0_1<T>*, creationType>()));
    }
  }; // MasterServer.MessageHandler/MasterServer.<>c__DisplayClass70_0`1
  // Could not write size check! Type: MasterServer.MessageHandler/MasterServer.<>c__DisplayClass70_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(MasterServer::MessageHandler::$$c__DisplayClass70_0_1, "MasterServer", "MessageHandler/<>c__DisplayClass70_0`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
