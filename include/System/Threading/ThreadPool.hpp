// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: RegisteredWaitHandle
  class RegisteredWaitHandle;
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: WaitOrTimerCallback
  class WaitOrTimerCallback;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadPool
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreadPool : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ThreadPool
    ThreadPool() noexcept {}
    // static private System.Threading.RegisteredWaitHandle RegisterWaitForSingleObject(System.Threading.WaitHandle waitObject, System.Threading.WaitOrTimerCallback callBack, System.Object state, System.UInt32 millisecondsTimeOutInterval, System.Boolean executeOnlyOnce, ref System.Threading.StackCrawlMark stackMark, System.Boolean compressStack)
    // Offset: 0x18804F8
    static System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(System::Threading::WaitHandle* waitObject, System::Threading::WaitOrTimerCallback* callBack, ::Il2CppObject* state, uint millisecondsTimeOutInterval, bool executeOnlyOnce, ByRef<System::Threading::StackCrawlMark> stackMark, bool compressStack);
    // static public System.Threading.RegisteredWaitHandle RegisterWaitForSingleObject(System.Threading.WaitHandle waitObject, System.Threading.WaitOrTimerCallback callBack, System.Object state, System.TimeSpan timeout, System.Boolean executeOnlyOnce)
    // Offset: 0x188081C
    static System::Threading::RegisteredWaitHandle* RegisterWaitForSingleObject(System::Threading::WaitHandle* waitObject, System::Threading::WaitOrTimerCallback* callBack, ::Il2CppObject* state, System::TimeSpan timeout, bool executeOnlyOnce);
    // static public System.Boolean QueueUserWorkItem(System.Threading.WaitCallback callBack, System.Object state)
    // Offset: 0x18807BC
    static bool QueueUserWorkItem(System::Threading::WaitCallback* callBack, ::Il2CppObject* state);
    // static public System.Boolean QueueUserWorkItem(System.Threading.WaitCallback callBack)
    // Offset: 0x1880A94
    static bool QueueUserWorkItem(System::Threading::WaitCallback* callBack);
    // static public System.Boolean UnsafeQueueUserWorkItem(System.Threading.WaitCallback callBack, System.Object state)
    // Offset: 0x18807EC
    static bool UnsafeQueueUserWorkItem(System::Threading::WaitCallback* callBack, ::Il2CppObject* state);
    // static private System.Boolean QueueUserWorkItemHelper(System.Threading.WaitCallback callBack, System.Object state, ref System.Threading.StackCrawlMark stackMark, System.Boolean compressStack)
    // Offset: 0x1880984
    static bool QueueUserWorkItemHelper(System::Threading::WaitCallback* callBack, ::Il2CppObject* state, ByRef<System::Threading::StackCrawlMark> stackMark, bool compressStack);
    // static System.Void UnsafeQueueCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem, System.Boolean forceGlobal)
    // Offset: 0x187EB68
    static void UnsafeQueueCustomWorkItem(System::Threading::IThreadPoolWorkItem* workItem, bool forceGlobal);
    // static System.Boolean TryPopCustomWorkItem(System.Threading.IThreadPoolWorkItem workItem)
    // Offset: 0x187ECA4
    static bool TryPopCustomWorkItem(System::Threading::IThreadPoolWorkItem* workItem);
    // static System.Boolean RequestWorkerThread()
    // Offset: 0x1880D18
    static bool RequestWorkerThread();
    // static private System.Void EnsureVMInitialized()
    // Offset: 0x1880AC8
    static void EnsureVMInitialized();
    // static System.Boolean NotifyWorkItemComplete()
    // Offset: 0x1880D20
    static bool NotifyWorkItemComplete();
    // static System.Void ReportThreadStatus(System.Boolean isWorking)
    // Offset: 0x1880D24
    static void ReportThreadStatus(bool isWorking);
    // static System.Void NotifyWorkItemProgress()
    // Offset: 0x187ED70
    static void NotifyWorkItemProgress();
    // static System.Void NotifyWorkItemProgressNative()
    // Offset: 0x1880D2C
    static void NotifyWorkItemProgressNative();
    // static System.Boolean IsThreadPoolHosted()
    // Offset: 0x1880D30
    static bool IsThreadPoolHosted();
    // static private System.Void InitializeVMTp(ref System.Boolean enableWorkerTracking)
    // Offset: 0x1880D1C
    static void InitializeVMTp(ByRef<bool> enableWorkerTracking);
  }; // System.Threading.ThreadPool
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPool*, "System.Threading", "ThreadPool");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ThreadPool::RegisterWaitForSingleObject
// Il2CppName: RegisterWaitForSingleObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::RegisteredWaitHandle* (*)(System::Threading::WaitHandle*, System::Threading::WaitOrTimerCallback*, ::Il2CppObject*, uint, bool, ByRef<System::Threading::StackCrawlMark>, bool)>(&System::Threading::ThreadPool::RegisterWaitForSingleObject)> {
  static const MethodInfo* get() {
    static auto* waitObject = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle")->byval_arg;
    static auto* callBack = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitOrTimerCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* millisecondsTimeOutInterval = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* executeOnlyOnce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    static auto* compressStack = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "RegisterWaitForSingleObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitObject, callBack, state, millisecondsTimeOutInterval, executeOnlyOnce, stackMark, compressStack});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::RegisterWaitForSingleObject
// Il2CppName: RegisterWaitForSingleObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::RegisteredWaitHandle* (*)(System::Threading::WaitHandle*, System::Threading::WaitOrTimerCallback*, ::Il2CppObject*, System::TimeSpan, bool)>(&System::Threading::ThreadPool::RegisterWaitForSingleObject)> {
  static const MethodInfo* get() {
    static auto* waitObject = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitHandle")->byval_arg;
    static auto* callBack = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitOrTimerCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* executeOnlyOnce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "RegisterWaitForSingleObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitObject, callBack, state, timeout, executeOnlyOnce});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::QueueUserWorkItem
// Il2CppName: QueueUserWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Threading::WaitCallback*, ::Il2CppObject*)>(&System::Threading::ThreadPool::QueueUserWorkItem)> {
  static const MethodInfo* get() {
    static auto* callBack = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "QueueUserWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callBack, state});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::QueueUserWorkItem
// Il2CppName: QueueUserWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Threading::WaitCallback*)>(&System::Threading::ThreadPool::QueueUserWorkItem)> {
  static const MethodInfo* get() {
    static auto* callBack = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "QueueUserWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callBack});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::UnsafeQueueUserWorkItem
// Il2CppName: UnsafeQueueUserWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Threading::WaitCallback*, ::Il2CppObject*)>(&System::Threading::ThreadPool::UnsafeQueueUserWorkItem)> {
  static const MethodInfo* get() {
    static auto* callBack = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "UnsafeQueueUserWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callBack, state});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::QueueUserWorkItemHelper
// Il2CppName: QueueUserWorkItemHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Threading::WaitCallback*, ::Il2CppObject*, ByRef<System::Threading::StackCrawlMark>, bool)>(&System::Threading::ThreadPool::QueueUserWorkItemHelper)> {
  static const MethodInfo* get() {
    static auto* callBack = &::il2cpp_utils::GetClassFromName("System.Threading", "WaitCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    static auto* compressStack = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "QueueUserWorkItemHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callBack, state, stackMark, compressStack});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::UnsafeQueueCustomWorkItem
// Il2CppName: UnsafeQueueCustomWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::IThreadPoolWorkItem*, bool)>(&System::Threading::ThreadPool::UnsafeQueueCustomWorkItem)> {
  static const MethodInfo* get() {
    static auto* workItem = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    static auto* forceGlobal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "UnsafeQueueCustomWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workItem, forceGlobal});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::TryPopCustomWorkItem
// Il2CppName: TryPopCustomWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Threading::IThreadPoolWorkItem*)>(&System::Threading::ThreadPool::TryPopCustomWorkItem)> {
  static const MethodInfo* get() {
    static auto* workItem = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "TryPopCustomWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workItem});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::RequestWorkerThread
// Il2CppName: RequestWorkerThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::ThreadPool::RequestWorkerThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "RequestWorkerThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::EnsureVMInitialized
// Il2CppName: EnsureVMInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::ThreadPool::EnsureVMInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "EnsureVMInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::NotifyWorkItemComplete
// Il2CppName: NotifyWorkItemComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::ThreadPool::NotifyWorkItemComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "NotifyWorkItemComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::ReportThreadStatus
// Il2CppName: ReportThreadStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&System::Threading::ThreadPool::ReportThreadStatus)> {
  static const MethodInfo* get() {
    static auto* isWorking = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "ReportThreadStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isWorking});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::NotifyWorkItemProgress
// Il2CppName: NotifyWorkItemProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::ThreadPool::NotifyWorkItemProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "NotifyWorkItemProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::NotifyWorkItemProgressNative
// Il2CppName: NotifyWorkItemProgressNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::ThreadPool::NotifyWorkItemProgressNative)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "NotifyWorkItemProgressNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::IsThreadPoolHosted
// Il2CppName: IsThreadPoolHosted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::ThreadPool::IsThreadPoolHosted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "IsThreadPoolHosted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPool::InitializeVMTp
// Il2CppName: InitializeVMTp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<bool>)>(&System::Threading::ThreadPool::InitializeVMTp)> {
  static const MethodInfo* get() {
    static auto* enableWorkerTracking = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPool*), "InitializeVMTp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enableWorkerTracking});
  }
};
