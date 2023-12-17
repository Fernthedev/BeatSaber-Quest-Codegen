#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpConnection)
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class ResponseStream;
}
namespace System::Net {
class EndPointListener;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net {
struct __HttpConnection__InputState;
}
namespace System::Net {
struct __HttpConnection__LineState;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class RequestStream;
}
namespace System::Net {
class HttpListener;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading {
class Timer;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Net {
class ListenerPrefix;
}
namespace System::IO {
class Stream;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Object;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace System::Net {
struct __HttpConnection__InputState;
}
namespace System::Net {
struct __HttpConnection__LineState;
}
namespace System::Net {
class HttpConnection;
}
// Write type traits
MARK_VAL_T(::System::Net::__HttpConnection__InputState);
MARK_VAL_T(::System::Net::__HttpConnection__LineState);
MARK_REF_PTR_T(::System::Net::HttpConnection);
// Type: ::InputState
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9168))
// CS Name: ::HttpConnection::InputState
struct CORDL_TYPE __HttpConnection__InputState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HttpConnection__InputState_Unwrapped
enum struct ____HttpConnection__InputState_Unwrapped : int32_t {
__E_RequestLine = static_cast<int32_t>(0x0),
__E_Headers = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field RequestLine value: static_cast<int32_t>(0x0)
static ::System::Net::__HttpConnection__InputState const RequestLine;

/// @brief Field Headers value: static_cast<int32_t>(0x1)
static ::System::Net::__HttpConnection__InputState const Headers;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HttpConnection__InputState_Unwrapped () const noexcept {
return std::bit_cast<____HttpConnection__InputState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HttpConnection__InputState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HttpConnection__InputState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HttpConnection__InputState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpConnection__InputState, 0x4>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::LineState
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9169))
// CS Name: ::HttpConnection::LineState
struct CORDL_TYPE __HttpConnection__LineState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HttpConnection__LineState_Unwrapped
enum struct ____HttpConnection__LineState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CR = static_cast<int32_t>(0x1),
__E_LF = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Net::__HttpConnection__LineState const None;

/// @brief Field CR value: static_cast<int32_t>(0x1)
static ::System::Net::__HttpConnection__LineState const CR;

/// @brief Field LF value: static_cast<int32_t>(0x2)
static ::System::Net::__HttpConnection__LineState const LF;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HttpConnection__LineState_Unwrapped () const noexcept {
return std::bit_cast<____HttpConnection__LineState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HttpConnection__LineState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HttpConnection__LineState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HttpConnection__LineState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__HttpConnection__LineState, 0x4>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::HttpConnection
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9170))
// CS Name: ::System.Net::HttpConnection*
class CORDL_TYPE HttpConnection : public ::System::Object {
public:
// Declarations
using LineState = ::System::Net::__HttpConnection__LineState;

using InputState = ::System::Net::__HttpConnection__InputState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc0 - sizeof(::System::Object)]{};

/// @brief Field sock offset 0x10
 __declspec(property(get=__get_sock, put=__set_sock)) ::System::Net::Sockets::Socket*  sock;

/// @brief Field stream offset 0x18
 __declspec(property(get=__get_stream, put=__set_stream)) ::System::IO::Stream*  stream;

/// @brief Field epl offset 0x20
 __declspec(property(get=__get_epl, put=__set_epl)) ::System::Net::EndPointListener*  epl;

/// @brief Field ms offset 0x28
 __declspec(property(get=__get_ms, put=__set_ms)) ::System::IO::MemoryStream*  ms;

/// @brief Field buffer offset 0x30
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer;

/// @brief Field context offset 0x38
 __declspec(property(get=__get_context, put=__set_context)) ::System::Net::HttpListenerContext*  context;

/// @brief Field current_line offset 0x40
 __declspec(property(get=__get_current_line, put=__set_current_line)) ::System::Text::StringBuilder*  current_line;

/// @brief Field prefix offset 0x48
 __declspec(property(get=__get_prefix, put=__set_prefix)) ::System::Net::ListenerPrefix*  prefix;

/// @brief Field i_stream offset 0x50
 __declspec(property(get=__get_i_stream, put=__set_i_stream)) ::System::Net::RequestStream*  i_stream;

/// @brief Field o_stream offset 0x58
 __declspec(property(get=__get_o_stream, put=__set_o_stream)) ::System::Net::ResponseStream*  o_stream;

/// @brief Field chunked offset 0x60
 __declspec(property(get=__get_chunked, put=__set_chunked)) bool  chunked;

/// @brief Field reuses offset 0x64
 __declspec(property(get=__get_reuses, put=__set_reuses)) int32_t  reuses;

/// @brief Field context_bound offset 0x68
 __declspec(property(get=__get_context_bound, put=__set_context_bound)) bool  context_bound;

/// @brief Field secure offset 0x69
 __declspec(property(get=__get_secure, put=__set_secure)) bool  secure;

/// @brief Field cert offset 0x70
 __declspec(property(get=__get_cert, put=__set_cert)) ::System::Security::Cryptography::X509Certificates::X509Certificate*  cert;

/// @brief Field s_timeout offset 0x78
 __declspec(property(get=__get_s_timeout, put=__set_s_timeout)) int32_t  s_timeout;

/// @brief Field timer offset 0x80
 __declspec(property(get=__get_timer, put=__set_timer)) ::System::Threading::Timer*  timer;

/// @brief Field local_ep offset 0x88
 __declspec(property(get=__get_local_ep, put=__set_local_ep)) ::System::Net::IPEndPoint*  local_ep;

/// @brief Field last_listener offset 0x90
 __declspec(property(get=__get_last_listener, put=__set_last_listener)) ::System::Net::HttpListener*  last_listener;

/// @brief Field client_cert_errors offset 0x98
 __declspec(property(get=__get_client_cert_errors, put=__set_client_cert_errors)) ::ArrayW<int32_t,::Array<int32_t>*>  client_cert_errors;

/// @brief Field client_cert offset 0xa0
 __declspec(property(get=__get_client_cert, put=__set_client_cert)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  client_cert;

/// @brief Field ssl_stream offset 0xa8
 __declspec(property(get=__get_ssl_stream, put=__set_ssl_stream)) ::System::Net::Security::SslStream*  ssl_stream;

/// @brief Field input_state offset 0xb0
 __declspec(property(get=__get_input_state, put=__set_input_state)) ::System::Net::__HttpConnection__InputState  input_state;

/// @brief Field line_state offset 0xb4
 __declspec(property(get=__get_line_state, put=__set_line_state)) ::System::Net::__HttpConnection__LineState  line_state;

/// @brief Field position offset 0xb8
 __declspec(property(get=__get_position, put=__set_position)) int32_t  position;

 __declspec(property(get=get_Reuses)) int32_t  Reuses;

 __declspec(property(get=get_LocalEndPoint)) ::System::Net::IPEndPoint*  LocalEndPoint;

 __declspec(property(get=get_IsSecure)) bool  IsSecure;

 __declspec(property(put=set_Prefix)) ::System::Net::ListenerPrefix*  Prefix;

static inline void setStaticF_onread_cb(::System::AsyncCallback*  value) ;

static inline ::System::AsyncCallback* getStaticF_onread_cb() ;

constexpr void __set_sock(::System::Net::Sockets::Socket*  value) ;

constexpr ::System::Net::Sockets::Socket* __get_sock() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> __get_sock() const;

constexpr void __set_stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_stream() const;

constexpr void __set_epl(::System::Net::EndPointListener*  value) ;

constexpr ::System::Net::EndPointListener* __get_epl() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPointListener*> __get_epl() const;

constexpr void __set_ms(::System::IO::MemoryStream*  value) ;

constexpr ::System::IO::MemoryStream* __get_ms() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> __get_ms() const;

constexpr void __set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_buffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_buffer() const;

constexpr void __set_context(::System::Net::HttpListenerContext*  value) ;

constexpr ::System::Net::HttpListenerContext* __get_context() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> __get_context() const;

constexpr void __set_current_line(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get_current_line() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get_current_line() const;

constexpr void __set_prefix(::System::Net::ListenerPrefix*  value) ;

constexpr ::System::Net::ListenerPrefix* __get_prefix() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::ListenerPrefix*> __get_prefix() const;

constexpr void __set_i_stream(::System::Net::RequestStream*  value) ;

constexpr ::System::Net::RequestStream* __get_i_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::RequestStream*> __get_i_stream() const;

constexpr void __set_o_stream(::System::Net::ResponseStream*  value) ;

constexpr ::System::Net::ResponseStream* __get_o_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseStream*> __get_o_stream() const;

constexpr void __set_chunked(bool  value) ;

constexpr bool& __get_chunked() ;

constexpr bool const& __get_chunked() const;

constexpr void __set_reuses(int32_t  value) ;

constexpr int32_t& __get_reuses() ;

constexpr int32_t const& __get_reuses() const;

constexpr void __set_context_bound(bool  value) ;

constexpr bool& __get_context_bound() ;

constexpr bool const& __get_context_bound() const;

constexpr void __set_secure(bool  value) ;

constexpr bool& __get_secure() ;

constexpr bool const& __get_secure() const;

constexpr void __set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* __get_cert() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> __get_cert() const;

constexpr void __set_s_timeout(int32_t  value) ;

constexpr int32_t& __get_s_timeout() ;

constexpr int32_t const& __get_s_timeout() const;

constexpr void __set_timer(::System::Threading::Timer*  value) ;

constexpr ::System::Threading::Timer* __get_timer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> __get_timer() const;

constexpr void __set_local_ep(::System::Net::IPEndPoint*  value) ;

constexpr ::System::Net::IPEndPoint* __get_local_ep() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> __get_local_ep() const;

constexpr void __set_last_listener(::System::Net::HttpListener*  value) ;

constexpr ::System::Net::HttpListener* __get_last_listener() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> __get_last_listener() const;

constexpr void __set_client_cert_errors(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_client_cert_errors() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_client_cert_errors() const;

constexpr void __set_client_cert(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* __get_client_cert() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2*> __get_client_cert() const;

constexpr void __set_ssl_stream(::System::Net::Security::SslStream*  value) ;

constexpr ::System::Net::Security::SslStream* __get_ssl_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> __get_ssl_stream() const;

constexpr void __set_input_state(::System::Net::__HttpConnection__InputState  value) ;

constexpr ::System::Net::__HttpConnection__InputState& __get_input_state() ;

constexpr ::System::Net::__HttpConnection__InputState const& __get_input_state() const;

constexpr void __set_line_state(::System::Net::__HttpConnection__LineState  value) ;

constexpr ::System::Net::__HttpConnection__LineState& __get_line_state() ;

constexpr ::System::Net::__HttpConnection__LineState const& __get_line_state() const;

constexpr void __set_position(int32_t  value) ;

constexpr int32_t& __get_position() ;

constexpr int32_t const& __get_position() const;

static inline ::System::Net::HttpConnection* New_ctor(::System::Net::Sockets::Socket*  sock, ::System::Net::EndPointListener*  epl, bool  secure, ::System::Security::Cryptography::X509Certificates::X509Certificate*  cert) ;

/// @brief Method .ctor addr 0x29c11a0 size 0x260 virtual false final false
inline void _ctor(::System::Net::Sockets::Socket*  sock, ::System::Net::EndPointListener*  epl, bool  secure, ::System::Security::Cryptography::X509Certificates::X509Certificate*  cert) ;

/// @brief Method Init addr 0x29c4f6c size 0xa8 virtual false final false
inline void Init() ;

/// @brief Method get_Reuses addr 0x29c50c8 size 0x8 virtual false final false
inline int32_t get_Reuses() ;

/// @brief Method get_LocalEndPoint addr 0x29c50d0 size 0xb8 virtual false final false
inline ::System::Net::IPEndPoint* get_LocalEndPoint() ;

/// @brief Method get_IsSecure addr 0x29c5188 size 0x8 virtual false final false
inline bool get_IsSecure() ;

/// @brief Method set_Prefix addr 0x29c5190 size 0x8 virtual false final false
inline void set_Prefix(::System::Net::ListenerPrefix*  value) ;

/// @brief Method OnTimeout addr 0x29c5198 size 0x18 virtual false final false
inline void OnTimeout(::System::Object*  unused) ;

/// @brief Method BeginReadRequest addr 0x29c1400 size 0x1a8 virtual false final false
inline void BeginReadRequest() ;

/// @brief Method GetRequestStream addr 0x29c52e8 size 0x14c virtual false final false
inline ::System::Net::RequestStream* GetRequestStream(bool  chunked, int64_t  contentlength) ;

/// @brief Method GetResponseStream addr 0x29c5510 size 0xc8 virtual false final false
inline ::System::Net::ResponseStream* GetResponseStream() ;

/// @brief Method OnRead addr 0x29c55d8 size 0xd4 virtual false final false
static inline void OnRead(::System::IAsyncResult*  ares) ;

/// @brief Method OnReadInternal addr 0x29c56ac size 0x338 virtual false final false
inline void OnReadInternal(::System::IAsyncResult*  ares) ;

/// @brief Method RemoveConnection addr 0x29c62ec size 0x40 virtual false final false
inline void RemoveConnection() ;

/// @brief Method ProcessInput addr 0x29c5a04 size 0x2bc virtual false final false
inline bool ProcessInput(::System::IO::MemoryStream*  ms) ;

/// @brief Method ReadLine addr 0x29c66e4 size 0x178 virtual false final false
inline ::StringW ReadLine(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  len, ByRef<int32_t>  used) ;

/// @brief Method SendError addr 0x29bce80 size 0x1d8 virtual false final false
inline void SendError(::StringW  msg, int32_t  status) ;

/// @brief Method SendError addr 0x29c59e4 size 0x20 virtual false final false
inline void SendError() ;

/// @brief Method Unbind addr 0x29c52b8 size 0x30 virtual false final false
inline void Unbind() ;

/// @brief Method CloseSocket addr 0x29c51b0 size 0x108 virtual false final false
inline void CloseSocket() ;

/// @brief Method Close addr 0x29c2cb4 size 0x268 virtual false final false
inline void Close(bool  force_close) ;

/// @brief Method <.ctor>b__24_0 addr 0x29c7c2c size 0xf4 virtual false final false
inline bool __ctor_b__24_0(::System::Object*  t, ::System::Security::Cryptography::X509Certificates::X509Certificate*  c, ::System::Security::Cryptography::X509Certificates::X509Chain*  ch, ::System::Net::Security::SslPolicyErrors  e) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpConnection(HttpConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpConnection(HttpConnection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpConnection()  = default;
public:


// Fields

// Static field onread_cb


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpConnection, 0xc0>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpConnection__InputState, "System.Net", "HttpConnection/InputState");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__HttpConnection__LineState, "System.Net", "HttpConnection/LineState");
NEED_NO_BOX(::System::Net::HttpConnection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpConnection*, "System.Net", "HttpConnection");
