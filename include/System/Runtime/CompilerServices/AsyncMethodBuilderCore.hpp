// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IAsyncStateMachine
  class IAsyncStateMachine;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
  // [TokenAttribute] Offset: FFFFFFFF
  struct AsyncMethodBuilderCore/*, public System::ValueType*/ {
    public:
    // Nested type: System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner
    class MoveNextRunner;
    // Nested type: System::Runtime::CompilerServices::AsyncMethodBuilderCore::ContinuationWrapper
    class ContinuationWrapper;
    // Nested type: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c
    class $$c;
    // System.Runtime.CompilerServices.IAsyncStateMachine m_stateMachine
    // Size: 0x8
    // Offset: 0x0
    System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::IAsyncStateMachine*) == 0x8);
    // System.Action m_defaultContextAction
    // Size: 0x8
    // Offset: 0x8
    System::Action* m_defaultContextAction;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: AsyncMethodBuilderCore
    constexpr AsyncMethodBuilderCore(System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine_ = {}, System::Action* m_defaultContextAction_ = {}) noexcept : m_stateMachine{m_stateMachine_}, m_defaultContextAction{m_defaultContextAction_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.Runtime.CompilerServices.IAsyncStateMachine m_stateMachine
    System::Runtime::CompilerServices::IAsyncStateMachine*& dyn_m_stateMachine();
    // Get instance field reference: System.Action m_defaultContextAction
    System::Action*& dyn_m_defaultContextAction();
    // public System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x148D43C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
    // System.Action GetCompletionAction(System.Threading.Tasks.Task taskForTracing, ref System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.MoveNextRunner runnerToInitialize)
    // Offset: 0x148D524
    System::Action* GetCompletionAction(System::Threading::Tasks::Task* taskForTracing, ByRef<System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*> runnerToInitialize);
    // private System.Action OutputAsyncCausalityEvents(System.Threading.Tasks.Task innerTask, System.Action continuation)
    // Offset: 0x148D70C
    System::Action* OutputAsyncCausalityEvents(System::Threading::Tasks::Task* innerTask, System::Action* continuation);
    // System.Void PostBoxInitialization(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine, System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.MoveNextRunner runner, System.Threading.Tasks.Task builtTask)
    // Offset: 0x148D864
    void PostBoxInitialization(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine, System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner* runner, System::Threading::Tasks::Task* builtTask);
    // static System.Void ThrowAsync(System.Exception exception, System.Threading.SynchronizationContext targetContext)
    // Offset: 0x148DA0C
    static void ThrowAsync(System::Exception* exception, System::Threading::SynchronizationContext* targetContext);
    // static System.Action CreateContinuationWrapper(System.Action continuation, System.Action invokeAction, System.Threading.Tasks.Task innerTask)
    // Offset: 0x148D7C0
    static System::Action* CreateContinuationWrapper(System::Action* continuation, System::Action* invokeAction, System::Threading::Tasks::Task* innerTask);
    // static System.Threading.Tasks.Task TryGetContinuationTask(System.Action action)
    // Offset: 0x148DDF0
    static System::Threading::Tasks::Task* TryGetContinuationTask(System::Action* action);
  }; // System.Runtime.CompilerServices.AsyncMethodBuilderCore
  #pragma pack(pop)
  static check_size<sizeof(AsyncMethodBuilderCore), 8 + sizeof(System::Action*)> __System_Runtime_CompilerServices_AsyncMethodBuilderCoreSizeCheck;
  static_assert(sizeof(AsyncMethodBuilderCore) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncMethodBuilderCore, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetCompletionAction
// Il2CppName: GetCompletionAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action* (System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(System::Threading::Tasks::Task*, ByRef<System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*>)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetCompletionAction)> {
  static const MethodInfo* get() {
    static auto* taskForTracing = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* runnerToInitialize = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore), "GetCompletionAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taskForTracing, runnerToInitialize});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::OutputAsyncCausalityEvents
// Il2CppName: OutputAsyncCausalityEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action* (System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(System::Threading::Tasks::Task*, System::Action*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::OutputAsyncCausalityEvents)> {
  static const MethodInfo* get() {
    static auto* innerTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore), "OutputAsyncCausalityEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerTask, continuation});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::PostBoxInitialization
// Il2CppName: PostBoxInitialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncMethodBuilderCore::*)(System::Runtime::CompilerServices::IAsyncStateMachine*, System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*, System::Threading::Tasks::Task*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::PostBoxInitialization)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    static auto* runner = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner")->byval_arg;
    static auto* builtTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore), "PostBoxInitialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine, runner, builtTask});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::ThrowAsync
// Il2CppName: ThrowAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception*, System::Threading::SynchronizationContext*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::ThrowAsync)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* targetContext = &::il2cpp_utils::GetClassFromName("System.Threading", "SynchronizationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore), "ThrowAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, targetContext});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::CreateContinuationWrapper
// Il2CppName: CreateContinuationWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action* (*)(System::Action*, System::Action*, System::Threading::Tasks::Task*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::CreateContinuationWrapper)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* invokeAction = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* innerTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore), "CreateContinuationWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation, invokeAction, innerTask});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::TryGetContinuationTask
// Il2CppName: TryGetContinuationTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (*)(System::Action*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::TryGetContinuationTask)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore), "TryGetContinuationTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
