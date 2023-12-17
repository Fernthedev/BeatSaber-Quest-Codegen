#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExcludeFromCodeCoverageAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class ExcludeFromCodeCoverageAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute);
// Type: System.Diagnostics.CodeAnalysis::ExcludeFromCodeCoverageAttribute
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8962))
// CS Name: ::System.Diagnostics.CodeAnalysis::ExcludeFromCodeCoverageAttribute*
class CORDL_TYPE ExcludeFromCodeCoverageAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x297426c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromCodeCoverageAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExcludeFromCodeCoverageAttribute(ExcludeFromCodeCoverageAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromCodeCoverageAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExcludeFromCodeCoverageAttribute(ExcludeFromCodeCoverageAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExcludeFromCodeCoverageAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Diagnostics::CodeAnalysis
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute*, "System.Diagnostics.CodeAnalysis", "ExcludeFromCodeCoverageAttribute");
