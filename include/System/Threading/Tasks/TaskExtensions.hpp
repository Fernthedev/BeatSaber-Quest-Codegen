// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TaskExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TaskExtensions
    TaskExtensions() noexcept {}
    // static public System.Threading.Tasks.Task`1<TResult> Unwrap(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<TResult>> task)
    // Offset: 0xFFFFFFFF
    template<class TResult>
    static System::Threading::Tasks::Task_1<TResult>* Unwrap(System::Threading::Tasks::Task_1<System::Threading::Tasks::Task_1<TResult>*>* task) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskExtensions::Unwrap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading.Tasks", "TaskExtensions", "Unwrap", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, task);
    }
  }; // System.Threading.Tasks.TaskExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskExtensions*, "System.Threading.Tasks", "TaskExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskExtensions::Unwrap
// Il2CppName: Unwrap
// Cannot write MetadataGetter for generic methods!
