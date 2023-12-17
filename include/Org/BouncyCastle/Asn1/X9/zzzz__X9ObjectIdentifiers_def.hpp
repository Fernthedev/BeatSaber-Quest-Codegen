#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X9ObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9ObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.X9::X9ObjectIdentifiers
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(448))
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9ObjectIdentifiers*
class CORDL_TYPE X9ObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field AnsiX962 offset 0x0
static constexpr ::ConstString  AnsiX962{u"1.2.840.10045"};

/// @brief Field IdECSigType offset 0x0
static constexpr ::ConstString  IdECSigType{u"1.2.840.10045.4"};

/// @brief Field IdPublicKeyType offset 0x0
static constexpr ::ConstString  IdPublicKeyType{u"1.2.840.10045.2"};

static inline void setStaticF_ansi_X9_62(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ansi_X9_62() ;

static inline void setStaticF_IdFieldType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdFieldType() ;

static inline void setStaticF_PrimeField(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PrimeField() ;

static inline void setStaticF_CharacteristicTwoField(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CharacteristicTwoField() ;

static inline void setStaticF_GNBasis(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GNBasis() ;

static inline void setStaticF_TPBasis(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_TPBasis() ;

static inline void setStaticF_PPBasis(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PPBasis() ;

static inline void setStaticF_id_ecSigType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_ecSigType() ;

static inline void setStaticF_ECDsaWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECDsaWithSha1() ;

static inline void setStaticF_id_publicKeyType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_id_publicKeyType() ;

static inline void setStaticF_IdECPublicKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdECPublicKey() ;

static inline void setStaticF_ECDsaWithSha2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECDsaWithSha2() ;

static inline void setStaticF_ECDsaWithSha224(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECDsaWithSha224() ;

static inline void setStaticF_ECDsaWithSha256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECDsaWithSha256() ;

static inline void setStaticF_ECDsaWithSha384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECDsaWithSha384() ;

static inline void setStaticF_ECDsaWithSha512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ECDsaWithSha512() ;

static inline void setStaticF_EllipticCurve(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EllipticCurve() ;

static inline void setStaticF_CTwoCurve(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CTwoCurve() ;

static inline void setStaticF_C2Pnb163v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Pnb163v1() ;

static inline void setStaticF_C2Pnb163v2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Pnb163v2() ;

static inline void setStaticF_C2Pnb163v3(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Pnb163v3() ;

static inline void setStaticF_C2Pnb176w1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Pnb176w1() ;

static inline void setStaticF_C2Tnb191v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Tnb191v1() ;

static inline void setStaticF_C2Tnb191v2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Tnb191v2() ;

static inline void setStaticF_C2Tnb191v3(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Tnb191v3() ;

static inline void setStaticF_C2Onb191v4(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Onb191v4() ;

static inline void setStaticF_C2Onb191v5(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Onb191v5() ;

static inline void setStaticF_C2Pnb208w1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Pnb208w1() ;

static inline void setStaticF_C2Tnb239v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Tnb239v1() ;

static inline void setStaticF_C2Tnb239v2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Tnb239v2() ;

static inline void setStaticF_C2Tnb239v3(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Tnb239v3() ;

static inline void setStaticF_C2Onb239v4(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Onb239v4() ;

static inline void setStaticF_C2Onb239v5(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Onb239v5() ;

static inline void setStaticF_C2Pnb272w1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Pnb272w1() ;

static inline void setStaticF_C2Pnb304w1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Pnb304w1() ;

static inline void setStaticF_C2Tnb359v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Tnb359v1() ;

static inline void setStaticF_C2Pnb368w1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Pnb368w1() ;

static inline void setStaticF_C2Tnb431r1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C2Tnb431r1() ;

static inline void setStaticF_PrimeCurve(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PrimeCurve() ;

static inline void setStaticF_Prime192v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Prime192v1() ;

static inline void setStaticF_Prime192v2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Prime192v2() ;

static inline void setStaticF_Prime192v3(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Prime192v3() ;

static inline void setStaticF_Prime239v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Prime239v1() ;

static inline void setStaticF_Prime239v2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Prime239v2() ;

static inline void setStaticF_Prime239v3(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Prime239v3() ;

static inline void setStaticF_Prime256v1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Prime256v1() ;

static inline void setStaticF_IdDsa(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsa() ;

static inline void setStaticF_IdDsaWithSha1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdDsaWithSha1() ;

static inline void setStaticF_X9x63Scheme(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_X9x63Scheme() ;

static inline void setStaticF_DHSinglePassStdDHSha1KdfScheme(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHSinglePassStdDHSha1KdfScheme() ;

static inline void setStaticF_DHSinglePassCofactorDHSha1KdfScheme(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHSinglePassCofactorDHSha1KdfScheme() ;

static inline void setStaticF_MqvSinglePassSha1KdfScheme(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_MqvSinglePassSha1KdfScheme() ;

static inline void setStaticF_ansi_x9_42(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ansi_x9_42() ;

static inline void setStaticF_DHPublicNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHPublicNumber() ;

static inline void setStaticF_X9x42Schemes(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_X9x42Schemes() ;

static inline void setStaticF_DHStatic(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHStatic() ;

static inline void setStaticF_DHEphem(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHEphem() ;

static inline void setStaticF_DHOneFlow(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHOneFlow() ;

static inline void setStaticF_DHHybrid1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHHybrid1() ;

static inline void setStaticF_DHHybrid2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHHybrid2() ;

static inline void setStaticF_DHHybridOneFlow(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DHHybridOneFlow() ;

static inline void setStaticF_Mqv2(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Mqv2() ;

static inline void setStaticF_Mqv1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Mqv1() ;

static inline ::Org::BouncyCastle::Asn1::X9::X9ObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0x11b3294 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X9ObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X9ObjectIdentifiers(X9ObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X9ObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X9ObjectIdentifiers(X9ObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X9ObjectIdentifiers()  = default;
public:


// Fields

// Static field ansi_X9_62

// Static field IdFieldType

// Static field PrimeField

// Static field CharacteristicTwoField

// Static field GNBasis

// Static field TPBasis

// Static field PPBasis

// Static field id_ecSigType

// Static field ECDsaWithSha1

// Static field id_publicKeyType

// Static field IdECPublicKey

// Static field ECDsaWithSha2

// Static field ECDsaWithSha224

// Static field ECDsaWithSha256

// Static field ECDsaWithSha384

// Static field ECDsaWithSha512

// Static field EllipticCurve

// Static field CTwoCurve

// Static field C2Pnb163v1

// Static field C2Pnb163v2

// Static field C2Pnb163v3

// Static field C2Pnb176w1

// Static field C2Tnb191v1

// Static field C2Tnb191v2

// Static field C2Tnb191v3

// Static field C2Onb191v4

// Static field C2Onb191v5

// Static field C2Pnb208w1

// Static field C2Tnb239v1

// Static field C2Tnb239v2

// Static field C2Tnb239v3

// Static field C2Onb239v4

// Static field C2Onb239v5

// Static field C2Pnb272w1

// Static field C2Pnb304w1

// Static field C2Tnb359v1

// Static field C2Pnb368w1

// Static field C2Tnb431r1

// Static field PrimeCurve

// Static field Prime192v1

// Static field Prime192v2

// Static field Prime192v3

// Static field Prime239v1

// Static field Prime239v2

// Static field Prime239v3

// Static field Prime256v1

// Static field IdDsa

// Static field IdDsaWithSha1

// Static field X9x63Scheme

// Static field DHSinglePassStdDHSha1KdfScheme

// Static field DHSinglePassCofactorDHSha1KdfScheme

// Static field MqvSinglePassSha1KdfScheme

// Static field ansi_x9_42

// Static field DHPublicNumber

// Static field X9x42Schemes

// Static field DHStatic

// Static field DHEphem

// Static field DHOneFlow

// Static field DHHybrid1

// Static field DHHybrid2

// Static field DHHybridOneFlow

// Static field Mqv2

// Static field Mqv1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9ObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9ObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9ObjectIdentifiers*, "Org.BouncyCastle.Asn1.X9", "X9ObjectIdentifiers");
