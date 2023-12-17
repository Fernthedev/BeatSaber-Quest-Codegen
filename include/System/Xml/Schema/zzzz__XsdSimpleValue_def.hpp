#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XsdSimpleValue)
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XsdSimpleValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XsdSimpleValue);
// Type: System.Xml.Schema::XsdSimpleValue
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11616))
// CS Name: ::System.Xml.Schema::XsdSimpleValue*
class CORDL_TYPE XsdSimpleValue : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field xmlType offset 0x10
 __declspec(property(get=__get_xmlType, put=__set_xmlType)) ::System::Xml::Schema::XmlSchemaSimpleType*  xmlType;

/// @brief Field typedValue offset 0x18
 __declspec(property(get=__get_typedValue, put=__set_typedValue)) ::System::Object*  typedValue;

 __declspec(property(get=get_XmlType)) ::System::Xml::Schema::XmlSchemaSimpleType*  XmlType;

 __declspec(property(get=get_TypedValue)) ::System::Object*  TypedValue;

constexpr void __set_xmlType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaSimpleType* __get_xmlType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> __get_xmlType() const;

constexpr void __set_typedValue(::System::Object*  value) ;

constexpr ::System::Object* __get_typedValue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_typedValue() const;

/// @brief Method get_XmlType addr 0x28b0d28 size 0x8 virtual false final false
inline ::System::Xml::Schema::XmlSchemaSimpleType* get_XmlType() ;

/// @brief Method get_TypedValue addr 0x28b0d30 size 0x8 virtual false final false
inline ::System::Object* get_TypedValue() ;

// Ctor Parameters [CppParam { name: "", ty: "XsdSimpleValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XsdSimpleValue(XsdSimpleValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XsdSimpleValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XsdSimpleValue(XsdSimpleValue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XsdSimpleValue()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdSimpleValue, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XsdSimpleValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdSimpleValue*, "System.Xml.Schema", "XsdSimpleValue");
