// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: AccessToken
  class AccessToken;
  // Forward declaring type: UserAuthenticationData
  class UserAuthenticationData;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<GetAccessTokenAsync>d__9
  // [CompilerGeneratedAttribute] Offset: E12B28
  struct HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatSaberAPI.DataTransferObjects.AccessToken> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatSaberAPI::DataTransferObjects::AccessToken*> $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Size: 0x8
    // Offset: 0x20
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.String <uri>5__2
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* $uri$5__2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__2;
    // Creating value type constructor for type: $GetAccessTokenAsync$d__9
    constexpr $GetAccessTokenAsync$d__9(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatSaberAPI::DataTransferObjects::AccessToken*> $$t__builder_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* $uri$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $uri$5__2{$uri$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE636C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE6374
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<GetAccessTokenAsync>d__9
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<GetAccessTokenAsync>d__9");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9::*)()>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9::SetStateMachine)> {
  const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$GetAccessTokenAsync$d__9), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
