#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsRsaKeyExchange)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsRsaKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsRsaKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1171))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1318))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsRsaKeyExchange*
class CORDL_TYPE TlsRsaKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange)]{};

/// @brief Field mServerPublicKey offset 0x28
 __declspec(property(get=__get_mServerPublicKey, put=__set_mServerPublicKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  mServerPublicKey;

/// @brief Field mRsaServerPublicKey offset 0x30
 __declspec(property(get=__get_mRsaServerPublicKey, put=__set_mRsaServerPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*  mRsaServerPublicKey;

/// @brief Field mServerCredentials offset 0x38
 __declspec(property(get=__get_mServerCredentials, put=__set_mServerCredentials)) ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*  mServerCredentials;

/// @brief Field mPremasterSecret offset 0x40
 __declspec(property(get=__get_mPremasterSecret, put=__set_mPremasterSecret)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mPremasterSecret;

constexpr void __set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* __get_mServerPublicKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> __get_mServerPublicKey() const;

constexpr void __set_mRsaServerPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* __get_mRsaServerPublicKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> __get_mRsaServerPublicKey() const;

constexpr void __set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* __get_mServerCredentials() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*> __get_mServerCredentials() const;

constexpr void __set_mPremasterSecret(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mPremasterSecret() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mPremasterSecret() const;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange* New_ctor(::System::Collections::IList*  supportedSignatureAlgorithms) ;

/// @brief Method .ctor addr 0xfb1194 size 0x18 virtual false final false
inline void _ctor(::System::Collections::IList*  supportedSignatureAlgorithms) ;

/// @brief Method SkipServerCredentials addr 0xfb11ac size 0x40 virtual true final false
inline void SkipServerCredentials() ;

/// @brief Method ProcessServerCredentials addr 0xfb11ec size 0x168 virtual true final false
inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  serverCredentials) ;

/// @brief Method ProcessServerCertificate addr 0xfb1354 size 0x240 virtual true final false
inline void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate*  serverCertificate) ;

/// @brief Method ValidateCertificateRequest addr 0xfb1594 size 0x9c virtual true final false
inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  certificateRequest) ;

/// @brief Method ProcessClientCredentials addr 0xfb1630 size 0x8c virtual true final false
inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  clientCredentials) ;

/// @brief Method GenerateClientKeyExchange addr 0xfb16bc size 0x28 virtual true final false
inline void GenerateClientKeyExchange(::System::IO::Stream*  output) ;

/// @brief Method ProcessClientKeyExchange addr 0xfb16e4 size 0x118 virtual true final false
inline void ProcessClientKeyExchange(::System::IO::Stream*  input) ;

/// @brief Method GeneratePremasterSecret addr 0xfb17fc size 0x58 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GeneratePremasterSecret() ;

/// @brief Method ValidateRsaPublicKey addr 0xfb1854 size 0x70 virtual true final false
inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ValidateRsaPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*  key) ;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaKeyExchange", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsRsaKeyExchange(TlsRsaKeyExchange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaKeyExchange", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsRsaKeyExchange(TlsRsaKeyExchange const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsRsaKeyExchange()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsRsaKeyExchange");
