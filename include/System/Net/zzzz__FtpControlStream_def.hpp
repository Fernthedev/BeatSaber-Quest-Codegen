#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpControlStream)
namespace System::Net {
class __FtpControlStream____c__DisplayClass31_0;
}
namespace System::Net {
struct FtpStatusCode;
}
namespace System {
class Uri;
}
namespace System::Net {
class TlsStream;
}
namespace System::Net {
struct FtpLoginState;
}
namespace System {
class WeakReference;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class __CommandStream__PipelineEntry;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class ResponseDescription;
}
namespace System {
struct DateTime;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
struct __FtpControlStream__GetPathOption;
}
namespace System::Net {
struct TriState;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net {
struct __CommandStream__PipelineInstruction;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class FtpWebRequest;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Net {
struct __FtpControlStream__GetPathOption;
}
namespace System::Net {
class FtpControlStream;
}
namespace System::Net {
class __FtpControlStream____c__DisplayClass31_0;
}
// Write type traits
MARK_VAL_T(::System::Net::__FtpControlStream__GetPathOption);
MARK_REF_PTR_T(::System::Net::FtpControlStream);
MARK_REF_PTR_T(::System::Net::__FtpControlStream____c__DisplayClass31_0);
// Type: ::GetPathOption
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9040))
// CS Name: ::FtpControlStream::GetPathOption
struct CORDL_TYPE __FtpControlStream__GetPathOption : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____FtpControlStream__GetPathOption_Unwrapped
enum struct ____FtpControlStream__GetPathOption_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_AssumeFilename = static_cast<int32_t>(0x1),
__E_AssumeNoFilename = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::System::Net::__FtpControlStream__GetPathOption const Normal;

/// @brief Field AssumeFilename value: static_cast<int32_t>(0x1)
static ::System::Net::__FtpControlStream__GetPathOption const AssumeFilename;

/// @brief Field AssumeNoFilename value: static_cast<int32_t>(0x2)
static ::System::Net::__FtpControlStream__GetPathOption const AssumeNoFilename;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____FtpControlStream__GetPathOption_Unwrapped () const noexcept {
return std::bit_cast<____FtpControlStream__GetPathOption_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __FtpControlStream__GetPathOption(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FtpControlStream__GetPathOption(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FtpControlStream__GetPathOption()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__FtpControlStream__GetPathOption, 0x4>, "Size mismatch!");

} // namespace end def System::Net
// Type: ::<>c__DisplayClass31_0
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9041))
// CS Name: ::FtpControlStream::<>c__DisplayClass31_0*
class CORDL_TYPE __FtpControlStream____c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::System::Net::FtpControlStream*  __4__this;

/// @brief Field tlsStream offset 0x18
 __declspec(property(get=__get_tlsStream, put=__set_tlsStream)) ::System::Net::TlsStream*  tlsStream;

constexpr void __set___4__this(::System::Net::FtpControlStream*  value) ;

constexpr ::System::Net::FtpControlStream* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpControlStream*> __get___4__this() const;

constexpr void __set_tlsStream(::System::Net::TlsStream*  value) ;

constexpr ::System::Net::TlsStream* __get_tlsStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::TlsStream*> __get_tlsStream() const;

static inline ::System::Net::__FtpControlStream____c__DisplayClass31_0* New_ctor() ;

/// @brief Method .ctor addr 0x29904dc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PipelineCallback>b__0 addr 0x29934a8 size 0xf8 virtual false final false
inline void _PipelineCallback_b__0(::System::IAsyncResult*  ar) ;

