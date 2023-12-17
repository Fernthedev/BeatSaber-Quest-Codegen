#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NistObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Nist {
class NistObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Nist::NistObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Nist {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(204))
// CS Name: ::Org.BouncyCastle.Asn1.Nist::NistObjectIdentifiers*
class CORDL_TYPE NistObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_NistAlgorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NistAlgorithm() ;

static inline void setStaticF_HashAlgs(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_HashAlgs() ;

static inline void setStaticF_IdSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha256() ;

static inline void setStaticF_IdSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha384() ;

static inline void setStaticF_IdSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha512() ;

static inline void setStaticF_IdSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha224() ;

static inline void setStaticF_IdSha512_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha512_224() ;

static inline void setStaticF_IdSha512_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha512_256() ;

static inline void setStaticF_IdSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha3_224() ;

static inline void setStaticF_IdSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha3_256() ;

static inline void setStaticF_IdSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha3_384() ;

static inline void setStaticF_IdSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdSha3_512() ;

static inline void setStaticF_IdShake128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdShake128() ;

static inline void setStaticF_IdShake256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdShake256() ;

static inline void setStaticF_IdHMacWithSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHMacWithSha3_224() ;

static inline void setStaticF_IdHMacWithSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHMacWithSha3_256() ;

static inline void setStaticF_IdHMacWithSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHMacWithSha3_384() ;

static inline void setStaticF_IdHMacWithSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdHMacWithSha3_512() ;

static inline void setStaticF_IdShake128Len(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdShake128Len() ;

static inline void setStaticF_IdShake256Len(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdShake256Len() ;

static inline void setStaticF_IdKmacWithShake128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdKmacWithShake128() ;

static inline void setStaticF_IdKmacWithShake256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdKmacWithShake256() ;

static inline void setStaticF_Aes(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Aes() ;

static inline void setStaticF_IdAes128Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Ecb() ;

static inline void setStaticF_IdAes128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Cbc() ;

static inline void setStaticF_IdAes128Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Ofb() ;

static inline void setStaticF_IdAes128Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Cfb() ;

static inline void setStaticF_IdAes128Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Wrap() ;

static inline void setStaticF_IdAes128Gcm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Gcm() ;

static inline void setStaticF_IdAes128Ccm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes128Ccm() ;

static inline void setStaticF_IdAes192Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Ecb() ;

static inline void setStaticF_IdAes192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Cbc() ;

static inline void setStaticF_IdAes192Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Ofb() ;

static inline void setStaticF_IdAes192Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Cfb() ;

static inline void setStaticF_IdAes192Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Wrap() ;

static inline void setStaticF_IdAes192Gcm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Gcm() ;

static inline void setStaticF_IdAes192Ccm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes192Ccm() ;

static inline void setStaticF_IdAes256Ecb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Ecb() ;

static inline void setStaticF_IdAes256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Cbc() ;

static inline void setStaticF_IdAes256Ofb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Ofb() ;

static inline void setStaticF_IdAes256Cfb(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Cfb() ;

static inline void setStaticF_IdAes256Wrap(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Wrap() ;

static inline void setStaticF_IdAes256Gcm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Gcm() ;

static inline void setStaticF_IdAes256Ccm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdAes256Ccm() ;

static inline void setStaticF_IdDsaWithSha2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha2() ;

static inline void setStaticF_DsaWithSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha224() ;

static inline void setStaticF_DsaWithSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha256() ;

static inline void setStaticF_DsaWithSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha384() ;

static inline void setStaticF_DsaWithSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DsaWithSha512() ;

static inline void setStaticF_IdDsaWithSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha3_224() ;

static inline void setStaticF_IdDsaWithSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha3_256() ;

static inline void setStaticF_IdDsaWithSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha3_384() ;

static inline void setStaticF_IdDsaWithSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha3_512() ;

static inline void setStaticF_IdEcdsaWithSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEcdsaWithSha3_224() ;

static inline void setStaticF_IdEcdsaWithSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEcdsaWithSha3_256() ;

static inline void setStaticF_IdEcdsaWithSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEcdsaWithSha3_384() ;

static inline void setStaticF_IdEcdsaWithSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdEcdsaWithSha3_512() ;

static inline void setStaticF_IdRsassaPkcs1V15WithSha3_224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPkcs1V15WithSha3_224() ;

static inline void setStaticF_IdRsassaPkcs1V15WithSha3_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPkcs1V15WithSha3_256() ;

static inline void setStaticF_IdRsassaPkcs1V15WithSha3_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPkcs1V15WithSha3_384() ;

static inline void setStaticF_IdRsassaPkcs1V15WithSha3_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdRsassaPkcs1V15WithSha3_512() ;

static inline ::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xf7e03c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NistObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NistObjectIdentifiers(NistObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NistObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NistObjectIdentifiers(NistObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NistObjectIdentifiers()  = default;
public:


// Fields

// Static field NistAlgorithm

// Static field HashAlgs

// Static field IdSha256

// Static field IdSha384

// Static field IdSha512

// Static field IdSha224

// Static field IdSha512_224

// Static field IdSha512_256

// Static field IdSha3_224

// Static field IdSha3_256

// Static field IdSha3_384

// Static field IdSha3_512

// Static field IdShake128

// Static field IdShake256

// Static field IdHMacWithSha3_224

// Static field IdHMacWithSha3_256

// Static field IdHMacWithSha3_384

// Static field IdHMacWithSha3_512

// Static field IdShake128Len

// Static field IdShake256Len

// Static field IdKmacWithShake128

// Static field IdKmacWithShake256

// Static field Aes

// Static field IdAes128Ecb

// Static field IdAes128Cbc

// Static field IdAes128Ofb

// Static field IdAes128Cfb

// Static field IdAes128Wrap

// Static field IdAes128Gcm

// Static field IdAes128Ccm

// Static field IdAes192Ecb

// Static field IdAes192Cbc

// Static field IdAes192Ofb

// Static field IdAes192Cfb

// Static field IdAes192Wrap

// Static field IdAes192Gcm

// Static field IdAes192Ccm

// Static field IdAes256Ecb

// Static field IdAes256Cbc

// Static field IdAes256Ofb

// Static field IdAes256Cfb

// Static field IdAes256Wrap

// Static field IdAes256Gcm

// Static field IdAes256Ccm

// Static field IdDsaWithSha2

// Static field DsaWithSha224

// Static field DsaWithSha256

// Static field DsaWithSha384

// Static field DsaWithSha512

// Static field IdDsaWithSha3_224

// Static field IdDsaWithSha3_256

// Static field IdDsaWithSha3_384

// Static field IdDsaWithSha3_512

// Static field IdEcdsaWithSha3_224

// Static field IdEcdsaWithSha3_256

// Static field IdEcdsaWithSha3_384

// Static field IdEcdsaWithSha3_512

// Static field IdRsassaPkcs1V15WithSha3_224

// Static field IdRsassaPkcs1V15WithSha3_256

// Static field IdRsassaPkcs1V15WithSha3_384

// Static field IdRsassaPkcs1V15WithSha3_512


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Nist
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Nist::NistObjectIdentifiers*, "Org.BouncyCastle.Asn1.Nist", "NistObjectIdentifiers");
