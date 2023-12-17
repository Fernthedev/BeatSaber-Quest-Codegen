#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoTlsStream)
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::IO {
class Stream;
}
namespace Mono::Net::Security {
struct __MonoTlsStream___CreateStream_d__18;
}
namespace System {
class Object;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace Mono::Net::Security {
struct __MonoTlsStream___CreateStream_d__18;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MonoTlsStream);
MARK_VAL_T(::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18);
// Type: ::<CreateStream>d__18
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8843))
// CS Name: ::MonoTlsStream::<CreateStream>d__18
struct CORDL_TYPE __MonoTlsStream___CreateStream_d__18 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Mono::Net::Security::MonoTlsStream*  __4__this;

/// @brief Field tunnel offset 0x28
 __declspec(property(get=__get_tunnel, put=__set_tunnel)) ::System::Net::WebConnectionTunnel*  tunnel;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <socket>5__2 offset 0x38
 __declspec(property(get=__get__socket_5__2, put=__set__socket_5__2)) ::System::Net::Sockets::Socket*  _socket_5__2;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> const& __get___t__builder() const;

constexpr void __set___4__this(::Mono::Net::Security::MonoTlsStream*  value) ;

constexpr ::Mono::Net::Security::MonoTlsStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MonoTlsStream*> __get___4__this() const;

constexpr void __set_tunnel(::System::Net::WebConnectionTunnel*  value) ;

constexpr ::System::Net::WebConnectionTunnel* __get_tunnel() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::WebConnectionTunnel*> __get_tunnel() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__socket_5__2(::System::Net::Sockets::Socket*  value) ;

constexpr ::System::Net::Sockets::Socket* __get__socket_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> __get__socket_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2825634 size 0x6a4 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2825cd8 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MonoTlsStream*", modifiers: "", def_value: None }, CppParam { name: "tunnel", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_socket_5__2", ty: "::System::Net::Sockets::Socket*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr __MonoTlsStream___CreateStream_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder, ::Mono::Net::Security::MonoTlsStream*  __4__this, ::System::Net::WebConnectionTunnel*  tunnel, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Sockets::Socket*  _socket_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MonoTlsStream___CreateStream_d__18(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MonoTlsStream___CreateStream_d__18()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18, 0x50>, "Size mismatch!");

} // namespace end def Mono::Net::Security
// Type: Mono.Net.Security::MonoTlsStream
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8844))
// CS Name: ::Mono.Net.Security::MonoTlsStream*
class CORDL_TYPE MonoTlsStream : public ::System::Object {
public:
// Declarations
using _CreateStream_d__18 = ::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field provider offset 0x10
 __declspec(property(get=__get_provider, put=__set_provider)) ::Mono::Net::Security::MobileTlsProvider*  provider;

/// @brief Field networkStream offset 0x18
 __declspec(property(get=__get_networkStream, put=__set_networkStream)) ::System::Net::Sockets::NetworkStream*  networkStream;

/// @brief Field request offset 0x20
 __declspec(property(get=__get_request, put=__set_request)) ::System::Net::HttpWebRequest*  request;

/// @brief Field settings offset 0x28
 __declspec(property(get=__get_settings, put=__set_settings)) ::Mono::Security::Interface::MonoTlsSettings*  settings;

/// @brief Field sslStream offset 0x30
 __declspec(property(get=__get_sslStream, put=__set_sslStream)) ::System::Net::Security::SslStream*  sslStream;

/// @brief Field sslStreamLock offset 0x38
 __declspec(property(get=__get_sslStreamLock, put=__set_sslStreamLock)) ::System::Object*  sslStreamLock;

/// @brief Field status offset 0x40
 __declspec(property(get=__get_status, put=__set_status)) ::System::Net::WebExceptionStatus  status;

/// @brief Field <CertificateValidationFailed>k__BackingField offset 0x44
 __declspec(property(get=__get__CertificateValidationFailed_k__BackingField, put=__set__CertificateValidationFailed_k__BackingField)) bool  _CertificateValidationFailed_k__BackingField;

