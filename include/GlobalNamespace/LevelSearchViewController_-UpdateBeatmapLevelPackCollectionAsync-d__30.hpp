// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelSearchViewController
#include "GlobalNamespace/LevelSearchViewController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LevelSearchViewController/<UpdateBeatmapLevelPackCollectionAsync>d__30
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public LevelSearchViewController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LevelSearchViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelSearchViewController*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevelCollection> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection*> $$u__1;
    // Creating value type constructor for type: $UpdateBeatmapLevelPackCollectionAsync$d__30
    constexpr $UpdateBeatmapLevelPackCollectionAsync$d__30(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::LevelSearchViewController* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
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
    // Get instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value);
    // Get instance field: public LevelSearchViewController <>4__this
    GlobalNamespace::LevelSearchViewController* _get_$$4__this();
    // Set instance field: public LevelSearchViewController <>4__this
    void _set_$$4__this(GlobalNamespace::LevelSearchViewController* value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevelCollection> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection*> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevelCollection> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelCollection*> value);
    // private System.Void MoveNext()
    // Offset: 0x11FB4F0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x11FB9C0
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LevelSearchViewController/<UpdateBeatmapLevelPackCollectionAsync>d__30
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30, "", "LevelSearchViewController/<UpdateBeatmapLevelPackCollectionAsync>d__30");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30::*)()>(&GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
