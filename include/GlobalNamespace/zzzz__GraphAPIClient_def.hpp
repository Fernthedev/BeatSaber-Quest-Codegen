#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphAPIClient)
namespace System {
class Uri;
}
namespace GlobalNamespace {
template<typename TRequest,typename TResponse>
struct __GraphAPIClient___Post_d__4_2;
}
namespace System::Net::Http {
class HttpClient;
}
namespace GlobalNamespace {
template<typename TResponse>
struct __GraphAPIClient___Post_d__5_1;
}
namespace System::Net::Http {
class HttpContent;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __GraphAPIClient__PostOptions;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class UriBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphAPIClient;
}
namespace GlobalNamespace {
template<typename TRequest,typename TResponse>
struct __GraphAPIClient___Post_d__4_2;
}
namespace GlobalNamespace {
template<typename TResponse>
struct __GraphAPIClient___Post_d__5_1;
}
namespace GlobalNamespace {
struct __GraphAPIClient__PostOptions;
}
namespace GlobalNamespace {
template<>
struct __GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TRequest,::il2cpp_utils::il2cpp_reference_type TResponse>
struct __GraphAPIClient___Post_d__4_2<TRequest,TResponse>;
}
namespace GlobalNamespace {
template<>
struct __GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResponse>
struct __GraphAPIClient___Post_d__5_1<TResponse>;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GraphAPIClient);
MARK_GEN_VAL_T(::GlobalNamespace::__GraphAPIClient___Post_d__4_2);
MARK_GEN_VAL_T(::GlobalNamespace::__GraphAPIClient___Post_d__5_1);
MARK_VAL_T(::GlobalNamespace::__GraphAPIClient__PostOptions);
// Type: ::PostOptions
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12769))
// CS Name: ::GraphAPIClient::PostOptions
struct CORDL_TYPE __GraphAPIClient__PostOptions : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field MaxRetries offset 0x0
 __declspec(property(get=__get_MaxRetries, put=__set_MaxRetries)) int32_t  MaxRetries;

/// @brief Field MinWaitTimeForRetryMs offset 0x4
 __declspec(property(get=__get_MinWaitTimeForRetryMs, put=__set_MinWaitTimeForRetryMs)) int32_t  MinWaitTimeForRetryMs;

/// @brief Field WithExponentialBackoff offset 0x8
 __declspec(property(get=__get_WithExponentialBackoff, put=__set_WithExponentialBackoff)) bool  WithExponentialBackoff;

constexpr void __set_MaxRetries(int32_t  value) ;

constexpr int32_t& __get_MaxRetries() ;

constexpr int32_t const& __get_MaxRetries() const;

constexpr void __set_MinWaitTimeForRetryMs(int32_t  value) ;

constexpr int32_t& __get_MinWaitTimeForRetryMs() ;

constexpr int32_t const& __get_MinWaitTimeForRetryMs() const;

constexpr void __set_WithExponentialBackoff(bool  value) ;

constexpr bool& __get_WithExponentialBackoff() ;

constexpr bool const& __get_WithExponentialBackoff() const;

// Ctor Parameters [CppParam { name: "MaxRetries", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MinWaitTimeForRetryMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "WithExponentialBackoff", ty: "bool", modifiers: "", def_value: None }]
constexpr __GraphAPIClient__PostOptions(int32_t  MaxRetries, int32_t  MinWaitTimeForRetryMs, bool  WithExponentialBackoff) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GraphAPIClient__PostOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GraphAPIClient__PostOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GraphAPIClient__PostOptions, 0xc>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Post>d__4`2
// Type: ::<Post>d__5`1
// Type: ::GraphAPIClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12772))
// CS Name: ::GraphAPIClient*
class CORDL_TYPE GraphAPIClient : public ::System::Object {
public:
// Declarations
template<typename TResponse>
using _Post_d__5_1 = ::GlobalNamespace::__GraphAPIClient___Post_d__5_1<TResponse>;

template<typename TRequest,typename TResponse>
using _Post_d__4_2 = ::GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>;

using PostOptions = ::GlobalNamespace::__GraphAPIClient__PostOptions;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _networkConfig offset 0x10
 __declspec(property(get=__get__networkConfig, put=__set__networkConfig)) ::GlobalNamespace::INetworkConfig*  _networkConfig;

/// @brief Field _client offset 0x18
 __declspec(property(get=__get__client, put=__set__client)) ::System::Net::Http::HttpClient*  _client;

constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig*  value) ;

constexpr ::GlobalNamespace::INetworkConfig* __get__networkConfig() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> __get__networkConfig() const;

constexpr void __set__client(::System::Net::Http::HttpClient*  value) ;

constexpr ::System::Net::Http::HttpClient* __get__client() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> __get__client() const;

