// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.TaskFactory
#include "System/Threading/Tasks/TaskFactory.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: Task because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise*, "System.Threading.Tasks", "TaskFactory/CompleteOnInvokePromise");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.TaskFactory/System.Threading.Tasks.CompleteOnInvokePromise
  // [TokenAttribute] Offset: FFFFFFFF
  class TaskFactory::CompleteOnInvokePromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>/*, public ::System::Threading::Tasks::ITaskCompletionAction*/ {
    public:
    public:
    // private System.Collections.Generic.IList`1<System.Threading.Tasks.Task> _tasks
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*) == 0x8);
    // private System.Int32 m_firstTaskAlreadyCompleted
    // Size: 0x4
    // Offset: 0x60
    int m_firstTaskAlreadyCompleted;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Threading::Tasks::ITaskCompletionAction
    operator ::System::Threading::Tasks::ITaskCompletionAction() noexcept {
      return *reinterpret_cast<::System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // Creating interface conversion operator: i_ITaskCompletionAction
    inline ::System::Threading::Tasks::ITaskCompletionAction* i_ITaskCompletionAction() noexcept {
      return reinterpret_cast<::System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.IList`1<System.Threading.Tasks.Task> _tasks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>*& dyn__tasks();
    // Get instance field reference: private System.Int32 m_firstTaskAlreadyCompleted
    [[deprecated("Use field access instead!")]] int& dyn_m_firstTaskAlreadyCompleted();
    // public System.Void .ctor(System.Collections.Generic.IList`1<System.Threading.Tasks.Task> tasks)
    // Offset: 0x1D3C578
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskFactory::CompleteOnInvokePromise* New_ctor(::System::Collections::Generic::IList_1<::System::Threading::Tasks::Task*>* tasks) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskFactory::CompleteOnInvokePromise*, creationType>(tasks)));
    }
    // public System.Void Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0x1D3C690
    void Invoke(::System::Threading::Tasks::Task* completingTask);
  }; // System.Threading.Tasks.TaskFactory/System.Threading.Tasks.CompleteOnInvokePromise
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise::*)(::System::Threading::Tasks::Task*)>(&System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise::Invoke)> {
  static const MethodInfo* get() {
    static auto* completingTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completingTask});
  }
};
