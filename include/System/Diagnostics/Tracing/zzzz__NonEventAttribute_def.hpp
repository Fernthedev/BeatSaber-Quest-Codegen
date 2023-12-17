#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NonEventAttribute)
// Forward declare root types
namespace System::Diagnostics::Tracing {
class NonEventAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::NonEventAttribute);
// Type: System.Diagnostics.Tracing::NonEventAttribute
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3749))
// CS Name: ::System.Diagnostics.Tracing::NonEventAttribute*
class CORDL_TYPE NonEventAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Diagnostics::Tracing::NonEventAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x257bf34 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NonEventAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NonEventAttribute(NonEventAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NonEventAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NonEventAttribute(NonEventAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NonEventAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::NonEventAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::NonEventAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::NonEventAttribute*, "System.Diagnostics.Tracing", "NonEventAttribute");
