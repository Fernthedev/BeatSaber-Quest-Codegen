#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaGroupBase)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaGroupBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaGroupBase);
// Type: System.Xml.Schema::XmlSchemaGroupBase
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11734))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11727))
// CS Name: ::System.Xml.Schema::XmlSchemaGroupBase*
class CORDL_TYPE XmlSchemaGroupBase : public ::System::Xml::Schema::XmlSchemaParticle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Xml::Schema::XmlSchemaParticle)]{};

 __declspec(property(get=get_Items)) ::System::Xml::Schema::XmlSchemaObjectCollection*  Items;

/// @brief Method get_Items addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items() ;

static inline ::System::Xml::Schema::XmlSchemaGroupBase* New_ctor() ;

/// @brief Method .ctor addr 0x28c8b08 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaGroupBase(XmlSchemaGroupBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaGroupBase(XmlSchemaGroupBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaGroupBase()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaGroupBase, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaGroupBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaGroupBase*, "System.Xml.Schema", "XmlSchemaGroupBase");
