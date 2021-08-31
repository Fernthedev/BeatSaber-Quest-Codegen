// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.AsyncProtocolRequest
#include "Mono/Net/Security/AsyncProtocolRequest.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: Mono.Net.Security.AsyncOperationStatus
#include "Mono/Net/Security/AsyncOperationStatus.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Completed includes
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // WARNING Size may be invalid!
  // Autogenerated type: Mono.Net.Security.AsyncProtocolRequest/Mono.Net.Security.<ProcessOperation>d__24
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct AsyncProtocolRequest::$ProcessOperation$d__24/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public Mono.Net.Security.AsyncProtocolRequest <>4__this
    // Size: 0x8
    // Offset: 0x28
    Mono::Net::Security::AsyncProtocolRequest* $$4__this;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::AsyncProtocolRequest*) == 0x8);
    // private Mono.Net.Security.AsyncOperationStatus <status>5__1
    // Size: 0x4
    // Offset: 0x30
    Mono::Net::Security::AsyncOperationStatus $status$5__1;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::AsyncOperationStatus) == 0x4);
    // private Mono.Net.Security.AsyncOperationStatus <newStatus>5__2
    // Size: 0x4
    // Offset: 0x34
    Mono::Net::Security::AsyncOperationStatus $newStatus$5__2;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::AsyncOperationStatus) == 0x4);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Nullable`1<System.Int32>> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Nullable_1<int>>::ConfiguredTaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    // Size: 0x9
    // Offset: 0x48
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // Creating value type constructor for type: $ProcessOperation$d__24
    constexpr $ProcessOperation$d__24(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, Mono::Net::Security::AsyncProtocolRequest* $$4__this_ = {}, Mono::Net::Security::AsyncOperationStatus $status$5__1_ = {}, Mono::Net::Security::AsyncOperationStatus $newStatus$5__2_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Nullable_1<int>>::ConfiguredTaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, $status$5__1{$status$5__1_}, $newStatus$5__2{$newStatus$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: public Mono.Net.Security.AsyncProtocolRequest <>4__this
    Mono::Net::Security::AsyncProtocolRequest* _get_$$4__this();
    // Set instance field: public Mono.Net.Security.AsyncProtocolRequest <>4__this
    void _set_$$4__this(Mono::Net::Security::AsyncProtocolRequest* value);
    // Get instance field: private Mono.Net.Security.AsyncOperationStatus <status>5__1
    Mono::Net::Security::AsyncOperationStatus _get_$status$5__1();
    // Set instance field: private Mono.Net.Security.AsyncOperationStatus <status>5__1
    void _set_$status$5__1(Mono::Net::Security::AsyncOperationStatus value);
    // Get instance field: private Mono.Net.Security.AsyncOperationStatus <newStatus>5__2
    Mono::Net::Security::AsyncOperationStatus _get_$newStatus$5__2();
    // Set instance field: private Mono.Net.Security.AsyncOperationStatus <newStatus>5__2
    void _set_$newStatus$5__2(Mono::Net::Security::AsyncOperationStatus value);
    // Get instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Nullable`1<System.Int32>> <>u__1
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Nullable_1<int>>::ConfiguredTaskAwaiter _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Nullable`1<System.Int32>> <>u__1
    void _set_$$u__1(typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Nullable_1<int>>::ConfiguredTaskAwaiter value);
    // Get instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter _get_$$u__2();
    // Set instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    void _set_$$u__2(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter value);
    // private System.Void MoveNext()
    // Offset: 0x15E5BF4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x15E6098
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // Mono.Net.Security.AsyncProtocolRequest/Mono.Net.Security.<ProcessOperation>d__24
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24, "Mono.Net.Security", "AsyncProtocolRequest/<ProcessOperation>d__24");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24::*)()>(&Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
