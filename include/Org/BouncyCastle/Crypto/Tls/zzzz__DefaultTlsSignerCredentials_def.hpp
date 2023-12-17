#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSignerCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsSignerCredentials)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsSignerCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsSignerCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1177))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1215))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsSignerCredentials*
class CORDL_TYPE DefaultTlsSignerCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials)]{};

/// @brief Field mContext offset 0x10
 __declspec(property(get=__get_mContext, put=__set_mContext)) ::Org::BouncyCastle::Crypto::Tls::TlsContext*  mContext;

/// @brief Field mCertificate offset 0x18
 __declspec(property(get=__get_mCertificate, put=__set_mCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate*  mCertificate;

/// @brief Field mPrivateKey offset 0x20
 __declspec(property(get=__get_mPrivateKey, put=__set_mPrivateKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  mPrivateKey;

/// @brief Field mSignatureAndHashAlgorithm offset 0x28
 __declspec(property(get=__get_mSignatureAndHashAlgorithm, put=__set_mSignatureAndHashAlgorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  mSignatureAndHashAlgorithm;

/// @brief Field mSigner offset 0x30
 __declspec(property(get=__get_mSigner, put=__set_mSigner)) ::Org::BouncyCastle::Crypto::Tls::TlsSigner*  mSigner;

 __declspec(property(get=get_Certificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate*  Certificate;

 __declspec(property(get=get_SignatureAndHashAlgorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  SignatureAndHashAlgorithm;

constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* __get_mContext() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> __get_mContext() const;

constexpr void __set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* __get_mCertificate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> __get_mCertificate() const;

constexpr void __set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* __get_mPrivateKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> __get_mPrivateKey() const;

constexpr void __set_mSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* __get_mSignatureAndHashAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*> __get_mSignatureAndHashAlgorithm() const;

constexpr void __set_mSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner* __get_mSigner() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSigner*> __get_mSigner() const;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::Certificate*  certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey) ;

/// @brief Method .ctor addr 0xf65a4c size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::Certificate*  certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey) ;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::Certificate*  certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  signatureAndHashAlgorithm) ;

/// @brief Method .ctor addr 0xf65a54 size 0x420 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Tls::Certificate*  certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  signatureAndHashAlgorithm) ;

/// @brief Method get_Certificate addr 0xf65e74 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate() ;

/// @brief Method GenerateCertificateSignature addr 0xf65e7c size 0x238 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateCertificateSignature(::ArrayW<uint8_t,::Array<uint8_t>*>  hash) ;

/// @brief Method get_SignatureAndHashAlgorithm addr 0xf660b4 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* get_SignatureAndHashAlgorithm() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSignerCredentials", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultTlsSignerCredentials(DefaultTlsSignerCredentials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSignerCredentials", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultTlsSignerCredentials(DefaultTlsSignerCredentials const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultTlsSignerCredentials()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsSignerCredentials");
