// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
// Including type: PublicServerInfo
#include "GlobalNamespace/PublicServerInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
  // Forward declaring type: BaseConnectToServerRequest
  class BaseConnectToServerRequest;
  // Forward declaring type: IUserMessage
  class IUserMessage;
  // Forward declaring type: IMasterServerAuthenticateRequest
  class IMasterServerAuthenticateRequest;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
  // Forward declaring type: IUnconnectedSenderReceiver
  class IUnconnectedSenderReceiver;
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
  // Forward declaring type: ICertificateValidator
  class ICertificateValidator;
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Skipping declaration: CancellationToken because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class UserMessageHandler : public MasterServer::BaseClientMessageHandler {
    public:
    // Nested type: MasterServer::UserMessageHandler::ConnectToServerDelegate
    class ConnectToServerDelegate;
    // Nested type: MasterServer::UserMessageHandler::$GetAuthenticationRequest$d__9
    struct $GetAuthenticationRequest$d__9;
    // Nested type: MasterServer::UserMessageHandler::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: MasterServer::UserMessageHandler::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: MasterServer::UserMessageHandler::$WithFailureHandler$d__14
    struct $WithFailureHandler$d__14;
    // private System.Int64 _lastKeepaliveTime
    // Size: 0x8
    // Offset: 0xB0
    int64_t lastKeepaliveTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private readonly IAuthenticationTokenProvider _authenticationTokenProvider
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAuthenticationTokenProvider*) == 0x8);
    // Creating value type constructor for type: UserMessageHandler
    UserMessageHandler(int64_t lastKeepaliveTime_ = {}, GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider_ = {}) noexcept : lastKeepaliveTime{lastKeepaliveTime_}, authenticationTokenProvider{authenticationTokenProvider_} {}
    // static field const value: static private System.Int64 kKeepaliveRequestIntervalMs
    static constexpr const int64_t kKeepaliveRequestIntervalMs = 60000;
    // Get static field: static private System.Int64 kKeepaliveRequestIntervalMs
    static int64_t _get_kKeepaliveRequestIntervalMs();
    // Set static field: static private System.Int64 kKeepaliveRequestIntervalMs
    static void _set_kKeepaliveRequestIntervalMs(int64_t value);
    // Get instance field reference: private System.Int64 _lastKeepaliveTime
    int64_t& dyn__lastKeepaliveTime();
    // Get instance field reference: private readonly IAuthenticationTokenProvider _authenticationTokenProvider
    GlobalNamespace::IAuthenticationTokenProvider*& dyn__authenticationTokenProvider();
    // public IAuthenticationTokenProvider get_authenticationTokenProvider()
    // Offset: 0x121FEB4
    GlobalNamespace::IAuthenticationTokenProvider* get_authenticationTokenProvider();
    // public System.Void .ctor(IUnconnectedSenderReceiver sender, MasterServerEndPoint endPoint, IAuthenticationTokenProvider authenticationTokenProvider, MasterServer.ITimeProvider timeProvider, ICertificateValidator certificateValidator)
    // Offset: 0x121FEBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageHandler* New_ctor(GlobalNamespace::IUnconnectedSenderReceiver* sender, GlobalNamespace::MasterServerEndPoint* endPoint, GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, MasterServer::ITimeProvider* timeProvider, GlobalNamespace::ICertificateValidator* certificateValidator) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageHandler*, creationType>(sender, endPoint, authenticationTokenProvider, timeProvider, certificateValidator)));
    }
    // private System.Void UpdateKeepalive()
    // Offset: 0x121FF1C
    void UpdateKeepalive();
    // public System.Void ConnectToServer(System.String userId, System.String userName, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.String secret, System.String code, MasterServer.UserMessageHandler/MasterServer.ConnectToServerDelegate onSuccess, System.Action`1<ConnectionFailedReason> onConnectionFailed, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1220200
    void ConnectToServer(::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret, ::Il2CppString* code, MasterServer::UserMessageHandler::ConnectToServerDelegate* onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailed, System::Threading::CancellationToken cancellationToken);
    // private System.Void SendConnectToServerRequest(MasterServer.BaseConnectToServerRequest request, MasterServer.UserMessageHandler/MasterServer.ConnectToServerDelegate onSuccess, System.Action`1<ConnectionFailedReason> onConnectionFailed, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1220360
    void SendConnectToServerRequest(MasterServer::BaseConnectToServerRequest* request, MasterServer::UserMessageHandler::ConnectToServerDelegate* onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailed, System::Threading::CancellationToken cancellationToken);
    // public System.Void GetPublicServers(System.String userId, System.String userName, System.Int32 offset, System.Int32 count, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.Action`1<System.Collections.Generic.IReadOnlyList`1<PublicServerInfo>> onSuccess, System.Action`1<ConnectionFailedReason> onFailure, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x12204F8
    void GetPublicServers(::Il2CppString* userId, ::Il2CppString* userName, int offset, int count, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>*>* onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onFailure, System::Threading::CancellationToken cancellationToken);
    // private System.Void WithFailureHandler(System.Action`1<ConnectionFailedReason> onFailure, System.Func`1<System.Threading.Tasks.Task> performTask)
    // Offset: 0x1220434
    void WithFailureHandler(System::Action_1<GlobalNamespace::ConnectionFailedReason>* onFailure, System::Func_1<System::Threading::Tasks::Task*>* performTask);
    // public override System.Void PollUpdate()
    // Offset: 0x121FEF8
    // Implemented from: MasterServer.MessageHandler
    // Base method: System.Void MessageHandler::PollUpdate()
    void PollUpdate();
    // protected override System.Boolean ShouldHandleUserMessage(MasterServer.IUserMessage packet, MasterServer.MessageHandler/MasterServer.MessageOrigin origin)
    // Offset: 0x12200A4
    // Implemented from: MasterServer.MessageHandler
    // Base method: System.Boolean MessageHandler::ShouldHandleUserMessage(MasterServer.IUserMessage packet, MasterServer.MessageHandler/MasterServer.MessageOrigin origin)
    bool ShouldHandleUserMessage(MasterServer::IUserMessage* packet, MasterServer::MessageHandler::MessageOrigin origin);
    // protected override System.Threading.Tasks.Task`1<MasterServer.IMasterServerAuthenticateRequest> GetAuthenticationRequest()
    // Offset: 0x1220100
    // Implemented from: MasterServer.BaseClientMessageHandler
    // Base method: System.Threading.Tasks.Task`1<MasterServer.IMasterServerAuthenticateRequest> BaseClientMessageHandler::GetAuthenticationRequest()
    System::Threading::Tasks::Task_1<MasterServer::IMasterServerAuthenticateRequest*>* GetAuthenticationRequest();
    // private System.Void HandshakeLog(System.String message)
    // Offset: 0x122061C
    // Implemented from: MasterServer.BaseClientMessageHandler
    // Base method: System.Void BaseClientMessageHandler::HandshakeLog(System.String message)
    void HandshakeLog(::Il2CppString* message);
  }; // MasterServer.UserMessageHandler
  #pragma pack(pop)
  static check_size<sizeof(UserMessageHandler), 184 + sizeof(GlobalNamespace::IAuthenticationTokenProvider*)> __MasterServer_UserMessageHandlerSizeCheck;
  static_assert(sizeof(UserMessageHandler) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler*, "MasterServer", "UserMessageHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::get_authenticationTokenProvider
// Il2CppName: get_authenticationTokenProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IAuthenticationTokenProvider* (MasterServer::UserMessageHandler::*)()>(&MasterServer::UserMessageHandler::get_authenticationTokenProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "get_authenticationTokenProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::UpdateKeepalive
// Il2CppName: UpdateKeepalive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::*)()>(&MasterServer::UserMessageHandler::UpdateKeepalive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "UpdateKeepalive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::ConnectToServer
// Il2CppName: ConnectToServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::*)(::Il2CppString*, ::Il2CppString*, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, ::Il2CppString*, ::Il2CppString*, MasterServer::UserMessageHandler::ConnectToServerDelegate*, System::Action_1<GlobalNamespace::ConnectionFailedReason>*, System::Threading::CancellationToken)>(&MasterServer::UserMessageHandler::ConnectToServer)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("MasterServer", "UserMessageHandler/ConnectToServerDelegate")->byval_arg;
    static auto* onConnectionFailed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "ConnectToServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, selectionMask, configuration, secret, code, onSuccess, onConnectionFailed, cancellationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::SendConnectToServerRequest
// Il2CppName: SendConnectToServerRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::*)(MasterServer::BaseConnectToServerRequest*, MasterServer::UserMessageHandler::ConnectToServerDelegate*, System::Action_1<GlobalNamespace::ConnectionFailedReason>*, System::Threading::CancellationToken)>(&MasterServer::UserMessageHandler::SendConnectToServerRequest)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("MasterServer", "BaseConnectToServerRequest")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("MasterServer", "UserMessageHandler/ConnectToServerDelegate")->byval_arg;
    static auto* onConnectionFailed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "SendConnectToServerRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, onSuccess, onConnectionFailed, cancellationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::GetPublicServers
// Il2CppName: GetPublicServers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::*)(::Il2CppString*, ::Il2CppString*, int, int, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>*>*, System::Action_1<GlobalNamespace::ConnectionFailedReason>*, System::Threading::CancellationToken)>(&MasterServer::UserMessageHandler::GetPublicServers)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PublicServerInfo")})})->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "GetPublicServers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, offset, count, selectionMask, configuration, onSuccess, onFailure, cancellationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::WithFailureHandler
// Il2CppName: WithFailureHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>*, System::Func_1<System::Threading::Tasks::Task*>*)>(&MasterServer::UserMessageHandler::WithFailureHandler)> {
  static const MethodInfo* get() {
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    static auto* performTask = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "WithFailureHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onFailure, performTask});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::*)()>(&MasterServer::UserMessageHandler::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::ShouldHandleUserMessage
// Il2CppName: ShouldHandleUserMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::UserMessageHandler::*)(MasterServer::IUserMessage*, MasterServer::MessageHandler::MessageOrigin)>(&MasterServer::UserMessageHandler::ShouldHandleUserMessage)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("MasterServer", "IUserMessage")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("MasterServer", "MessageHandler/MessageOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "ShouldHandleUserMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, origin});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::GetAuthenticationRequest
// Il2CppName: GetAuthenticationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::IMasterServerAuthenticateRequest*>* (MasterServer::UserMessageHandler::*)()>(&MasterServer::UserMessageHandler::GetAuthenticationRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "GetAuthenticationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::HandshakeLog
// Il2CppName: HandshakeLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::*)(::Il2CppString*)>(&MasterServer::UserMessageHandler::HandshakeLog)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler*), "HandshakeLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
