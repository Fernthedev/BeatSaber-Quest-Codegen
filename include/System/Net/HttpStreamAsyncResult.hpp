// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpStreamAsyncResult
  class HttpStreamAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent handle
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ManualResetEvent* handle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x20
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: completed and: Buffer
    char __padding2[0x7] = {};
    // System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* Buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Int32 Offset
    // Size: 0x4
    // Offset: 0x30
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Count
    // Size: 0x4
    // Offset: 0x34
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.AsyncCallback Callback
    // Size: 0x8
    // Offset: 0x38
    System::AsyncCallback* Callback;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // System.Object State
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* State;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 SynchRead
    // Size: 0x4
    // Offset: 0x48
    int SynchRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: SynchRead and: Error
    char __padding8[0x4] = {};
    // System.Exception Error
    // Size: 0x8
    // Offset: 0x50
    System::Exception* Error;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // Creating value type constructor for type: HttpStreamAsyncResult
    HttpStreamAsyncResult(::Il2CppObject* locker_ = {}, System::Threading::ManualResetEvent* handle_ = {}, bool completed_ = {}, ::Array<uint8_t>* Buffer_ = {}, int Offset_ = {}, int Count_ = {}, System::AsyncCallback* Callback_ = {}, ::Il2CppObject* State_ = {}, int SynchRead_ = {}, System::Exception* Error_ = {}) noexcept : locker{locker_}, handle{handle_}, completed{completed_}, Buffer{Buffer_}, Offset{Offset_}, Count{Count_}, Callback{Callback_}, State{State_}, SynchRead{SynchRead_}, Error{Error_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // public System.Void Complete(System.Exception e)
    // Offset: 0x1651AE8
    void Complete(System::Exception* e);
    // public System.Void Complete()
    // Offset: 0x1651AF0
    void Complete();
    // public System.Object get_AsyncState()
    // Offset: 0x1651BBC
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1651BC4
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1651CB4
    bool get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1651CC8
    bool get_IsCompleted();
    // public System.Void .ctor()
    // Offset: 0x1651D5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpStreamAsyncResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpStreamAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpStreamAsyncResult*, creationType>()));
    }
  }; // System.Net.HttpStreamAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(HttpStreamAsyncResult), 80 + sizeof(System::Exception*)> __System_Net_HttpStreamAsyncResultSizeCheck;
  static_assert(sizeof(HttpStreamAsyncResult) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpStreamAsyncResult*, "System.Net", "HttpStreamAsyncResult");
// Writing includes for template specializations
#include "System/Exception.hpp"
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpStreamAsyncResult::*)(System::Exception*)>(&System::Net::HttpStreamAsyncResult::Complete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Exception*>()});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::Complete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::get_AsyncState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::WaitHandle* (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::get_AsyncWaitHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::get_CompletedSynchronously)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::get_IsCompleted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
