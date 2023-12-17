#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSequence)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSequence;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSequence);
// Type: System.Xml.Schema::XmlSchemaSequence
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11735))
// CS Name: ::System.Xml.Schema::XmlSchemaSequence*
class CORDL_TYPE XmlSchemaSequence : public ::System::Xml::Schema::XmlSchemaGroupBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Xml::Schema::XmlSchemaGroupBase)]{};

/// @brief Field items offset 0x38
 __declspec(property(get=__get_items, put=__set_items)) ::System::Xml::Schema::XmlSchemaObjectCollection*  items;

 __declspec(property(get=get_Items)) ::System::Xml::Schema::XmlSchemaObjectCollection*  Items;

constexpr void __set_items(::System::Xml::Schema::XmlSchemaObjectCollection*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* __get_items() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> __get_items() const;

/// @brief Method get_Items addr 0x28c8da8 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items() ;

static inline ::System::Xml::Schema::XmlSchemaSequence* New_ctor() ;

/// @brief Method .ctor addr 0x28c7b60 size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSequence", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaSequence(XmlSchemaSequence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSequence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaSequence(XmlSchemaSequence const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaSequence()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSequence, 0x40>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSequence);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSequence*, "System.Xml.Schema", "XmlSchemaSequence");
