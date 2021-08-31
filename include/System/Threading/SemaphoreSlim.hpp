// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.SemaphoreSlim
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9C050
  // [DebuggerDisplayAttribute] Offset: D9C050
  class SemaphoreSlim : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: System::Threading::SemaphoreSlim::TaskNode
    class TaskNode;
    // Nested type: System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31
    struct $WaitUntilCountOrTimeoutAsync$d__31;
    // private System.Int32 m_currentCount
    // Size: 0x4
    // Offset: 0x10
    int m_currentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 m_maxCount
    // Size: 0x4
    // Offset: 0x14
    int m_maxCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_waitCount
    // Size: 0x4
    // Offset: 0x18
    int m_waitCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_waitCount and: m_lockObj
    char __padding2[0x4] = {};
    // private System.Object m_lockObj
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* m_lockObj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent m_waitHandle
    // Size: 0x8
    // Offset: 0x28
    System::Threading::ManualResetEvent* m_waitHandle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Threading.SemaphoreSlim/System.Threading.TaskNode m_asyncHead
    // Size: 0x8
    // Offset: 0x30
    System::Threading::SemaphoreSlim::TaskNode* m_asyncHead;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim::TaskNode*) == 0x8);
    // private System.Threading.SemaphoreSlim/System.Threading.TaskNode m_asyncTail
    // Size: 0x8
    // Offset: 0x38
    System::Threading::SemaphoreSlim::TaskNode* m_asyncTail;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim::TaskNode*) == 0x8);
    // Creating value type constructor for type: SemaphoreSlim
    SemaphoreSlim(int m_currentCount_ = {}, int m_maxCount_ = {}, int m_waitCount_ = {}, ::Il2CppObject* m_lockObj_ = {}, System::Threading::ManualResetEvent* m_waitHandle_ = {}, System::Threading::SemaphoreSlim::TaskNode* m_asyncHead_ = {}, System::Threading::SemaphoreSlim::TaskNode* m_asyncTail_ = {}) noexcept : m_currentCount{m_currentCount_}, m_maxCount{m_maxCount_}, m_waitCount{m_waitCount_}, m_lockObj{m_lockObj_}, m_waitHandle{m_waitHandle_}, m_asyncHead{m_asyncHead_}, m_asyncTail{m_asyncTail_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private readonly System.Threading.Tasks.Task`1<System.Boolean> s_trueTask
    static System::Threading::Tasks::Task_1<bool>* _get_s_trueTask();
    // Set static field: static private readonly System.Threading.Tasks.Task`1<System.Boolean> s_trueTask
    static void _set_s_trueTask(System::Threading::Tasks::Task_1<bool>* value);
    // static field const value: static private System.Int32 NO_MAXIMUM
    static constexpr const int NO_MAXIMUM = 2147483647;
    // Get static field: static private System.Int32 NO_MAXIMUM
    static int _get_NO_MAXIMUM();
    // Set static field: static private System.Int32 NO_MAXIMUM
    static void _set_NO_MAXIMUM(int value);
    // Get static field: static private System.Action`1<System.Object> s_cancellationTokenCanceledEventHandler
    static System::Action_1<::Il2CppObject*>* _get_s_cancellationTokenCanceledEventHandler();
    // Set static field: static private System.Action`1<System.Object> s_cancellationTokenCanceledEventHandler
    static void _set_s_cancellationTokenCanceledEventHandler(System::Action_1<::Il2CppObject*>* value);
    // Get instance field reference: private System.Int32 m_currentCount
    int& dyn_m_currentCount();
    // Get instance field reference: private readonly System.Int32 m_maxCount
    int& dyn_m_maxCount();
    // Get instance field reference: private System.Int32 m_waitCount
    int& dyn_m_waitCount();
    // Get instance field reference: private System.Object m_lockObj
    ::Il2CppObject*& dyn_m_lockObj();
    // Get instance field reference: private System.Threading.ManualResetEvent m_waitHandle
    System::Threading::ManualResetEvent*& dyn_m_waitHandle();
    // Get instance field reference: private System.Threading.SemaphoreSlim/System.Threading.TaskNode m_asyncHead
    System::Threading::SemaphoreSlim::TaskNode*& dyn_m_asyncHead();
    // Get instance field reference: private System.Threading.SemaphoreSlim/System.Threading.TaskNode m_asyncTail
    System::Threading::SemaphoreSlim::TaskNode*& dyn_m_asyncTail();
    // public System.Int32 get_CurrentCount()
    // Offset: 0x18F901C
    int get_CurrentCount();
    // public System.Void .ctor(System.Int32 initialCount)
    // Offset: 0x18F9040
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemaphoreSlim* New_ctor(int initialCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SemaphoreSlim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemaphoreSlim*, creationType>(initialCount)));
    }
    // public System.Void .ctor(System.Int32 initialCount, System.Int32 maxCount)
    // Offset: 0x18F9048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SemaphoreSlim* New_ctor(int initialCount, int maxCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::SemaphoreSlim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SemaphoreSlim*, creationType>(initialCount, maxCount)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18FA244
    static void _cctor();
    // public System.Void Wait()
    // Offset: 0x18F9204
    void Wait();
    // public System.Boolean Wait(System.Int32 millisecondsTimeout)
    // Offset: 0x18F96BC
    bool Wait(int millisecondsTimeout);
    // public System.Boolean Wait(System.Int32 millisecondsTimeout, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x18F9210
    bool Wait(int millisecondsTimeout, System::Threading::CancellationToken cancellationToken);
    // private System.Boolean WaitUntilCountOrTimeout(System.Int32 millisecondsTimeout, System.UInt32 startTime, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x18F9A50
    bool WaitUntilCountOrTimeout(int millisecondsTimeout, uint startTime, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task WaitAsync()
    // Offset: 0x18F9AE4
    System::Threading::Tasks::Task* WaitAsync();
    // public System.Threading.Tasks.Task WaitAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x18F9AF0
    System::Threading::Tasks::Task* WaitAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> WaitAsync(System.Int32 millisecondsTimeout, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x18F97AC
    System::Threading::Tasks::Task_1<bool>* WaitAsync(int millisecondsTimeout, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.SemaphoreSlim/System.Threading.TaskNode CreateAndAddAsyncWaiter()
    // Offset: 0x18F9AFC
    System::Threading::SemaphoreSlim::TaskNode* CreateAndAddAsyncWaiter();
    // private System.Boolean RemoveAsyncWaiter(System.Threading.SemaphoreSlim/System.Threading.TaskNode task)
    // Offset: 0x18F9D30
    bool RemoveAsyncWaiter(System::Threading::SemaphoreSlim::TaskNode* task);
    // private System.Threading.Tasks.Task`1<System.Boolean> WaitUntilCountOrTimeoutAsync(System.Threading.SemaphoreSlim/System.Threading.TaskNode asyncWaiter, System.Int32 millisecondsTimeout, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x18F9B8C
    System::Threading::Tasks::Task_1<bool>* WaitUntilCountOrTimeoutAsync(System::Threading::SemaphoreSlim::TaskNode* asyncWaiter, int millisecondsTimeout, System::Threading::CancellationToken cancellationToken);
    // public System.Int32 Release()
    // Offset: 0x18F9DBC
    int Release();
    // public System.Int32 Release(System.Int32 releaseCount)
    // Offset: 0x18F9DC4
    int Release(int releaseCount);
    // static private System.Void QueueWaiterTask(System.Threading.SemaphoreSlim/System.Threading.TaskNode waiterTask)
    // Offset: 0x18FA074
    static void QueueWaiterTask(System::Threading::SemaphoreSlim::TaskNode* waiterTask);
    // public System.Void Dispose()
    // Offset: 0x18FA080
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x18FA0FC
    void Dispose(bool disposing);
    // static private System.Void CancellationTokenCanceledEventHandler(System.Object obj)
    // Offset: 0x18FA15C
    static void CancellationTokenCanceledEventHandler(::Il2CppObject* obj);
    // private System.Void CheckDispose()
    // Offset: 0x18F96C4
    void CheckDispose();
    // static private System.String GetResourceString(System.String str)
    // Offset: 0x18F91FC
    static ::Il2CppString* GetResourceString(::Il2CppString* str);
  }; // System.Threading.SemaphoreSlim
  #pragma pack(pop)
  static check_size<sizeof(SemaphoreSlim), 56 + sizeof(System::Threading::SemaphoreSlim::TaskNode*)> __System_Threading_SemaphoreSlimSizeCheck;
  static_assert(sizeof(SemaphoreSlim) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SemaphoreSlim*, "System.Threading", "SemaphoreSlim");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::get_CurrentCount
// Il2CppName: get_CurrentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::SemaphoreSlim::*)()>(&System::Threading::SemaphoreSlim::get_CurrentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "get_CurrentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::SemaphoreSlim::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SemaphoreSlim::*)()>(&System::Threading::SemaphoreSlim::Wait)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::SemaphoreSlim::*)(int)>(&System::Threading::SemaphoreSlim::Wait)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::SemaphoreSlim::*)(int, System::Threading::CancellationToken)>(&System::Threading::SemaphoreSlim::Wait)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::WaitUntilCountOrTimeout
// Il2CppName: WaitUntilCountOrTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::SemaphoreSlim::*)(int, uint, System::Threading::CancellationToken)>(&System::Threading::SemaphoreSlim::WaitUntilCountOrTimeout)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "WaitUntilCountOrTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout, startTime, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::WaitAsync
// Il2CppName: WaitAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::Threading::SemaphoreSlim::*)()>(&System::Threading::SemaphoreSlim::WaitAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "WaitAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::WaitAsync
// Il2CppName: WaitAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::Threading::SemaphoreSlim::*)(System::Threading::CancellationToken)>(&System::Threading::SemaphoreSlim::WaitAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "WaitAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::WaitAsync
// Il2CppName: WaitAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool>* (System::Threading::SemaphoreSlim::*)(int, System::Threading::CancellationToken)>(&System::Threading::SemaphoreSlim::WaitAsync)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "WaitAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::CreateAndAddAsyncWaiter
// Il2CppName: CreateAndAddAsyncWaiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim::TaskNode* (System::Threading::SemaphoreSlim::*)()>(&System::Threading::SemaphoreSlim::CreateAndAddAsyncWaiter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "CreateAndAddAsyncWaiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::RemoveAsyncWaiter
// Il2CppName: RemoveAsyncWaiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::SemaphoreSlim::*)(System::Threading::SemaphoreSlim::TaskNode*)>(&System::Threading::SemaphoreSlim::RemoveAsyncWaiter)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading", "SemaphoreSlim/TaskNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "RemoveAsyncWaiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::WaitUntilCountOrTimeoutAsync
// Il2CppName: WaitUntilCountOrTimeoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool>* (System::Threading::SemaphoreSlim::*)(System::Threading::SemaphoreSlim::TaskNode*, int, System::Threading::CancellationToken)>(&System::Threading::SemaphoreSlim::WaitUntilCountOrTimeoutAsync)> {
  static const MethodInfo* get() {
    static auto* asyncWaiter = &::il2cpp_utils::GetClassFromName("System.Threading", "SemaphoreSlim/TaskNode")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "WaitUntilCountOrTimeoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncWaiter, millisecondsTimeout, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::SemaphoreSlim::*)()>(&System::Threading::SemaphoreSlim::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::SemaphoreSlim::*)(int)>(&System::Threading::SemaphoreSlim::Release)> {
  static const MethodInfo* get() {
    static auto* releaseCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{releaseCount});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::QueueWaiterTask
// Il2CppName: QueueWaiterTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::SemaphoreSlim::TaskNode*)>(&System::Threading::SemaphoreSlim::QueueWaiterTask)> {
  static const MethodInfo* get() {
    static auto* waiterTask = &::il2cpp_utils::GetClassFromName("System.Threading", "SemaphoreSlim/TaskNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "QueueWaiterTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waiterTask});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SemaphoreSlim::*)()>(&System::Threading::SemaphoreSlim::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SemaphoreSlim::*)(bool)>(&System::Threading::SemaphoreSlim::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::CancellationTokenCanceledEventHandler
// Il2CppName: CancellationTokenCanceledEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::SemaphoreSlim::CancellationTokenCanceledEventHandler)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "CancellationTokenCanceledEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::CheckDispose
// Il2CppName: CheckDispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SemaphoreSlim::*)()>(&System::Threading::SemaphoreSlim::CheckDispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "CheckDispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::GetResourceString
// Il2CppName: GetResourceString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Threading::SemaphoreSlim::GetResourceString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim*), "GetResourceString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
