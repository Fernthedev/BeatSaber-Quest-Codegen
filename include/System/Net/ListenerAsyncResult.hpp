// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
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
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ListenerAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ListenerAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // private System.Threading.ManualResetEvent handle
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ManualResetEvent* handle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean synch
    // Size: 0x1
    // Offset: 0x18
    bool synch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x19
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: completed and: cb
    char __padding2[0x6] = {};
    // private System.AsyncCallback cb
    // Size: 0x8
    // Offset: 0x20
    System::AsyncCallback* cb;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // private System.Object state
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Exception exception
    // Size: 0x8
    // Offset: 0x30
    System::Exception* exception;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.Net.HttpListenerContext context
    // Size: 0x8
    // Offset: 0x38
    System::Net::HttpListenerContext* context;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerContext*) == 0x8);
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Net.ListenerAsyncResult forward
    // Size: 0x8
    // Offset: 0x48
    System::Net::ListenerAsyncResult* forward;
    // Field size check
    static_assert(sizeof(System::Net::ListenerAsyncResult*) == 0x8);
    // System.Boolean EndCalled
    // Size: 0x1
    // Offset: 0x50
    bool EndCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean InGet
    // Size: 0x1
    // Offset: 0x51
    bool InGet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ListenerAsyncResult
    ListenerAsyncResult(System::Threading::ManualResetEvent* handle_ = {}, bool synch_ = {}, bool completed_ = {}, System::AsyncCallback* cb_ = {}, ::Il2CppObject* state_ = {}, System::Exception* exception_ = {}, System::Net::HttpListenerContext* context_ = {}, ::Il2CppObject* locker_ = {}, System::Net::ListenerAsyncResult* forward_ = {}, bool EndCalled_ = {}, bool InGet_ = {}) noexcept : handle{handle_}, synch{synch_}, completed{completed_}, cb{cb_}, state{state_}, exception{exception_}, context{context_}, locker{locker_}, forward{forward_}, EndCalled{EndCalled_}, InGet{InGet_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // Get static field: static private System.Threading.WaitCallback InvokeCB
    static System::Threading::WaitCallback* _get_InvokeCB();
    // Set static field: static private System.Threading.WaitCallback InvokeCB
    static void _set_InvokeCB(System::Threading::WaitCallback* value);
    // Get instance field reference: private System.Threading.ManualResetEvent handle
    System::Threading::ManualResetEvent*& dyn_handle();
    // Get instance field reference: private System.Boolean synch
    bool& dyn_synch();
    // Get instance field reference: private System.Boolean completed
    bool& dyn_completed();
    // Get instance field reference: private System.AsyncCallback cb
    System::AsyncCallback*& dyn_cb();
    // Get instance field reference: private System.Object state
    ::Il2CppObject*& dyn_state();
    // Get instance field reference: private System.Exception exception
    System::Exception*& dyn_exception();
    // Get instance field reference: private System.Net.HttpListenerContext context
    System::Net::HttpListenerContext*& dyn_context();
    // Get instance field reference: private System.Object locker
    ::Il2CppObject*& dyn_locker();
    // Get instance field reference: private System.Net.ListenerAsyncResult forward
    System::Net::ListenerAsyncResult*& dyn_forward();
    // Get instance field reference: System.Boolean EndCalled
    bool& dyn_EndCalled();
    // Get instance field reference: System.Boolean InGet
    bool& dyn_InGet();
    // public System.Object get_AsyncState()
    // Offset: 0x167DC14
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x166FBA4
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x167DC28
    bool get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x166FAF8
    bool get_IsCompleted();
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x166F1B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListenerAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::ListenerAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListenerAsyncResult*, creationType>(cb, state)));
    }
    // static private System.Void .cctor()
    // Offset: 0x167DC3C
    static void _cctor();
    // System.Void Complete(System.Exception exc)
    // Offset: 0x166ED98
    void Complete(System::Exception* exc);
    // static private System.Void InvokeCallback(System.Object o)
    // Offset: 0x167DAC0
    static void InvokeCallback(::Il2CppObject* o);
    // System.Void Complete(System.Net.HttpListenerContext context)
    // Offset: 0x1670098
    void Complete(System::Net::HttpListenerContext* context);
    // System.Void Complete(System.Net.HttpListenerContext context, System.Boolean synch)
    // Offset: 0x166F304
    void Complete(System::Net::HttpListenerContext* context, bool synch);
    // System.Net.HttpListenerContext GetContext()
    // Offset: 0x166FCA8
    System::Net::HttpListenerContext* GetContext();
  }; // System.Net.ListenerAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(ListenerAsyncResult), 81 + sizeof(bool)> __System_Net_ListenerAsyncResultSizeCheck;
  static_assert(sizeof(ListenerAsyncResult) == 0x52);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::ListenerAsyncResult*, "System.Net", "ListenerAsyncResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::ListenerAsyncResult::*)()>(&System::Net::ListenerAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::WaitHandle* (System::Net::ListenerAsyncResult::*)()>(&System::Net::ListenerAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ListenerAsyncResult::*)()>(&System::Net::ListenerAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ListenerAsyncResult::*)()>(&System::Net::ListenerAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::ListenerAsyncResult::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ListenerAsyncResult::*)(System::Exception*)>(&System::Net::ListenerAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* exc = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exc});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::InvokeCallback
// Il2CppName: InvokeCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Net::ListenerAsyncResult::InvokeCallback)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "InvokeCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ListenerAsyncResult::*)(System::Net::HttpListenerContext*)>(&System::Net::ListenerAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ListenerAsyncResult::*)(System::Net::HttpListenerContext*, bool)>(&System::Net::ListenerAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerContext")->byval_arg;
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, synch});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerAsyncResult::GetContext
// Il2CppName: GetContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerContext* (System::Net::ListenerAsyncResult::*)()>(&System::Net::ListenerAsyncResult::GetContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerAsyncResult*), "GetContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
