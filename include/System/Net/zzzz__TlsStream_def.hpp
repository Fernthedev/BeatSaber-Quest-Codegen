#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsStream)
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Net::Security {
class SslStream;
}
// Forward declare root types
namespace System::Net {
class TlsStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::TlsStream);
// Type: System.Net::TlsStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9324))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9026))
// CS Name: ::System.Net::TlsStream*
class CORDL_TYPE TlsStream : public ::System::Net::Sockets::NetworkStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Net::Sockets::NetworkStream)]{};

/// @brief Field _sslStream offset 0x48
 __declspec(property(get=__get__sslStream, put=__set__sslStream)) ::System::Net::Security::SslStream*  _sslStream;

/// @brief Field _host offset 0x50
 __declspec(property(get=__get__host, put=__set__host)) ::StringW  _host;

/// @brief Field _clientCertificates offset 0x58
 __declspec(property(get=__get__clientCertificates, put=__set__clientCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  _clientCertificates;

constexpr void __set__sslStream(::System::Net::Security::SslStream*  value) ;

constexpr ::System::Net::Security::SslStream* __get__sslStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> __get__sslStream() const;

constexpr void __set__host(::StringW  value) ;

constexpr ::StringW& __get__host() ;

constexpr ::StringW const& __get__host() const;

constexpr void __set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* __get__clientCertificates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> __get__clientCertificates() const;

static inline ::System::Net::TlsStream* New_ctor(::System::Net::Sockets::NetworkStream*  stream, ::System::Net::Sockets::Socket*  socket, ::StringW  host, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  clientCertificates) ;

/// @brief Method .ctor addr 0x298a260 size 0xd4 virtual false final false
inline void _ctor(::System::Net::Sockets::NetworkStream*  stream, ::System::Net::Sockets::Socket*  socket, ::StringW  host, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  clientCertificates) ;

/// @brief Method AuthenticateAsClient addr 0x298a334 size 0x100 virtual false final false
inline void AuthenticateAsClient() ;

/// @brief Method BeginAuthenticateAsClient addr 0x298a434 size 0x118 virtual false final false
inline ::System::IAsyncResult* BeginAuthenticateAsClient(::System::AsyncCallback*  asyncCallback, ::System::Object*  state) ;

/// @brief Method EndAuthenticateAsClient addr 0x298a54c size 0x24 virtual false final false
inline void EndAuthenticateAsClient(::System::IAsyncResult*  asyncResult) ;

/// @brief Method BeginWrite addr 0x298a570 size 0x24 virtual true final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method EndWrite addr 0x298a594 size 0x24 virtual true final false
inline void EndWrite(::System::IAsyncResult*  result) ;

/// @brief Method Write addr 0x298a5b8 size 0x24 virtual true final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Read addr 0x298a5dc size 0x24 virtual true final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method BeginRead addr 0x298a600 size 0x24 virtual true final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method EndRead addr 0x298a624 size 0x24 virtual true final false
inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Close addr 0x298a648 size 0x34 virtual true final false
inline void Close() ;

// Ctor Parameters [CppParam { name: "", ty: "TlsStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsStream(TlsStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsStream(TlsStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsStream()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::TlsStream, 0x60>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::TlsStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TlsStream*, "System.Net", "TlsStream");
