#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CryptoProObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class CryptoProObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.CryptoPro::CryptoProObjectIdentifiers
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(125))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::CryptoProObjectIdentifiers*
class CORDL_TYPE CryptoProObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field GostID offset 0x0
static constexpr ::ConstString  GostID{u"1.2.643.2.2"};

static inline void setStaticF_GostR3411(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411() ;

static inline void setStaticF_GostR3411Hmac(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411Hmac() ;

static inline void setStaticF_GostR28147Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR28147Cbc() ;

static inline void setStaticF_ID_Gost28147_89_CryptoPro_A_ParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ID_Gost28147_89_CryptoPro_A_ParamSet() ;

static inline void setStaticF_GostR3410x94(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94() ;

static inline void setStaticF_GostR3410x2001(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001() ;

static inline void setStaticF_GostR3411x94WithGostR3410x94(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411x94WithGostR3410x94() ;

static inline void setStaticF_GostR3411x94WithGostR3410x2001(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411x94WithGostR3410x2001() ;

static inline void setStaticF_GostR3411x94CryptoProParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411x94CryptoProParamSet() ;

static inline void setStaticF_GostR3410x94CryptoProA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProA() ;

static inline void setStaticF_GostR3410x94CryptoProB(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProB() ;

static inline void setStaticF_GostR3410x94CryptoProC(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProC() ;

static inline void setStaticF_GostR3410x94CryptoProD(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProD() ;

static inline void setStaticF_GostR3410x94CryptoProXchA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProXchA() ;

static inline void setStaticF_GostR3410x94CryptoProXchB(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProXchB() ;

static inline void setStaticF_GostR3410x94CryptoProXchC(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProXchC() ;

static inline void setStaticF_GostR3410x2001CryptoProA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProA() ;

static inline void setStaticF_GostR3410x2001CryptoProB(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProB() ;

static inline void setStaticF_GostR3410x2001CryptoProC(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProC() ;

static inline void setStaticF_GostR3410x2001CryptoProXchA(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProXchA() ;

static inline void setStaticF_GostR3410x2001CryptoProXchB(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProXchB() ;

static inline void setStaticF_GostElSgDH3410Default(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostElSgDH3410Default() ;

static inline void setStaticF_GostElSgDH3410x1(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostElSgDH3410x1() ;

static inline ::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xe89a7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CryptoProObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoProObjectIdentifiers(CryptoProObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoProObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoProObjectIdentifiers(CryptoProObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CryptoProObjectIdentifiers()  = default;
public:


// Fields

// Static field GostR3411

// Static field GostR3411Hmac

// Static field GostR28147Cbc

// Static field ID_Gost28147_89_CryptoPro_A_ParamSet

// Static field GostR3410x94

// Static field GostR3410x2001

// Static field GostR3411x94WithGostR3410x94

// Static field GostR3411x94WithGostR3410x2001

// Static field GostR3411x94CryptoProParamSet

// Static field GostR3410x94CryptoProA

// Static field GostR3410x94CryptoProB

// Static field GostR3410x94CryptoProC

// Static field GostR3410x94CryptoProD

// Static field GostR3410x94CryptoProXchA

// Static field GostR3410x94CryptoProXchB

// Static field GostR3410x94CryptoProXchC

// Static field GostR3410x2001CryptoProA

// Static field GostR3410x2001CryptoProB

// Static field GostR3410x2001CryptoProC

// Static field GostR3410x2001CryptoProXchA

// Static field GostR3410x2001CryptoProXchB

// Static field GostElSgDH3410Default

// Static field GostElSgDH3410x1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers*, "Org.BouncyCastle.Asn1.CryptoPro", "CryptoProObjectIdentifiers");
