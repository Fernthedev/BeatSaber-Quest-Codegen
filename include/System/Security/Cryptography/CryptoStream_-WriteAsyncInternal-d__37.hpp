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
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Security.Cryptography.CryptoStream/System.Security.Cryptography.HopToThreadPoolAwaitable
#include "System/Security/Cryptography/CryptoStream_HopToThreadPoolAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
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
  // Autogenerated type: System.Security.Cryptography.CryptoStream/System.Security.Cryptography.<WriteAsyncInternal>d__37
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D9CA8C
  struct CryptoStream::$WriteAsyncInternal$d__37/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // private System.Int32 <bytesToWrite>5__1
    // Size: 0x4
    // Offset: 0x40
    int $bytesToWrite$5__1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <currentInputIndex>5__2
    // Size: 0x4
    // Offset: 0x44
    int $currentInputIndex$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <numWholeBlocksInBytes>5__3
    // Size: 0x4
    // Offset: 0x48
    int $numWholeBlocksInBytes$5__3;
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
    // Creating value type constructor for type: $WriteAsyncInternal$d__37
    constexpr $WriteAsyncInternal$d__37(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, System::Security::Cryptography::CryptoStream* $$4__this_ = {}, int count_ = {}, int offset_ = {}, ::Array<uint8_t>* buffer_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, int $bytesToWrite$5__1_ = {}, int $currentInputIndex$5__2_ = {}, int $numWholeBlocksInBytes$5__3_ = {}, System::Threading::SemaphoreSlim* $sem$5__4_ = {}, System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable $$u__1_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, count{count_}, offset{offset_}, buffer{buffer_}, cancellationToken{cancellationToken_}, $bytesToWrite$5__1{$bytesToWrite$5__1_}, $currentInputIndex$5__2{$currentInputIndex$5__2_}, $numWholeBlocksInBytes$5__3{$numWholeBlocksInBytes$5__3_}, $sem$5__4{$sem$5__4_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field: public System.Security.Cryptography.CryptoStream <>4__this
    System::Security::Cryptography::CryptoStream* _get_$$4__this();
    // Set instance field: public System.Security.Cryptography.CryptoStream <>4__this
    void _set_$$4__this(System::Security::Cryptography::CryptoStream* value);
    // Get instance field: public System.Int32 count
    int _get_count();
    // Set instance field: public System.Int32 count
    void _set_count(int value);
    // Get instance field: public System.Int32 offset
    int _get_offset();
    // Set instance field: public System.Int32 offset
    void _set_offset(int value);
    // Get instance field: public System.Byte[] buffer
    ::Array<uint8_t>* _get_buffer();
    // Set instance field: public System.Byte[] buffer
    void _set_buffer(::Array<uint8_t>* value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: private System.Int32 <bytesToWrite>5__1
    int _get_$bytesToWrite$5__1();
    // Set instance field: private System.Int32 <bytesToWrite>5__1
    void _set_$bytesToWrite$5__1(int value);
    // Get instance field: private System.Int32 <currentInputIndex>5__2
    int _get_$currentInputIndex$5__2();
    // Set instance field: private System.Int32 <currentInputIndex>5__2
    void _set_$currentInputIndex$5__2(int value);
    // Get instance field: private System.Int32 <numWholeBlocksInBytes>5__3
    int _get_$numWholeBlocksInBytes$5__3();
    // Set instance field: private System.Int32 <numWholeBlocksInBytes>5__3
    void _set_$numWholeBlocksInBytes$5__3(int value);
    // Get instance field: private System.Threading.SemaphoreSlim <sem>5__4
    System::Threading::SemaphoreSlim* _get_$sem$5__4();
    // Set instance field: private System.Threading.SemaphoreSlim <sem>5__4
    void _set_$sem$5__4(System::Threading::SemaphoreSlim* value);
    // Get instance field: private System.Security.Cryptography.CryptoStream/System.Security.Cryptography.HopToThreadPoolAwaitable <>u__1
    System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable _get_$$u__1();
    // Set instance field: private System.Security.Cryptography.CryptoStream/System.Security.Cryptography.HopToThreadPoolAwaitable <>u__1
    void _set_$$u__1(System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable value);
    // Get instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter _get_$$u__2();
    // Set instance field: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    void _set_$$u__2(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter value);
    // private System.Void MoveNext()
    // Offset: 0x198AD70
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x198B714
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Security.Cryptography.CryptoStream/System.Security.Cryptography.<WriteAsyncInternal>d__37
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37, "System.Security.Cryptography", "CryptoStream/<WriteAsyncInternal>d__37");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37::*)()>(&System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
