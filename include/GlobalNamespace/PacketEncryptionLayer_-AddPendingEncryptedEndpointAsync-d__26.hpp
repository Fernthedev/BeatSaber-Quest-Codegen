// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__26
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Byte[] preMasterSecret
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* preMasterSecret;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] serverRandom
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* serverRandom;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] clientRandom
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* clientRandom;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Boolean isClient
    // Size: 0x1
    // Offset: 0x38
    bool isClient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public PacketEncryptionLayer <>4__this
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PacketEncryptionLayer* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PacketEncryptionLayer*) == 0x8);
    // public System.Net.IPEndPoint endPoint
    // Size: 0x8
    // Offset: 0x48
    System::Net::IPEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__1;
    // Creating value type constructor for type: $AddPendingEncryptedEndpointAsync$d__26
    constexpr $AddPendingEncryptedEndpointAsync$d__26(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::Array<uint8_t>* preMasterSecret_ = {}, ::Array<uint8_t>* serverRandom_ = {}, ::Array<uint8_t>* clientRandom_ = {}, bool isClient_ = {}, GlobalNamespace::PacketEncryptionLayer* $$4__this_ = {}, System::Net::IPEndPoint* endPoint_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, preMasterSecret{preMasterSecret_}, serverRandom{serverRandom_}, clientRandom{clientRandom_}, isClient{isClient_}, $$4__this{$$4__this_}, endPoint{endPoint_}, $$u__1{$$u__1_} {}
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
    // Get instance field: public System.Byte[] preMasterSecret
    ::Array<uint8_t>* _get_preMasterSecret();
    // Set instance field: public System.Byte[] preMasterSecret
    void _set_preMasterSecret(::Array<uint8_t>* value);
    // Get instance field: public System.Byte[] serverRandom
    ::Array<uint8_t>* _get_serverRandom();
    // Set instance field: public System.Byte[] serverRandom
    void _set_serverRandom(::Array<uint8_t>* value);
    // Get instance field: public System.Byte[] clientRandom
    ::Array<uint8_t>* _get_clientRandom();
    // Set instance field: public System.Byte[] clientRandom
    void _set_clientRandom(::Array<uint8_t>* value);
    // Get instance field: public System.Boolean isClient
    bool _get_isClient();
    // Set instance field: public System.Boolean isClient
    void _set_isClient(bool value);
    // Get instance field: public PacketEncryptionLayer <>4__this
    GlobalNamespace::PacketEncryptionLayer* _get_$$4__this();
    // Set instance field: public PacketEncryptionLayer <>4__this
    void _set_$$4__this(GlobalNamespace::PacketEncryptionLayer* value);
    // Get instance field: public System.Net.IPEndPoint endPoint
    System::Net::IPEndPoint* _get_endPoint();
    // Set instance field: public System.Net.IPEndPoint endPoint
    void _set_endPoint(System::Net::IPEndPoint* value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> value);
    // private System.Void MoveNext()
    // Offset: 0x16F2334
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x16F2788
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__26
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26, "", "PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__26");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::*)()>(&GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