 __declspec(property(get=get_Request)) ::System::Net::HttpWebRequest*  Request;

 __declspec(property(get=get_ExceptionStatus)) ::System::Net::WebExceptionStatus  ExceptionStatus;

 __declspec(property(get=get_CertificateValidationFailed, put=set_CertificateValidationFailed)) bool  CertificateValidationFailed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_provider(::Mono::Net::Security::MobileTlsProvider*  value) ;

constexpr ::Mono::Net::Security::MobileTlsProvider* __get_provider() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsProvider*> __get_provider() const;

constexpr void __set_networkStream(::System::Net::Sockets::NetworkStream*  value) ;

constexpr ::System::Net::Sockets::NetworkStream* __get_networkStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> __get_networkStream() const;

constexpr void __set_request(::System::Net::HttpWebRequest*  value) ;

constexpr ::System::Net::HttpWebRequest* __get_request() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> __get_request() const;

constexpr void __set_settings(::Mono::Security::Interface::MonoTlsSettings*  value) ;

constexpr ::Mono::Security::Interface::MonoTlsSettings* __get_settings() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> __get_settings() const;

constexpr void __set_sslStream(::System::Net::Security::SslStream*  value) ;

constexpr ::System::Net::Security::SslStream* __get_sslStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> __get_sslStream() const;

constexpr void __set_sslStreamLock(::System::Object*  value) ;

constexpr ::System::Object* __get_sslStreamLock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_sslStreamLock() const;

constexpr void __set_status(::System::Net::WebExceptionStatus  value) ;

constexpr ::System::Net::WebExceptionStatus& __get_status() ;

constexpr ::System::Net::WebExceptionStatus const& __get_status() const;

constexpr void __set__CertificateValidationFailed_k__BackingField(bool  value) ;

constexpr bool& __get__CertificateValidationFailed_k__BackingField() ;

constexpr bool const& __get__CertificateValidationFailed_k__BackingField() const;

/// @brief Method get_Request addr 0x2825360 size 0x8 virtual false final false
inline ::System::Net::HttpWebRequest* get_Request() ;

/// @brief Method get_ExceptionStatus addr 0x2825368 size 0x8 virtual false final false
inline ::System::Net::WebExceptionStatus get_ExceptionStatus() ;

/// @brief Method get_CertificateValidationFailed addr 0x2825370 size 0x8 virtual false final false
inline bool get_CertificateValidationFailed() ;

/// @brief Method set_CertificateValidationFailed addr 0x2825378 size 0xc virtual false final false
inline void set_CertificateValidationFailed(bool  value) ;

static inline ::Mono::Net::Security::MonoTlsStream* New_ctor(::System::Net::HttpWebRequest*  request, ::System::Net::Sockets::NetworkStream*  networkStream) ;

/// @brief Method .ctor addr 0x2825384 size 0xd4 virtual false final false
inline void _ctor(::System::Net::HttpWebRequest*  request, ::System::Net::Sockets::NetworkStream*  networkStream) ;

/// @brief Method CreateStream addr 0x2825458 size 0x104 virtual false final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* CreateStream(::System::Net::WebConnectionTunnel*  tunnel, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose addr 0x282555c size 0x4 virtual true final true
inline void Dispose() ;

/// @brief Method CloseSslStream addr 0x2825560 size 0xd4 virtual false final false
inline void CloseSslStream() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoTlsStream(MonoTlsStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoTlsStream(MonoTlsStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoTlsStream()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoTlsStream, 0x48>, "Size mismatch!");

} // namespace end def Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MonoTlsStream);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoTlsStream*, "Mono.Net.Security", "MonoTlsStream");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18, "Mono.Net.Security", "MonoTlsStream/<CreateStream>d__18");
