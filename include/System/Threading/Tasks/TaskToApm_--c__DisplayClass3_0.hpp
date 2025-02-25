// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.TaskToApm
#include "System/Threading/Tasks/TaskToApm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskToApm/System.Threading.Tasks.<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA2680
  class TaskToApm::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public System.AsyncCallback callback
    // Size: 0x8
    // Offset: 0x10
    System::AsyncCallback* callback;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // public System.IAsyncResult asyncResult
    // Size: 0x8
    // Offset: 0x18
    System::IAsyncResult* asyncResult;
    // Field size check
    static_assert(sizeof(System::IAsyncResult*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(System::AsyncCallback* callback_ = {}, System::IAsyncResult* asyncResult_ = {}) noexcept : callback{callback_}, asyncResult{asyncResult_} {}
    // Get instance field reference: public System.AsyncCallback callback
    System::AsyncCallback*& dyn_callback();
    // Get instance field reference: public System.IAsyncResult asyncResult
    System::IAsyncResult*& dyn_asyncResult();
    // System.Void <InvokeCallbackWhenTaskCompletes>b__0()
    // Offset: 0x187E730
    void $InvokeCallbackWhenTaskCompletes$b__0();
    // public System.Void .ctor()
    // Offset: 0x187E728
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskToApm::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskToApm::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // System.Threading.Tasks.TaskToApm/System.Threading.Tasks.<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(TaskToApm::$$c__DisplayClass3_0), 24 + sizeof(System::IAsyncResult*)> __System_Threading_Tasks_TaskToApm_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(TaskToApm::$$c__DisplayClass3_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0*, "System.Threading.Tasks", "TaskToApm/<>c__DisplayClass3_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0::$InvokeCallbackWhenTaskCompletes$b__0
// Il2CppName: <InvokeCallbackWhenTaskCompletes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0::*)()>(&System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0::$InvokeCallbackWhenTaskCompletes$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0*), "<InvokeCallbackWhenTaskCompletes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
