#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsECDHKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsECDheKeyExchange)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsECDheKeyExchange;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange);
// Type: Org.BouncyCastle.Crypto.Tls::TlsECDheKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1304))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1305))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsECDheKeyExchange*
class CORDL_TYPE TlsECDheKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange)]{};

/// @brief Field mServerCredentials offset 0x68
 __declspec(property(get=__get_mServerCredentials, put=__set_mServerCredentials)) ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*  mServerCredentials;

constexpr void __set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* __get_mServerCredentials() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*> __get_mServerCredentials() const;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange* New_ctor(int32_t  keyExchange, ::System::Collections::IList*  supportedSignatureAlgorithms, ::ArrayW<int32_t,::Array<int32_t>*>  namedCurves, ::ArrayW<uint8_t,::Array<uint8_t>*>  clientECPointFormats, ::ArrayW<uint8_t,::Array<uint8_t>*>  serverECPointFormats) ;

/// @brief Method .ctor addr 0xfaaf30 size 0x8 virtual false final false
inline void _ctor(int32_t  keyExchange, ::System::Collections::IList*  supportedSignatureAlgorithms, ::ArrayW<int32_t,::Array<int32_t>*>  namedCurves, ::ArrayW<uint8_t,::Array<uint8_t>*>  clientECPointFormats, ::ArrayW<uint8_t,::Array<uint8_t>*>  serverECPointFormats) ;

/// @brief Method ProcessServerCredentials addr 0xfaaf38 size 0x168 virtual true final false
inline void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  serverCredentials) ;

/// @brief Method GenerateServerKeyExchange addr 0xfab0a0 size 0x404 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0xfab67c size 0x304 virtual true final false
inline void ProcessServerKeyExchange(::System::IO::Stream*  input) ;

/// @brief Method ValidateCertificateRequest addr 0xfab980 size 0x9c virtual true final false
inline void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  certificateRequest) ;

/// @brief Method ProcessClientCredentials addr 0xfaba1c size 0x8c virtual true final false
inline void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  clientCredentials) ;

/// @brief Method InitVerifyer addr 0xfabaa8 size 0x1d0 virtual true final false
inline ::Org::BouncyCastle::Crypto::ISigner* InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner*  tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  algorithm, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*  securityParameters) ;

// Ctor Parameters [CppParam { name: "", ty: "TlsECDheKeyExchange", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsECDheKeyExchange(TlsECDheKeyExchange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsECDheKeyExchange", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsECDheKeyExchange(TlsECDheKeyExchange const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TlsECDheKeyExchange()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange, 0x70>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange*, "Org.BouncyCastle.Crypto.Tls", "TlsECDheKeyExchange");
