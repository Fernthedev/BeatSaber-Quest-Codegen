#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAnnotated)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAnnotated;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAnnotated);
// Type: System.Xml.Schema::XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11730))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11714))
// CS Name: ::System.Xml.Schema::XmlSchemaAnnotated*
class CORDL_TYPE XmlSchemaAnnotated : public ::System::Xml::Schema::XmlSchemaObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Xml::Schema::XmlSchemaObject)]{};

static inline ::System::Xml::Schema::XmlSchemaAnnotated* New_ctor() ;

/// @brief Method .ctor addr 0x28c70c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotated", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaAnnotated(XmlSchemaAnnotated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotated", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaAnnotated(XmlSchemaAnnotated const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaAnnotated()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAnnotated, 0x10>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAnnotated);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAnnotated*, "System.Xml.Schema", "XmlSchemaAnnotated");
