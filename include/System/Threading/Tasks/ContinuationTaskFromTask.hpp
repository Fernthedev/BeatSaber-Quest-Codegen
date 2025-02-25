// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.ContinuationTaskFromTask
  // [TokenAttribute] Offset: FFFFFFFF
  class ContinuationTaskFromTask : public System::Threading::Tasks::Task {
    public:
    // private System.Threading.Tasks.Task m_antecedent
    // Size: 0x8
    // Offset: 0x50
    System::Threading::Tasks::Task* m_antecedent;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // Creating value type constructor for type: ContinuationTaskFromTask
    ContinuationTaskFromTask(System::Threading::Tasks::Task* m_antecedent_ = {}) noexcept : m_antecedent{m_antecedent_} {}
    // Creating conversion operator: operator System::Threading::Tasks::Task*
    constexpr operator System::Threading::Tasks::Task*() const noexcept {
      return m_antecedent;
    }
    // Get instance field reference: private System.Threading.Tasks.Task m_antecedent
    System::Threading::Tasks::Task*& dyn_m_antecedent();
    // public System.Void .ctor(System.Threading.Tasks.Task antecedent, System.Delegate action, System.Object state, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x19052A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContinuationTaskFromTask* New_ctor(System::Threading::Tasks::Task* antecedent, System::Delegate* action, ::Il2CppObject* state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, ByRef<System::Threading::StackCrawlMark> stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::ContinuationTaskFromTask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContinuationTaskFromTask*, creationType>(antecedent, action, state, creationOptions, internalOptions, byref(stackMark))));
    }
    // override System.Void InnerInvoke()
    // Offset: 0x1905494
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Void Task::InnerInvoke()
    void InnerInvoke();
  }; // System.Threading.Tasks.ContinuationTaskFromTask
  #pragma pack(pop)
  static check_size<sizeof(ContinuationTaskFromTask), 80 + sizeof(System::Threading::Tasks::Task*)> __System_Threading_Tasks_ContinuationTaskFromTaskSizeCheck;
  static_assert(sizeof(ContinuationTaskFromTask) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ContinuationTaskFromTask*, "System.Threading.Tasks", "ContinuationTaskFromTask");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::ContinuationTaskFromTask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::ContinuationTaskFromTask::InnerInvoke
// Il2CppName: InnerInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromTask::*)()>(&System::Threading::Tasks::ContinuationTaskFromTask::InnerInvoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ContinuationTaskFromTask*), "InnerInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
