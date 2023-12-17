#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLiftPlayerSessionProvider)
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace BGNet::Core::GameLift {
class __GameLiftPlayerSessionProvider____c;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class RollingAverage;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;
}
namespace GlobalNamespace {
class GraphAPIClient;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;
}
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace GlobalNamespace {
class IPollable;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___PingRegionAsync_d__17;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
class GameLiftPlayerSessionProvider;
}
namespace BGNet::Core::GameLift {
class __GameLiftPlayerSessionProvider____c;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;
}
namespace BGNet::Core::GameLift {
struct __GameLiftPlayerSessionProvider___PingRegionAsync_d__17;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider);
MARK_REF_PTR_T(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c);
MARK_VAL_T(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14);
MARK_VAL_T(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15);
MARK_VAL_T(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17);
// Type: ::<GetGameLiftPlayerSessionInfo>d__14
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13005))
// CS Name: ::GameLiftPlayerSessionProvider::<GetGameLiftPlayerSessionInfo>d__14
struct CORDL_TYPE __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14 : public ::bs_hook::ValueTypeWrapper<0x150> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x150};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  __4__this;

/// @brief Field authenticationTokenProvider offset 0x28
 __declspec(property(get=__get_authenticationTokenProvider, put=__set_authenticationTokenProvider)) ::GlobalNamespace::IAuthenticationTokenProvider*  authenticationTokenProvider;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field userId offset 0x38
 __declspec(property(get=__get_userId, put=__set_userId)) ::StringW  userId;

