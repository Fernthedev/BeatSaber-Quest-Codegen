#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Error)
namespace System {
class Object;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Error;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Error);
// Type: System.Linq.Expressions::Error
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14301))
// CS Name: ::System.Linq.Expressions::Error*
class CORDL_TYPE Error : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ExtensionNodeMustOverrideProperty addr 0x2813c0c size 0x74 virtual false final false
static inline ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Error(Error && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Error(Error const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Error()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Error, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Error*, "System.Linq.Expressions", "Error");
