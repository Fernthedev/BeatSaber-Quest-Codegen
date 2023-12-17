#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SmimeCapability)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapability;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeCapability);
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapability
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(295))
// CS Name: ::Org.BouncyCastle.Asn1.Smime::SmimeCapability*
class CORDL_TYPE SmimeCapability : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field capabilityID offset 0x10
 __declspec(property(get=__get_capabilityID, put=__set_capabilityID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  capabilityID;

/// @brief Field parameters offset 0x18
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::Org::BouncyCastle::Asn1::Asn1Object*  parameters;

 __declspec(property(get=get_CapabilityID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  CapabilityID;

 __declspec(property(get=get_Parameters)) ::Org::BouncyCastle::Asn1::Asn1Object*  Parameters;

static inline void setStaticF_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PreferSignedData() ;

static inline void setStaticF_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CannotDecryptAny() ;

static inline void setStaticF_SmimeCapabilitiesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SmimeCapabilitiesVersions() ;

static inline void setStaticF_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesCbc() ;

static inline void setStaticF_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DesEde3Cbc() ;

static inline void setStaticF_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_RC2Cbc() ;

constexpr void __set_capabilityID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_capabilityID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_capabilityID() const;

constexpr void __set_parameters(::Org::BouncyCastle::Asn1::Asn1Object*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> __get_parameters() const;

static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x10746ec size 0x11c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  capabilityID, ::Org::BouncyCastle::Asn1::Asn1Encodable*  parameters) ;

/// @brief Method .ctor addr 0x1074808 size 0x94 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  capabilityID, ::Org::BouncyCastle::Asn1::Asn1Encodable*  parameters) ;

/// @brief Method GetInstance addr 0x1073cf4 size 0x148 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Smime::SmimeCapability* GetInstance(::System::Object*  obj) ;

/// @brief Method get_CapabilityID addr 0x107489c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_CapabilityID() ;

/// @brief Method get_Parameters addr 0x10748a4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Parameters() ;

/// @brief Method ToAsn1Object addr 0x10748ac size 0x148 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapability", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmimeCapability(SmimeCapability && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapability", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmimeCapability(SmimeCapability const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SmimeCapability()  = default;
public:


// Fields

// Static field PreferSignedData

// Static field CannotDecryptAny

// Static field SmimeCapabilitiesVersions

// Static field DesCbc

// Static field DesEde3Cbc

// Static field RC2Cbc


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeCapability, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapability);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapability*, "Org.BouncyCastle.Asn1.Smime", "SmimeCapability");