/// @brief Field beatmapLevelSelectionMask offset 0x40
 __declspec(property(get=__get_beatmapLevelSelectionMask, put=__set_beatmapLevelSelectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask;

/// @brief Field gameplayServerConfiguration offset 0x68
 __declspec(property(get=__get_gameplayServerConfiguration, put=__set_gameplayServerConfiguration)) ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration;

/// @brief Field secret offset 0x80
 __declspec(property(get=__get_secret, put=__set_secret)) ::StringW  secret;

/// @brief Field code offset 0x88
 __declspec(property(get=__get_code, put=__set_code)) ::StringW  code;

/// @brief Field <stopwatch>5__2 offset 0x90
 __declspec(property(get=__get__stopwatch_5__2, put=__set__stopwatch_5__2)) ::System::Diagnostics::Stopwatch*  _stopwatch_5__2;

/// @brief Field <ticketId>5__3 offset 0x98
 __declspec(property(get=__get__ticketId_5__3, put=__set__ticketId_5__3)) ::StringW  _ticketId_5__3;

/// @brief Field <placementId>5__4 offset 0xa0
 __declspec(property(get=__get__placementId_5__4, put=__set__placementId_5__4)) ::StringW  _placementId_5__4;

/// @brief Field <xPlatformAccessToken>5__5 offset 0xa8
 __declspec(property(get=__get__xPlatformAccessToken_5__5, put=__set__xPlatformAccessToken_5__5)) ::GlobalNamespace::XPlatformAccessTokenData*  _xPlatformAccessToken_5__5;

/// @brief Field <graphAPIAccessToken>5__6 offset 0xb0
 __declspec(property(get=__get__graphAPIAccessToken_5__6, put=__set__graphAPIAccessToken_5__6)) ::StringW  _graphAPIAccessToken_5__6;

/// @brief Field <userPlatform>5__7 offset 0xb8
 __declspec(property(get=__get__userPlatform_5__7, put=__set__userPlatform_5__7)) ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>  _userPlatform_5__7;

/// @brief Field <singleUsePlatformAuthToken>5__8 offset 0xc0
 __declspec(property(get=__get__singleUsePlatformAuthToken_5__8, put=__set__singleUsePlatformAuthToken_5__8)) ::System::Nullable_1<::GlobalNamespace::AuthenticationToken>  _singleUsePlatformAuthToken_5__8;

/// @brief Field <numAttempts>5__9 offset 0xe8
 __declspec(property(get=__get__numAttempts_5__9, put=__set__numAttempts_5__9)) int32_t  _numAttempts_5__9;

/// @brief Field <>u__1 offset 0xf0
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  __u__1;

/// @brief Field <getMatchmakingInstanceResponse>5__10 offset 0xf8
 __declspec(property(get=__get__getMatchmakingInstanceResponse_5__10, put=__set__getMatchmakingInstanceResponse_5__10)) ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  _getMatchmakingInstanceResponse_5__10;

/// @brief Field <>u__2 offset 0x130
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>  __u__2;

/// @brief Field <>7__wrap10 offset 0x138
 __declspec(property(get=__get___7__wrap10, put=__set___7__wrap10)) int32_t  __7__wrap10;

/// @brief Field <>u__3 offset 0x140
 __declspec(property(get=__get___u__3, put=__set___u__3)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __u__3;

/// @brief Field <>u__4 offset 0x148
 __declspec(property(get=__get___u__4, put=__set___u__4)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__4;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> const& __get___t__builder() const;

constexpr void __set___4__this(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  value) ;

constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*> __get___4__this() const;

constexpr void __set_authenticationTokenProvider(::GlobalNamespace::IAuthenticationTokenProvider*  value) ;

constexpr ::GlobalNamespace::IAuthenticationTokenProvider* __get_authenticationTokenProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAuthenticationTokenProvider*> __get_authenticationTokenProvider() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_userId(::StringW  value) ;

constexpr ::StringW& __get_userId() ;

constexpr ::StringW const& __get_userId() const;

constexpr void __set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_beatmapLevelSelectionMask() ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_beatmapLevelSelectionMask() const;

constexpr void __set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration  value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_gameplayServerConfiguration() ;

constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_gameplayServerConfiguration() const;

constexpr void __set_secret(::StringW  value) ;

constexpr ::StringW& __get_secret() ;

constexpr ::StringW const& __get_secret() const;

constexpr void __set_code(::StringW  value) ;

constexpr ::StringW& __get_code() ;

constexpr ::StringW const& __get_code() const;

constexpr void __set__stopwatch_5__2(::System::Diagnostics::Stopwatch*  value) ;

constexpr ::System::Diagnostics::Stopwatch* __get__stopwatch_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> __get__stopwatch_5__2() const;

constexpr void __set__ticketId_5__3(::StringW  value) ;

constexpr ::StringW& __get__ticketId_5__3() ;

constexpr ::StringW const& __get__ticketId_5__3() const;

constexpr void __set__placementId_5__4(::StringW  value) ;

constexpr ::StringW& __get__placementId_5__4() ;

constexpr ::StringW const& __get__placementId_5__4() const;

constexpr void __set__xPlatformAccessToken_5__5(::GlobalNamespace::XPlatformAccessTokenData*  value) ;

constexpr ::GlobalNamespace::XPlatformAccessTokenData* __get__xPlatformAccessToken_5__5() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> __get__xPlatformAccessToken_5__5() const;

constexpr void __set__graphAPIAccessToken_5__6(::StringW  value) ;

constexpr ::StringW& __get__graphAPIAccessToken_5__6() ;

constexpr ::StringW const& __get__graphAPIAccessToken_5__6() const;

constexpr void __set__userPlatform_5__7(::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>  value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>& __get__userPlatform_5__7() ;

constexpr ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform> const& __get__userPlatform_5__7() const;

constexpr void __set__singleUsePlatformAuthToken_5__8(::System::Nullable_1<::GlobalNamespace::AuthenticationToken>  value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::AuthenticationToken>& __get__singleUsePlatformAuthToken_5__8() ;

constexpr ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> const& __get__singleUsePlatformAuthToken_5__8() const;

constexpr void __set__numAttempts_5__9(int32_t  value) ;

constexpr int32_t& __get__numAttempts_5__9() ;

constexpr int32_t const& __get__numAttempts_5__9() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> const& __get___u__1() const;

constexpr void __set__getMatchmakingInstanceResponse_5__10(::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  value) ;

constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse& __get__getMatchmakingInstanceResponse_5__10() ;

constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse const& __get__getMatchmakingInstanceResponse_5__10() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> const& __get___u__2() const;

constexpr void __set___7__wrap10(int32_t  value) ;

constexpr int32_t& __get___7__wrap10() ;

constexpr int32_t const& __get___7__wrap10() const;

constexpr void __set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>& __get___u__3() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> const& __get___u__3() const;

constexpr void __set___u__4(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__4() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__4() const;

/// @brief Method MoveNext addr 0xe5ef24 size 0x16e8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe60668 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: None }, CppParam { name: "authenticationTokenProvider", ty: "::GlobalNamespace::IAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelSelectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "gameplayServerConfiguration", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: None }, CppParam { name: "_ticketId_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_placementId_5__4", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_xPlatformAccessToken_5__5", ty: "::GlobalNamespace::XPlatformAccessTokenData*", modifiers: "", def_value: None }, CppParam { name: "_graphAPIAccessToken_5__6", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_userPlatform_5__7", ty: "::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>", modifiers: "", def_value: None }, CppParam { name: "_singleUsePlatformAuthToken_5__8", ty: "::System::Nullable_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__9", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "_getMatchmakingInstanceResponse_5__10", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceResponse", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap10", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>  __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  __4__this, ::GlobalNamespace::IAuthenticationTokenProvider*  authenticationTokenProvider, ::System::Threading::CancellationToken  cancellationToken, ::StringW  userId, ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration, ::StringW  secret, ::StringW  code, ::System::Diagnostics::Stopwatch*  _stopwatch_5__2, ::StringW  _ticketId_5__3, ::StringW  _placementId_5__4, ::GlobalNamespace::XPlatformAccessTokenData*  _xPlatformAccessToken_5__5, ::StringW  _graphAPIAccessToken_5__6, ::System::Nullable_1<::GlobalNamespace::__AuthenticationToken__Platform>  _userPlatform_5__7, ::System::Nullable_1<::GlobalNamespace::AuthenticationToken>  _singleUsePlatformAuthToken_5__8, int32_t  _numAttempts_5__9, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  __u__1, ::BGNet::Core::GameLift::GetMultiplayerInstanceResponse  _getMatchmakingInstanceResponse_5__10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>  __u__2, int32_t  __7__wrap10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__4) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x150>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, 0x150>, "Size mismatch!");

} // namespace end def BGNet::Core::GameLift
// Type: ::<PingAllAwsGameLiftRegions>d__15
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13006))
// CS Name: ::GameLiftPlayerSessionProvider::<PingAllAwsGameLiftRegions>d__15
struct CORDL_TYPE __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  value) ;

constexpr ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>> const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe606c0 size 0x368 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe60a28 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>", modifiers: "", def_value: None }]
constexpr __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW,int64_t>,::Array<::System::ValueTuple_2<::StringW,int64_t>>*>>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, 0x38>, "Size mismatch!");

} // namespace end def BGNet::Core::GameLift
// Type: ::<>c
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13007))
// CS Name: ::GameLiftPlayerSessionProvider::<>c*
class CORDL_TYPE __GameLiftPlayerSessionProvider____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*  value) ;

