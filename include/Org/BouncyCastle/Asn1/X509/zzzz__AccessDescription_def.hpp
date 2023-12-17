#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AccessDescription)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AccessDescription;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AccessDescription);
// Type: Org.BouncyCastle.Asn1.X509::AccessDescription
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(338))
// CS Name: ::Org.BouncyCastle.Asn1.X509::AccessDescription*
class CORDL_TYPE AccessDescription : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field accessMethod offset 0x10
 __declspec(property(get=__get_accessMethod, put=__set_accessMethod)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  accessMethod;

/// @brief Field accessLocation offset 0x18
 __declspec(property(get=__get_accessLocation, put=__set_accessLocation)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  accessLocation;

 __declspec(property(get=get_AccessMethod)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  AccessMethod;

 __declspec(property(get=get_AccessLocation)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  AccessLocation;

static inline void setStaticF_IdADCAIssuers(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdADCAIssuers() ;

static inline void setStaticF_IdADOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdADOcsp() ;

constexpr void __set_accessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_accessMethod() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_accessMethod() const;

constexpr void __set_accessLocation(::Org::BouncyCastle::Asn1::X509::GeneralName*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* __get_accessLocation() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> __get_accessLocation() const;

/// @brief Method GetInstance addr 0x10836cc size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::AccessDescription* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::AccessDescription* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x1083854 size 0x118 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X509::AccessDescription* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::Org::BouncyCastle::Asn1::X509::GeneralName*  location) ;

/// @brief Method .ctor addr 0x108396c size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::Org::BouncyCastle::Asn1::X509::GeneralName*  location) ;

/// @brief Method get_AccessMethod addr 0x1083998 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_AccessMethod() ;

/// @brief Method get_AccessLocation addr 0x10839a0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_AccessLocation() ;

/// @brief Method ToAsn1Object addr 0x10839a8 size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method ToString addr 0x1083a98 size 0x70 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "AccessDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessDescription(AccessDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessDescription(AccessDescription const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AccessDescription()  = default;
public:


// Fields

// Static field IdADCAIssuers

// Static field IdADOcsp


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AccessDescription, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AccessDescription);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AccessDescription*, "Org.BouncyCastle.Asn1.X509", "AccessDescription");
