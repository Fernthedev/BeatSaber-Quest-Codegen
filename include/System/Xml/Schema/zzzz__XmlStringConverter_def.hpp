#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlStringConverter)
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlStringConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlStringConverter);
// Type: System.Xml.Schema::XmlStringConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11754))
// CS Name: ::System.Xml.Schema::XmlStringConverter*
class CORDL_TYPE XmlStringConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Xml::Schema::XmlBaseConverter)]{};

static inline ::System::Xml::Schema::XmlStringConverter* New_ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method .ctor addr 0x28da7f8 size 0x68 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method Create addr 0x28da860 size 0x60 virtual false final false
static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method ToString addr 0x28da8c0 size 0x210 virtual true final false
inline ::StringW ToString(::System::Object*  value, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType addr 0x28daad0 size 0x29c virtual true final false
inline ::System::Object* ChangeType(::StringW  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

/// @brief Method ChangeType addr 0x28dad6c size 0x43c virtual true final false
inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  destinationType, ::System::Xml::IXmlNamespaceResolver*  nsResolver) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlStringConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlStringConverter(XmlStringConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlStringConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlStringConverter(XmlStringConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlStringConverter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlStringConverter, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlStringConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlStringConverter*, "System.Xml.Schema", "XmlStringConverter");
