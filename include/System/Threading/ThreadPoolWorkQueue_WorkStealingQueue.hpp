// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
// Including type: System.Threading.SpinLock
#include "System/Threading/SpinLock.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue/System.Threading.WorkStealingQueue
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreadPoolWorkQueue::WorkStealingQueue : public ::Il2CppObject {
    public:
    // System.Threading.IThreadPoolWorkItem[] m_array
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Threading::IThreadPoolWorkItem*>* m_array;
    // Field size check
    static_assert(sizeof(::Array<System::Threading::IThreadPoolWorkItem*>*) == 0x8);
    // private System.Int32 m_mask
    // Size: 0x4
    // Offset: 0x18
    int m_mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_headIndex
    // Size: 0x4
    // Offset: 0x1C
    int m_headIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_tailIndex
    // Size: 0x4
    // Offset: 0x20
    int m_tailIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.SpinLock m_foreignLock
    // Size: 0x4
    // Offset: 0x24
    System::Threading::SpinLock m_foreignLock;
    // Field size check
    static_assert(sizeof(System::Threading::SpinLock) == 0x4);
    // Creating value type constructor for type: WorkStealingQueue
    WorkStealingQueue(::Array<System::Threading::IThreadPoolWorkItem*>* m_array_ = {}, int m_mask_ = {}, int m_headIndex_ = {}, int m_tailIndex_ = {}, System::Threading::SpinLock m_foreignLock_ = {}) noexcept : m_array{m_array_}, m_mask{m_mask_}, m_headIndex{m_headIndex_}, m_tailIndex{m_tailIndex_}, m_foreignLock{m_foreignLock_} {}
    // Get instance field reference: System.Threading.IThreadPoolWorkItem[] m_array
    ::Array<System::Threading::IThreadPoolWorkItem*>*& dyn_m_array();
    // Get instance field reference: private System.Int32 m_mask
    int& dyn_m_mask();
    // Get instance field reference: private System.Int32 m_headIndex
    int& dyn_m_headIndex();
    // Get instance field reference: private System.Int32 m_tailIndex
    int& dyn_m_tailIndex();
    // Get instance field reference: private System.Threading.SpinLock m_foreignLock
    System::Threading::SpinLock& dyn_m_foreignLock();
    // public System.Void LocalPush(System.Threading.IThreadPoolWorkItem obj)
    // Offset: 0x1881134
    void LocalPush(System::Threading::IThreadPoolWorkItem* obj);
    // public System.Boolean LocalFindAndPop(System.Threading.IThreadPoolWorkItem obj)
    // Offset: 0x1881640
    bool LocalFindAndPop(System::Threading::IThreadPoolWorkItem* obj);
    // public System.Boolean LocalPop(out System.Threading.IThreadPoolWorkItem obj)
    // Offset: 0x1881AD8
    bool LocalPop(ByRef<System::Threading::IThreadPoolWorkItem*> obj);
    // public System.Boolean TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref System.Boolean missedSteal)
    // Offset: 0x1881EC4
    bool TrySteal(ByRef<System::Threading::IThreadPoolWorkItem*> obj, ByRef<bool> missedSteal);
    // private System.Boolean TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref System.Boolean missedSteal, System.Int32 millisecondsTimeout)
    // Offset: 0x1882588
    bool TrySteal(ByRef<System::Threading::IThreadPoolWorkItem*> obj, ByRef<bool> missedSteal, int millisecondsTimeout);
    // public System.Void .ctor()
    // Offset: 0x1882808
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueue::WorkStealingQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueue::WorkStealingQueue*, creationType>()));
    }
  }; // System.Threading.ThreadPoolWorkQueue/System.Threading.WorkStealingQueue
  #pragma pack(pop)
  static check_size<sizeof(ThreadPoolWorkQueue::WorkStealingQueue), 36 + sizeof(System::Threading::SpinLock)> __System_Threading_ThreadPoolWorkQueue_WorkStealingQueueSizeCheck;
  static_assert(sizeof(ThreadPoolWorkQueue::WorkStealingQueue) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*, "System.Threading", "ThreadPoolWorkQueue/WorkStealingQueue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::LocalPush
// Il2CppName: LocalPush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::*)(System::Threading::IThreadPoolWorkItem*)>(&System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::LocalPush)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*), "LocalPush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::LocalFindAndPop
// Il2CppName: LocalFindAndPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::*)(System::Threading::IThreadPoolWorkItem*)>(&System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::LocalFindAndPop)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*), "LocalFindAndPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::LocalPop
// Il2CppName: LocalPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::*)(ByRef<System::Threading::IThreadPoolWorkItem*>)>(&System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::LocalPop)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*), "LocalPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::TrySteal
// Il2CppName: TrySteal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::*)(ByRef<System::Threading::IThreadPoolWorkItem*>, ByRef<bool>)>(&System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::TrySteal)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->this_arg;
    static auto* missedSteal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*), "TrySteal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, missedSteal});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::TrySteal
// Il2CppName: TrySteal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::*)(ByRef<System::Threading::IThreadPoolWorkItem*>, ByRef<bool>, int)>(&System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::TrySteal)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->this_arg;
    static auto* missedSteal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*), "TrySteal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, missedSteal, millisecondsTimeout});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
