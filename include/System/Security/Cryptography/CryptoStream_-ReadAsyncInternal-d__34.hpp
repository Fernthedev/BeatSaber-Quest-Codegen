// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.CryptoStream
#include "System/Security/Cryptography/CryptoStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Security.Cryptography.CryptoStream/System.Security.Cryptography.HopToThreadPoolAwaitable
#include "System/Security/Cryptography/CryptoStream_HopToThreadPoolAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Security.Cryptography.CryptoStream/System.Security.Cryptography.<ReadAsyncInternal>d__34
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA29EC
  struct CryptoStream::$ReadAsyncInternal$d__34/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int> $$t__builder;
    // public System.Security.Cryptography.CryptoStream <>4__this
    // Size: 0x8
    // Offset: 0x20
    System::Security::Cryptography::CryptoStream* $$4__this;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::CryptoStream*) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x28
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 offset
    // Size: 0x4
    // Offset: 0x2C
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Byte[] <tempInputBuffer>5__1
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* $tempInputBuffer$5__1;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 <currentOutputIndex>5__2
    // Size: 0x4
    // Offset: 0x48
    int $currentOutputIndex$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <bytesToDeliver>5__3
    // Size: 0x4
    // Offset: 0x4C
    int $bytesToDeliver$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.SemaphoreSlim <sem>5__4
    // Size: 0x8
    // Offset: 0x50
    System::Threading::SemaphoreSlim* $sem$5__4;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim*) == 0x8);
    // private System.Security.Cryptography.CryptoStream/System.Security.Cryptography.HopToThreadPoolAwaitable <>u__1
    // Size: 0x1
    // Offset: 0x58
    System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable $$u__1;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable) == 0x1);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    // Size: 0x9
    // Offset: 0x60
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // private System.Int32 <>7__wrap1
    // Size: 0x4
    // Offset: 0x70
    int $$7__wrap1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Int32> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter $$u__3;
    // Creating value type constructor for type: $ReadAsyncInternal$d__34
    constexpr $ReadAsyncInternal$d__34(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int> $$t__builder_ = {}, System::Security::Cryptography::CryptoStream* $$4__this_ = {}, int count_ = {}, int offset_ = {}, ::Array<uint8_t>* buffer_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Array<uint8_t>* $tempInputBuffer$5__1_ = {}, int $currentOutputIndex$5__2_ = {}, int $bytesToDeliver$5__3_ = {}, System::Threading::SemaphoreSlim* $sem$5__4_ = {}, System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable $$u__1_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2_ = {}, int $$7__wrap1_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, count{count_}, offset{offset_}, buffer{buffer_}, cancellationToken{cancellationToken_}, $tempInputBuffer$5__1{$tempInputBuffer$5__1_}, $currentOutputIndex$5__2{$currentOutputIndex$5__2_}, $bytesToDeliver$5__3{$bytesToDeliver$5__3_}, $sem$5__4{$sem$5__4_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$7__wrap1{$$7__wrap1_}, $$u__3{$$u__3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int>& dyn_$$t__builder();
    // Get instance field reference: public System.Security.Cryptography.CryptoStream <>4__this
    System::Security::Cryptography::CryptoStream*& dyn_$$4__this();
    // Get instance field reference: public System.Int32 count
    int& dyn_count();
    // Get instance field reference: public System.Int32 offset
    int& dyn_offset();
    // Get instance field reference: public System.Byte[] buffer
    ::Array<uint8_t>*& dyn_buffer();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Byte[] <tempInputBuffer>5__1
    ::Array<uint8_t>*& dyn_$tempInputBuffer$5__1();
    // Get instance field reference: private System.Int32 <currentOutputIndex>5__2
    int& dyn_$currentOutputIndex$5__2();
    // Get instance field reference: private System.Int32 <bytesToDeliver>5__3
    int& dyn_$bytesToDeliver$5__3();
    // Get instance field reference: private System.Threading.SemaphoreSlim <sem>5__4
    System::Threading::SemaphoreSlim*& dyn_$sem$5__4();
    // Get instance field reference: private System.Security.Cryptography.CryptoStream/System.Security.Cryptography.HopToThreadPoolAwaitable <>u__1
    System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__2();
    // Get instance field reference: private System.Int32 <>7__wrap1
    int& dyn_$$7__wrap1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Int32> <>u__3
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<int>::ConfiguredTaskAwaiter& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x198FAB0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1990544
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Security.Cryptography.CryptoStream/System.Security.Cryptography.<ReadAsyncInternal>d__34
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34, "System.Security.Cryptography", "CryptoStream/<ReadAsyncInternal>d__34");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34::*)()>(&System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
