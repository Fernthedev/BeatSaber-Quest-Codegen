#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_normalizedString_def.hpp"
CORDL_MODULE_EXPORT(Datatype_token)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_token;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_token);
// Type: System.Xml.Schema::Datatype_token
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11652))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11654))
// CS Name: ::System.Xml.Schema::Datatype_token*
class CORDL_TYPE Datatype_token : public ::System::Xml::Schema::Datatype_normalizedString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Xml::Schema::Datatype_normalizedString)]{};

 __declspec(property(get=get_TypeCode)) ::System::Xml::Schema::XmlTypeCode  TypeCode;

 __declspec(property(get=get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace  BuiltInWhitespaceFacet;

/// @brief Method get_TypeCode addr 0x28bb670 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x28bb678 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

static inline ::System::Xml::Schema::Datatype_token* New_ctor() ;

/// @brief Method .ctor addr 0x28bb680 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_token", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_token(Datatype_token && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_token", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_token(Datatype_token const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Datatype_token()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_token, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_token);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_token*, "System.Xml.Schema", "Datatype_token");
