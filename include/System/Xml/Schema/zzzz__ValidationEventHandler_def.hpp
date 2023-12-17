#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationEventHandler)
namespace System::Xml::Schema {
class ValidationEventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class ValidationEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ValidationEventHandler);
// Type: System.Xml.Schema::ValidationEventHandler
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11710))
// CS Name: ::System.Xml.Schema::ValidationEventHandler*
class CORDL_TYPE ValidationEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Xml::Schema::ValidationEventHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x28c5c00 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x28c5d30 size 0x14 virtual true final false
inline void Invoke(::System::Object*  sender, ::System::Xml::Schema::ValidationEventArgs*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "ValidationEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidationEventHandler(ValidationEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidationEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidationEventHandler(ValidationEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValidationEventHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ValidationEventHandler, 0x80>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ValidationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidationEventHandler*, "System.Xml.Schema", "ValidationEventHandler");
