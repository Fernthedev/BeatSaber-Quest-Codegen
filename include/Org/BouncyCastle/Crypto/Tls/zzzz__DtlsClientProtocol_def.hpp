#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsClientProtocol)
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsClientProtocol__ClientHandshakeState;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __SessionParameters__Builder;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsClientProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsClientProtocol__ClientHandshakeState;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState);
// Type: ::ClientHandshakeState
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1223))
// CS Name: ::DtlsClientProtocol::ClientHandshakeState*
class CORDL_TYPE __DtlsClientProtocol__ClientHandshakeState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field client offset 0x10
 __declspec(property(get=__get_client, put=__set_client)) ::Org::BouncyCastle::Crypto::Tls::TlsClient*  client;

/// @brief Field clientContext offset 0x18
 __declspec(property(get=__get_clientContext, put=__set_clientContext)) ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*  clientContext;

/// @brief Field tlsSession offset 0x20
 __declspec(property(get=__get_tlsSession, put=__set_tlsSession)) ::Org::BouncyCastle::Crypto::Tls::TlsSession*  tlsSession;

/// @brief Field sessionParameters offset 0x28
 __declspec(property(get=__get_sessionParameters, put=__set_sessionParameters)) ::Org::BouncyCastle::Crypto::Tls::SessionParameters*  sessionParameters;

/// @brief Field sessionParametersBuilder offset 0x30
 __declspec(property(get=__get_sessionParametersBuilder, put=__set_sessionParametersBuilder)) ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*  sessionParametersBuilder;

/// @brief Field offeredCipherSuites offset 0x38
 __declspec(property(get=__get_offeredCipherSuites, put=__set_offeredCipherSuites)) ::ArrayW<int32_t,::Array<int32_t>*>  offeredCipherSuites;

/// @brief Field clientExtensions offset 0x40
 __declspec(property(get=__get_clientExtensions, put=__set_clientExtensions)) ::System::Collections::IDictionary*  clientExtensions;

/// @brief Field serverExtensions offset 0x48
 __declspec(property(get=__get_serverExtensions, put=__set_serverExtensions)) ::System::Collections::IDictionary*  serverExtensions;

/// @brief Field selectedSessionID offset 0x50
 __declspec(property(get=__get_selectedSessionID, put=__set_selectedSessionID)) ::ArrayW<uint8_t,::Array<uint8_t>*>  selectedSessionID;

/// @brief Field resumedSession offset 0x58
 __declspec(property(get=__get_resumedSession, put=__set_resumedSession)) bool  resumedSession;

/// @brief Field secure_renegotiation offset 0x59
 __declspec(property(get=__get_secure_renegotiation, put=__set_secure_renegotiation)) bool  secure_renegotiation;

/// @brief Field allowCertificateStatus offset 0x5a
 __declspec(property(get=__get_allowCertificateStatus, put=__set_allowCertificateStatus)) bool  allowCertificateStatus;

/// @brief Field expectSessionTicket offset 0x5b
 __declspec(property(get=__get_expectSessionTicket, put=__set_expectSessionTicket)) bool  expectSessionTicket;

/// @brief Field keyExchange offset 0x60
 __declspec(property(get=__get_keyExchange, put=__set_keyExchange)) ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*  keyExchange;

/// @brief Field authentication offset 0x68
 __declspec(property(get=__get_authentication, put=__set_authentication)) ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*  authentication;

/// @brief Field certificateStatus offset 0x70
 __declspec(property(get=__get_certificateStatus, put=__set_certificateStatus)) ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*  certificateStatus;

/// @brief Field certificateRequest offset 0x78
 __declspec(property(get=__get_certificateRequest, put=__set_certificateRequest)) ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  certificateRequest;

/// @brief Field clientCredentials offset 0x80
 __declspec(property(get=__get_clientCredentials, put=__set_clientCredentials)) ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  clientCredentials;