static inline ::GlobalNamespace::GraphAPIClient* New_ctor(::GlobalNamespace::INetworkConfig*  networkConfig) ;

/// @brief Method .ctor addr 0xe3c254 size 0x7c virtual false final false
inline void _ctor(::GlobalNamespace::INetworkConfig*  networkConfig) ;

/// @brief Method PostLoggedOut addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TRequest,typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* PostLoggedOut(::StringW  path, TRequest  request, ::GlobalNamespace::__GraphAPIClient__PostOptions  postOptions, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Post addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TRequest,typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* Post(::StringW  path, ::StringW  accessToken, TRequest  request, ::GlobalNamespace::__GraphAPIClient__PostOptions  postOptions, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Post addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResponse>
inline ::System::Threading::Tasks::Task_1<TResponse>* Post(::System::Uri*  uri, ::StringW  accessToken, ::System::Net::Http::HttpContent*  httpContent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method CalculateDelayMsBeforeRetry addr 0xe3c2d0 size 0x98 virtual false final false
static inline int32_t CalculateDelayMsBeforeRetry(int32_t  numAttempts, ::GlobalNamespace::__GraphAPIClient__PostOptions  postOptions) ;

// Ctor Parameters [CppParam { name: "", ty: "GraphAPIClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphAPIClient(GraphAPIClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphAPIClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphAPIClient(GraphAPIClient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GraphAPIClient()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphAPIClient, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Post>d__4`2
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12770), inst: 92 })
// CS Name: ::GraphAPIClient::<Post>d__4`2<TRequest,TResponse>
struct CORDL_TYPE __GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper<0x110> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x110};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::GraphAPIClient*  __4__this;

/// @brief Field path offset 0x28
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

/// @brief Field request offset 0x30
 __declspec(property(get=__get_request, put=__set_request)) ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest  request;

/// @brief Field accessToken offset 0xc8
 __declspec(property(get=__get_accessToken, put=__set_accessToken)) ::StringW  accessToken;

/// @brief Field cancellationToken offset 0xd0
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field postOptions offset 0xd8
 __declspec(property(get=__get_postOptions, put=__set_postOptions)) ::GlobalNamespace::__GraphAPIClient__PostOptions  postOptions;

/// @brief Field <uriBuilder>5__2 offset 0xe8
 __declspec(property(get=__get__uriBuilder_5__2, put=__set__uriBuilder_5__2)) ::System::UriBuilder*  _uriBuilder_5__2;

/// @brief Field <httpContent>5__3 offset 0xf0
 __declspec(property(get=__get__httpContent_5__3, put=__set__httpContent_5__3)) ::System::Net::Http::HttpContent*  _httpContent_5__3;

/// @brief Field <numAttempts>5__4 offset 0xf8
 __declspec(property(get=__get__numAttempts_5__4, put=__set__numAttempts_5__4)) int32_t  _numAttempts_5__4;

/// @brief Field <>u__1 offset 0x100
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __u__1;

/// @brief Field <>u__2 offset 0x108
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::GraphAPIClient*  value) ;

constexpr ::GlobalNamespace::GraphAPIClient* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GraphAPIClient*> __get___4__this() const;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

constexpr void __set_request(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest  value) ;

constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest& __get_request() ;

constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest const& __get_request() const;

constexpr void __set_accessToken(::StringW  value) ;

constexpr ::StringW& __get_accessToken() ;

constexpr ::StringW const& __get_accessToken() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_postOptions(::GlobalNamespace::__GraphAPIClient__PostOptions  value) ;

constexpr ::GlobalNamespace::__GraphAPIClient__PostOptions& __get_postOptions() ;

constexpr ::GlobalNamespace::__GraphAPIClient__PostOptions const& __get_postOptions() const;

constexpr void __set__uriBuilder_5__2(::System::UriBuilder*  value) ;

constexpr ::System::UriBuilder* __get__uriBuilder_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::UriBuilder*> __get__uriBuilder_5__2() const;

constexpr void __set__httpContent_5__3(::System::Net::Http::HttpContent*  value) ;

constexpr ::System::Net::Http::HttpContent* __get__httpContent_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> __get__httpContent_5__3() const;

constexpr void __set__numAttempts_5__4(int32_t  value) ;

constexpr int32_t& __get__numAttempts_5__4() ;