static inline ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c* getStaticF___9() ;

static inline void setStaticF___9__16_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,bool>*  value) ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,bool>* getStaticF___9__16_0() ;

static inline void setStaticF___9__16_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,::StringW>*  value) ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,::StringW>* getStaticF___9__16_1() ;

static inline void setStaticF___9__16_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,int64_t>*  value) ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>,int64_t>* getStaticF___9__16_2() ;

static inline ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c* New_ctor() ;

/// @brief Method .ctor addr 0xe60a98 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetAverageLatencies>b__16_0 addr 0xe60aa0 size 0x48 virtual false final false
inline bool _GetAverageLatencies_b__16_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>  kvp) ;

/// @brief Method <GetAverageLatencies>b__16_1 addr 0xe60ae8 size 0x3c virtual false final false
inline ::StringW _GetAverageLatencies_b__16_1(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>  kvp) ;

/// @brief Method <GetAverageLatencies>b__16_2 addr 0xe60b24 size 0x5c virtual false final false
inline int64_t _GetAverageLatencies_b__16_2(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::RollingAverage*>  kvp) ;

// Ctor Parameters [CppParam { name: "", ty: "__GameLiftPlayerSessionProvider____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GameLiftPlayerSessionProvider____c(__GameLiftPlayerSessionProvider____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GameLiftPlayerSessionProvider____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GameLiftPlayerSessionProvider____c(__GameLiftPlayerSessionProvider____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GameLiftPlayerSessionProvider____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__16_0

