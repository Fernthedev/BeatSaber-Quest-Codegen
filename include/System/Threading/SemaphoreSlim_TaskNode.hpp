// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.SemaphoreSlim
#include "System/Threading/SemaphoreSlim.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.SemaphoreSlim/System.Threading.TaskNode
  // [TokenAttribute] Offset: FFFFFFFF
  class SemaphoreSlim::TaskNode : public System::Threading::Tasks::Task_1<bool> {
    public:
    // System.Threading.SemaphoreSlim/System.Threading.TaskNode Prev
    // Size: 0x8
    // Offset: 0x58
    System::Threading::SemaphoreSlim::TaskNode* Prev;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim::TaskNode*) == 0x8);
    // System.Threading.SemaphoreSlim/System.Threading.TaskNode Next
    // Size: 0x8
    // Offset: 0x60
    System::Threading::SemaphoreSlim::TaskNode* Next;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim::TaskNode*) == 0x8);
    // Creating value type constructor for type: TaskNode
    TaskNode(System::Threading::SemaphoreSlim::TaskNode* Prev_ = {}, System::Threading::SemaphoreSlim::TaskNode* Next_ = {}) noexcept : Prev{Prev_}, Next{Next_} {}
    // Get instance field reference: System.Threading.SemaphoreSlim/System.Threading.TaskNode Prev
    System::Threading::SemaphoreSlim::TaskNode*& dyn_Prev();
    // Get instance field reference: System.Threading.SemaphoreSlim/System.Threading.TaskNode Next
    System::Threading::SemaphoreSlim::TaskNode*& dyn_Next();
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0x19036E4
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0x1903738
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
    // System.Void .ctor()
    // Offset: 0x19024F4
    // Implemented from: System.Threading.Tasks.Task`1
    // Base method: System.Void Task_1::.ctor()
    // Base method: System.Void Task::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemaphoreSlim::TaskNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SemaphoreSlim::TaskNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemaphoreSlim::TaskNode*, creationType>()));
    }
  }; // System.Threading.SemaphoreSlim/System.Threading.TaskNode
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SemaphoreSlim::TaskNode*, "System.Threading", "SemaphoreSlim/TaskNode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::TaskNode::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
// Il2CppName: System.Threading.IThreadPoolWorkItem.ExecuteWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SemaphoreSlim::TaskNode::*)()>(&System::Threading::SemaphoreSlim::TaskNode::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim::TaskNode*), "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::TaskNode::System_Threading_IThreadPoolWorkItem_MarkAborted
// Il2CppName: System.Threading.IThreadPoolWorkItem.MarkAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SemaphoreSlim::TaskNode::*)(System::Threading::ThreadAbortException*)>(&System::Threading::SemaphoreSlim::TaskNode::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  static const MethodInfo* get() {
    static auto* tae = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadAbortException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim::TaskNode*), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tae});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::TaskNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
