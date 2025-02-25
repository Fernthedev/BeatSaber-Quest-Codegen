// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadPoolWorkQueueThreadLocals
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreadPoolWorkQueueThreadLocals : public ::Il2CppObject {
    public:
    // public readonly System.Threading.ThreadPoolWorkQueue workQueue
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ThreadPoolWorkQueue* workQueue;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadPoolWorkQueue*) == 0x8);
    // public readonly System.Threading.ThreadPoolWorkQueue/System.Threading.WorkStealingQueue workStealingQueue
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ThreadPoolWorkQueue::WorkStealingQueue* workStealingQueue;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*) == 0x8);
    // public readonly System.Random random
    // Size: 0x8
    // Offset: 0x20
    System::Random* random;
    // Field size check
    static_assert(sizeof(System::Random*) == 0x8);
    // Creating value type constructor for type: ThreadPoolWorkQueueThreadLocals
    ThreadPoolWorkQueueThreadLocals(System::Threading::ThreadPoolWorkQueue* workQueue_ = {}, System::Threading::ThreadPoolWorkQueue::WorkStealingQueue* workStealingQueue_ = {}, System::Random* random_ = {}) noexcept : workQueue{workQueue_}, workStealingQueue{workStealingQueue_}, random{random_} {}
    // Get static field: static public System.Threading.ThreadPoolWorkQueueThreadLocals threadLocals
    static System::Threading::ThreadPoolWorkQueueThreadLocals* _get_threadLocals();
    // Set static field: static public System.Threading.ThreadPoolWorkQueueThreadLocals threadLocals
    static void _set_threadLocals(System::Threading::ThreadPoolWorkQueueThreadLocals* value);
    // Get instance field reference: public readonly System.Threading.ThreadPoolWorkQueue workQueue
    System::Threading::ThreadPoolWorkQueue*& dyn_workQueue();
    // Get instance field reference: public readonly System.Threading.ThreadPoolWorkQueue/System.Threading.WorkStealingQueue workStealingQueue
    System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*& dyn_workStealingQueue();
    // Get instance field reference: public readonly System.Random random
    System::Random*& dyn_random();
    // public System.Void .ctor(System.Threading.ThreadPoolWorkQueue tpq)
    // Offset: 0x1880F38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueueThreadLocals* New_ctor(System::Threading::ThreadPoolWorkQueue* tpq) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueueThreadLocals::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueueThreadLocals*, creationType>(tpq)));
    }
    // private System.Void CleanUp()
    // Offset: 0x18828A4
    void CleanUp();
    // protected override System.Void Finalize()
    // Offset: 0x188297C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Threading.ThreadPoolWorkQueueThreadLocals
  #pragma pack(pop)
  static check_size<sizeof(ThreadPoolWorkQueueThreadLocals), 32 + sizeof(System::Random*)> __System_Threading_ThreadPoolWorkQueueThreadLocalsSizeCheck;
  static_assert(sizeof(ThreadPoolWorkQueueThreadLocals) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueueThreadLocals*, "System.Threading", "ThreadPoolWorkQueueThreadLocals");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueueThreadLocals::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueueThreadLocals::CleanUp
// Il2CppName: CleanUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueueThreadLocals::*)()>(&System::Threading::ThreadPoolWorkQueueThreadLocals::CleanUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueueThreadLocals*), "CleanUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueueThreadLocals::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueueThreadLocals::*)()>(&System::Threading::ThreadPoolWorkQueueThreadLocals::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueueThreadLocals*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
