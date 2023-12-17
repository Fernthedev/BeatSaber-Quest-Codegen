#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformAuthenticationTokenProvider)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;
}
namespace GlobalNamespace {
struct PlatformEnvironment;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformAuthenticationTokenProvider;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;
}
namespace GlobalNamespace {
struct __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformAuthenticationTokenProvider);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18);
MARK_VAL_T(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19);
// Type: ::<GetAuthenticationToken>d__16
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14968))
// CS Name: ::PlatformAuthenticationTokenProvider::<GetAuthenticationToken>d__16
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider*  value) ;

constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformAuthenticationTokenProvider*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x26381c0 size 0x3ac virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x263856c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: None }]
constexpr __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>  __t__builder, ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetXPlatformAccessToken>d__18
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14969))
// CS Name: ::PlatformAuthenticationTokenProvider::<GetXPlatformAccessToken>d__18
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  __t__builder;

/// @brief Field skipCache offset 0x20
 __declspec(property(get=__get_skipCache, put=__set_skipCache)) bool  skipCache;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> const& __get___t__builder() const;

constexpr void __set_skipCache(bool  value) ;

constexpr bool& __get_skipCache() ;

constexpr bool const& __get_skipCache() const;

constexpr void __set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider*  value) ;

constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformAuthenticationTokenProvider*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x26385c4 size 0x330 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x26388f4 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "skipCache", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }]
constexpr __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  __t__builder, bool  skipCache, ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__19
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14970))
// CS Name: ::PlatformAuthenticationTokenProvider::<RequestXPlatformAccessToken>d__19
struct CORDL_TYPE __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::PlatformAuthenticationTokenProvider*  value) ;

constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformAuthenticationTokenProvider*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x263894c size 0x324 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2638c70 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }]
constexpr __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  __t__builder, ::GlobalNamespace::PlatformAuthenticationTokenProvider*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PlatformAuthenticationTokenProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14971))
// CS Name: ::PlatformAuthenticationTokenProvider*
class CORDL_TYPE PlatformAuthenticationTokenProvider : public ::System::Object {
public:
// Declarations
using _RequestXPlatformAccessToken_d__19 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19;

using _GetXPlatformAccessToken_d__18 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18;

using _GetAuthenticationToken_d__16 = ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field kXPlatformTokenRetryDelayLengthSeconds offset 0x0
static constexpr int32_t  kXPlatformTokenRetryDelayLengthSeconds{static_cast<int32_t>(0x1e)};

/// @brief Field _platformUserModel offset 0x10
 __declspec(property(get=__get__platformUserModel, put=__set__platformUserModel)) ::GlobalNamespace::IPlatformUserModel*  _platformUserModel;

/// @brief Field _userId offset 0x18
 __declspec(property(get=__get__userId, put=__set__userId)) ::StringW  _userId;

/// @brief Field _userName offset 0x20
 __declspec(property(get=__get__userName, put=__set__userName)) ::StringW  _userName;

/// @brief Field _hashedUserId offset 0x28
 __declspec(property(get=__get__hashedUserId, put=__set__hashedUserId)) ::StringW  _hashedUserId;

/// @brief Field _platform offset 0x30
 __declspec(property(get=__get__platform, put=__set__platform)) ::GlobalNamespace::__AuthenticationToken__Platform  _platform;

/// @brief Field _cachedXPlatformAccessToken offset 0x38
 __declspec(property(get=__get__cachedXPlatformAccessToken, put=__set__cachedXPlatformAccessToken)) ::GlobalNamespace::XPlatformAccessTokenData*  _cachedXPlatformAccessToken;

/// @brief Field _xPlatformAccessTokenTask offset 0x40
 __declspec(property(get=__get__xPlatformAccessTokenTask, put=__set__xPlatformAccessTokenTask)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*  _xPlatformAccessTokenTask;

/// @brief Field _xPlatformTokenRetryDelayExpiration offset 0x48
 __declspec(property(get=__get__xPlatformTokenRetryDelayExpiration, put=__set__xPlatformTokenRetryDelayExpiration)) float_t  _xPlatformTokenRetryDelayExpiration;

 __declspec(property(get=get_hashedUserId)) ::StringW  hashedUserId;

 __declspec(property(get=get_userName)) ::StringW  userName;

 __declspec(property(get=get_platform)) ::GlobalNamespace::__AuthenticationToken__Platform  platform;

/// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr operator  ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept;

constexpr void __set__platformUserModel(::GlobalNamespace::IPlatformUserModel*  value) ;

constexpr ::GlobalNamespace::IPlatformUserModel* __get__platformUserModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> __get__platformUserModel() const;

constexpr void __set__userId(::StringW  value) ;

constexpr ::StringW& __get__userId() ;

constexpr ::StringW const& __get__userId() const;

constexpr void __set__userName(::StringW  value) ;

constexpr ::StringW& __get__userName() ;

constexpr ::StringW const& __get__userName() const;

constexpr void __set__hashedUserId(::StringW  value) ;

constexpr ::StringW& __get__hashedUserId() ;

constexpr ::StringW const& __get__hashedUserId() const;

constexpr void __set__platform(::GlobalNamespace::__AuthenticationToken__Platform  value) ;

constexpr ::GlobalNamespace::__AuthenticationToken__Platform& __get__platform() ;

constexpr ::GlobalNamespace::__AuthenticationToken__Platform const& __get__platform() const;

constexpr void __set__cachedXPlatformAccessToken(::GlobalNamespace::XPlatformAccessTokenData*  value) ;

constexpr ::GlobalNamespace::XPlatformAccessTokenData* __get__cachedXPlatformAccessToken() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> __get__cachedXPlatformAccessToken() const;

constexpr void __set__xPlatformAccessTokenTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* __get__xPlatformAccessTokenTask() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*> __get__xPlatformAccessTokenTask() const;

constexpr void __set__xPlatformTokenRetryDelayExpiration(float_t  value) ;

constexpr float_t& __get__xPlatformTokenRetryDelayExpiration() ;

constexpr float_t const& __get__xPlatformTokenRetryDelayExpiration() const;

/// @brief Method get_hashedUserId addr 0x2637d8c size 0x8 virtual true final true
inline ::StringW get_hashedUserId() ;

/// @brief Method get_userName addr 0x2637d94 size 0x8 virtual true final true
inline ::StringW get_userName() ;

/// @brief Method get_platform addr 0x2637d9c size 0x8 virtual true final true
inline ::GlobalNamespace::__AuthenticationToken__Platform get_platform() ;

static inline ::GlobalNamespace::PlatformAuthenticationTokenProvider* New_ctor(::GlobalNamespace::IPlatformUserModel*  platformUserModel, ::GlobalNamespace::UserInfo*  userInfo) ;

/// @brief Method .ctor addr 0x2637da4 size 0xc0 virtual false final false
inline void _ctor(::GlobalNamespace::IPlatformUserModel*  platformUserModel, ::GlobalNamespace::UserInfo*  userInfo) ;

/// @brief Method GetAuthenticationToken addr 0x2637e64 size 0xf8 virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GetAuthenticationToken() ;

/// @brief Method GetTokenPlatform addr 0x2637f5c size 0x60 virtual true final true
inline ::GlobalNamespace::__AuthenticationToken__Platform GetTokenPlatform(::GlobalNamespace::PlatformEnvironment  tokenPlatformEnvironment) ;

/// @brief Method GetXPlatformAccessToken addr 0x2637fbc size 0x108 virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* GetXPlatformAccessToken(::System::Threading::CancellationToken  cancellationToken, bool  skipCache) ;

/// @brief Method RequestXPlatformAccessToken addr 0x26380c4 size 0xfc virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* RequestXPlatformAccessToken(::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformAuthenticationTokenProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformAuthenticationTokenProvider(PlatformAuthenticationTokenProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlatformAuthenticationTokenProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformAuthenticationTokenProvider, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformAuthenticationTokenProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformAuthenticationTokenProvider*, "", "PlatformAuthenticationTokenProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16, "", "PlatformAuthenticationTokenProvider/<GetAuthenticationToken>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18, "", "PlatformAuthenticationTokenProvider/<GetXPlatformAccessToken>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19, "", "PlatformAuthenticationTokenProvider/<RequestXPlatformAccessToken>d__19");
