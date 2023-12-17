#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaGroupRef)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaGroupRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaGroupRef);
// Type: System.Xml.Schema::XmlSchemaGroupRef
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11734))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11728))
// CS Name: ::System.Xml.Schema::XmlSchemaGroupRef*
class CORDL_TYPE XmlSchemaGroupRef : public ::System::Xml::Schema::XmlSchemaParticle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Xml::Schema::XmlSchemaParticle)]{};

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupRef", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaGroupRef(XmlSchemaGroupRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupRef", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaGroupRef(XmlSchemaGroupRef const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaGroupRef()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaGroupRef, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaGroupRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaGroupRef*, "System.Xml.Schema", "XmlSchemaGroupRef");
