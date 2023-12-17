#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/GameLift/zzzz__GameLiftPlayerSessionProvider_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GameLiftPlayerSessionProvider_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAuthFeatureFlag_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::*)()>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x16e8;
  constexpr static std::size_t addrs = 0xe5ef24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe60668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___4__this(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(value));
}
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*> BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_authenticationTokenProvider(::GlobalNamespace::IAuthenticationTokenProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAuthenticationTokenProvider*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IAuthenticationTokenProvider*>(value));
}
constexpr ::GlobalNamespace::IAuthenticationTokenProvider* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_authenticationTokenProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAuthenticationTokenProvider*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAuthenticationTokenProvider*> BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_authenticationTokenProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAuthenticationTokenProvider*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_userId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_userId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_beatmapLevelSelectionMask()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_beatmapLevelSelectionMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_gameplayServerConfiguration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_gameplayServerConfiguration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_secret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_secret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set_code(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_code()  {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__stopwatch_5__2(::System::Diagnostics::Stopwatch*  value)  {
::cordl_internals::setInstanceField<::System::Diagnostics::Stopwatch*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Diagnostics::Stopwatch*>(value));
}
constexpr ::System::Diagnostics::Stopwatch* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__stopwatch_5__2()  {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Stopwatch*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__stopwatch_5__2() const {
return ::cordl_internals::getInstanceField<::System::Diagnostics::Stopwatch*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__ticketId_5__3(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__ticketId_5__3()  {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__ticketId_5__3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__placementId_5__4(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__placementId_5__4()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__placementId_5__4() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__xPlatformAccessToken_5__5(::GlobalNamespace::XPlatformAccessTokenData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::XPlatformAccessTokenData*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::XPlatformAccessTokenData*>(value));
}
constexpr ::GlobalNamespace::XPlatformAccessTokenData* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__xPlatformAccessToken_5__5()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::XPlatformAccessTokenData*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__xPlatformAccessToken_5__5() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::XPlatformAccessTokenData*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__graphAPIAccessToken_5__6(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__graphAPIAccessToken_5__6()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__graphAPIAccessToken_5__6() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__userPlatform_5__7(::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>>(value));
}
constexpr ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__userPlatform_5__7()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__userPlatform_5__7() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__singleUsePlatformAuthToken_5__8(::System::Nullable_1<::GlobalNamespace::AuthenticationToken>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::GlobalNamespace::AuthenticationToken>, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Nullable_1<::GlobalNamespace::AuthenticationToken>>(value));
}
constexpr ::System::Nullable_1<::GlobalNamespace::AuthenticationToken>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__singleUsePlatformAuthToken_5__8()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::AuthenticationToken>, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__singleUsePlatformAuthToken_5__8() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::GlobalNamespace::AuthenticationToken>, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__numAttempts_5__9(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xe8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__numAttempts_5__9()  {
return ::cordl_internals::getInstanceField<int32_t, 0xe8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__numAttempts_5__9() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0xf0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0xf0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0xf0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set__getMatchmakingInstanceResponse_5__10(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>(value));
}
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__getMatchmakingInstanceResponse_5__10()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get__getMatchmakingInstanceResponse_5__10() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>, 0x130>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>, 0x130>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>, 0x130>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___7__wrap10(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___7__wrap10()  {
return ::cordl_internals::getInstanceField<int32_t, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___7__wrap10() const {
return ::cordl_internals::getInstanceField<int32_t, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x140>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__3()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x140>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__3() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x140>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__set___u__4(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__4()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__get___u__4() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "authenticationTokenProvider", ty: "::GlobalNamespace::IAuthenticationTokenProvider*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "beatmapLevelSelectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_ticketId_5__3", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_placementId_5__4", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_xPlatformAccessToken_5__5", ty: "::GlobalNamespace::XPlatformAccessTokenData*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_graphAPIAccessToken_5__6", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_userPlatform_5__7", ty: "::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_singleUsePlatformAuthToken_5__8", ty: "::System::Nullable_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numAttempts_5__9", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_getMatchmakingInstanceResponse_5__10", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap10", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>  __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  __4__this, ::GlobalNamespace::IAuthenticationTokenProvider*  authenticationTokenProvider, ::System::Threading::CancellationToken  cancellationToken, ::StringW  userId, ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration, ::StringW  secret, ::StringW  code, ::System::Diagnostics::Stopwatch*  _stopwatch_5__2, ::StringW  _ticketId_5__3, ::StringW  _placementId_5__4, ::GlobalNamespace::XPlatformAccessTokenData*  _xPlatformAccessToken_5__5, ::StringW  _graphAPIAccessToken_5__6, ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>  _userPlatform_5__7, ::System::Nullable_1<::GlobalNamespace::AuthenticationToken>  _singleUsePlatformAuthToken_5__8, int32_t  _numAttempts_5__9, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  __u__1, ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  _getMatchmakingInstanceResponse_5__10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>  __u__2, int32_t  __7__wrap10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__4) noexcept : ::bs_hook::ValueTypeWrapper<0x150>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->authenticationTokenProvider = authenticationTokenProvider;
this->cancellationToken = cancellationToken;
this->userId = userId;
this->beatmapLevelSelectionMask = beatmapLevelSelectionMask;
this->gameplayServerConfiguration = gameplayServerConfiguration;
this->secret = secret;
this->code = code;
this->_stopwatch_5__2 = _stopwatch_5__2;
this->_ticketId_5__3 = _ticketId_5__3;
this->_placementId_5__4 = _placementId_5__4;
this->_xPlatformAccessToken_5__5 = _xPlatformAccessToken_5__5;
this->_graphAPIAccessToken_5__6 = _graphAPIAccessToken_5__6;
this->_userPlatform_5__7 = _userPlatform_5__7;
this->_singleUsePlatformAuthToken_5__8 = _singleUsePlatformAuthToken_5__8;
this->_numAttempts_5__9 = _numAttempts_5__9;
this->__u__1 = __u__1;
this->_getMatchmakingInstanceResponse_5__10 = _getMatchmakingInstanceResponse_5__10;
this->__u__2 = __u__2;
this->__7__wrap10 = __7__wrap10;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
}
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::*)()>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xe606c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe60a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__set___4__this(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(value));
}
constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*> BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::*)()>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe60a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c._GetAverageLatencies_b__16_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe60aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get(),
                            "<GetAverageLatencies>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c._GetAverageLatencies_b__16_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_1)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe60ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get(),
                            "<GetAverageLatencies>b__16_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c._GetAverageLatencies_b__16_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>)>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe60b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get(),
                            "<GetAverageLatencies>b__16_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>>::get()}
                        )));
    return ___internal_method;
  }
};
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::setStaticF___9(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*  value)  {
::cordl_internals::setStaticField<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get>(std::forward<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>(value));
}
inline ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get>();
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::setStaticF___9__16_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,bool>*, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,bool>* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,bool>*, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get>();
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::setStaticF___9__16_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,::StringW>*, "<>9__16_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,::StringW>* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::getStaticF___9__16_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,::StringW>*, "<>9__16_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get>();
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::setStaticF___9__16_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,int64_t>*, "<>9__16_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,int64_t>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,int64_t>* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::getStaticF___9__16_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,int64_t>*, "<>9__16_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get>();
}
inline ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c* BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>());
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>  kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get(),
                            "<GetAverageLatencies>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, kvp);
}
inline ::StringW BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_1(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>  kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get(),
                            "<GetAverageLatencies>b__16_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, kvp);
}
inline int64_t BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c::_GetAverageLatencies_b__16_2(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>  kvp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*>::get(),
                            "<GetAverageLatencies>b__16_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, kvp);
}
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::*)()>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xe60b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe60e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__set_awsRegion(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get_awsRegion()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get_awsRegion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> const& BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "awsRegion", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>  __t__builder, ::StringW  awsRegion, ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->awsRegion = awsRegion;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::INetworkConfig*, ::GlobalNamespace::XPlatformAuthFeatureFlag*)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xe5e1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe5e360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetGameLiftPlayerSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xe5e4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "GetGameLiftPlayerSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingAllAwsGameLiftRegions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe5e420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "PingAllAwsGameLiftRegions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetAverageLatencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>* (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xe5e60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "GetAverageLatencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.PingRegionAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,int64_t>>* (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xe5e858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "PingRegionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetAwsGameLiftRegionEndpoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe5e948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "GetAwsGameLiftRegionEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider.GetXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::System::Threading::CancellationToken, bool)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xe5e9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "GetXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider._PingAllAwsGameLiftRegions_b__15_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,int64_t>>* (::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__15_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe5ef20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "<PingAllAwsGameLiftRegions>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider"
constexpr  BGNet::Core::GameLift::GameLiftPlayerSessionProvider::operator ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*() noexcept {
return static_cast<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr  BGNet::Core::GameLift::GameLiftPlayerSessionProvider::operator ::GlobalNamespace::IPollable*() noexcept {
return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::setStaticF__awsGameLiftRegions(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_awsGameLiftRegions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::getStaticF__awsGameLiftRegions()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_awsGameLiftRegions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get>();
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__networkConfig(::GlobalNamespace::INetworkConfig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this, std::forward<::GlobalNamespace::INetworkConfig*>(value));
}
constexpr ::GlobalNamespace::INetworkConfig* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__networkConfig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__graphAPIClient(::GlobalNamespace::GraphAPIClient*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GraphAPIClient*, 0x18>(this, std::forward<::GlobalNamespace::GraphAPIClient*>(value));
}
constexpr ::GlobalNamespace::GraphAPIClient* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__graphAPIClient()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GraphAPIClient*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GraphAPIClient*> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__graphAPIClient() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GraphAPIClient*, 0x18>(this);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__xPlatformAuthFeatureFlag(::GlobalNamespace::XPlatformAuthFeatureFlag*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::XPlatformAuthFeatureFlag*, 0x20>(this, std::forward<::GlobalNamespace::XPlatformAuthFeatureFlag*>(value));
}
constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__xPlatformAuthFeatureFlag()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::XPlatformAuthFeatureFlag*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAuthFeatureFlag*> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__xPlatformAuthFeatureFlag() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::XPlatformAuthFeatureFlag*, 0x20>(this);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__pingAverages(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*, 0x28>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__pingAverages()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*> BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__pingAverages() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*, 0x28>(this);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__pingCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__pingCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__pingCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__set__lastPingTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this, std::forward<int64_t>(value));
}
constexpr int64_t& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__lastPingTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this);
}
constexpr int64_t const& BGNet::Core::GameLift::GameLiftPlayerSessionProvider::__get__lastPingTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this);
}
inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::New_ctor(::GlobalNamespace::INetworkConfig*  networkConfig, ::GlobalNamespace::XPlatformAuthFeatureFlag*  xPlatformAuthFeatureFlag)  {
return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>(networkConfig, xPlatformAuthFeatureFlag));
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_ctor(::GlobalNamespace::INetworkConfig*  networkConfig, ::GlobalNamespace::XPlatformAuthFeatureFlag*  xPlatformAuthFeatureFlag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, networkConfig, xPlatformAuthFeatureFlag);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo(::GlobalNamespace::IAuthenticationTokenProvider*  authenticationTokenProvider, ::StringW  userId, ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration, ::StringW  secret, ::StringW  code, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "GetGameLiftPlayerSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>*, false>(*this, ___internal_method, authenticationTokenProvider, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, secret, code, cancellationToken);
}
inline void BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "PingAllAwsGameLiftRegions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "GetAverageLatencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,int64_t>>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync(::StringW  awsRegion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "PingRegionAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,int64_t>>*, false>(*this, ___internal_method, awsRegion);
}
inline ::StringW BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint(::StringW  awsRegion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "GetAwsGameLiftRegionEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, awsRegion);
}
/// @param skipCache: bool (default: false)
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetXPlatformAccessToken(::GlobalNamespace::IAuthenticationTokenProvider*  authenticationTokenProvider, ::System::Threading::CancellationToken  cancellationToken, bool  skipCache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "GetXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAuthenticationTokenProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*, false>(*this, ___internal_method, authenticationTokenProvider, cancellationToken, skipCache);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,int64_t>>* BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_PingAllAwsGameLiftRegions_b__15_0(::StringW  region)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*>::get(),
                            "<PingAllAwsGameLiftRegions>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,int64_t>>*, false>(*this, ___internal_method, region);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
