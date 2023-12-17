#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(CmsAttributeTableGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator);
// Type: Org.BouncyCastle.Cms::CmsAttributeTableGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(615))
// CS Name: ::Org.BouncyCastle.Cms::CmsAttributeTableGenerator*
class CORDL_TYPE CmsAttributeTableGenerator {
public:
// Declarations
/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary*  parameters) ;

// Ctor Parameters [CppParam { name: "", ty: "CmsAttributeTableGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsAttributeTableGenerator(CmsAttributeTableGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsAttributeTableGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsAttributeTableGenerator(CmsAttributeTableGenerator const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, "Org.BouncyCastle.Cms", "CmsAttributeTableGenerator");
