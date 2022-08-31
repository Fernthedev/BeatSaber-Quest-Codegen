// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.SemaphoreSlim
#include "System/Threading/SemaphoreSlim.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31, "System.Threading", "SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31");
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.SemaphoreSlim/System.Threading.<WaitUntilCountOrTimeoutAsync>d__31
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: 10429E0
  struct SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder;
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // public System.Threading.SemaphoreSlim/System.Threading.TaskNode asyncWaiter
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::SemaphoreSlim::TaskNode* asyncWaiter;
    // Field size check
    static_assert(sizeof(::System::Threading::SemaphoreSlim::TaskNode*) == 0x8);
    // public System.Int32 millisecondsTimeout
    // Size: 0x4
    // Offset: 0x30
    int millisecondsTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.CancellationTokenSource <cts>5__1
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::CancellationTokenSource* $cts$5__1;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    // public System.Threading.SemaphoreSlim <>4__this
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::SemaphoreSlim* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Threading::SemaphoreSlim*) == 0x8);
    // private System.Object <>7__wrap1
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Boolean> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter $$u__2;
    public:
    // Creating value type constructor for type: $WaitUntilCountOrTimeoutAsync$d__31
    constexpr $WaitUntilCountOrTimeoutAsync$d__31(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Threading::SemaphoreSlim::TaskNode* asyncWaiter_ = {}, int millisecondsTimeout_ = {}, ::System::Threading::CancellationTokenSource* $cts$5__1_ = {}, ::System::Threading::SemaphoreSlim* $$4__this_ = {}, ::Il2CppObject* $$7__wrap1_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, cancellationToken{cancellationToken_}, asyncWaiter{asyncWaiter_}, millisecondsTimeout{millisecondsTimeout_}, $cts$5__1{$cts$5__1_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& dyn_$$t__builder();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public System.Threading.SemaphoreSlim/System.Threading.TaskNode asyncWaiter
    [[deprecated("Use field access instead!")]] ::System::Threading::SemaphoreSlim::TaskNode*& dyn_asyncWaiter();
    // Get instance field reference: public System.Int32 millisecondsTimeout
    [[deprecated("Use field access instead!")]] int& dyn_millisecondsTimeout();
    // Get instance field reference: private System.Threading.CancellationTokenSource <cts>5__1
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn_$cts$5__1();
    // Get instance field reference: public System.Threading.SemaphoreSlim <>4__this
    [[deprecated("Use field access instead!")]] ::System::Threading::SemaphoreSlim*& dyn_$$4__this();
    // Get instance field reference: private System.Object <>7__wrap1
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$7__wrap1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Boolean> <>u__2
    [[deprecated("Use field access instead!")]] typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x1DE2EF0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1DE3A38
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Threading.SemaphoreSlim/System.Threading.<WaitUntilCountOrTimeoutAsync>d__31
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31::*)()>(&System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
