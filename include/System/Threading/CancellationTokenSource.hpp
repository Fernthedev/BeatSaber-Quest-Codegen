// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: SparselyPopulatedArray`1<T>
  template<typename T>
  class SparselyPopulatedArray_1;
  // Forward declaring type: CancellationCallbackInfo
  class CancellationCallbackInfo;
  // Forward declaring type: Timer
  class Timer;
  // Forward declaring type: TimerCallback
  class TimerCallback;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: CancellationCallbackCoreWorkArguments
  struct CancellationCallbackCoreWorkArguments;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Threading::CancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationTokenSource*, "System.Threading", "CancellationTokenSource");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.CancellationTokenSource
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1189434
  class CancellationTokenSource : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Threading.ManualResetEvent m_kernelEvent
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ManualResetEvent* m_kernelEvent;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] m_registeredCallbacksLists
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo*>*> m_registeredCallbacksLists;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo*>*>) == 0x8);
    // private System.Int32 m_state
    // Size: 0x4
    // Offset: 0x20
    int m_state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_threadIDExecutingCallbacks
    // Size: 0x4
    // Offset: 0x24
    int m_threadIDExecutingCallbacks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x28
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: m_linkingRegistrations
    char __padding4[0x7] = {};
    // private System.Threading.CancellationTokenRegistration[] m_linkingRegistrations
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<System::Threading::CancellationTokenRegistration> m_linkingRegistrations;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Threading::CancellationTokenRegistration>) == 0x8);
    // private System.Threading.CancellationCallbackInfo m_executingCallback
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationCallbackInfo* m_executingCallback;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationCallbackInfo*) == 0x8);
    // private System.Threading.Timer m_timer
    // Size: 0x8
    // Offset: 0x40
    System::Threading::Timer* m_timer;
    // Field size check
    static_assert(sizeof(System::Threading::Timer*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private readonly System.Threading.CancellationTokenSource _staticSource_Set
    static System::Threading::CancellationTokenSource* _get__staticSource_Set();
    // Set static field: static private readonly System.Threading.CancellationTokenSource _staticSource_Set
    static void _set__staticSource_Set(System::Threading::CancellationTokenSource* value);
    // Get static field: static private readonly System.Threading.CancellationTokenSource _staticSource_NotCancelable
    static System::Threading::CancellationTokenSource* _get__staticSource_NotCancelable();
    // Set static field: static private readonly System.Threading.CancellationTokenSource _staticSource_NotCancelable
    static void _set__staticSource_NotCancelable(System::Threading::CancellationTokenSource* value);
    // Get static field: static private readonly System.Int32 s_nLists
    static int _get_s_nLists();
    // Set static field: static private readonly System.Int32 s_nLists
    static void _set_s_nLists(int value);
    // static field const value: static private System.Int32 CANNOT_BE_CANCELED
    static constexpr const int CANNOT_BE_CANCELED = 0;
    // Get static field: static private System.Int32 CANNOT_BE_CANCELED
    static int _get_CANNOT_BE_CANCELED();
    // Set static field: static private System.Int32 CANNOT_BE_CANCELED
    static void _set_CANNOT_BE_CANCELED(int value);
    // static field const value: static private System.Int32 NOT_CANCELED
    static constexpr const int NOT_CANCELED = 1;
    // Get static field: static private System.Int32 NOT_CANCELED
    static int _get_NOT_CANCELED();
    // Set static field: static private System.Int32 NOT_CANCELED
    static void _set_NOT_CANCELED(int value);
    // static field const value: static private System.Int32 NOTIFYING
    static constexpr const int NOTIFYING = 2;
    // Get static field: static private System.Int32 NOTIFYING
    static int _get_NOTIFYING();
    // Set static field: static private System.Int32 NOTIFYING
    static void _set_NOTIFYING(int value);
    // static field const value: static private System.Int32 NOTIFYINGCOMPLETE
    static constexpr const int NOTIFYINGCOMPLETE = 3;
    // Get static field: static private System.Int32 NOTIFYINGCOMPLETE
    static int _get_NOTIFYINGCOMPLETE();
    // Set static field: static private System.Int32 NOTIFYINGCOMPLETE
    static void _set_NOTIFYINGCOMPLETE(int value);
    // Get static field: static private readonly System.Action`1<System.Object> s_LinkedTokenCancelDelegate
    static System::Action_1<::Il2CppObject*>* _get_s_LinkedTokenCancelDelegate();
    // Set static field: static private readonly System.Action`1<System.Object> s_LinkedTokenCancelDelegate
    static void _set_s_LinkedTokenCancelDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private readonly System.Threading.TimerCallback s_timerCallback
    static System::Threading::TimerCallback* _get_s_timerCallback();
    // Set static field: static private readonly System.Threading.TimerCallback s_timerCallback
    static void _set_s_timerCallback(System::Threading::TimerCallback* value);
    // Get instance field reference: private System.Threading.ManualResetEvent m_kernelEvent
    System::Threading::ManualResetEvent*& dyn_m_kernelEvent();
    // Get instance field reference: private System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] m_registeredCallbacksLists
    ::ArrayW<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo*>*>& dyn_m_registeredCallbacksLists();
    // Get instance field reference: private System.Int32 m_state
    int& dyn_m_state();
    // Get instance field reference: private System.Int32 m_threadIDExecutingCallbacks
    int& dyn_m_threadIDExecutingCallbacks();
    // Get instance field reference: private System.Boolean m_disposed
    bool& dyn_m_disposed();
    // Get instance field reference: private System.Threading.CancellationTokenRegistration[] m_linkingRegistrations
    ::ArrayW<System::Threading::CancellationTokenRegistration>& dyn_m_linkingRegistrations();
    // Get instance field reference: private System.Threading.CancellationCallbackInfo m_executingCallback
    System::Threading::CancellationCallbackInfo*& dyn_m_executingCallback();
    // Get instance field reference: private System.Threading.Timer m_timer
    System::Threading::Timer*& dyn_m_timer();
    // public System.Boolean get_IsCancellationRequested()
    // Offset: 0x1C29978
    bool get_IsCancellationRequested();
    // System.Boolean get_IsCancellationCompleted()
    // Offset: 0x1C2A810
    bool get_IsCancellationCompleted();
    // System.Boolean get_IsDisposed()
    // Offset: 0x1C2AB14
    bool get_IsDisposed();
    // System.Int32 get_ThreadIDExecutingCallbacks()
    // Offset: 0x1C2A838
    int get_ThreadIDExecutingCallbacks();
    // System.Void set_ThreadIDExecutingCallbacks(System.Int32 value)
    // Offset: 0x1C2AB1C
    void set_ThreadIDExecutingCallbacks(int value);
    // public System.Threading.CancellationToken get_Token()
    // Offset: 0x1C2AB44
    System::Threading::CancellationToken get_Token();
    // System.Boolean get_CanBeCanceled()
    // Offset: 0x1C299D8
    bool get_CanBeCanceled();
    // System.Threading.CancellationCallbackInfo get_ExecutingCallback()
    // Offset: 0x1C2ABD4
    System::Threading::CancellationCallbackInfo* get_ExecutingCallback();
    // private System.Void .ctor(System.Boolean set)
    // Offset: 0x1C2AC38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CancellationTokenSource* New_ctor(bool set) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::CancellationTokenSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CancellationTokenSource*, creationType>(set)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C2BCF0
    static void _cctor();
    // static private System.Void LinkedTokenCancelDelegate(System.Object source)
    // Offset: 0x1C2AA60
    static void LinkedTokenCancelDelegate(::Il2CppObject* source);
    // public System.Void Cancel()
    // Offset: 0x1C2AAEC
    void Cancel();
    // public System.Void Cancel(System.Boolean throwOnFirstException)
    // Offset: 0x1C2AC8C
    void Cancel(bool throwOnFirstException);
    // public System.Void CancelAfter(System.TimeSpan delay)
    // Offset: 0x1C2AE28
    void CancelAfter(System::TimeSpan delay);
    // public System.Void CancelAfter(System.Int32 millisecondsDelay)
    // Offset: 0x1C2AEEC
    void CancelAfter(int millisecondsDelay);
    // static private System.Void TimerCallbackLogic(System.Object obj)
    // Offset: 0x1C2B0D4
    static void TimerCallbackLogic(::Il2CppObject* obj);
    // public System.Void Dispose()
    // Offset: 0x1C2B204
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1C2B280
    void Dispose(bool disposing);
    // System.Void ThrowIfDisposed()
    // Offset: 0x1C2AB68
    void ThrowIfDisposed();
    // static private System.Void ThrowObjectDisposedException()
    // Offset: 0x1C2B364
    static void ThrowObjectDisposedException();
    // static System.Threading.CancellationTokenSource InternalGetStaticSource(System.Boolean set)
    // Offset: 0x1C2A2BC
    static System::Threading::CancellationTokenSource* InternalGetStaticSource(bool set);
    // System.Threading.CancellationTokenRegistration InternalRegister(System.Action`1<System.Object> callback, System.Object stateForCallback, System.Threading.SynchronizationContext targetSyncContext, System.Threading.ExecutionContext executionContext)
    // Offset: 0x1C29F40
    System::Threading::CancellationTokenRegistration InternalRegister(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* stateForCallback, System::Threading::SynchronizationContext* targetSyncContext, System::Threading::ExecutionContext* executionContext);
    // private System.Void NotifyCancellation(System.Boolean throwOnFirstException)
    // Offset: 0x1C2ACB8
    void NotifyCancellation(bool throwOnFirstException);
    // private System.Void ExecuteCallbackHandlers(System.Boolean throwOnFirstException)
    // Offset: 0x1C2B474
    void ExecuteCallbackHandlers(bool throwOnFirstException);
    // private System.Void CancellationCallbackCoreWork_OnSyncContext(System.Object obj)
    // Offset: 0x1C2B994
    void CancellationCallbackCoreWork_OnSyncContext(::Il2CppObject* obj);
    // private System.Void CancellationCallbackCoreWork(System.Threading.CancellationCallbackCoreWorkArguments args)
    // Offset: 0x1C2B8BC
    void CancellationCallbackCoreWork(System::Threading::CancellationCallbackCoreWorkArguments args);
    // static public System.Threading.CancellationTokenSource CreateLinkedTokenSource(System.Threading.CancellationToken token1, System.Threading.CancellationToken token2)
    // Offset: 0x1C2BA1C
    static System::Threading::CancellationTokenSource* CreateLinkedTokenSource(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2);
    // System.Void WaitForCallbackToComplete(System.Threading.CancellationCallbackInfo callbackInfo)
    // Offset: 0x1C2A85C
    void WaitForCallbackToComplete(System::Threading::CancellationCallbackInfo* callbackInfo);
    // public System.Void .ctor()
    // Offset: 0x1C2ABF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CancellationTokenSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::CancellationTokenSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CancellationTokenSource*, creationType>()));
    }
  }; // System.Threading.CancellationTokenSource
  #pragma pack(pop)
  static check_size<sizeof(CancellationTokenSource), 64 + sizeof(System::Threading::Timer*)> __System_Threading_CancellationTokenSourceSizeCheck;
  static_assert(sizeof(CancellationTokenSource) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::get_IsCancellationRequested
// Il2CppName: get_IsCancellationRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_IsCancellationRequested)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "get_IsCancellationRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::get_IsCancellationCompleted
// Il2CppName: get_IsCancellationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_IsCancellationCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "get_IsCancellationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::get_IsDisposed
// Il2CppName: get_IsDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_IsDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "get_IsDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks
// Il2CppName: get_ThreadIDExecutingCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "get_ThreadIDExecutingCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks
// Il2CppName: set_ThreadIDExecutingCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(int)>(&System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "set_ThreadIDExecutingCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::get_Token
// Il2CppName: get_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationToken (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_Token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "get_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::get_CanBeCanceled
// Il2CppName: get_CanBeCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_CanBeCanceled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "get_CanBeCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::get_ExecutingCallback
// Il2CppName: get_ExecutingCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationCallbackInfo* (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::get_ExecutingCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "get_ExecutingCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::CancellationTokenSource::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::LinkedTokenCancelDelegate
// Il2CppName: LinkedTokenCancelDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::CancellationTokenSource::LinkedTokenCancelDelegate)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "LinkedTokenCancelDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(bool)>(&System::Threading::CancellationTokenSource::Cancel)> {
  static const MethodInfo* get() {
    static auto* throwOnFirstException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{throwOnFirstException});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::CancelAfter
// Il2CppName: CancelAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(System::TimeSpan)>(&System::Threading::CancellationTokenSource::CancelAfter)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "CancelAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::CancelAfter
// Il2CppName: CancelAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(int)>(&System::Threading::CancellationTokenSource::CancelAfter)> {
  static const MethodInfo* get() {
    static auto* millisecondsDelay = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "CancelAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsDelay});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::TimerCallbackLogic
// Il2CppName: TimerCallbackLogic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::CancellationTokenSource::TimerCallbackLogic)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "TimerCallbackLogic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(bool)>(&System::Threading::CancellationTokenSource::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::ThrowIfDisposed
// Il2CppName: ThrowIfDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)()>(&System::Threading::CancellationTokenSource::ThrowIfDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "ThrowIfDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::ThrowObjectDisposedException
// Il2CppName: ThrowObjectDisposedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::CancellationTokenSource::ThrowObjectDisposedException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "ThrowObjectDisposedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::InternalGetStaticSource
// Il2CppName: InternalGetStaticSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationTokenSource* (*)(bool)>(&System::Threading::CancellationTokenSource::InternalGetStaticSource)> {
  static const MethodInfo* get() {
    static auto* set = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "InternalGetStaticSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{set});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::InternalRegister
// Il2CppName: InternalRegister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationTokenRegistration (System::Threading::CancellationTokenSource::*)(System::Action_1<::Il2CppObject*>*, ::Il2CppObject*, System::Threading::SynchronizationContext*, System::Threading::ExecutionContext*)>(&System::Threading::CancellationTokenSource::InternalRegister)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* stateForCallback = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* targetSyncContext = &::il2cpp_utils::GetClassFromName("System.Threading", "SynchronizationContext")->byval_arg;
    static auto* executionContext = &::il2cpp_utils::GetClassFromName("System.Threading", "ExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "InternalRegister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, stateForCallback, targetSyncContext, executionContext});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::NotifyCancellation
// Il2CppName: NotifyCancellation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(bool)>(&System::Threading::CancellationTokenSource::NotifyCancellation)> {
  static const MethodInfo* get() {
    static auto* throwOnFirstException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "NotifyCancellation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{throwOnFirstException});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::ExecuteCallbackHandlers
// Il2CppName: ExecuteCallbackHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(bool)>(&System::Threading::CancellationTokenSource::ExecuteCallbackHandlers)> {
  static const MethodInfo* get() {
    static auto* throwOnFirstException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "ExecuteCallbackHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{throwOnFirstException});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext
// Il2CppName: CancellationCallbackCoreWork_OnSyncContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(::Il2CppObject*)>(&System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "CancellationCallbackCoreWork_OnSyncContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::CancellationCallbackCoreWork
// Il2CppName: CancellationCallbackCoreWork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(System::Threading::CancellationCallbackCoreWorkArguments)>(&System::Threading::CancellationTokenSource::CancellationCallbackCoreWork)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationCallbackCoreWorkArguments")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "CancellationCallbackCoreWork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::CreateLinkedTokenSource
// Il2CppName: CreateLinkedTokenSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationTokenSource* (*)(System::Threading::CancellationToken, System::Threading::CancellationToken)>(&System::Threading::CancellationTokenSource::CreateLinkedTokenSource)> {
  static const MethodInfo* get() {
    static auto* token1 = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    static auto* token2 = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "CreateLinkedTokenSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token1, token2});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::WaitForCallbackToComplete
// Il2CppName: WaitForCallbackToComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenSource::*)(System::Threading::CancellationCallbackInfo*)>(&System::Threading::CancellationTokenSource::WaitForCallbackToComplete)> {
  static const MethodInfo* get() {
    static auto* callbackInfo = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationCallbackInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationTokenSource*), "WaitForCallbackToComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackInfo});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationTokenSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
