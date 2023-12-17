#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_double_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_doubleXdr)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_doubleXdr;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_doubleXdr);
// Type: System.Xml.Schema::Datatype_doubleXdr
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11630))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11677))
// CS Name: ::System.Xml.Schema::Datatype_doubleXdr*
class CORDL_TYPE Datatype_doubleXdr : public ::System::Xml::Schema::Datatype_double {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Xml::Schema::Datatype_double)]{};

/// @brief Method ParseValue addr 0x28be9d4 size 0x27c virtual true final false
inline ::System::Object* ParseValue(::StringW  s, ::System::Xml::XmlNameTable*  nameTable, ::System::Xml::IXmlNamespaceResolver*  nsmgr) ;

static inline ::System::Xml::Schema::Datatype_doubleXdr* New_ctor() ;

/// @brief Method .ctor addr 0x28bec5c size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_doubleXdr", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_doubleXdr(Datatype_doubleXdr && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_doubleXdr", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_doubleXdr(Datatype_doubleXdr const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Datatype_doubleXdr()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_doubleXdr, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_doubleXdr);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_doubleXdr*, "System.Xml.Schema", "Datatype_doubleXdr");
