// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetEaseManager
#include "GlobalNamespace/NetEaseManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: NetEase.Docker.InitializeData
#include "NetEase/Docker/InitializeData.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetEaseManager/<InitAsync>d__11
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NetEaseManager::$InitAsync$d__11/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<NetEase.Docker.InitializeData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::InitializeData> $$t__builder;
    // public NetEaseManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetEaseManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.InitializeData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::InitializeData> $$u__1;
    // Creating value type constructor for type: $InitAsync$d__11
    constexpr $InitAsync$d__11(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::InitializeData> $$t__builder_ = {}, GlobalNamespace::NetEaseManager* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::InitializeData> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<NetEase.Docker.InitializeData> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::InitializeData>& dyn_$$t__builder();
    // Get instance field reference: public NetEaseManager <>4__this
    GlobalNamespace::NetEaseManager*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.InitializeData> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::InitializeData>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1048EF8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1049108
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetEaseManager/<InitAsync>d__11
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseManager::$InitAsync$d__11, "", "NetEaseManager/<InitAsync>d__11");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::$InitAsync$d__11::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::$InitAsync$d__11::*)()>(&GlobalNamespace::NetEaseManager::$InitAsync$d__11::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager::$InitAsync$d__11), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::$InitAsync$d__11::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::$InitAsync$d__11::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetEaseManager::$InitAsync$d__11::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager::$InitAsync$d__11), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
