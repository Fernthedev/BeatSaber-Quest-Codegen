// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerModeSelectionFlowCoordinator
#include "GlobalNamespace/MultiplayerModeSelectionFlowCoordinator.hpp"
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
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
  // Forward declaring type: MasterServerQuickPlaySetupData
  class MasterServerQuickPlaySetupData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__49
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public MultiplayerModeSelectionFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*) == 0x8);
    // private MasterServerAvailabilityData <masterServerAvailabilityData>5__2
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MasterServerAvailabilityData* $masterServerAvailabilityData$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerAvailabilityData*) == 0x8);
    // private System.Exception <exception>5__3
    // Size: 0x8
    // Offset: 0x38
    System::Exception* $exception$5__3;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServerAvailabilityData> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerAvailabilityData*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServerQuickPlaySetupData> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerQuickPlaySetupData*> $$u__3;
    // Creating value type constructor for type: $TryShowModeSelection$d__49
    constexpr $TryShowModeSelection$d__49(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* $$4__this_ = {}, GlobalNamespace::MasterServerAvailabilityData* $masterServerAvailabilityData$5__2_ = {}, System::Exception* $exception$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerAvailabilityData*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerQuickPlaySetupData*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $masterServerAvailabilityData$5__2{$masterServerAvailabilityData$5__2_}, $exception$5__3{$exception$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
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
    // Get instance field: public MultiplayerModeSelectionFlowCoordinator <>4__this
    GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* _get_$$4__this();
    // Set instance field: public MultiplayerModeSelectionFlowCoordinator <>4__this
    void _set_$$4__this(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* value);
    // Get instance field: private MasterServerAvailabilityData <masterServerAvailabilityData>5__2
    GlobalNamespace::MasterServerAvailabilityData* _get_$masterServerAvailabilityData$5__2();
    // Set instance field: private MasterServerAvailabilityData <masterServerAvailabilityData>5__2
    void _set_$masterServerAvailabilityData$5__2(GlobalNamespace::MasterServerAvailabilityData* value);
    // Get instance field: private System.Exception <exception>5__3
    System::Exception* _get_$exception$5__3();
    // Set instance field: private System.Exception <exception>5__3
    void _set_$exception$5__3(System::Exception* value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServerAvailabilityData> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerAvailabilityData*> _get_$$u__2();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServerAvailabilityData> <>u__2
    void _set_$$u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerAvailabilityData*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServerQuickPlaySetupData> <>u__3
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerQuickPlaySetupData*> _get_$$u__3();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServerQuickPlaySetupData> <>u__3
    void _set_$$u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerQuickPlaySetupData*> value);
    // private System.Void MoveNext()
    // Offset: 0x106EF20
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x106FA80
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__49
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49, "", "MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__49");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__49), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
