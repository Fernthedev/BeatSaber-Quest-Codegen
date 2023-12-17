#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SmimeCapabilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities);
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapabilities
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(292))
// CS Name: ::Org.BouncyCastle.Asn1.Smime::SmimeCapabilities*
class CORDL_TYPE SmimeCapabilities : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field capabilities offset 0x10
 __declspec(property(get=__get_capabilities, put=__set_capabilities)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  capabilities;

static inline void setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PreferSignedData() ;

static inline void setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CannotDecryptAny() ;

static inline void setStaticF_SmimeCapabilitesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SmimeCapabilitesVersions() ;

static inline void setStaticF_Aes256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Aes256Cbc() ;

static inline void setStaticF_Aes192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Aes192Cbc() ;

static inline void setStaticF_Aes128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Aes128Cbc() ;

static inline void setStaticF_IdeaCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdeaCbc() ;

static inline void setStaticF_Cast5Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Cast5Cbc() ;

static inline void setStaticF_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCbc() ;

static inline void setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde3Cbc() ;

static inline void setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RC2Cbc() ;

constexpr void __set_capabilities(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_capabilities() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_capabilities() const;

/// @brief Method GetInstance addr 0x1073354 size 0x240 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x1073594 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetCapabilities addr 0x10735bc size 0x7c virtual false final false
inline ::System::Collections::ArrayList* GetCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  capability) ;

/// @brief Method GetCapabilitiesForOid addr 0x1073c78 size 0x7c virtual false final false
inline ::System::Collections::IList* GetCapabilitiesForOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  capability) ;

/// @brief Method DoGetCapabilitiesForOid addr 0x1073638 size 0x640 virtual false final false
inline void DoGetCapabilitiesForOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  capability, ::System::Collections::IList*  list) ;

/// @brief Method ToAsn1Object addr 0x1073e3c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmimeCapabilities(SmimeCapabilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmimeCapabilities(SmimeCapabilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SmimeCapabilities()  = default;
public:


// Fields

// Static field PreferSignedData

// Static field CannotDecryptAny

// Static field SmimeCapabilitesVersions

// Static field Aes256Cbc

// Static field Aes192Cbc

// Static field Aes128Cbc

// Static field IdeaCbc

// Static field Cast5Cbc

// Static field DesCbc

// Static field DesEde3Cbc

// Static field RC2Cbc


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities*, "Org.BouncyCastle.Asn1.Smime", "SmimeCapabilities");
