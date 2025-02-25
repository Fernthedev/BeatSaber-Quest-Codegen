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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FtpWebResponse
  class FtpWebResponse;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class FtpAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // private System.Net.FtpWebResponse response
    // Size: 0x8
    // Offset: 0x10
    System::Net::FtpWebResponse* response;
    // Field size check
    static_assert(sizeof(System::Net::FtpWebResponse*) == 0x8);
    // private System.Threading.ManualResetEvent waitHandle
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ManualResetEvent* waitHandle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Exception exception
    // Size: 0x8
    // Offset: 0x20
    System::Exception* exception;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.AsyncCallback callback
    // Size: 0x8
    // Offset: 0x28
    System::AsyncCallback* callback;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x30
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Object state
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x40
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean synch
    // Size: 0x1
    // Offset: 0x41
    bool synch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: synch and: locker
    char __padding7[0x6] = {};
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: FtpAsyncResult
    FtpAsyncResult(System::Net::FtpWebResponse* response_ = {}, System::Threading::ManualResetEvent* waitHandle_ = {}, System::Exception* exception_ = {}, System::AsyncCallback* callback_ = {}, System::IO::Stream* stream_ = {}, ::Il2CppObject* state_ = {}, bool completed_ = {}, bool synch_ = {}, ::Il2CppObject* locker_ = {}) noexcept : response{response_}, waitHandle{waitHandle_}, exception{exception_}, callback{callback_}, stream{stream_}, state{state_}, completed{completed_}, synch{synch_}, locker{locker_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // Get instance field reference: private System.Net.FtpWebResponse response
    System::Net::FtpWebResponse*& dyn_response();
    // Get instance field reference: private System.Threading.ManualResetEvent waitHandle
    System::Threading::ManualResetEvent*& dyn_waitHandle();
    // Get instance field reference: private System.Exception exception
    System::Exception*& dyn_exception();
    // Get instance field reference: private System.AsyncCallback callback
    System::AsyncCallback*& dyn_callback();
    // Get instance field reference: private System.IO.Stream stream
    System::IO::Stream*& dyn_stream();
    // Get instance field reference: private System.Object state
    ::Il2CppObject*& dyn_state();
    // Get instance field reference: private System.Boolean completed
    bool& dyn_completed();
    // Get instance field reference: private System.Boolean synch
    bool& dyn_synch();
    // Get instance field reference: private System.Object locker
    ::Il2CppObject*& dyn_locker();
    // public System.Object get_AsyncState()
    // Offset: 0x16E6E8C
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x16E6E94
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x16E6F7C
    bool get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x16E6F84
    bool get_IsCompleted();
    // System.Boolean get_GotException()
    // Offset: 0x16E7018
    bool get_GotException();
    // System.Exception get_Exception()
    // Offset: 0x16E7028
    System::Exception* get_Exception();
    // System.Net.FtpWebResponse get_Response()
    // Offset: 0x16E7030
    System::Net::FtpWebResponse* get_Response();
    // System.IO.Stream get_Stream()
    // Offset: 0x16E7038
    System::IO::Stream* get_Stream();
    // System.Void set_Stream(System.IO.Stream value)
    // Offset: 0x16E7040
    void set_Stream(System::IO::Stream* value);
    // public System.Void .ctor(System.AsyncCallback callback, System.Object state)
    // Offset: 0x16E6E08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpAsyncResult* New_ctor(System::AsyncCallback* callback, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpAsyncResult*, creationType>(callback, state)));
    }
    // System.Boolean WaitUntilComplete(System.Int32 timeout, System.Boolean exitContext)
    // Offset: 0x16E7048
    bool WaitUntilComplete(int timeout, bool exitContext);
    // System.Void SetCompleted(System.Boolean synch, System.Exception exc, System.Net.FtpWebResponse response)
    // Offset: 0x16E70B0
    void SetCompleted(bool synch, System::Exception* exc, System::Net::FtpWebResponse* response);
    // System.Void SetCompleted(System.Boolean synch, System.Net.FtpWebResponse response)
    // Offset: 0x16E7234
    void SetCompleted(bool synch, System::Net::FtpWebResponse* response);
    // System.Void SetCompleted(System.Boolean synch, System.Exception exc)
    // Offset: 0x16E7244
    void SetCompleted(bool synch, System::Exception* exc);
    // System.Void DoCallback()
    // Offset: 0x16E716C
    void DoCallback();
  }; // System.Net.FtpAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(FtpAsyncResult), 72 + sizeof(::Il2CppObject*)> __System_Net_FtpAsyncResultSizeCheck;
  static_assert(sizeof(FtpAsyncResult) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpAsyncResult*, "System.Net", "FtpAsyncResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::WaitHandle* (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::get_GotException
// Il2CppName: get_GotException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::get_GotException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "get_GotException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::get_Exception)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::get_Response
// Il2CppName: get_Response
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::FtpWebResponse* (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::get_Response)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "get_Response", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::get_Stream
// Il2CppName: get_Stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::get_Stream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "get_Stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::set_Stream
// Il2CppName: set_Stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpAsyncResult::*)(System::IO::Stream*)>(&System::Net::FtpAsyncResult::set_Stream)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "set_Stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::WaitUntilComplete
// Il2CppName: WaitUntilComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpAsyncResult::*)(int, bool)>(&System::Net::FtpAsyncResult::WaitUntilComplete)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "WaitUntilComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout, exitContext});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpAsyncResult::*)(bool, System::Exception*, System::Net::FtpWebResponse*)>(&System::Net::FtpAsyncResult::SetCompleted)> {
  static const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* exc = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("System.Net", "FtpWebResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch, exc, response});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpAsyncResult::*)(bool, System::Net::FtpWebResponse*)>(&System::Net::FtpAsyncResult::SetCompleted)> {
  static const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("System.Net", "FtpWebResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch, response});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpAsyncResult::*)(bool, System::Exception*)>(&System::Net::FtpAsyncResult::SetCompleted)> {
  static const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* exc = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch, exc});
  }
};
// Writing MetadataGetter for method: System::Net::FtpAsyncResult::DoCallback
// Il2CppName: DoCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpAsyncResult::*)()>(&System::Net::FtpAsyncResult::DoCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpAsyncResult*), "DoCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
