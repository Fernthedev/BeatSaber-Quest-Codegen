// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseServerUnconnectedMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<StartServerAuthenticationFlow>d__19");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<StartServerAuthenticationFlow>d__19
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public BGNet.Core.Messages.BaseServerUnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*) == 0x8);
    // public System.UInt32 protocolVersion
    // Size: 0x4
    // Offset: 0x30
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: protocolVersion and: endPoint
    char __padding3[0x4] = {};
    // public System.Net.IPEndPoint endPoint
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::IPEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public System.UInt32 requestId
    // Size: 0x4
    // Offset: 0x40
    uint requestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 certificateResponseId
    // Size: 0x4
    // Offset: 0x44
    uint certificateResponseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Byte[] clientRandom
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> clientRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $StartServerAuthenticationFlow$d__19
    constexpr $StartServerAuthenticationFlow$d__19(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* $$4__this_ = {}, uint protocolVersion_ = {}, ::System::Net::IPEndPoint* endPoint_ = {}, uint requestId_ = {}, uint certificateResponseId_ = {}, ::ArrayW<uint8_t> clientRandom_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, protocolVersion{protocolVersion_}, endPoint{endPoint_}, requestId{requestId_}, certificateResponseId{certificateResponseId_}, clientRandom{clientRandom_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public BGNet.Core.Messages.BaseServerUnconnectedMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public System.UInt32 protocolVersion
    [[deprecated("Use field access instead!")]] uint& dyn_protocolVersion();
    // Get instance field reference: public System.Net.IPEndPoint endPoint
    [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_endPoint();
    // Get instance field reference: public System.UInt32 requestId
    [[deprecated("Use field access instead!")]] uint& dyn_requestId();
    // Get instance field reference: public System.UInt32 certificateResponseId
    [[deprecated("Use field access instead!")]] uint& dyn_certificateResponseId();
    // Get instance field reference: public System.Byte[] clientRandom
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_clientRandom();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x15899F0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1589C9C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<StartServerAuthenticationFlow>d__19
  #pragma pack(pop)
  static check_size<sizeof(BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19), 80 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __BGNet_Core_Messages_BaseServerUnconnectedMessageHandler_$StartServerAuthenticationFlow$d__19SizeCheck;
  static_assert(sizeof(BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
