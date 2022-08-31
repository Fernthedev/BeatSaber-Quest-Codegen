// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestWaiter
#include "BGNet/Core/Messages/UnconnectedMessageHandler_RequestWaiter.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter*, "BGNet.Core.Messages", "UnconnectedMessageHandler/SentRequestWaiter");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.SentRequestWaiter
  // [TokenAttribute] Offset: FFFFFFFF
  class UnconnectedMessageHandler::SentRequestWaiter : public ::BGNet::Core::Messages::UnconnectedMessageHandler::RequestWaiter {
    public:
    public:
    // private readonly System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> _taskCompletionSource
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskCompletionSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Threading::CancellationTokenRegistration disposedCancellationTokenRegistration;
    // private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Threading::CancellationTokenRegistration requestCancellationTokenRegistration;
    public:
    // Get instance field reference: private readonly System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> _taskCompletionSource
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& dyn__taskCompletionSource();
    // Get instance field reference: private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenRegistration& dyn__disposedCancellationTokenRegistration();
    // Get instance field reference: private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenRegistration& dyn__requestCancellationTokenRegistration();
    // public System.Threading.Tasks.Task get_task()
    // Offset: 0x158F048
    ::System::Threading::Tasks::Task* get_task();
    // public System.Boolean get_isWaiting()
    // Offset: 0x158F098
    bool get_isWaiting();
    // public System.Void .ctor(System.Threading.CancellationToken disposedCancellationToken, System.Threading.CancellationToken requestCancellationToken)
    // Offset: 0x158EF2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnconnectedMessageHandler::SentRequestWaiter* New_ctor(::System::Threading::CancellationToken disposedCancellationToken, ::System::Threading::CancellationToken requestCancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnconnectedMessageHandler::SentRequestWaiter*, creationType>(disposedCancellationToken, requestCancellationToken)));
    }
    // public System.Void Complete(System.Boolean handled)
    // Offset: 0x158CD44
    void Complete(bool handled);
    // public System.Void Cancel()
    // Offset: 0x158F108
    void Cancel();
    // public override System.Void Dispose()
    // Offset: 0x159060C
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestWaiter
    // Base method: System.Void RequestWaiter::Dispose()
    void Dispose();
  }; // BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.SentRequestWaiter
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::get_task
// Il2CppName: get_task
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::get_task)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter*), "get_task", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::get_isWaiting
// Il2CppName: get_isWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::get_isWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter*), "get_isWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::*)(bool)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::Complete)> {
  static const MethodInfo* get() {
    static auto* handled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handled});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
