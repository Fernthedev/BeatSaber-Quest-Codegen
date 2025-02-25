// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.PlatformOnlineServicesAvailabilityModel
#include "OnlineServices/PlatformOnlineServicesAvailabilityModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.PlatformOnlineServicesAvailabilityModel/OnlineServices.<GetPlatformServicesAvailabilityInfo>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.PlatformServicesAvailabilityInfo> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$t__builder;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1;
    // Creating value type constructor for type: $GetPlatformServicesAvailabilityInfo$d__4
    constexpr $GetPlatformServicesAvailabilityInfo$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$t__builder_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.PlatformServicesAvailabilityInfo> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::PlatformServicesAvailabilityInfo*>& dyn_$$t__builder();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1032178
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x10323B8
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.PlatformOnlineServicesAvailabilityModel/OnlineServices.<GetPlatformServicesAvailabilityInfo>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4, "OnlineServices", "PlatformOnlineServicesAvailabilityModel/<GetPlatformServicesAvailabilityInfo>d__4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4::*)()>(&OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
