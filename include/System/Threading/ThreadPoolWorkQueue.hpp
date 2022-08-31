// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadPoolWorkQueueThreadLocals
  class ThreadPoolWorkQueueThreadLocals;
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: ThreadPoolWorkQueue
  class ThreadPoolWorkQueue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::ThreadPoolWorkQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolWorkQueue*, "System.Threading", "ThreadPoolWorkQueue");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreadPoolWorkQueue : public ::Il2CppObject {
    public:
    // Nested type: ::System::Threading::ThreadPoolWorkQueue::SparseArray_1<T>
    template<typename T>
    class SparseArray_1;
    // Nested type: ::System::Threading::ThreadPoolWorkQueue::WorkStealingQueue
    class WorkStealingQueue;
    // Nested type: ::System::Threading::ThreadPoolWorkQueue::QueueSegment
    class QueueSegment;
    public:
    // System.Threading.ThreadPoolWorkQueue/System.Threading.QueueSegment queueHead
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::ThreadPoolWorkQueue::QueueSegment* queueHead;
    // Field size check
    static_assert(sizeof(::System::Threading::ThreadPoolWorkQueue::QueueSegment*) == 0x8);
    // System.Threading.ThreadPoolWorkQueue/System.Threading.QueueSegment queueTail
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::ThreadPoolWorkQueue::QueueSegment* queueTail;
    // Field size check
    static_assert(sizeof(::System::Threading::ThreadPoolWorkQueue::QueueSegment*) == 0x8);
    // private System.Int32 numOutstandingThreadRequests
    // Size: 0x4
    // Offset: 0x20
    int numOutstandingThreadRequests;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static System.Threading.ThreadPoolWorkQueue/System.Threading.SparseArray`1<System.Threading.ThreadPoolWorkQueue/System.Threading.WorkStealingQueue> allThreadQueues
    static ::System::Threading::ThreadPoolWorkQueue::SparseArray_1<::System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* _get_allThreadQueues();
    // Set static field: static System.Threading.ThreadPoolWorkQueue/System.Threading.SparseArray`1<System.Threading.ThreadPoolWorkQueue/System.Threading.WorkStealingQueue> allThreadQueues
    static void _set_allThreadQueues(::System::Threading::ThreadPoolWorkQueue::SparseArray_1<::System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* value);
    // Get instance field reference: System.Threading.ThreadPoolWorkQueue/System.Threading.QueueSegment queueHead
    [[deprecated("Use field access instead!")]] ::System::Threading::ThreadPoolWorkQueue::QueueSegment*& dyn_queueHead();
    // Get instance field reference: System.Threading.ThreadPoolWorkQueue/System.Threading.QueueSegment queueTail
    [[deprecated("Use field access instead!")]] ::System::Threading::ThreadPoolWorkQueue::QueueSegment*& dyn_queueTail();
    // Get instance field reference: private System.Int32 numOutstandingThreadRequests
    [[deprecated("Use field access instead!")]] int& dyn_numOutstandingThreadRequests();
    // static private System.Void .cctor()
    // Offset: 0x1D41780
    static void _cctor();
    // public System.Threading.ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue()
    // Offset: 0x1D401D4
    ::System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue();
    // System.Void EnsureThreadRequested()
    // Offset: 0x1D40354
    void EnsureThreadRequested();
    // System.Void MarkThreadRequestSatisfied()
    // Offset: 0x1D4040C
    void MarkThreadRequestSatisfied();
    // public System.Void Enqueue(System.Threading.IThreadPoolWorkItem callback, System.Boolean forceGlobal)
    // Offset: 0x1D3FE9C
    void Enqueue(::System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal);
    // System.Boolean LocalFindAndPop(System.Threading.IThreadPoolWorkItem callback)
    // Offset: 0x1D3FFC8
    bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* callback);
    // public System.Void Dequeue(System.Threading.ThreadPoolWorkQueueThreadLocals tl, out System.Threading.IThreadPoolWorkItem callback, out System.Boolean missedSteal)
    // Offset: 0x1D40C30
    void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* tl, ByRef<::System::Threading::IThreadPoolWorkItem*> callback, ByRef<bool> missedSteal);
    // static System.Boolean Dispatch()
    // Offset: 0x1D411F4
    static bool Dispatch();
    // public System.Void .ctor()
    // Offset: 0x1D400FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::ThreadPoolWorkQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueue*, creationType>()));
    }
  }; // System.Threading.ThreadPoolWorkQueue
  #pragma pack(pop)
  static check_size<sizeof(ThreadPoolWorkQueue), 32 + sizeof(int)> __System_Threading_ThreadPoolWorkQueueSizeCheck;
  static_assert(sizeof(ThreadPoolWorkQueue) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::ThreadPoolWorkQueue::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue
// Il2CppName: EnsureCurrentThreadHasQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ThreadPoolWorkQueueThreadLocals* (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "EnsureCurrentThreadHasQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested
// Il2CppName: EnsureThreadRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "EnsureThreadRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied
// Il2CppName: MarkThreadRequestSatisfied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "MarkThreadRequestSatisfied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)(::System::Threading::IThreadPoolWorkItem*, bool)>(&System::Threading::ThreadPoolWorkQueue::Enqueue)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    static auto* forceGlobal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, forceGlobal});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::LocalFindAndPop
// Il2CppName: LocalFindAndPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::*)(::System::Threading::IThreadPoolWorkItem*)>(&System::Threading::ThreadPoolWorkQueue::LocalFindAndPop)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "LocalFindAndPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::Dequeue
// Il2CppName: Dequeue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)(::System::Threading::ThreadPoolWorkQueueThreadLocals*, ByRef<::System::Threading::IThreadPoolWorkItem*>, ByRef<bool>)>(&System::Threading::ThreadPoolWorkQueue::Dequeue)> {
  static const MethodInfo* get() {
    static auto* tl = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadPoolWorkQueueThreadLocals")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->this_arg;
    static auto* missedSteal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "Dequeue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tl, callback, missedSteal});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::Dispatch
// Il2CppName: Dispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::ThreadPoolWorkQueue::Dispatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "Dispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
