#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UAObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::UA {
class UAObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.UA::UAObjectIdentifiers
namespace Org::BouncyCastle::Asn1::UA {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(319))
// CS Name: ::Org.BouncyCastle.Asn1.UA::UAObjectIdentifiers*
class CORDL_TYPE UAObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_UaOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_UaOid() ;

static inline void setStaticF_dstu4145le(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu4145le() ;

static inline void setStaticF_dstu4145be(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu4145be() ;

static inline void setStaticF_dstu7564digest_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564digest_256() ;

static inline void setStaticF_dstu7564digest_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564digest_384() ;

static inline void setStaticF_dstu7564digest_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564digest_512() ;

static inline void setStaticF_dstu7564mac_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564mac_256() ;

static inline void setStaticF_dstu7564mac_384(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564mac_384() ;

static inline void setStaticF_dstu7564mac_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7564mac_512() ;

static inline void setStaticF_dstu7624ecb_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ecb_128() ;

static inline void setStaticF_dstu7624ecb_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ecb_256() ;

static inline void setStaticF_dstu7624ecb_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ecb_512() ;

static inline void setStaticF_dstu7624ctr_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ctr_128() ;

static inline void setStaticF_dstu7624ctr_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ctr_256() ;

static inline void setStaticF_dstu7624ctr_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ctr_512() ;

static inline void setStaticF_dstu7624cfb_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cfb_128() ;

static inline void setStaticF_dstu7624cfb_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cfb_256() ;

static inline void setStaticF_dstu7624cfb_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cfb_512() ;

static inline void setStaticF_dstu7624cmac_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cmac_128() ;

static inline void setStaticF_dstu7624cmac_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cmac_256() ;

static inline void setStaticF_dstu7624cmac_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cmac_512() ;

static inline void setStaticF_dstu7624cbc_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cbc_128() ;

static inline void setStaticF_dstu7624cbc_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cbc_256() ;

static inline void setStaticF_dstu7624cbc_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624cbc_512() ;

static inline void setStaticF_dstu7624ofb_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ofb_128() ;

static inline void setStaticF_dstu7624ofb_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ofb_256() ;

static inline void setStaticF_dstu7624ofb_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ofb_512() ;

static inline void setStaticF_dstu7624gmac_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624gmac_128() ;

static inline void setStaticF_dstu7624gmac_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624gmac_256() ;

static inline void setStaticF_dstu7624gmac_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624gmac_512() ;

static inline void setStaticF_dstu7624ccm_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ccm_128() ;

static inline void setStaticF_dstu7624ccm_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ccm_256() ;

static inline void setStaticF_dstu7624ccm_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624ccm_512() ;

static inline void setStaticF_dstu7624xts_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624xts_128() ;

static inline void setStaticF_dstu7624xts_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624xts_256() ;

static inline void setStaticF_dstu7624xts_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624xts_512() ;

static inline void setStaticF_dstu7624kw_128(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624kw_128() ;

static inline void setStaticF_dstu7624kw_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624kw_256() ;

static inline void setStaticF_dstu7624kw_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_dstu7624kw_512() ;

static inline ::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0x107b100 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UAObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UAObjectIdentifiers(UAObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UAObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UAObjectIdentifiers(UAObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UAObjectIdentifiers()  = default;
public:


// Fields

// Static field UaOid

// Static field dstu4145le

// Static field dstu4145be

// Static field dstu7564digest_256

// Static field dstu7564digest_384

// Static field dstu7564digest_512

// Static field dstu7564mac_256

// Static field dstu7564mac_384

// Static field dstu7564mac_512

// Static field dstu7624ecb_128

// Static field dstu7624ecb_256

// Static field dstu7624ecb_512

// Static field dstu7624ctr_128

// Static field dstu7624ctr_256

// Static field dstu7624ctr_512

// Static field dstu7624cfb_128

// Static field dstu7624cfb_256

// Static field dstu7624cfb_512

// Static field dstu7624cmac_128

// Static field dstu7624cmac_256

// Static field dstu7624cmac_512

// Static field dstu7624cbc_128

// Static field dstu7624cbc_256

// Static field dstu7624cbc_512

// Static field dstu7624ofb_128

// Static field dstu7624ofb_256

// Static field dstu7624ofb_512

// Static field dstu7624gmac_128

// Static field dstu7624gmac_256

// Static field dstu7624gmac_512

// Static field dstu7624ccm_128

// Static field dstu7624ccm_256

// Static field dstu7624ccm_512

// Static field dstu7624xts_128

// Static field dstu7624xts_256

// Static field dstu7624xts_512

// Static field dstu7624kw_128

// Static field dstu7624kw_256

// Static field dstu7624kw_512


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::UA
NEED_NO_BOX(::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::UA::UAObjectIdentifiers*, "Org.BouncyCastle.Asn1.UA", "UAObjectIdentifiers");
