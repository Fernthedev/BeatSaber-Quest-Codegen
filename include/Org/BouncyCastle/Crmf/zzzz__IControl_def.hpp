#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IControl)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class IControl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::IControl);
// Type: Org.BouncyCastle.Crmf::IControl
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(694))
// CS Name: ::Org.BouncyCastle.Crmf::IControl*
class CORDL_TYPE IControl {
public:
// Declarations
 __declspec(property(get=get_Type)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  Type;

 __declspec(property(get=get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Value;

/// @brief Method get_Type addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "IControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IControl(IControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControl(IControl const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::IControl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::IControl*, "Org.BouncyCastle.Crmf", "IControl");
