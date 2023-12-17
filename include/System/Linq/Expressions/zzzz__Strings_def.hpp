#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Strings)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Strings;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Strings);
// Type: System.Linq.Expressions::Strings
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14306))
// CS Name: ::System.Linq.Expressions::Strings*
class CORDL_TYPE Strings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ExtensionNodeMustOverrideProperty addr 0x2813d10 size 0x48 virtual false final false
static inline ::StringW ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings(Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings(Strings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Strings()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Strings, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Strings);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Strings*, "System.Linq.Expressions", "Strings");