constexpr int32_t const& __get__numAttempts_5__4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceRequest", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "postOptions", ty: "::GlobalNamespace::__GraphAPIClient__PostOptions", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: None }, CppParam { name: "_httpContent_5__3", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __GraphAPIClient___Post_d__4_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __t__builder, ::GlobalNamespace::GraphAPIClient*  __4__this, ::StringW  path, ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest  request, ::StringW  accessToken, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::__GraphAPIClient__PostOptions  postOptions, ::System::UriBuilder*  _uriBuilder_5__2, ::System::Net::Http::HttpContent*  _httpContent_5__3, int32_t  _numAttempts_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GraphAPIClient___Post_d__4_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x110>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GraphAPIClient___Post_d__4_2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Post>d__4`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TRequest,::il2cpp_utils::il2cpp_reference_type TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12770), inst: 81 })
// CS Name: ::GraphAPIClient::<Post>d__4`2<TRequest,TResponse>
struct CORDL_TYPE __GraphAPIClient___Post_d__4_2<TRequest,TResponse> : public ::bs_hook::ValueTypeWrapper<0x80> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::GraphAPIClient*  __4__this;

/// @brief Field path offset 0x28
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

/// @brief Field request offset 0x30
 __declspec(property(get=__get_request, put=__set_request)) TRequest  request;

/// @brief Field accessToken offset 0x38
 __declspec(property(get=__get_accessToken, put=__set_accessToken)) ::StringW  accessToken;

/// @brief Field cancellationToken offset 0x40
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field postOptions offset 0x48
 __declspec(property(get=__get_postOptions, put=__set_postOptions)) ::GlobalNamespace::__GraphAPIClient__PostOptions  postOptions;

/// @brief Field <uriBuilder>5__2 offset 0x58
 __declspec(property(get=__get__uriBuilder_5__2, put=__set__uriBuilder_5__2)) ::System::UriBuilder*  _uriBuilder_5__2;

/// @brief Field <httpContent>5__3 offset 0x60
 __declspec(property(get=__get__httpContent_5__3, put=__set__httpContent_5__3)) ::System::Net::Http::HttpContent*  _httpContent_5__3;

/// @brief Field <numAttempts>5__4 offset 0x68
 __declspec(property(get=__get__numAttempts_5__4, put=__set__numAttempts_5__4)) int32_t  _numAttempts_5__4;

/// @brief Field <>u__1 offset 0x70
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>  __u__1;

/// @brief Field <>u__2 offset 0x78
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::GraphAPIClient*  value) ;

constexpr ::GlobalNamespace::GraphAPIClient* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GraphAPIClient*> __get___4__this() const;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

constexpr void __set_request(TRequest  value) ;

constexpr TRequest& __get_request() ;

constexpr TRequest const& __get_request() const;

constexpr void __set_accessToken(::StringW  value) ;

constexpr ::StringW& __get_accessToken() ;

constexpr ::StringW const& __get_accessToken() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_postOptions(::GlobalNamespace::__GraphAPIClient__PostOptions  value) ;

constexpr ::GlobalNamespace::__GraphAPIClient__PostOptions& __get_postOptions() ;

constexpr ::GlobalNamespace::__GraphAPIClient__PostOptions const& __get_postOptions() const;

constexpr void __set__uriBuilder_5__2(::System::UriBuilder*  value) ;

constexpr ::System::UriBuilder* __get__uriBuilder_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::UriBuilder*> __get__uriBuilder_5__2() const;

constexpr void __set__httpContent_5__3(::System::Net::Http::HttpContent*  value) ;

constexpr ::System::Net::Http::HttpContent* __get__httpContent_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> __get__httpContent_5__3() const;

constexpr void __set__numAttempts_5__4(int32_t  value) ;

constexpr int32_t& __get__numAttempts_5__4() ;

