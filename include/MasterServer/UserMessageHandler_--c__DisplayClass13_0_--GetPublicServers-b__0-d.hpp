// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass13_0
#include "MasterServer/UserMessageHandler_--c__DisplayClass13_0.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: GetPublicServersResponse
  class GetPublicServersResponse;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass13_0/MasterServer.<<GetPublicServers>b__0>d
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass13_0 <>4__this
    // Size: 0x8
    // Offset: 0x20
    MasterServer::UserMessageHandler::$$c__DisplayClass13_0* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler::$$c__DisplayClass13_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.GetPublicServersResponse> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::GetPublicServersResponse*> $$u__1;
    // Creating value type constructor for type: $$GetPublicServers$b__0$d
    constexpr $$GetPublicServers$b__0$d(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, MasterServer::UserMessageHandler::$$c__DisplayClass13_0* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::GetPublicServersResponse*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass13_0 <>4__this
    MasterServer::UserMessageHandler::$$c__DisplayClass13_0*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.GetPublicServersResponse> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::GetPublicServersResponse*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x12218A4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1221B7C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass13_0/MasterServer.<<GetPublicServers>b__0>d
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d, "MasterServer", "UserMessageHandler/<>c__DisplayClass13_0/<<GetPublicServers>b__0>d");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d::*)()>(&MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$$c__DisplayClass13_0::$$GetPublicServers$b__0$d), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
