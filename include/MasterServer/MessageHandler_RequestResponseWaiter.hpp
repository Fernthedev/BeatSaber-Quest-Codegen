// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: MasterServer.MessageHandler/MasterServer.RequestWaiter
#include "MasterServer/MessageHandler_RequestWaiter.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerMessage
  class IMasterServerMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/MasterServer.RequestResponseWaiter
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageHandler::RequestResponseWaiter : public MasterServer::MessageHandler::RequestWaiter {
    public:
    // private readonly System.Threading.Tasks.TaskCompletionSource`1<MasterServer.IMasterServerMessage> _taskCompletionSource
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<MasterServer::IMasterServerMessage*>* taskCompletionSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<MasterServer::IMasterServerMessage*>*) == 0x8);
    // private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    System::Threading::CancellationTokenRegistration disposedCancellationTokenRegistration;
    // private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    System::Threading::CancellationTokenRegistration requestCancellationTokenRegistration;
    // Creating value type constructor for type: RequestResponseWaiter
    RequestResponseWaiter(System::Threading::Tasks::TaskCompletionSource_1<MasterServer::IMasterServerMessage*>* taskCompletionSource_ = {}, System::Threading::CancellationTokenRegistration disposedCancellationTokenRegistration_ = {}, System::Threading::CancellationTokenRegistration requestCancellationTokenRegistration_ = {}) noexcept : taskCompletionSource{taskCompletionSource_}, disposedCancellationTokenRegistration{disposedCancellationTokenRegistration_}, requestCancellationTokenRegistration{requestCancellationTokenRegistration_} {}
    // Get instance field: private readonly System.Threading.Tasks.TaskCompletionSource`1<MasterServer.IMasterServerMessage> _taskCompletionSource
    System::Threading::Tasks::TaskCompletionSource_1<MasterServer::IMasterServerMessage*>* _get__taskCompletionSource();
    // Set instance field: private readonly System.Threading.Tasks.TaskCompletionSource`1<MasterServer.IMasterServerMessage> _taskCompletionSource
    void _set__taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<MasterServer::IMasterServerMessage*>* value);
    // Get instance field: private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    System::Threading::CancellationTokenRegistration _get__disposedCancellationTokenRegistration();
    // Set instance field: private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    void _set__disposedCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value);
    // Get instance field: private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    System::Threading::CancellationTokenRegistration _get__requestCancellationTokenRegistration();
    // Set instance field: private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    void _set__requestCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value);
    // public System.Threading.Tasks.Task`1<MasterServer.IMasterServerMessage> get_task()
    // Offset: 0x121EDDC
    System::Threading::Tasks::Task_1<MasterServer::IMasterServerMessage*>* get_task();
    // public System.Boolean get_isWaiting()
    // Offset: 0x121ECAC
    bool get_isWaiting();
    // public System.Void .ctor(System.Threading.CancellationToken disposedCancellationToken, System.Threading.CancellationToken requestCancellationToken)
    // Offset: 0x121EAB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::RequestResponseWaiter* New_ctor(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::RequestResponseWaiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::RequestResponseWaiter*, creationType>(disposedCancellationToken, requestCancellationToken)));
    }
    // public System.Void Complete(MasterServer.IMasterServerMessage response)
    // Offset: 0x121AC7C
    void Complete(MasterServer::IMasterServerMessage* response);
    // public System.Void Fail(System.Exception ex)
    // Offset: 0x121ED1C
    void Fail(System::Exception* ex);
    // public System.Void Cancel()
    // Offset: 0x121ED84
    void Cancel();
    // public override System.Void Dispose()
    // Offset: 0x121EBD0
    // Implemented from: MasterServer.MessageHandler/MasterServer.RequestWaiter
    // Base method: System.Void RequestWaiter::Dispose()
    void Dispose();
  }; // MasterServer.MessageHandler/MasterServer.RequestResponseWaiter
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::RequestResponseWaiter*, "MasterServer", "MessageHandler/RequestResponseWaiter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::MessageHandler::RequestResponseWaiter::get_task
// Il2CppName: get_task
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::IMasterServerMessage*>* (MasterServer::MessageHandler::RequestResponseWaiter::*)()>(&MasterServer::MessageHandler::RequestResponseWaiter::get_task)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::RequestResponseWaiter*), "get_task", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::RequestResponseWaiter::get_isWaiting
// Il2CppName: get_isWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::MessageHandler::RequestResponseWaiter::*)()>(&MasterServer::MessageHandler::RequestResponseWaiter::get_isWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::RequestResponseWaiter*), "get_isWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::RequestResponseWaiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::MessageHandler::RequestResponseWaiter::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::RequestResponseWaiter::*)(MasterServer::IMasterServerMessage*)>(&MasterServer::MessageHandler::RequestResponseWaiter::Complete)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("MasterServer", "IMasterServerMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::RequestResponseWaiter*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::RequestResponseWaiter::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::RequestResponseWaiter::*)(System::Exception*)>(&MasterServer::MessageHandler::RequestResponseWaiter::Fail)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::RequestResponseWaiter*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::RequestResponseWaiter::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::RequestResponseWaiter::*)()>(&MasterServer::MessageHandler::RequestResponseWaiter::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::RequestResponseWaiter*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::RequestResponseWaiter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::RequestResponseWaiter::*)()>(&MasterServer::MessageHandler::RequestResponseWaiter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::RequestResponseWaiter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
