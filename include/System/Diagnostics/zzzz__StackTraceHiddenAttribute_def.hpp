#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(StackTraceHiddenAttribute)
// Forward declare root types
namespace System::Diagnostics {
class StackTraceHiddenAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::StackTraceHiddenAttribute);
// Type: System.Diagnostics::StackTraceHiddenAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3728))
// CS Name: ::System.Diagnostics::StackTraceHiddenAttribute*
class CORDL_TYPE StackTraceHiddenAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Diagnostics::StackTraceHiddenAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2579c00 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StackTraceHiddenAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StackTraceHiddenAttribute(StackTraceHiddenAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StackTraceHiddenAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StackTraceHiddenAttribute(StackTraceHiddenAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StackTraceHiddenAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::StackTraceHiddenAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::StackTraceHiddenAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::StackTraceHiddenAttribute*, "System.Diagnostics", "StackTraceHiddenAttribute");
