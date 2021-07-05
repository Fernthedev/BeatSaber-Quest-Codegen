// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
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
  // Autogenerated type: MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__53
  // [CompilerGeneratedAttribute] Offset: E12528
  struct MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // Creating value type constructor for type: $TryShowModeSelection$d__53
    constexpr $TryShowModeSelection$d__53(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* $$4__this_ = {}, GlobalNamespace::MasterServerAvailabilityData* $masterServerAvailabilityData$5__2_ = {}, System::Exception* $exception$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerAvailabilityData*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerQuickPlaySetupData*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $masterServerAvailabilityData$5__2{$masterServerAvailabilityData$5__2_}, $exception$5__3{$exception$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE45D0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE45D8
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__53
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53, "", "MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__53");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53::*)()>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53::SetStateMachine)> {
  const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__53), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