constexpr void __set_client(::Org::BouncyCastle::Crypto::Tls::TlsClient*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* __get_client() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClient*> __get_client() const;

constexpr void __set_clientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* __get_clientContext() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*> __get_clientContext() const;

constexpr void __set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession* __get_tlsSession() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> __get_tlsSession() const;

constexpr void __set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters* __get_sessionParameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> __get_sessionParameters() const;

constexpr void __set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* __get_sessionParametersBuilder() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*> __get_sessionParametersBuilder() const;

constexpr void __set_offeredCipherSuites(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_offeredCipherSuites() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_offeredCipherSuites() const;

constexpr void __set_clientExtensions(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_clientExtensions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_clientExtensions() const;

constexpr void __set_serverExtensions(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_serverExtensions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_serverExtensions() const;

constexpr void __set_selectedSessionID(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_selectedSessionID() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_selectedSessionID() const;

constexpr void __set_resumedSession(bool  value) ;

constexpr bool& __get_resumedSession() ;

constexpr bool const& __get_resumedSession() const;

constexpr void __set_secure_renegotiation(bool  value) ;

constexpr bool& __get_secure_renegotiation() ;

constexpr bool const& __get_secure_renegotiation() const;

constexpr void __set_allowCertificateStatus(bool  value) ;

constexpr bool& __get_allowCertificateStatus() ;

constexpr bool const& __get_allowCertificateStatus() const;

constexpr void __set_expectSessionTicket(bool  value) ;

constexpr bool& __get_expectSessionTicket() ;

constexpr bool const& __get_expectSessionTicket() const;

constexpr void __set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* __get_keyExchange() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> __get_keyExchange() const;

constexpr void __set_authentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* __get_authentication() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*> __get_authentication() const;

constexpr void __set_certificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* __get_certificateStatus() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*> __get_certificateStatus() const;

constexpr void __set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* __get_certificateRequest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> __get_certificateRequest() const;

constexpr void __set_clientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* __get_clientCredentials() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*> __get_clientCredentials() const;

static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* New_ctor() ;

/// @brief Method .ctor addr 0xf695b0 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsClientProtocol__ClientHandshakeState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DtlsClientProtocol__ClientHandshakeState(__DtlsClientProtocol__ClientHandshakeState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsClientProtocol__ClientHandshakeState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DtlsClientProtocol__ClientHandshakeState(__DtlsClientProtocol__ClientHandshakeState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DtlsClientProtocol__ClientHandshakeState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState, 0x88>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsClientProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1222))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1224))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsClientProtocol*
class CORDL_TYPE DtlsClientProtocol : public ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol {
public:
// Declarations
using ClientHandshakeState = ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Crypto::Tls::DtlsProtocol)]{};

static inline ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method .ctor addr 0xf68eac size 0x4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method Connect addr 0xf68eb0 size 0x700 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient*  client, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*  transport) ;

/// @brief Method AbortClientHandshake addr 0xf6970c size 0x50 virtual true final false
inline void AbortClientHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  recordLayer, uint8_t  alertDescription) ;

/// @brief Method ClientHandshake addr 0xf6975c size 0x1390 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* ClientHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  recordLayer) ;

/// @brief Method GenerateCertificateVerify addr 0xf6b53c size 0x84 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateCertificateVerify(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::DigitallySigned*  certificateVerify) ;

/// @brief Method GenerateClientHello addr 0xf6b5c0 size 0x5e0 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateClientHello(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::TlsClient*  client) ;

/// @brief Method GenerateClientKeyExchange addr 0xf6bba0 size 0xec virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state) ;

/// @brief Method InvalidateSession addr 0xf6bc8c size 0xc4 virtual true final false
inline void InvalidateSession(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state) ;

/// @brief Method ProcessCertificateRequest addr 0xf6bd50 size 0x14c virtual true final false
inline void ProcessCertificateRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessCertificateStatus addr 0xf6be9c size 0xc8 virtual true final false
inline void ProcessCertificateStatus(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessHelloVerifyRequest addr 0xf6bf64 size 0x18c virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessHelloVerifyRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessNewSessionTicket addr 0xf6c0f0 size 0x108 virtual true final false
inline void ProcessNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessServerCertificate addr 0xf6c1f8 size 0x224 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessServerHello addr 0xf6c41c size 0xca4 virtual true final false
inline void ProcessServerHello(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessServerKeyExchange addr 0xf6d0c0 size 0xf8 virtual true final false
inline void ProcessServerKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessServerSupplementalData addr 0xf6d1b8 size 0xfc virtual true final false
inline void ProcessServerSupplementalData(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ReportServerVersion addr 0xf6d2b4 size 0x144 virtual true final false
inline void ReportServerVersion(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*  server_version) ;

/// @brief Method PatchClientHelloWithCookie addr 0xf6b0fc size 0x130 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> PatchClientHelloWithCookie(::ArrayW<uint8_t,::Array<uint8_t>*>  clientHelloBody, ::ArrayW<uint8_t,::Array<uint8_t>*>  cookie) ;

// Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DtlsClientProtocol(DtlsClientProtocol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtlsClientProtocol(DtlsClientProtocol const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DtlsClientProtocol()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*, "Org.BouncyCastle.Crypto.Tls", "DtlsClientProtocol");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, "Org.BouncyCastle.Crypto.Tls", "DtlsClientProtocol/ClientHandshakeState");
