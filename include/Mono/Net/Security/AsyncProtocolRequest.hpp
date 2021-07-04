// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
  // Forward declaring type: AsyncProtocolResult
  class AsyncProtocolResult;
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.AsyncProtocolRequest
  class AsyncProtocolRequest : public ::Il2CppObject {
    public:
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$StartOperation$d__23
    struct $StartOperation$d__23;
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24
    struct $ProcessOperation$d__24;
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$InnerRead$d__25
    struct $InnerRead$d__25;
    // [CompilerGeneratedAttribute] Offset: 0xD8877C
    // private readonly Mono.Net.Security.MobileAuthenticatedStream <Parent>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Mono::Net::Security::MobileAuthenticatedStream* Parent;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::MobileAuthenticatedStream*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD8878C
    // private readonly System.Boolean <RunSynchronously>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool RunSynchronously;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RunSynchronously and: UserResult
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD8879C
    // private System.Int32 <UserResult>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int UserResult;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 Started
    // Size: 0x4
    // Offset: 0x20
    int Started;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 RequestedSize
    // Size: 0x4
    // Offset: 0x24
    int RequestedSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 WriteRequested
    // Size: 0x4
    // Offset: 0x28
    int WriteRequested;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: WriteRequested and: locker
    char __padding5[0x4] = {};
    // private readonly System.Object locker
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: AsyncProtocolRequest
    AsyncProtocolRequest(Mono::Net::Security::MobileAuthenticatedStream* Parent_ = {}, bool RunSynchronously_ = {}, int UserResult_ = {}, int Started_ = {}, int RequestedSize_ = {}, int WriteRequested_ = {}, ::Il2CppObject* locker_ = {}) noexcept : Parent{Parent_}, RunSynchronously{RunSynchronously_}, UserResult{UserResult_}, Started{Started_}, RequestedSize{RequestedSize_}, WriteRequested{WriteRequested_}, locker{locker_} {}
    // public Mono.Net.Security.MobileAuthenticatedStream get_Parent()
    // Offset: 0x15ED83C
    Mono::Net::Security::MobileAuthenticatedStream* get_Parent();
    // public System.Boolean get_RunSynchronously()
    // Offset: 0x15ED844
    bool get_RunSynchronously();
    // public System.String get_Name()
    // Offset: 0x15ED84C
    ::Il2CppString* get_Name();
    // public System.Int32 get_UserResult()
    // Offset: 0x15ED874
    int get_UserResult();
    // protected System.Void set_UserResult(System.Int32 value)
    // Offset: 0x15ED87C
    void set_UserResult(int value);
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync)
    // Offset: 0x15ED5D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncProtocolRequest* New_ctor(Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::AsyncProtocolRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncProtocolRequest*, creationType>(parent, sync)));
    }
    // System.Void RequestRead(System.Int32 size)
    // Offset: 0x15ED884
    void RequestRead(int size);
    // System.Void RequestWrite()
    // Offset: 0x15ED91C
    void RequestWrite();
    // System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult> StartOperation(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x15ED928
    System::Threading::Tasks::Task_1<Mono::Net::Security::AsyncProtocolResult*>* StartOperation(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task ProcessOperation(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x15EDA34
    System::Threading::Tasks::Task* ProcessOperation(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>> InnerRead(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x15EDB34
    System::Threading::Tasks::Task_1<System::Nullable_1<int>>* InnerRead(System::Threading::CancellationToken cancellationToken);
    // protected Mono.Net.Security.AsyncOperationStatus Run(Mono.Net.Security.AsyncOperationStatus status)
    // Offset: 0xFFFFFFFF
    Mono::Net::Security::AsyncOperationStatus Run(Mono::Net::Security::AsyncOperationStatus status);
    // public override System.String ToString()
    // Offset: 0x15EDC44
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Net.Security.AsyncProtocolRequest
  #pragma pack(pop)
  static check_size<sizeof(AsyncProtocolRequest), 48 + sizeof(::Il2CppObject*)> __Mono_Net_Security_AsyncProtocolRequestSizeCheck;
  static_assert(sizeof(AsyncProtocolRequest) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncProtocolRequest*, "Mono.Net.Security", "AsyncProtocolRequest");
// Writing includes for template specializations
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
#include "System/Threading/CancellationToken.hpp"
#include "Mono/Net/Security/AsyncOperationStatus.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::get_Parent
// Il2CppName: get_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::MobileAuthenticatedStream* (Mono::Net::Security::AsyncProtocolRequest::*)()>(&Mono::Net::Security::AsyncProtocolRequest::get_Parent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "get_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::get_RunSynchronously
// Il2CppName: get_RunSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::AsyncProtocolRequest::*)()>(&Mono::Net::Security::AsyncProtocolRequest::get_RunSynchronously)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "get_RunSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Net::Security::AsyncProtocolRequest::*)()>(&Mono::Net::Security::AsyncProtocolRequest::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::get_UserResult
// Il2CppName: get_UserResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Net::Security::AsyncProtocolRequest::*)()>(&Mono::Net::Security::AsyncProtocolRequest::get_UserResult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "get_UserResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::set_UserResult
// Il2CppName: set_UserResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::AsyncProtocolRequest::*)(int)>(&Mono::Net::Security::AsyncProtocolRequest::set_UserResult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "set_UserResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::RequestRead
// Il2CppName: RequestRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::AsyncProtocolRequest::*)(int)>(&Mono::Net::Security::AsyncProtocolRequest::RequestRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "RequestRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::RequestWrite
// Il2CppName: RequestWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::AsyncProtocolRequest::*)()>(&Mono::Net::Security::AsyncProtocolRequest::RequestWrite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "RequestWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::StartOperation
// Il2CppName: StartOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<Mono::Net::Security::AsyncProtocolResult*>* (Mono::Net::Security::AsyncProtocolRequest::*)(System::Threading::CancellationToken)>(&Mono::Net::Security::AsyncProtocolRequest::StartOperation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "StartOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::ProcessOperation
// Il2CppName: ProcessOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (Mono::Net::Security::AsyncProtocolRequest::*)(System::Threading::CancellationToken)>(&Mono::Net::Security::AsyncProtocolRequest::ProcessOperation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "ProcessOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::InnerRead
// Il2CppName: InnerRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Nullable_1<int>>* (Mono::Net::Security::AsyncProtocolRequest::*)(System::Threading::CancellationToken)>(&Mono::Net::Security::AsyncProtocolRequest::InnerRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "InnerRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::AsyncOperationStatus (Mono::Net::Security::AsyncProtocolRequest::*)(Mono::Net::Security::AsyncOperationStatus)>(&Mono::Net::Security::AsyncProtocolRequest::Run)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Mono::Net::Security::AsyncOperationStatus>()});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Net::Security::AsyncProtocolRequest::*)()>(&Mono::Net::Security::AsyncProtocolRequest::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
