#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ModifierSpec)
namespace System {
class Type;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System {
class ModifierSpec;
}
// Write type traits
MARK_REF_PTR_T(::System::ModifierSpec);
// Type: System::ModifierSpec
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2633))
// CS Name: ::System::ModifierSpec*
class CORDL_TYPE ModifierSpec {
public:
// Declarations
/// @brief Method Resolve addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* Resolve(::System::Type*  type) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Text::StringBuilder* Append(::System::Text::StringBuilder*  sb) ;

// Ctor Parameters [CppParam { name: "", ty: "ModifierSpec", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModifierSpec(ModifierSpec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModifierSpec", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModifierSpec(ModifierSpec const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(::System::ModifierSpec);
DEFINE_IL2CPP_ARG_TYPE(::System::ModifierSpec*, "System", "ModifierSpec");
