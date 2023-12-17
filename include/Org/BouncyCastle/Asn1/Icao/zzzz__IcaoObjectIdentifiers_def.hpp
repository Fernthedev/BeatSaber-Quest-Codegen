#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IcaoObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class IcaoObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.Icao::IcaoObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(176))
// CS Name: ::Org.BouncyCastle.Asn1.Icao::IcaoObjectIdentifiers*
class CORDL_TYPE IcaoObjectIdentifiers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_IdIcao(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcao() ;

static inline void setStaticF_IdIcaoMrtd(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoMrtd() ;

static inline void setStaticF_IdIcaoMrtdSecurity(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoMrtdSecurity() ;

static inline void setStaticF_IdIcaoLdsSecurityObject(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoLdsSecurityObject() ;

static inline void setStaticF_IdIcaoCscaMasterList(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoCscaMasterList() ;

static inline void setStaticF_IdIcaoCscaMasterListSigningKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoCscaMasterListSigningKey() ;

static inline void setStaticF_IdIcaoDocumentTypeList(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoDocumentTypeList() ;

static inline void setStaticF_IdIcaoAAProtocolObject(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoAAProtocolObject() ;

static inline void setStaticF_IdIcaoExtensions(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoExtensions() ;

static inline void setStaticF_IdIcaoExtensionsNamechangekeyrollover(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIcaoExtensionsNamechangekeyrollover() ;

static inline ::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers* New_ctor() ;

/// @brief Method .ctor addr 0xf74d9c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IcaoObjectIdentifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IcaoObjectIdentifiers(IcaoObjectIdentifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IcaoObjectIdentifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IcaoObjectIdentifiers(IcaoObjectIdentifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IcaoObjectIdentifiers()  = default;
public:


// Fields

// Static field IdIcao

// Static field IdIcaoMrtd

// Static field IdIcaoMrtdSecurity

// Static field IdIcaoLdsSecurityObject

// Static field IdIcaoCscaMasterList

// Static field IdIcaoCscaMasterListSigningKey

// Static field IdIcaoDocumentTypeList

// Static field IdIcaoAAProtocolObject

// Static field IdIcaoExtensions

// Static field IdIcaoExtensionsNamechangekeyrollover


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::IcaoObjectIdentifiers*, "Org.BouncyCastle.Asn1.Icao", "IcaoObjectIdentifiers");
