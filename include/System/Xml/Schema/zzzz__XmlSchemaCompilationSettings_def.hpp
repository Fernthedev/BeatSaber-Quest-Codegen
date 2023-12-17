#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaCompilationSettings)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaCompilationSettings);
// Type: System.Xml.Schema::XmlSchemaCompilationSettings
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11719))
// CS Name: ::System.Xml.Schema::XmlSchemaCompilationSettings*
class CORDL_TYPE XmlSchemaCompilationSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field enableUpaCheck offset 0x10
 __declspec(property(get=__get_enableUpaCheck, put=__set_enableUpaCheck)) bool  enableUpaCheck;

constexpr void __set_enableUpaCheck(bool  value) ;

constexpr bool& __get_enableUpaCheck() ;

constexpr bool const& __get_enableUpaCheck() const;

static inline ::System::Xml::Schema::XmlSchemaCompilationSettings* New_ctor() ;

/// @brief Method .ctor addr 0x28c72e4 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCompilationSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaCompilationSettings(XmlSchemaCompilationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCompilationSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaCompilationSettings(XmlSchemaCompilationSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaCompilationSettings()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaCompilationSettings, 0x18>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaCompilationSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaCompilationSettings*, "System.Xml.Schema", "XmlSchemaCompilationSettings");