constexpr int32_t const& __get__numAttempts_5__4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "postOptions", ty: "::GlobalNamespace::__GraphAPIClient__PostOptions", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: None }, CppParam { name: "_httpContent_5__3", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __GraphAPIClient___Post_d__4_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>  __t__builder, ::GlobalNamespace::GraphAPIClient*  __4__this, ::StringW  path, TRequest  request, ::StringW  accessToken, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::__GraphAPIClient__PostOptions  postOptions, ::System::UriBuilder*  _uriBuilder_5__2, ::System::Net::Http::HttpContent*  _httpContent_5__3, int32_t  _numAttempts_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GraphAPIClient___Post_d__4_2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x80>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GraphAPIClient___Post_d__4_2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Post>d__5`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12771))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12771), inst: 95 })
// CS Name: ::GraphAPIClient::<Post>d__5`1<TResponse>
struct CORDL_TYPE __GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __t__builder;

/// @brief Field uri offset 0x20
 __declspec(property(get=__get_uri, put=__set_uri)) ::System::Uri*  uri;

/// @brief Field accessToken offset 0x28
 __declspec(property(get=__get_accessToken, put=__set_accessToken)) ::StringW  accessToken;

/// @brief Field httpContent offset 0x30
 __declspec(property(get=__get_httpContent, put=__set_httpContent)) ::System::Net::Http::HttpContent*  httpContent;

/// @brief Field <>4__this offset 0x38
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::GraphAPIClient*  __4__this;

/// @brief Field cancellationToken offset 0x40
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <requestMessage>5__2 offset 0x48
 __declspec(property(get=__get__requestMessage_5__2, put=__set__requestMessage_5__2)) ::System::Net::Http::HttpRequestMessage*  _requestMessage_5__2;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__1;

/// @brief Field <>u__2 offset 0x58
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> const& __get___t__builder() const;

constexpr void __set_uri(::System::Uri*  value) ;

constexpr ::System::Uri* __get_uri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_uri() const;

constexpr void __set_accessToken(::StringW  value) ;

constexpr ::StringW& __get_accessToken() ;

constexpr ::StringW const& __get_accessToken() const;

constexpr void __set_httpContent(::System::Net::Http::HttpContent*  value) ;

constexpr ::System::Net::Http::HttpContent* __get_httpContent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> __get_httpContent() const;

constexpr void __set___4__this(::GlobalNamespace::GraphAPIClient*  value) ;

constexpr ::GlobalNamespace::GraphAPIClient* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GraphAPIClient*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__requestMessage_5__2(::System::Net::Http::HttpRequestMessage*  value) ;

constexpr ::System::Net::Http::HttpRequestMessage* __get__requestMessage_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpRequestMessage*> __get__requestMessage_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "httpContent", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_requestMessage_5__2", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr __GraphAPIClient___Post_d__5_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>  __t__builder, ::System::Uri*  uri, ::StringW  accessToken, ::System::Net::Http::HttpContent*  httpContent, ::GlobalNamespace::GraphAPIClient*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Http::HttpRequestMessage*  _requestMessage_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GraphAPIClient___Post_d__5_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GraphAPIClient___Post_d__5_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Post>d__5`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12771))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12771), inst: 2 })
// CS Name: ::GraphAPIClient::<Post>d__5`1<TResponse>
struct CORDL_TYPE __GraphAPIClient___Post_d__5_1<TResponse> : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>  __t__builder;

/// @brief Field uri offset 0x20
 __declspec(property(get=__get_uri, put=__set_uri)) ::System::Uri*  uri;

/// @brief Field accessToken offset 0x28
 __declspec(property(get=__get_accessToken, put=__set_accessToken)) ::StringW  accessToken;

/// @brief Field httpContent offset 0x30
 __declspec(property(get=__get_httpContent, put=__set_httpContent)) ::System::Net::Http::HttpContent*  httpContent;

/// @brief Field <>4__this offset 0x38
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::GraphAPIClient*  __4__this;

/// @brief Field cancellationToken offset 0x40
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <requestMessage>5__2 offset 0x48
 __declspec(property(get=__get__requestMessage_5__2, put=__set__requestMessage_5__2)) ::System::Net::Http::HttpRequestMessage*  _requestMessage_5__2;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__1;

/// @brief Field <>u__2 offset 0x58
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> const& __get___t__builder() const;

constexpr void __set_uri(::System::Uri*  value) ;

constexpr ::System::Uri* __get_uri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_uri() const;

constexpr void __set_accessToken(::StringW  value) ;

constexpr ::StringW& __get_accessToken() ;

constexpr ::StringW const& __get_accessToken() const;

constexpr void __set_httpContent(::System::Net::Http::HttpContent*  value) ;

constexpr ::System::Net::Http::HttpContent* __get_httpContent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> __get_httpContent() const;

constexpr void __set___4__this(::GlobalNamespace::GraphAPIClient*  value) ;

constexpr ::GlobalNamespace::GraphAPIClient* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GraphAPIClient*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__requestMessage_5__2(::System::Net::Http::HttpRequestMessage*  value) ;

constexpr ::System::Net::Http::HttpRequestMessage* __get__requestMessage_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpRequestMessage*> __get__requestMessage_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "httpContent", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_requestMessage_5__2", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr __GraphAPIClient___Post_d__5_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>  __t__builder, ::System::Uri*  uri, ::StringW  accessToken, ::System::Net::Http::HttpContent*  httpContent, ::GlobalNamespace::GraphAPIClient*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Http::HttpRequestMessage*  _requestMessage_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GraphAPIClient___Post_d__5_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GraphAPIClient___Post_d__5_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GraphAPIClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphAPIClient*, "", "GraphAPIClient");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__GraphAPIClient___Post_d__4_2, "", "GraphAPIClient/<Post>d__4`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__GraphAPIClient___Post_d__5_1, "", "GraphAPIClient/<Post>d__5`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GraphAPIClient__PostOptions, "", "GraphAPIClient/PostOptions");
