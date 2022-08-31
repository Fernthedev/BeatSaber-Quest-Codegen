// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.TaskToApm
#include "System/Threading/Tasks/TaskToApm.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult*, "System.Threading.Tasks", "TaskToApm/TaskWrapperAsyncResult");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskToApm/System.Threading.Tasks.TaskWrapperAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class TaskToApm::TaskWrapperAsyncResult : public ::Il2CppObject/*, public ::System::IAsyncResult*/ {
    public:
    public:
    // readonly System.Threading.Tasks.Task Task
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::Task* Task;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // private readonly System.Object m_state
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean m_completedSynchronously
    // Size: 0x1
    // Offset: 0x20
    bool m_completedSynchronously;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IAsyncResult
    operator ::System::IAsyncResult() noexcept {
      return *reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Creating interface conversion operator: i_IAsyncResult
    inline ::System::IAsyncResult* i_IAsyncResult() noexcept {
      return reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Get instance field reference: readonly System.Threading.Tasks.Task Task
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_Task();
    // Get instance field reference: private readonly System.Object m_state
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_state();
    // Get instance field reference: private readonly System.Boolean m_completedSynchronously
    [[deprecated("Use field access instead!")]] bool& dyn_m_completedSynchronously();
    // private System.Object System.IAsyncResult.get_AsyncState()
    // Offset: 0x1D3D6D0
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // private System.Boolean System.IAsyncResult.get_CompletedSynchronously()
    // Offset: 0x1D3D6D8
    bool System_IAsyncResult_get_CompletedSynchronously();
    // private System.Boolean System.IAsyncResult.get_IsCompleted()
    // Offset: 0x1D3D6E0
    bool System_IAsyncResult_get_IsCompleted();
    // private System.Threading.WaitHandle System.IAsyncResult.get_AsyncWaitHandle()
    // Offset: 0x1D3D6FC
    ::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
    // System.Void .ctor(System.Threading.Tasks.Task task, System.Object state, System.Boolean completedSynchronously)
    // Offset: 0x1D3D4B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskToApm::TaskWrapperAsyncResult* New_ctor(::System::Threading::Tasks::Task* task, ::Il2CppObject* state, bool completedSynchronously) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskToApm::TaskWrapperAsyncResult*, creationType>(task, state, completedSynchronously)));
    }
  }; // System.Threading.Tasks.TaskToApm/System.Threading.Tasks.TaskWrapperAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(TaskToApm::TaskWrapperAsyncResult), 32 + sizeof(bool)> __System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResultSizeCheck;
  static_assert(sizeof(TaskToApm::TaskWrapperAsyncResult) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncState
// Il2CppName: System.IAsyncResult.get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::*)()>(&System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult*), "System.IAsyncResult.get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::System_IAsyncResult_get_CompletedSynchronously
// Il2CppName: System.IAsyncResult.get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::*)()>(&System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::System_IAsyncResult_get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult*), "System.IAsyncResult.get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::System_IAsyncResult_get_IsCompleted
// Il2CppName: System.IAsyncResult.get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::*)()>(&System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::System_IAsyncResult_get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult*), "System.IAsyncResult.get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncWaitHandle
// Il2CppName: System.IAsyncResult.get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::*)()>(&System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::System_IAsyncResult_get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult*), "System.IAsyncResult.get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
