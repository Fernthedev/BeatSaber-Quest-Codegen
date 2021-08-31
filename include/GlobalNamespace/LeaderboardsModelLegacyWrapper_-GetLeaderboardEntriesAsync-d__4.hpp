// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardsModelLegacyWrapper
#include "GlobalNamespace/LeaderboardsModelLegacyWrapper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.GetLeaderboardEntriesResult
#include "OnlineServices/GetLeaderboardEntriesResult.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LeaderboardsModelLegacyWrapper/<GetLeaderboardEntriesAsync>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public LeaderboardsModelLegacyWrapper <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LeaderboardsModelLegacyWrapper* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardsModelLegacyWrapper*) == 0x8);
    // public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    // Size: 0x20
    // Offset: 0x30
    OnlineServices::GetLeaderboardFilterData leaderboardFilterData;
    // Field size check
    static_assert(sizeof(OnlineServices::GetLeaderboardFilterData) == 0x20);
    // public LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*) == 0x8);
    // public PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.GetLeaderboardEntriesResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult> $$u__1;
    // Creating value type constructor for type: $GetLeaderboardEntriesAsync$d__4
    constexpr $GetLeaderboardEntriesAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::LeaderboardsModelLegacyWrapper* $$4__this_ = {}, OnlineServices::GetLeaderboardFilterData leaderboardFilterData_ = {}, GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest_ = {}, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, leaderboardFilterData{leaderboardFilterData_}, asyncRequest{asyncRequest_}, completionHandler{completionHandler_}, $$u__1{$$u__1_} {}
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
    // Get instance field: public LeaderboardsModelLegacyWrapper <>4__this
    GlobalNamespace::LeaderboardsModelLegacyWrapper* _get_$$4__this();
    // Set instance field: public LeaderboardsModelLegacyWrapper <>4__this
    void _set_$$4__this(GlobalNamespace::LeaderboardsModelLegacyWrapper* value);
    // Get instance field: public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    OnlineServices::GetLeaderboardFilterData _get_leaderboardFilterData();
    // Set instance field: public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    void _set_leaderboardFilterData(OnlineServices::GetLeaderboardFilterData value);
    // Get instance field: public LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest
    GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* _get_asyncRequest();
    // Set instance field: public LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest
    void _set_asyncRequest(GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* value);
    // Get instance field: public PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler
    GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* _get_completionHandler();
    // Set instance field: public PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler
    void _set_completionHandler(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.GetLeaderboardEntriesResult> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.GetLeaderboardEntriesResult> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult> value);
    // private System.Void MoveNext()
    // Offset: 0x114953C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1149A0C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LeaderboardsModelLegacyWrapper/<GetLeaderboardEntriesAsync>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4, "", "LeaderboardsModelLegacyWrapper/<GetLeaderboardEntriesAsync>d__4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::*)()>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
