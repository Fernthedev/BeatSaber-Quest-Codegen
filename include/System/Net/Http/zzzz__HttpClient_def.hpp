#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpMessageInvoker_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClient)
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
struct __HttpClient___SendAsyncWorker_d__47;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Net::Http {
struct __HttpClient___GetStringAsync_d__53;
}
namespace System::Net::Http {
struct HttpCompletionOption;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
struct __HttpClient___GetStringAsync_d__53;
}
namespace System::Net::Http {
struct __HttpClient___SendAsyncWorker_d__47;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpClient);
MARK_VAL_T(::System::Net::Http::__HttpClient___GetStringAsync_d__53);
MARK_VAL_T(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47);
// Type: ::<SendAsyncWorker>d__47
namespace System::Net::Http {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14642))
// CS Name: ::HttpClient::<SendAsyncWorker>d__47
struct CORDL_TYPE __HttpClient___SendAsyncWorker_d__47 : public ::bs_hook::ValueTypeWrapper<0x70> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::Http::HttpClient*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field request offset 0x30
 __declspec(property(get=__get_request, put=__set_request)) ::System::Net::Http::HttpRequestMessage*  request;

/// @brief Field completionOption offset 0x38
 __declspec(property(get=__get_completionOption, put=__set_completionOption)) ::System::Net::Http::HttpCompletionOption  completionOption;

/// @brief Field <lcts>5__2 offset 0x40
 __declspec(property(get=__get__lcts_5__2, put=__set__lcts_5__2)) ::System::Threading::CancellationTokenSource*  _lcts_5__2;

/// @brief Field <response>5__3 offset 0x48
 __declspec(property(get=__get__response_5__3, put=__set__response_5__3)) ::System::Net::Http::HttpResponseMessage*  _response_5__3;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  __u__1;

/// @brief Field <>u__2 offset 0x60
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::Http::HttpClient*  value) ;

constexpr ::System::Net::Http::HttpClient* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_request(::System::Net::Http::HttpRequestMessage*  value) ;

constexpr ::System::Net::Http::HttpRequestMessage* __get_request() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpRequestMessage*> __get_request() const;

constexpr void __set_completionOption(::System::Net::Http::HttpCompletionOption  value) ;

constexpr ::System::Net::Http::HttpCompletionOption& __get_completionOption() ;

constexpr ::System::Net::Http::HttpCompletionOption const& __get_completionOption() const;

constexpr void __set__lcts_5__2(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__lcts_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__lcts_5__2() const;

constexpr void __set__response_5__3(::System::Net::Http::HttpResponseMessage*  value) ;

constexpr ::System::Net::Http::HttpResponseMessage* __get__response_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpResponseMessage*> __get__response_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__2() const;

/// @brief Method MoveNext addr 0x283198c size 0x620 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2831fac size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "completionOption", ty: "::System::Net::Http::HttpCompletionOption", modifiers: "", def_value: None }, CppParam { name: "_lcts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "_response_5__3", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __HttpClient___SendAsyncWorker_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>  __t__builder, ::System::Net::Http::HttpClient*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationTokenSource*  _lcts_5__2, ::System::Net::Http::HttpResponseMessage*  _response_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HttpClient___SendAsyncWorker_d__47(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x70>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HttpClient___SendAsyncWorker_d__47()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, 0x70>, "Size mismatch!");

} // namespace end def System::Net::Http
// Type: ::<GetStringAsync>d__53
namespace System::Net::Http {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14643))
// CS Name: ::HttpClient::<GetStringAsync>d__53
struct CORDL_TYPE __HttpClient___GetStringAsync_d__53 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::Http::HttpClient*  __4__this;

/// @brief Field requestUri offset 0x28
 __declspec(property(get=__get_requestUri, put=__set_requestUri)) ::System::Uri*  requestUri;

/// @brief Field <resp>5__2 offset 0x30
 __declspec(property(get=__get__resp_5__2, put=__set__resp_5__2)) ::System::Net::Http::HttpResponseMessage*  _resp_5__2;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  __u__1;

/// @brief Field <>u__2 offset 0x48
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> const& __get___t__builder() const;

constexpr void __set___4__this(::System::Net::Http::HttpClient*  value) ;

constexpr ::System::Net::Http::HttpClient* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> __get___4__this() const;

constexpr void __set_requestUri(::System::Uri*  value) ;

constexpr ::System::Uri* __get_requestUri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_requestUri() const;

constexpr void __set__resp_5__2(::System::Net::Http::HttpResponseMessage*  value) ;

