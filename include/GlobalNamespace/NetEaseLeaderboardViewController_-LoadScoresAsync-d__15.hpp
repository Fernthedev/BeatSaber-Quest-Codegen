// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetEaseLeaderboardViewController
#include "GlobalNamespace/NetEaseLeaderboardViewController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetEaseLeaderboardViewController/<LoadScoresAsync>d__15
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NetEaseLeaderboardViewController::$LoadScoresAsync$d__15/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public NetEaseLeaderboardViewController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NetEaseLeaderboardViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseLeaderboardViewController*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.ReceivedHighscoreData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::ReceivedHighscoreData> $$u__1;
    // Creating value type constructor for type: $LoadScoresAsync$d__15
    constexpr $LoadScoresAsync$d__15(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::NetEaseLeaderboardViewController* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::ReceivedHighscoreData> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public NetEaseLeaderboardViewController <>4__this
    GlobalNamespace::NetEaseLeaderboardViewController*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.ReceivedHighscoreData> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::ReceivedHighscoreData>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1047D64
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x10482A0
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetEaseLeaderboardViewController/<LoadScoresAsync>d__15
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15, "", "NetEaseLeaderboardViewController/<LoadScoresAsync>d__15");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15::*)()>(&GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
