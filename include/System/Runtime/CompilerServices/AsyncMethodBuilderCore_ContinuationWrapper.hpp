// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.ContinuationWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncMethodBuilderCore::ContinuationWrapper : public ::Il2CppObject {
    public:
    // readonly System.Action m_continuation
    // Size: 0x8
    // Offset: 0x10
    System::Action* m_continuation;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private readonly System.Action m_invokeAction
    // Size: 0x8
    // Offset: 0x18
    System::Action* m_invokeAction;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // readonly System.Threading.Tasks.Task m_innerTask
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::Task* m_innerTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // Creating value type constructor for type: ContinuationWrapper
    ContinuationWrapper(System::Action* m_continuation_ = {}, System::Action* m_invokeAction_ = {}, System::Threading::Tasks::Task* m_innerTask_ = {}) noexcept : m_continuation{m_continuation_}, m_invokeAction{m_invokeAction_}, m_innerTask{m_innerTask_} {}
    // Get instance field reference: readonly System.Action m_continuation
    System::Action*& dyn_m_continuation();
    // Get instance field reference: private readonly System.Action m_invokeAction
    System::Action*& dyn_m_invokeAction();
    // Get instance field reference: readonly System.Threading.Tasks.Task m_innerTask
    System::Threading::Tasks::Task*& dyn_m_innerTask();
    // System.Void .ctor(System.Action continuation, System.Action invokeAction, System.Threading.Tasks.Task innerTask)
    // Offset: 0x148DDA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncMethodBuilderCore::ContinuationWrapper* New_ctor(System::Action* continuation, System::Action* invokeAction, System::Threading::Tasks::Task* innerTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncMethodBuilderCore::ContinuationWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncMethodBuilderCore::ContinuationWrapper*, creationType>(continuation, invokeAction, innerTask)));
    }
    // System.Void Invoke()
    // Offset: 0x148E074
    void Invoke();
  }; // System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.ContinuationWrapper
  #pragma pack(pop)
  static check_size<sizeof(AsyncMethodBuilderCore::ContinuationWrapper), 32 + sizeof(System::Threading::Tasks::Task*)> __System_Runtime_CompilerServices_AsyncMethodBuilderCore_ContinuationWrapperSizeCheck;
  static_assert(sizeof(AsyncMethodBuilderCore::ContinuationWrapper) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncMethodBuilderCore::ContinuationWrapper*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/ContinuationWrapper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::ContinuationWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::ContinuationWrapper::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncMethodBuilderCore::ContinuationWrapper::*)()>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::ContinuationWrapper::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore::ContinuationWrapper*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