// Ctor Parameters [CppParam { name: "", ty: "__FtpControlStream____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FtpControlStream____c__DisplayClass31_0(__FtpControlStream____c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FtpControlStream____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FtpControlStream____c__DisplayClass31_0(__FtpControlStream____c__DisplayClass31_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FtpControlStream____c__DisplayClass31_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__FtpControlStream____c__DisplayClass31_0, 0x20>, "Size mismatch!");

} // namespace end def System::Net
// Type: System.Net::FtpControlStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9042))
// CS Name: ::System.Net::FtpControlStream*
class CORDL_TYPE FtpControlStream : public ::System::Net::CommandStream {
public:
// Declarations
using __c__DisplayClass31_0 = ::System::Net::__FtpControlStream____c__DisplayClass31_0;

using GetPathOption = ::System::Net::__FtpControlStream__GetPathOption;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x110};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x110 - sizeof(::System::Net::CommandStream)]{};

/// @brief Field _dataSocket offset 0x88
 __declspec(property(get=__get__dataSocket, put=__set__dataSocket)) ::System::Net::Sockets::Socket*  _dataSocket;

/// @brief Field _passiveEndPoint offset 0x90
 __declspec(property(get=__get__passiveEndPoint, put=__set__passiveEndPoint)) ::System::Net::IPEndPoint*  _passiveEndPoint;

/// @brief Field _tlsStream offset 0x98
 __declspec(property(get=__get__tlsStream, put=__set__tlsStream)) ::System::Net::TlsStream*  _tlsStream;

/// @brief Field _bannerMessage offset 0xa0
 __declspec(property(get=__get__bannerMessage, put=__set__bannerMessage)) ::System::Text::StringBuilder*  _bannerMessage;

/// @brief Field _welcomeMessage offset 0xa8
 __declspec(property(get=__get__welcomeMessage, put=__set__welcomeMessage)) ::System::Text::StringBuilder*  _welcomeMessage;

/// @brief Field _exitMessage offset 0xb0
 __declspec(property(get=__get__exitMessage, put=__set__exitMessage)) ::System::Text::StringBuilder*  _exitMessage;

/// @brief Field _credentials offset 0xb8
 __declspec(property(get=__get__credentials, put=__set__credentials)) ::System::WeakReference*  _credentials;

/// @brief Field _currentTypeSetting offset 0xc0
 __declspec(property(get=__get__currentTypeSetting, put=__set__currentTypeSetting)) ::StringW  _currentTypeSetting;

/// @brief Field _contentLength offset 0xc8
 __declspec(property(get=__get__contentLength, put=__set__contentLength)) int64_t  _contentLength;

/// @brief Field _lastModified offset 0xd0
 __declspec(property(get=__get__lastModified, put=__set__lastModified)) ::System::DateTime  _lastModified;

/// @brief Field _dataHandshakeStarted offset 0xd8
 __declspec(property(get=__get__dataHandshakeStarted, put=__set__dataHandshakeStarted)) bool  _dataHandshakeStarted;

/// @brief Field _loginDirectory offset 0xe0
 __declspec(property(get=__get__loginDirectory, put=__set__loginDirectory)) ::StringW  _loginDirectory;

/// @brief Field _establishedServerDirectory offset 0xe8
 __declspec(property(get=__get__establishedServerDirectory, put=__set__establishedServerDirectory)) ::StringW  _establishedServerDirectory;

/// @brief Field _requestedServerDirectory offset 0xf0
 __declspec(property(get=__get__requestedServerDirectory, put=__set__requestedServerDirectory)) ::StringW  _requestedServerDirectory;

/// @brief Field _responseUri offset 0xf8
 __declspec(property(get=__get__responseUri, put=__set__responseUri)) ::System::Uri*  _responseUri;

/// @brief Field _loginState offset 0x100
 __declspec(property(get=__get__loginState, put=__set__loginState)) ::System::Net::FtpLoginState  _loginState;

/// @brief Field StatusCode offset 0x104
 __declspec(property(get=__get_StatusCode, put=__set_StatusCode)) ::System::Net::FtpStatusCode  StatusCode;

