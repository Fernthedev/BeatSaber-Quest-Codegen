#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
CORDL_MODULE_EXPORT(Datatype_dateTime)
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dateTime;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_dateTime);
// Type: System.Xml.Schema::Datatype_dateTime
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11635))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11638))
// CS Name: ::System.Xml.Schema::Datatype_dateTime*
class CORDL_TYPE Datatype_dateTime : public ::System::Xml::Schema::Datatype_dateTimeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Xml::Schema::Datatype_dateTimeBase)]{};

static inline ::System::Xml::Schema::Datatype_dateTime* New_ctor() ;

/// @brief Method .ctor addr 0x28b9e84 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_dateTime(Datatype_dateTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_dateTime(Datatype_dateTime const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Datatype_dateTime()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_dateTime, 0x40>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_dateTime);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_dateTime*, "System.Xml.Schema", "Datatype_dateTime");