// Static field <>9__16_1

// Static field <>9__16_2


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c, 0x10>, "Size mismatch!");

} // namespace end def BGNet::Core::GameLift
// Type: ::<PingRegionAsync>d__17
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13008))
// CS Name: ::GameLiftPlayerSessionProvider::<PingRegionAsync>d__17
struct CORDL_TYPE __GameLiftPlayerSessionProvider___PingRegionAsync_d__17 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>  __t__builder;

/// @brief Field awsRegion offset 0x20
 __declspec(property(get=__get_awsRegion, put=__set_awsRegion)) ::StringW  awsRegion;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>> const& __get___t__builder() const;

constexpr void __set_awsRegion(::StringW  value) ;

constexpr ::StringW& __get_awsRegion() ;

constexpr ::StringW const& __get_awsRegion() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t> const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe60b80 size 0x2ec virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe60e6c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>", modifiers: "", def_value: None }, CppParam { name: "awsRegion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>", modifiers: "", def_value: None }]
constexpr __GameLiftPlayerSessionProvider___PingRegionAsync_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::StringW,int64_t>>  __t__builder, ::StringW  awsRegion, ::System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GameLiftPlayerSessionProvider___PingRegionAsync_d__17(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GameLiftPlayerSessionProvider___PingRegionAsync_d__17()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, 0x30>, "Size mismatch!");

} // namespace end def BGNet::Core::GameLift
// Type: BGNet.Core.GameLift::GameLiftPlayerSessionProvider
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13009))
// CS Name: ::BGNet.Core.GameLift::GameLiftPlayerSessionProvider*
class CORDL_TYPE GameLiftPlayerSessionProvider : public ::System::Object {
public:
// Declarations
using _PingRegionAsync_d__17 = ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17;

using __c = ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c;

using _PingAllAwsGameLiftRegions_d__15 = ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15;

using _GetGameLiftPlayerSessionInfo_d__14 = ::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field kMatchmakingTimeoutMs offset 0x0
static constexpr int32_t  kMatchmakingTimeoutMs{static_cast<int32_t>(0x1d4c0)};

/// @brief Field kPingFrequencyMs offset 0x0
static constexpr int32_t  kPingFrequencyMs{static_cast<int32_t>(0xbb8)};

/// @brief Field kMaxPingCount offset 0x0
static constexpr int32_t  kMaxPingCount{static_cast<int32_t>(0xa)};

/// @brief Field kGetMatchmakingInstancePath offset 0x0
static constexpr ::ConstString  kGetMatchmakingInstancePath{u"beat_saber_get_multiplayer_instance"};

/// @brief Field kCancelMatchmakingTicketPath offset 0x0
static constexpr ::ConstString  kCancelMatchmakingTicketPath{u"beat_saber_multiplayer_cancel_matchmaking_ticket"};

/// @brief Field _networkConfig offset 0x10
 __declspec(property(get=__get__networkConfig, put=__set__networkConfig)) ::GlobalNamespace::INetworkConfig*  _networkConfig;

/// @brief Field _graphAPIClient offset 0x18
 __declspec(property(get=__get__graphAPIClient, put=__set__graphAPIClient)) ::GlobalNamespace::GraphAPIClient*  _graphAPIClient;

/// @brief Field _xPlatformAuthFeatureFlag offset 0x20
 __declspec(property(get=__get__xPlatformAuthFeatureFlag, put=__set__xPlatformAuthFeatureFlag)) ::GlobalNamespace::XPlatformAuthFeatureFlag*  _xPlatformAuthFeatureFlag;

/// @brief Field _pingAverages offset 0x28
 __declspec(property(get=__get__pingAverages, put=__set__pingAverages)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*  _pingAverages;

/// @brief Field _pingCount offset 0x30
 __declspec(property(get=__get__pingCount, put=__set__pingCount)) int32_t  _pingCount;

/// @brief Field _lastPingTime offset 0x38
 __declspec(property(get=__get__lastPingTime, put=__set__lastPingTime)) int64_t  _lastPingTime;

/// @brief Convert operator to "::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider"
constexpr operator  ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr operator  ::GlobalNamespace::IPollable*() noexcept;

static inline void setStaticF__awsGameLiftRegions(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF__awsGameLiftRegions() ;

constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig*  value) ;

constexpr ::GlobalNamespace::INetworkConfig* __get__networkConfig() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> __get__networkConfig() const;

constexpr void __set__graphAPIClient(::GlobalNamespace::GraphAPIClient*  value) ;

constexpr ::GlobalNamespace::GraphAPIClient* __get__graphAPIClient() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GraphAPIClient*> __get__graphAPIClient() const;

constexpr void __set__xPlatformAuthFeatureFlag(::GlobalNamespace::XPlatformAuthFeatureFlag*  value) ;

constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag* __get__xPlatformAuthFeatureFlag() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAuthFeatureFlag*> __get__xPlatformAuthFeatureFlag() const;

constexpr void __set__pingAverages(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>* __get__pingAverages() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::RollingAverage*>*> __get__pingAverages() const;

constexpr void __set__pingCount(int32_t  value) ;

constexpr int32_t& __get__pingCount() ;

constexpr int32_t const& __get__pingCount() const;

constexpr void __set__lastPingTime(int64_t  value) ;

constexpr int64_t& __get__lastPingTime() ;

constexpr int64_t const& __get__lastPingTime() const;

static inline ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* New_ctor(::GlobalNamespace::INetworkConfig*  networkConfig, ::GlobalNamespace::XPlatformAuthFeatureFlag*  xPlatformAuthFeatureFlag) ;

/// @brief Method .ctor addr 0xe5e1bc size 0x1a4 virtual false final false
inline void _ctor(::GlobalNamespace::INetworkConfig*  networkConfig, ::GlobalNamespace::XPlatformAuthFeatureFlag*  xPlatformAuthFeatureFlag) ;

/// @brief Method PollUpdate addr 0xe5e360 size 0xc0 virtual true final true
inline void PollUpdate() ;

/// @brief Method GetGameLiftPlayerSessionInfo addr 0xe5e4b4 size 0x158 virtual true final true
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* GetGameLiftPlayerSessionInfo(::GlobalNamespace::IAuthenticationTokenProvider*  authenticationTokenProvider, ::StringW  userId, ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration, ::StringW  secret, ::StringW  code, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method PingAllAwsGameLiftRegions addr 0xe5e420 size 0x94 virtual false final false
inline void PingAllAwsGameLiftRegions() ;

/// @brief Method GetAverageLatencies addr 0xe5e60c size 0x24c virtual false final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>* GetAverageLatencies() ;

/// @brief Method PingRegionAsync addr 0xe5e858 size 0xf0 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,int64_t>>* PingRegionAsync(::StringW  awsRegion) ;

/// @brief Method GetAwsGameLiftRegionEndpoint addr 0xe5e948 size 0x6c virtual false final false
static inline ::StringW GetAwsGameLiftRegionEndpoint(::StringW  awsRegion) ;

/// @brief Method GetXPlatformAccessToken addr 0xe5e9b4 size 0x16c virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* GetXPlatformAccessToken(::GlobalNamespace::IAuthenticationTokenProvider*  authenticationTokenProvider, ::System::Threading::CancellationToken  cancellationToken, bool  skipCache) ;

/// @brief Method <PingAllAwsGameLiftRegions>b__15_0 addr 0xe5ef20 size 0x4 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW,int64_t>>* _PingAllAwsGameLiftRegions_b__15_0(::StringW  region) ;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLiftPlayerSessionProvider(GameLiftPlayerSessionProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftPlayerSessionProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLiftPlayerSessionProvider(GameLiftPlayerSessionProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameLiftPlayerSessionProvider()  = default;
public:


// Fields

// Static field _awsGameLiftRegions


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::GameLiftPlayerSessionProvider, 0x40>, "Size mismatch!");

} // namespace end def BGNet::Core::GameLift
NEED_NO_BOX(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider");
NEED_NO_BOX(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider____c*, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___GetGameLiftPlayerSessionInfo_d__14, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<GetGameLiftPlayerSessionInfo>d__14");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingAllAwsGameLiftRegions_d__15, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<PingAllAwsGameLiftRegions>d__15");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::__GameLiftPlayerSessionProvider___PingRegionAsync_d__17, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<PingRegionAsync>d__17");