/// @brief Field StatusLine offset 0x108
 __declspec(property(get=__get_StatusLine, put=__set_StatusLine)) ::StringW  StatusLine;

 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::NetworkCredential*  Credentials;

 __declspec(property(get=get_ContentLength)) int64_t  ContentLength;

 __declspec(property(get=get_LastModified)) ::System::DateTime  LastModified;

 __declspec(property(get=get_ResponseUri)) ::System::Uri*  ResponseUri;

 __declspec(property(get=get_BannerMessage)) ::StringW  BannerMessage;

 __declspec(property(get=get_WelcomeMessage)) ::StringW  WelcomeMessage;

 __declspec(property(get=get_ExitMessage)) ::StringW  ExitMessage;

constexpr void __set__dataSocket(::System::Net::Sockets::Socket*  value) ;

constexpr ::System::Net::Sockets::Socket* __get__dataSocket() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> __get__dataSocket() const;

constexpr void __set__passiveEndPoint(::System::Net::IPEndPoint*  value) ;

constexpr ::System::Net::IPEndPoint* __get__passiveEndPoint() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> __get__passiveEndPoint() const;

constexpr void __set__tlsStream(::System::Net::TlsStream*  value) ;

constexpr ::System::Net::TlsStream* __get__tlsStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::TlsStream*> __get__tlsStream() const;