constexpr ::System::Net::Http::HttpResponseMessage* __get__resp_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpResponseMessage*> __get__resp_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x2832004 size 0x4c4 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2832668 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "requestUri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "_resp_5__2", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None }]
constexpr __HttpClient___GetStringAsync_d__53(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::Net::Http::HttpClient*  __4__this, ::System::Uri*  requestUri, ::System::Net::Http::HttpResponseMessage*  _resp_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HttpClient___GetStringAsync_d__53(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HttpClient___GetStringAsync_d__53()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpClient___GetStringAsync_d__53, 0x58>, "Size mismatch!");

} // namespace end def System::Net::Http
// Type: System.Net.Http::HttpClient
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14651))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14644))
// CS Name: ::System.Net.Http::HttpClient*
class CORDL_TYPE HttpClient : public ::System::Net::Http::HttpMessageInvoker {
public:
// Declarations
using _GetStringAsync_d__53 = ::System::Net::Http::__HttpClient___GetStringAsync_d__53;

using _SendAsyncWorker_d__47 = ::System::Net::Http::__HttpClient___SendAsyncWorker_d__47;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Net::Http::HttpMessageInvoker)]{};

/// @brief Field base_address offset 0x20
 __declspec(property(get=__get_base_address, put=__set_base_address)) ::System::Uri*  base_address;

/// @brief Field cts offset 0x28
 __declspec(property(get=__get_cts, put=__set_cts)) ::System::Threading::CancellationTokenSource*  cts;

/// @brief Field disposed offset 0x30
 __declspec(property(get=__get_disposed, put=__set_disposed)) bool  disposed;

/// @brief Field headers offset 0x38
 __declspec(property(get=__get_headers, put=__set_headers)) ::System::Net::Http::Headers::HttpRequestHeaders*  headers;

/// @brief Field buffer_size offset 0x40
 __declspec(property(get=__get_buffer_size, put=__set_buffer_size)) int64_t  buffer_size;

/// @brief Field timeout offset 0x48
 __declspec(property(get=__get_timeout, put=__set_timeout)) ::System::TimeSpan  timeout;

 __declspec(property(get=get_MaxResponseContentBufferSize)) int64_t  MaxResponseContentBufferSize;

 __declspec(property(put=set_Timeout)) ::System::TimeSpan  Timeout;

static inline void setStaticF_TimeoutDefault(::System::TimeSpan  value) ;

static inline ::System::TimeSpan getStaticF_TimeoutDefault() ;

constexpr void __set_base_address(::System::Uri*  value) ;

constexpr ::System::Uri* __get_base_address() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get_base_address() const;

constexpr void __set_cts(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get_cts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get_cts() const;

constexpr void __set_disposed(bool  value) ;

constexpr bool& __get_disposed() ;

constexpr bool const& __get_disposed() const;

constexpr void __set_headers(::System::Net::Http::Headers::HttpRequestHeaders*  value) ;

constexpr ::System::Net::Http::Headers::HttpRequestHeaders* __get_headers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpRequestHeaders*> __get_headers() const;

constexpr void __set_buffer_size(int64_t  value) ;

constexpr int64_t& __get_buffer_size() ;

constexpr int64_t const& __get_buffer_size() const;

constexpr void __set_timeout(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_timeout() ;

constexpr ::System::TimeSpan const& __get_timeout() const;

static inline ::System::Net::Http::HttpClient* New_ctor() ;

/// @brief Method .ctor addr 0x2830bdc size 0x64 virtual false final false
inline void _ctor() ;

static inline ::System::Net::Http::HttpClient* New_ctor(::System::Net::Http::HttpMessageHandler*  handler, bool  disposeHandler) ;

/// @brief Method .ctor addr 0x2830c40 size 0xbc virtual false final false
inline void _ctor(::System::Net::Http::HttpMessageHandler*  handler, bool  disposeHandler) ;

/// @brief Method get_MaxResponseContentBufferSize addr 0x2830d80 size 0x8 virtual false final false
inline int64_t get_MaxResponseContentBufferSize() ;

/// @brief Method set_Timeout addr 0x2830d88 size 0x134 virtual false final false
inline void set_Timeout(::System::TimeSpan  value) ;

/// @brief Method Dispose addr 0x2830ebc size 0x6c virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetAsync addr 0x2830f60 size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* GetAsync(::System::Uri*  requestUri, ::System::Net::Http::HttpCompletionOption  completionOption) ;

/// @brief Method SendAsync addr 0x28310f0 size 0x74 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage*  request) ;

/// @brief Method SendAsync addr 0x2831078 size 0x78 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption) ;

/// @brief Method SendAsync addr 0x28313f4 size 0xc virtual true final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SendAsync addr 0x2831164 size 0x290 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SendAsyncWorker addr 0x28316b8 size 0x118 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsyncWorker(::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetStringAsync addr 0x28317d0 size 0x100 virtual false final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetStringAsync(::System::Uri*  requestUri) ;

/// @brief Method <>n__0 addr 0x283194c size 0x20 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* __n__0(::System::Net::Http::HttpRequestMessage*  request, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpClient(HttpClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpClient(HttpClient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpClient()  = default;
public:


// Fields

// Static field TimeoutDefault


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClient, 0x50>, "Size mismatch!");

} // namespace end def System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClient*, "System.Net.Http", "HttpClient");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpClient___GetStringAsync_d__53, "System.Net.Http", "HttpClient/<GetStringAsync>d__53");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, "System.Net.Http", "HttpClient/<SendAsyncWorker>d__47");
