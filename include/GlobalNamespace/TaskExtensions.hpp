// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TaskExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TaskExtensions : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1<T>
    template<typename T>
    class $$c__DisplayClass0_0_1;
    // Nested type: GlobalNamespace::TaskExtensions::$WaitForTask$d__1_1<T>
    template<typename T>
    struct $WaitForTask$d__1_1;
    // Creating value type constructor for type: TaskExtensions
    TaskExtensions() noexcept {}
    // static public System.Threading.Tasks.Task`1<T> WithCancellation(System.Threading.Tasks.Task`1<T> task, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Threading::Tasks::Task_1<T>* WithCancellation(System::Threading::Tasks::Task_1<T>* task, System::Threading::CancellationToken cancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TaskExtensions::WithCancellation");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "TaskExtensions", "WithCancellation", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task), ::il2cpp_utils::ExtractType(cancellationToken)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, task, cancellationToken);
    }
    // static private System.Void WaitForTask(System.Threading.Tasks.Task`1<T> task, System.Threading.Tasks.TaskCompletionSource`1<T> tcs)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void WaitForTask(System::Threading::Tasks::Task_1<T>* task, System::Threading::Tasks::TaskCompletionSource_1<T>* tcs) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TaskExtensions::WaitForTask");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "TaskExtensions", "WaitForTask", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task), ::il2cpp_utils::ExtractType(tcs)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, task, tcs);
    }
  }; // TaskExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TaskExtensions*, "", "TaskExtensions");
// Writing includes for template specializations
#include "System/Threading/Tasks/Task_1.hpp"
#include "System/Threading/Tasks/TaskCompletionSource_1.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TaskExtensions::WithCancellation
// Il2CppName: WithCancellation
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::TaskExtensions::WaitForTask
// Il2CppName: WaitForTask
// Cannot write MetadataGetter for generic methods!
