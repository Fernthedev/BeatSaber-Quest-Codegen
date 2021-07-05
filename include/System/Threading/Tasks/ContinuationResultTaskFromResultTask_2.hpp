// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.ContinuationResultTaskFromResultTask`2
  template<typename TAntecedentResult, typename TResult>
  class ContinuationResultTaskFromResultTask_2 : public System::Threading::Tasks::Task_1<TResult> {
    public:
    // private System.Threading.Tasks.Task`1<TAntecedentResult> m_antecedent
    // Size: 0x8
    // Offset: 0x0
    System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<TAntecedentResult>*) == 0x8);
    // Creating value type constructor for type: ContinuationResultTaskFromResultTask_2
    ContinuationResultTaskFromResultTask_2(System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent_ = {}) noexcept : m_antecedent{m_antecedent_} {}
    // public System.Void .ctor(System.Threading.Tasks.Task`1<TAntecedentResult> antecedent, System.Delegate function, System.Object state, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>* New_ctor(System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, System::Delegate* function, ::Il2CppObject* state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::StackCrawlMark& stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*, creationType>(antecedent, function, state, creationOptions, internalOptions, stackMark)));
    }
    // override System.Void InnerInvoke()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Threading.Tasks.Task`1
    // Base method: System.Void Task_1::InnerInvoke()
    void InnerInvoke() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::ContinuationResultTaskFromResultTask_2::InnerInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InnerInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
  }; // System.Threading.Tasks.ContinuationResultTaskFromResultTask`2
  // Could not write size check! Type: System.Threading.Tasks.ContinuationResultTaskFromResultTask`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::ContinuationResultTaskFromResultTask_2, "System.Threading.Tasks", "ContinuationResultTaskFromResultTask`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
