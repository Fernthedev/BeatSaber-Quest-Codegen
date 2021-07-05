// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: BaseConnectToServerRequest
  class BaseConnectToServerRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageHandler/<>c__DisplayClass38_0
  // [CompilerGeneratedAttribute] Offset: DF0880
  class UserMessageHandler::$$c__DisplayClass38_0 : public ::Il2CppObject {
    public:
    // Nested type: MasterServer::UserMessageHandler::$$c__DisplayClass38_0::$$SendConnectToServerRequest$b__0$d
    struct $$SendConnectToServerRequest$b__0$d;
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x10
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public MasterServer.UserMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x18
    MasterServer::UserMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler*) == 0x8);
    // public MasterServer.BaseConnectToServerRequest request
    // Size: 0x8
    // Offset: 0x20
    MasterServer::BaseConnectToServerRequest* request;
    // Field size check
    static_assert(sizeof(MasterServer::BaseConnectToServerRequest*) == 0x8);
    // public MasterServer.UserMessageHandler/ConnectToServerDelegate onSuccess
    // Size: 0x8
    // Offset: 0x28
    MasterServer::UserMessageHandler::ConnectToServerDelegate* onSuccess;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler::ConnectToServerDelegate*) == 0x8);
    // public System.Action`1<ConnectionFailedReason> onConnectionFailed
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailed;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass38_0
    $$c__DisplayClass38_0(System::Threading::CancellationToken cancellationToken_ = {}, MasterServer::UserMessageHandler* $$4__this_ = {}, MasterServer::BaseConnectToServerRequest* request_ = {}, MasterServer::UserMessageHandler::ConnectToServerDelegate* onSuccess_ = {}, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailed_ = {}) noexcept : cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, request{request_}, onSuccess{onSuccess_}, onConnectionFailed{onConnectionFailed_} {}
    // System.Threading.Tasks.Task <SendConnectToServerRequest>b__0()
    // Offset: 0x12E6A60
    System::Threading::Tasks::Task* $SendConnectToServerRequest$b__0();
    // public System.Void .ctor()
    // Offset: 0x12E5ED8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageHandler::$$c__DisplayClass38_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageHandler::$$c__DisplayClass38_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageHandler::$$c__DisplayClass38_0*, creationType>()));
    }
  }; // MasterServer.UserMessageHandler/<>c__DisplayClass38_0
  #pragma pack(pop)
  static check_size<sizeof(UserMessageHandler::$$c__DisplayClass38_0), 48 + sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*)> __MasterServer_UserMessageHandler_$$c__DisplayClass38_0SizeCheck;
  static_assert(sizeof(UserMessageHandler::$$c__DisplayClass38_0) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass38_0*, "MasterServer", "UserMessageHandler/<>c__DisplayClass38_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass38_0::$SendConnectToServerRequest$b__0
// Il2CppName: <SendConnectToServerRequest>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::UserMessageHandler::$$c__DisplayClass38_0::*)()>(&MasterServer::UserMessageHandler::$$c__DisplayClass38_0::$SendConnectToServerRequest$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$$c__DisplayClass38_0*), "<SendConnectToServerRequest>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass38_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
