// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider
#include "BGNet/Core/GameLift/GameLiftPlayerSessionProvider.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<PingRegionAsync>d__18");
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<PingRegionAsync>d__18
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct GameLiftPlayerSessionProvider::$PingRegionAsync$d__18/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TupleElementNamesAttribute] Offset: 0x10C8798
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.String,System.Int64>> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>> $$t__builder;
    // public System.String awsRegion
    // Size: 0x8
    // Offset: 0x20
    ::StringW awsRegion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> $$u__1;
    public:
    // Creating value type constructor for type: $PingRegionAsync$d__18
    constexpr $PingRegionAsync$d__18(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>> $$t__builder_ = {}, ::StringW awsRegion_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, awsRegion{awsRegion_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`2<System.String,System.Int64>> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW, int64_t>>& dyn_$$t__builder();
    // Get instance field reference: public System.String awsRegion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_awsRegion();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1581BF0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1581E94
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<PingRegionAsync>d__18
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
