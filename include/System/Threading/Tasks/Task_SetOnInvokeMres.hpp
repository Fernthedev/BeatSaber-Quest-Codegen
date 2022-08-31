// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.ManualResetEventSlim
#include "System/Threading/ManualResetEventSlim.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::Task::SetOnInvokeMres);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Task::SetOnInvokeMres*, "System.Threading.Tasks", "Task/SetOnInvokeMres");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.Task/System.Threading.Tasks.SetOnInvokeMres
  // [TokenAttribute] Offset: FFFFFFFF
  class Task::SetOnInvokeMres : public ::System::Threading::ManualResetEventSlim/*, public ::System::Threading::Tasks::ITaskCompletionAction*/ {
    public:
    // Creating interface conversion operator: operator ::System::Threading::Tasks::ITaskCompletionAction
    operator ::System::Threading::Tasks::ITaskCompletionAction() noexcept {
      return *reinterpret_cast<::System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // Creating interface conversion operator: i_ITaskCompletionAction
    inline ::System::Threading::Tasks::ITaskCompletionAction* i_ITaskCompletionAction() noexcept {
      return reinterpret_cast<::System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // public System.Void Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0x1D3A0CC
    void Invoke(::System::Threading::Tasks::Task* completingTask);
    // System.Void .ctor()
    // Offset: 0x1D3A05C
    // Implemented from: System.Threading.ManualResetEventSlim
    // Base method: System.Void ManualResetEventSlim::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::SetOnInvokeMres* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task::SetOnInvokeMres::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::SetOnInvokeMres*, creationType>()));
    }
  }; // System.Threading.Tasks.Task/System.Threading.Tasks.SetOnInvokeMres
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::Task::SetOnInvokeMres::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::SetOnInvokeMres::*)(::System::Threading::Tasks::Task*)>(&System::Threading::Tasks::Task::SetOnInvokeMres::Invoke)> {
  static const MethodInfo* get() {
    static auto* completingTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::SetOnInvokeMres*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completingTask});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::SetOnInvokeMres::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
