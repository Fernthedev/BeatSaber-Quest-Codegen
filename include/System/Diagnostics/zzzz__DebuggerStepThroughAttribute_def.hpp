#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebuggerStepThroughAttribute)
// Forward declare root types
namespace System::Diagnostics {
class DebuggerStepThroughAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DebuggerStepThroughAttribute);
// Type: System.Diagnostics::DebuggerStepThroughAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3729))
// CS Name: ::System.Diagnostics::DebuggerStepThroughAttribute*
class CORDL_TYPE DebuggerStepThroughAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Diagnostics::DebuggerStepThroughAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2579c08 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerStepThroughAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebuggerStepThroughAttribute(DebuggerStepThroughAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerStepThroughAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebuggerStepThroughAttribute(DebuggerStepThroughAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DebuggerStepThroughAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerStepThroughAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerStepThroughAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerStepThroughAttribute*, "System.Diagnostics", "DebuggerStepThroughAttribute");
