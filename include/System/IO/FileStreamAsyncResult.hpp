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
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileStreamAsyncResult
  class FileStreamAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // private System.Object state
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x18
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: completed and: wh
    char __padding1[0x7] = {};
    // private System.Threading.ManualResetEvent wh
    // Size: 0x8
    // Offset: 0x20
    System::Threading::ManualResetEvent* wh;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.AsyncCallback cb
    // Size: 0x8
    // Offset: 0x28
    System::AsyncCallback* cb;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // private System.Boolean completedSynch
    // Size: 0x1
    // Offset: 0x30
    bool completedSynch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: completedSynch and: Count
    char __padding4[0x3] = {};
    // public System.Int32 Count
    // Size: 0x4
    // Offset: 0x34
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OriginalCount
    // Size: 0x4
    // Offset: 0x38
    int OriginalCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 BytesRead
    // Size: 0x4
    // Offset: 0x3C
    int BytesRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.AsyncCallback realcb
    // Size: 0x8
    // Offset: 0x40
    System::AsyncCallback* realcb;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // Creating value type constructor for type: FileStreamAsyncResult
    FileStreamAsyncResult(::Il2CppObject* state_ = {}, bool completed_ = {}, System::Threading::ManualResetEvent* wh_ = {}, System::AsyncCallback* cb_ = {}, bool completedSynch_ = {}, int Count_ = {}, int OriginalCount_ = {}, int BytesRead_ = {}, System::AsyncCallback* realcb_ = {}) noexcept : state{state_}, completed{completed_}, wh{wh_}, cb{cb_}, completedSynch{completedSynch_}, Count{Count_}, OriginalCount{OriginalCount_}, BytesRead{BytesRead_}, realcb{realcb_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x194F558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStreamAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStreamAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStreamAsyncResult*, creationType>(cb, state)));
    }
    // static private System.Void CBWrapper(System.IAsyncResult ares)
    // Offset: 0x1950F8C
    static void CBWrapper(System::IAsyncResult* ares);
    // public System.Object get_AsyncState()
    // Offset: 0x1951028
    ::Il2CppObject* get_AsyncState();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1951030
    bool get_CompletedSynchronously();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1951038
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1951040
    bool get_IsCompleted();
  }; // System.IO.FileStreamAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(FileStreamAsyncResult), 64 + sizeof(System::AsyncCallback*)> __System_IO_FileStreamAsyncResultSizeCheck;
  static_assert(sizeof(FileStreamAsyncResult) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileStreamAsyncResult*, "System.IO", "FileStreamAsyncResult");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::CBWrapper
// Il2CppName: CBWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult*)>(&System::IO::FileStreamAsyncResult::CBWrapper)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "CBWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::IO::FileStreamAsyncResult::*)()>(&System::IO::FileStreamAsyncResult::get_AsyncState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileStreamAsyncResult::*)()>(&System::IO::FileStreamAsyncResult::get_CompletedSynchronously)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::WaitHandle* (System::IO::FileStreamAsyncResult::*)()>(&System::IO::FileStreamAsyncResult::get_AsyncWaitHandle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileStreamAsyncResult::*)()>(&System::IO::FileStreamAsyncResult::get_IsCompleted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
