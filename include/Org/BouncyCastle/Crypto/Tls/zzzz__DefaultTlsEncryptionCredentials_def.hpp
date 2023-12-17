#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsEncryptionCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsEncryptionCredentials)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsEncryptionCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsEncryptionCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1169))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1213))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsEncryptionCredentials*
class CORDL_TYPE DefaultTlsEncryptionCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials)]{};

/// @brief Field mContext offset 0x10
 __declspec(property(get=__get_mContext, put=__set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsContext*  mContext;

/// @brief Field mCertificate offset 0x18
 __declspec(property(get=__get_mCertificate, put=__set_mCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate*  mCertificate;

/// @brief Field mPrivateKey offset 0x20
 __declspec(property(get=__get_mPrivateKey, put=__set_mPrivateKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  mPrivateKey;

 __declspec(property(get=get_Certificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate*  Certificate;

constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* __get_mContext() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> __get_mContext() const;

constexpr void __set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* __get_mCertificate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> __get_mCertificate() const;

constexpr void __set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* __get_mPrivateKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> __get_mPrivateKey() const;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::Certificate*  certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey) ;

/// @brief Method .ctor addr 0xf6505c size 0x234 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::Certificate*  certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey) ;

/// @brief Method get_Certificate addr 0xf65290 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate() ;

/// @brief Method DecryptPreMasterSecret addr 0xf65298 size 0x90 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecryptPreMasterSecret(::ArrayW<uint8_t,::Array<uint8_t>*>  encryptedPreMasterSecret) ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsEncryptionCredentials", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultTlsEncryptionCredentials(DefaultTlsEncryptionCredentials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsEncryptionCredentials", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultTlsEncryptionCredentials(DefaultTlsEncryptionCredentials const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultTlsEncryptionCredentials()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsEncryptionCredentials");
