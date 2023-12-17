#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BCObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::BC {
class BCObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.BC::BCObjectIdentifiers
namespace Org::BouncyCastle::Asn1::BC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5))
// CS Name: ::Org.BouncyCastle.Asn1.BC::BCObjectIdentifiers*
class CORDL_TYPE BCObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_bc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc() ;

static inline void setStaticF_bc_pbe(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe() ;

static inline void setStaticF_bc_pbe_sha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1() ;

static inline void setStaticF_bc_pbe_sha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256() ;

static inline void setStaticF_bc_pbe_sha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha384() ;

static inline void setStaticF_bc_pbe_sha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha512() ;

static inline void setStaticF_bc_pbe_sha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha224() ;

static inline void setStaticF_bc_pbe_sha1_pkcs5(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs5() ;

static inline void setStaticF_bc_pbe_sha1_pkcs12(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs12() ;

static inline void setStaticF_bc_pbe_sha256_pkcs5(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs5() ;

static inline void setStaticF_bc_pbe_sha256_pkcs12(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs12() ;

static inline void setStaticF_bc_pbe_sha1_pkcs12_aes128_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs12_aes128_cbc() ;

static inline void setStaticF_bc_pbe_sha1_pkcs12_aes192_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs12_aes192_cbc() ;

static inline void setStaticF_bc_pbe_sha1_pkcs12_aes256_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha1_pkcs12_aes256_cbc() ;

static inline void setStaticF_bc_pbe_sha256_pkcs12_aes128_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs12_aes128_cbc() ;

static inline void setStaticF_bc_pbe_sha256_pkcs12_aes192_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs12_aes192_cbc() ;

static inline void setStaticF_bc_pbe_sha256_pkcs12_aes256_cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_pbe_sha256_pkcs12_aes256_cbc() ;

static inline void setStaticF_bc_sig(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_sig() ;

static inline void setStaticF_sphincs256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sphincs256() ;

static inline void setStaticF_sphincs256_with_BLAKE512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sphincs256_with_BLAKE512() ;

static inline void setStaticF_sphincs256_with_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sphincs256_with_SHA512() ;

static inline void setStaticF_sphincs256_with_SHA3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_sphincs256_with_SHA3_512() ;

static inline void setStaticF_xmss(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss() ;

static inline void setStaticF_xmss_with_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_with_SHA256() ;

static inline void setStaticF_xmss_with_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_with_SHA512() ;

static inline void setStaticF_xmss_with_SHAKE128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_with_SHAKE128() ;

static inline void setStaticF_xmss_with_SHAKE256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_with_SHAKE256() ;

static inline void setStaticF_xmss_mt(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt() ;

static inline void setStaticF_xmss_mt_with_SHA256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt_with_SHA256() ;

static inline void setStaticF_xmss_mt_with_SHA512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt_with_SHA512() ;

static inline void setStaticF_xmss_mt_with_SHAKE128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt_with_SHAKE128() ;

static inline void setStaticF_xmss_mt_with_SHAKE256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_xmss_mt_with_SHAKE256() ;

static inline void setStaticF_bc_exch(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_exch() ;

static inline void setStaticF_newHope(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_newHope() ;

static inline void setStaticF_bc_ext(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_bc_ext() ;

static inline void setStaticF_linkedCertificate(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_linkedCertificate() ;

static inline ::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe631c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BCObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BCObjectIdentifiers(BCObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BCObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BCObjectIdentifiers(BCObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BCObjectIdentifiers()  = default;
public:


// Fields

// Static field bc

// Static field bc_pbe

// Static field bc_pbe_sha1

// Static field bc_pbe_sha256

// Static field bc_pbe_sha384

// Static field bc_pbe_sha512

// Static field bc_pbe_sha224

// Static field bc_pbe_sha1_pkcs5

// Static field bc_pbe_sha1_pkcs12

// Static field bc_pbe_sha256_pkcs5

// Static field bc_pbe_sha256_pkcs12

// Static field bc_pbe_sha1_pkcs12_aes128_cbc

// Static field bc_pbe_sha1_pkcs12_aes192_cbc

// Static field bc_pbe_sha1_pkcs12_aes256_cbc

// Static field bc_pbe_sha256_pkcs12_aes128_cbc

// Static field bc_pbe_sha256_pkcs12_aes192_cbc

// Static field bc_pbe_sha256_pkcs12_aes256_cbc

// Static field bc_sig

// Static field sphincs256

// Static field sphincs256_with_BLAKE512

// Static field sphincs256_with_SHA512

// Static field sphincs256_with_SHA3_512

// Static field xmss

// Static field xmss_with_SHA256

// Static field xmss_with_SHA512

// Static field xmss_with_SHAKE128

// Static field xmss_with_SHAKE256

// Static field xmss_mt

// Static field xmss_mt_with_SHA256

// Static field xmss_mt_with_SHA512

// Static field xmss_mt_with_SHAKE128

// Static field xmss_mt_with_SHAKE256

// Static field bc_exch

// Static field newHope

// Static field bc_ext

// Static field linkedCertificate


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::BC
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BC::BCObjectIdentifiers*, "Org.BouncyCastle.Asn1.BC", "BCObjectIdentifiers");
