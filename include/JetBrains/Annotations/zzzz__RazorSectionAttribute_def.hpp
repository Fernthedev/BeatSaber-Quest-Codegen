#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RazorSectionAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorSectionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorSectionAttribute);
// Type: JetBrains.Annotations::RazorSectionAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15782))
// CS Name: ::JetBrains.Annotations::RazorSectionAttribute*
class CORDL_TYPE RazorSectionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::JetBrains::Annotations::RazorSectionAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eba6d4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RazorSectionAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RazorSectionAttribute(RazorSectionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RazorSectionAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RazorSectionAttribute(RazorSectionAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RazorSectionAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorSectionAttribute, 0x10>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorSectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorSectionAttribute*, "JetBrains.Annotations", "RazorSectionAttribute");
