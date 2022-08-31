// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PingUtility
#include "GlobalNamespace/PingUtility.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ping
  class Ping;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility::$PingAsync$d__0, "", "PingUtility/<PingAsync>d__0");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PingUtility/<PingAsync>d__0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct PingUtility::$PingAsync$d__0/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int64> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> $$t__builder;
    // public System.String url
    // Size: 0x8
    // Offset: 0x20
    ::StringW url;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Ping[] <pings>5__2
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Ping*> $pings$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Ping*>) == 0x8);
    // private System.Int64 <ping>5__3
    // Size: 0x8
    // Offset: 0x30
    int64_t $ping$5__3;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean <found>5__4
    // Size: 0x1
    // Offset: 0x38
    bool $found$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> $$u__1;
    // private System.Int32 <t>5__5
    // Size: 0x4
    // Offset: 0x48
    int $t$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $PingAsync$d__0
    constexpr $PingAsync$d__0(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> $$t__builder_ = {}, ::StringW url_ = {}, ::ArrayW<::UnityEngine::Ping*> $pings$5__2_ = ::ArrayW<::UnityEngine::Ping*>(static_cast<void*>(nullptr)), int64_t $ping$5__3_ = {}, bool $found$5__4_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>> $$u__1_ = {}, int $t$5__5_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, url{url_}, $pings$5__2{$pings$5__2_}, $ping$5__3{$ping$5__3_}, $found$5__4{$found$5__4_}, $$u__1{$$u__1_}, $t$5__5{$t$5__5_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int64> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>& dyn_$$t__builder();
    // Get instance field reference: public System.String url
    [[deprecated("Use field access instead!")]] ::StringW& dyn_url();
    // Get instance field reference: private UnityEngine.Ping[] <pings>5__2
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Ping*>& dyn_$pings$5__2();
    // Get instance field reference: private System.Int64 <ping>5__3
    [[deprecated("Use field access instead!")]] int64_t& dyn_$ping$5__3();
    // Get instance field reference: private System.Boolean <found>5__4
    [[deprecated("Use field access instead!")]] bool& dyn_$found$5__4();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress*>>& dyn_$$u__1();
    // Get instance field reference: private System.Int32 <t>5__5
    [[deprecated("Use field access instead!")]] int& dyn_$t$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x266F960
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x266FE28
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // PingUtility/<PingAsync>d__0
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PingUtility::$PingAsync$d__0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PingUtility::$PingAsync$d__0::*)()>(&GlobalNamespace::PingUtility::$PingAsync$d__0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PingUtility::$PingAsync$d__0), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PingUtility::$PingAsync$d__0::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PingUtility::$PingAsync$d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::PingUtility::$PingAsync$d__0::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PingUtility::$PingAsync$d__0), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
