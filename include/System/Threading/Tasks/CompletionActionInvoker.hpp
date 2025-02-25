// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: ITaskCompletionAction
  class ITaskCompletionAction;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.CompletionActionInvoker
  // [TokenAttribute] Offset: FFFFFFFF
  class CompletionActionInvoker : public ::Il2CppObject/*, public System::Threading::IThreadPoolWorkItem*/ {
    public:
    // private readonly System.Threading.Tasks.ITaskCompletionAction m_action
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::ITaskCompletionAction* m_action;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::ITaskCompletionAction*) == 0x8);
    // private readonly System.Threading.Tasks.Task m_completingTask
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::Task* m_completingTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // Creating value type constructor for type: CompletionActionInvoker
    CompletionActionInvoker(System::Threading::Tasks::ITaskCompletionAction* m_action_ = {}, System::Threading::Tasks::Task* m_completingTask_ = {}) noexcept : m_action{m_action_}, m_completingTask{m_completingTask_} {}
    // Creating interface conversion operator: operator System::Threading::IThreadPoolWorkItem
    operator System::Threading::IThreadPoolWorkItem() noexcept {
      return *reinterpret_cast<System::Threading::IThreadPoolWorkItem*>(this);
    }
    // Get instance field reference: private readonly System.Threading.Tasks.ITaskCompletionAction m_action
    System::Threading::Tasks::ITaskCompletionAction*& dyn_m_action();
    // Get instance field reference: private readonly System.Threading.Tasks.Task m_completingTask
    System::Threading::Tasks::Task*& dyn_m_completingTask();
    // System.Void .ctor(System.Threading.Tasks.ITaskCompletionAction action, System.Threading.Tasks.Task completingTask)
    // Offset: 0x19051B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompletionActionInvoker* New_ctor(System::Threading::Tasks::ITaskCompletionAction* action, System::Threading::Tasks::Task* completingTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::CompletionActionInvoker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompletionActionInvoker*, creationType>(action, completingTask)));
    }
    // public System.Void ExecuteWorkItem()
    // Offset: 0x19051EC
    void ExecuteWorkItem();
    // public System.Void MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0x19052A4
    void MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Threading.Tasks.CompletionActionInvoker
  #pragma pack(pop)
  static check_size<sizeof(CompletionActionInvoker), 24 + sizeof(System::Threading::Tasks::Task*)> __System_Threading_Tasks_CompletionActionInvokerSizeCheck;
  static_assert(sizeof(CompletionActionInvoker) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::CompletionActionInvoker*, "System.Threading.Tasks", "CompletionActionInvoker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::CompletionActionInvoker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::CompletionActionInvoker::ExecuteWorkItem
// Il2CppName: ExecuteWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::CompletionActionInvoker::*)()>(&System::Threading::Tasks::CompletionActionInvoker::ExecuteWorkItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::CompletionActionInvoker*), "ExecuteWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::CompletionActionInvoker::MarkAborted
// Il2CppName: MarkAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::CompletionActionInvoker::*)(System::Threading::ThreadAbortException*)>(&System::Threading::Tasks::CompletionActionInvoker::MarkAborted)> {
  static const MethodInfo* get() {
    static auto* tae = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadAbortException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::CompletionActionInvoker*), "MarkAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tae});
  }
};
