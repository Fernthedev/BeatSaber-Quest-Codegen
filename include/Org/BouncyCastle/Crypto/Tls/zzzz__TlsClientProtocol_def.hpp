#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsClientProtocol)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientProtocol;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol);
// Type: Org.BouncyCastle.Crypto.Tls::TlsClientProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1292))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1293))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsClientProtocol*
class CORDL_TYPE TlsClientProtocol : public ::Org::BouncyCastle::Crypto::Tls::TlsProtocol {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe0 - sizeof(::Org::BouncyCastle::Crypto::Tls::TlsProtocol)]{};

/// @brief Field mTlsClient offset 0xa8
 __declspec(property(get=__get_mTlsClient, put=__set_mTlsClient)) ::Org::BouncyCastle::Crypto::Tls::TlsClient*  mTlsClient;

/// @brief Field mTlsClientContext offset 0xb0
 __declspec(property(get=__get_mTlsClientContext, put=__set_mTlsClientContext)) ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*  mTlsClientContext;

/// @brief Field mSelectedSessionID offset 0xb8
 __declspec(property(get=__get_mSelectedSessionID, put=__set_mSelectedSessionID)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mSelectedSessionID;

/// @brief Field mKeyExchange offset 0xc0
 __declspec(property(get=__get_mKeyExchange, put=__set_mKeyExchange)) ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*  mKeyExchange;

/// @brief Field mAuthentication offset 0xc8
 __declspec(property(get=__get_mAuthentication, put=__set_mAuthentication)) ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*  mAuthentication;

/// @brief Field mCertificateStatus offset 0xd0
 __declspec(property(get=__get_mCertificateStatus, put=__set_mCertificateStatus)) ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*  mCertificateStatus;

/// @brief Field mCertificateRequest offset 0xd8
 __declspec(property(get=__get_mCertificateRequest, put=__set_mCertificateRequest)) ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  mCertificateRequest;

 __declspec(property(get=get_Context)) ::Org::BouncyCastle::Crypto::Tls::TlsContext*  Context;

 __declspec(property(get=get_ContextAdmin)) ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*  ContextAdmin;

 __declspec(property(get=get_Peer)) ::Org::BouncyCastle::Crypto::Tls::TlsPeer*  Peer;

constexpr void __set_mTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsClient*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient* __get_mTlsClient() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClient*> __get_mTlsClient() const;

constexpr void __set_mTlsClientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* __get_mTlsClientContext() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*> __get_mTlsClientContext() const;

constexpr void __set_mSelectedSessionID(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mSelectedSessionID() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mSelectedSessionID() const;

constexpr void __set_mKeyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* __get_mKeyExchange() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> __get_mKeyExchange() const;

constexpr void __set_mAuthentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* __get_mAuthentication() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*> __get_mAuthentication() const;

constexpr void __set_mCertificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus* __get_mCertificateStatus() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*> __get_mCertificateStatus() const;

constexpr void __set_mCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest* __get_mCertificateRequest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> __get_mCertificateRequest() const;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* New_ctor(::System::IO::Stream*  stream, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method .ctor addr 0xf9fe68 size 0x20 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* New_ctor(::System::IO::Stream*  input, ::System::IO::Stream*  output, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method .ctor addr 0xf9fe88 size 0x18 virtual false final false
inline void _ctor(::System::IO::Stream*  input, ::System::IO::Stream*  output, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method .ctor addr 0xf9fea0 size 0x18 virtual false final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method Connect addr 0xf9feb8 size 0x478 virtual true final false
inline void Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient*  tlsClient) ;

/// @brief Method CleanupHandshake addr 0xfa0330 size 0x24 virtual true final false
inline void CleanupHandshake() ;

/// @brief Method get_Context addr 0xfa0354 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* get_Context() ;

/// @brief Method get_ContextAdmin addr 0xfa035c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* get_ContextAdmin() ;

/// @brief Method get_Peer addr 0xfa0364 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* get_Peer() ;

/// @brief Method HandleHandshakeMessage addr 0xfa036c size 0x1260 virtual true final false
inline void HandleHandshakeMessage(uint8_t  type, ::System::IO::MemoryStream*  buf) ;

/// @brief Method HandleSupplementalData addr 0xfa15cc size 0x1b0 virtual true final false
inline void HandleSupplementalData(::System::Collections::IList*  serverSupplementalData) ;

/// @brief Method ReceiveNewSessionTicketMessage addr 0xfa177c size 0xc0 virtual true final false
inline void ReceiveNewSessionTicketMessage(::System::IO::MemoryStream*  buf) ;

/// @brief Method ReceiveServerHelloMessage addr 0xfa183c size 0xea4 virtual true final false
inline void ReceiveServerHelloMessage(::System::IO::MemoryStream*  buf) ;

/// @brief Method SendCertificateVerifyMessage addr 0xfa26e0 size 0x8c virtual true final false
inline void SendCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::DigitallySigned*  certificateVerify) ;

/// @brief Method SendClientHelloMessage addr 0xfa276c size 0x6a0 virtual true final false
inline void SendClientHelloMessage() ;

/// @brief Method SendClientKeyExchangeMessage addr 0xfa2e0c size 0xe4 virtual true final false
inline void SendClientKeyExchangeMessage() ;

// Ctor Parameters [CppParam { name: "", ty: "TlsClientProtocol", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsClientProtocol(TlsClientProtocol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsClientProtocol", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsClientProtocol(TlsClientProtocol const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsClientProtocol()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, 0xe0>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol*, "Org.BouncyCastle.Crypto.Tls", "TlsClientProtocol");
