#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ValidationEventArgs)
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
// Forward declare root types
namespace System::Xml::Schema {
class ValidationEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ValidationEventArgs);
// Type: System.Xml.Schema::ValidationEventArgs
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11709))
// CS Name: ::System.Xml.Schema::ValidationEventArgs*
class CORDL_TYPE ValidationEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::EventArgs)]{};

/// @brief Field ex offset 0x10
 __declspec(property(get=__get_ex, put=__set_ex)) ::System::Xml::Schema::XmlSchemaException*  ex;

/// @brief Field severity offset 0x18
 __declspec(property(get=__get_severity, put=__set_severity)) ::System::Xml::Schema::XmlSeverityType  severity;

 __declspec(property(get=get_Severity)) ::System::Xml::Schema::XmlSeverityType  Severity;

 __declspec(property(get=get_Exception)) ::System::Xml::Schema::XmlSchemaException*  Exception;

constexpr void __set_ex(::System::Xml::Schema::XmlSchemaException*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaException* __get_ex() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaException*> __get_ex() const;

constexpr void __set_severity(::System::Xml::Schema::XmlSeverityType  value) ;

constexpr ::System::Xml::Schema::XmlSeverityType& __get_severity() ;

constexpr ::System::Xml::Schema::XmlSeverityType const& __get_severity() const;

/// @brief Method get_Severity addr 0x28c5bf0 size 0x8 virtual false final false
inline ::System::Xml::Schema::XmlSeverityType get_Severity() ;

/// @brief Method get_Exception addr 0x28c5bf8 size 0x8 virtual false final false
inline ::System::Xml::Schema::XmlSchemaException* get_Exception() ;

// Ctor Parameters [CppParam { name: "", ty: "ValidationEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidationEventArgs(ValidationEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidationEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidationEventArgs(ValidationEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValidationEventArgs()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ValidationEventArgs, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ValidationEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidationEventArgs*, "System.Xml.Schema", "ValidationEventArgs");