constexpr void __set__bannerMessage(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__bannerMessage() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__bannerMessage() const;

constexpr void __set__welcomeMessage(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__welcomeMessage() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__welcomeMessage() const;

constexpr void __set__exitMessage(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__exitMessage() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__exitMessage() const;

constexpr void __set__credentials(::System::WeakReference*  value) ;

constexpr ::System::WeakReference* __get__credentials() ;

constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> __get__credentials() const;

constexpr void __set__currentTypeSetting(::StringW  value) ;

constexpr ::StringW& __get__currentTypeSetting() ;

constexpr ::StringW const& __get__currentTypeSetting() const;

constexpr void __set__contentLength(int64_t  value) ;

constexpr int64_t& __get__contentLength() ;

constexpr int64_t const& __get__contentLength() const;

constexpr void __set__lastModified(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__lastModified() ;

constexpr ::System::DateTime const& __get__lastModified() const;

constexpr void __set__dataHandshakeStarted(bool  value) ;

constexpr bool& __get__dataHandshakeStarted() ;

constexpr bool const& __get__dataHandshakeStarted() const;

constexpr void __set__loginDirectory(::StringW  value) ;

constexpr ::StringW& __get__loginDirectory() ;

constexpr ::StringW const& __get__loginDirectory() const;

constexpr void __set__establishedServerDirectory(::StringW  value) ;

constexpr ::StringW& __get__establishedServerDirectory() ;

constexpr ::StringW const& __get__establishedServerDirectory() const;

constexpr void __set__requestedServerDirectory(::StringW  value) ;

constexpr ::StringW& __get__requestedServerDirectory() ;

constexpr ::StringW const& __get__requestedServerDirectory() const;

constexpr void __set__responseUri(::System::Uri*  value) ;

constexpr ::System::Uri* __get__responseUri() ;

constexpr ::cordl_internals::to_const_pointer<::System::Uri*> __get__responseUri() const;

constexpr void __set__loginState(::System::Net::FtpLoginState  value) ;

constexpr ::System::Net::FtpLoginState& __get__loginState() ;

constexpr ::System::Net::FtpLoginState const& __get__loginState() const;

constexpr void __set_StatusCode(::System::Net::FtpStatusCode  value) ;

constexpr ::System::Net::FtpStatusCode& __get_StatusCode() ;

constexpr ::System::Net::FtpStatusCode const& __get_StatusCode() const;

constexpr void __set_StatusLine(::StringW  value) ;

constexpr ::StringW& __get_StatusLine() ;

constexpr ::StringW const& __get_StatusLine() const;

static inline void setStaticF_s_acceptCallbackDelegate(::System::AsyncCallback*  value) ;

static inline ::System::AsyncCallback* getStaticF_s_acceptCallbackDelegate() ;

static inline void setStaticF_s_connectCallbackDelegate(::System::AsyncCallback*  value) ;

static inline ::System::AsyncCallback* getStaticF_s_connectCallbackDelegate() ;

static inline void setStaticF_s_SSLHandshakeCallback(::System::AsyncCallback*  value) ;

static inline ::System::AsyncCallback* getStaticF_s_SSLHandshakeCallback() ;

/// @brief Method get_Credentials addr 0x298ecdc size 0xa8 virtual false final false
inline ::System::Net::NetworkCredential* get_Credentials() ;

/// @brief Method set_Credentials addr 0x298ed84 size 0x80 virtual false final false
inline void set_Credentials(::System::Net::NetworkCredential*  value) ;

static inline ::System::Net::FtpControlStream* New_ctor(::System::Net::Sockets::TcpClient*  client) ;

/// @brief Method .ctor addr 0x298ee04 size 0x8c virtual false final false
inline void _ctor(::System::Net::Sockets::TcpClient*  client) ;

/// @brief Method AbortConnect addr 0x298ee90 size 0x8c virtual false final false
inline void AbortConnect() ;

/// @brief Method AcceptCallback addr 0x298ef1c size 0x368 virtual false final false
static inline void AcceptCallback(::System::IAsyncResult*  asyncResult) ;

/// @brief Method ConnectCallback addr 0x298f318 size 0x1b0 virtual false final false
static inline void ConnectCallback(::System::IAsyncResult*  asyncResult) ;

/// @brief Method SSLHandshakeCallback addr 0x298f4c8 size 0x1c4 virtual false final false
static inline void SSLHandshakeCallback(::System::IAsyncResult*  asyncResult) ;

/// @brief Method QueueOrCreateFtpDataStream addr 0x298f68c size 0x29c virtual false final false
inline ::System::Net::__CommandStream__PipelineInstruction QueueOrCreateFtpDataStream(ByRef<::System::IO::Stream*>  stream) ;

/// @brief Method ClearState addr 0x298fc20 size 0x90 virtual true final false
inline void ClearState() ;

/// @brief Method PipelineCallback addr 0x298fcb0 size 0x82c virtual true final false
inline ::System::Net::__CommandStream__PipelineInstruction PipelineCallback(::System::Net::__CommandStream__PipelineEntry*  entry, ::System::Net::ResponseDescription*  response, bool  timeout, ByRef<::System::IO::Stream*>  stream) ;

/// @brief Method BuildCommandsList addr 0x2991504 size 0xdd8 virtual true final false
inline ::ArrayW<::System::Net::__CommandStream__PipelineEntry*,::Array<::System::Net::__CommandStream__PipelineEntry*>*> BuildCommandsList(::System::Net::WebRequest*  req) ;

/// @brief Method QueueOrCreateDataConection addr 0x29904e4 size 0x664 virtual false final false
inline ::System::Net::__CommandStream__PipelineInstruction QueueOrCreateDataConection(::System::Net::__CommandStream__PipelineEntry*  entry, ::System::Net::ResponseDescription*  response, bool  timeout, ByRef<::System::IO::Stream*>  stream, ByRef<bool>  isSocketReady) ;

/// @brief Method GetPathInfo addr 0x29923ec size 0x194 virtual false final false
static inline void GetPathInfo(::System::Net::__FtpControlStream__GetPathOption  pathOption, ::System::Uri*  uri, ByRef<::StringW>  path, ByRef<::StringW>  directory, ByRef<::StringW>  filename) ;

/// @brief Method FormatAddress addr 0x2992d34 size 0x124 virtual false final false
inline ::StringW FormatAddress(::System::Net::IPAddress*  address, int32_t  Port) ;

/// @brief Method FormatAddressV6 addr 0x2992e58 size 0x110 virtual false final false
inline ::StringW FormatAddressV6(::System::Net::IPAddress*  address, int32_t  port) ;

/// @brief Method get_ContentLength addr 0x2992f68 size 0x8 virtual false final false
inline int64_t get_ContentLength() ;

/// @brief Method get_LastModified addr 0x2992f70 size 0x8 virtual false final false
inline ::System::DateTime get_LastModified() ;

/// @brief Method get_ResponseUri addr 0x2992f78 size 0x8 virtual false final false
inline ::System::Uri* get_ResponseUri() ;

/// @brief Method get_BannerMessage addr 0x2992f80 size 0x18 virtual false final false
inline ::StringW get_BannerMessage() ;

/// @brief Method get_WelcomeMessage addr 0x2992f98 size 0x18 virtual false final false
inline ::StringW get_WelcomeMessage() ;

/// @brief Method get_ExitMessage addr 0x2992fb0 size 0x18 virtual false final false
inline ::StringW get_ExitMessage() ;

/// @brief Method GetContentLengthFrom213Response addr 0x2990fb4 size 0x140 virtual false final false
inline int64_t GetContentLengthFrom213Response(::StringW  responseString) ;

/// @brief Method GetLastModifiedFrom213Response addr 0x29910f4 size 0x360 virtual false final false
inline ::System::DateTime GetLastModifiedFrom213Response(::StringW  str) ;

/// @brief Method TryUpdateResponseUri addr 0x2990c40 size 0x358 virtual false final false
inline void TryUpdateResponseUri(::StringW  str, ::System::Net::FtpWebRequest*  request) ;

/// @brief Method TryUpdateContentLength addr 0x2990b48 size 0xec virtual false final false
inline void TryUpdateContentLength(::StringW  str) ;

/// @brief Method GetLoginDirectory addr 0x2991454 size 0xb0 virtual false final false
inline ::StringW GetLoginDirectory(::StringW  str) ;

/// @brief Method GetPortV4 addr 0x2992900 size 0x1f4 virtual false final false
inline int32_t GetPortV4(::StringW  responseString) ;

/// @brief Method GetPortV6 addr 0x2992af4 size 0x1c0 virtual false final false
inline int32_t GetPortV6(::StringW  responseString) ;

/// @brief Method CreateFtpListenerSocket addr 0x2992590 size 0x17c virtual false final false
inline void CreateFtpListenerSocket(::System::Net::FtpWebRequest*  request) ;

/// @brief Method GetPortCommandLine addr 0x299270c size 0x1f4 virtual false final false
inline ::StringW GetPortCommandLine(::System::Net::FtpWebRequest*  request) ;

/// @brief Method FormatFtpCommand addr 0x29922dc size 0x100 virtual false final false
inline ::StringW FormatFtpCommand(::StringW  command, ::StringW  parameter) ;

/// @brief Method CreateFtpDataSocket addr 0x2992cb4 size 0x80 virtual false final false
inline ::System::Net::Sockets::Socket* CreateFtpDataSocket(::System::Net::FtpWebRequest*  request, ::System::Net::Sockets::Socket*  templateSocket) ;

/// @brief Method CheckValid addr 0x2992fc8 size 0x3b4 virtual true final false
inline bool CheckValid(::System::Net::ResponseDescription*  response, ByRef<int32_t>  validThrough, ByRef<int32_t>  completeLength) ;

/// @brief Method IsFtpDataStreamWriteable addr 0x298f928 size 0x84 virtual false final false
inline ::System::Net::TriState IsFtpDataStreamWriteable() ;

// Ctor Parameters [CppParam { name: "", ty: "FtpControlStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FtpControlStream(FtpControlStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FtpControlStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FtpControlStream(FtpControlStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FtpControlStream()  = default;
public:


// Fields

// Static field s_acceptCallbackDelegate

// Static field s_connectCallbackDelegate

// Static field s_SSLHandshakeCallback


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpControlStream, 0x110>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__FtpControlStream__GetPathOption, "System.Net", "FtpControlStream/GetPathOption");
NEED_NO_BOX(::System::Net::FtpControlStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpControlStream*, "System.Net", "FtpControlStream");
NEED_NO_BOX(::System::Net::__FtpControlStream____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__FtpControlStream____c__DisplayClass31_0*, "System.Net", "FtpControlStream/<>c__DisplayClass31_0");
