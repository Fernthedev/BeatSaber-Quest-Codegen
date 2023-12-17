#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RazorWriteMethodAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorWriteMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorWriteMethodAttribute);
// Type: JetBrains.Annotations::RazorWriteMethodAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15808))
// CS Name: ::JetBrains.Annotations::RazorWriteMethodAttribute*
class CORDL_TYPE RazorWriteMethodAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::JetBrains::Annotations::RazorWriteMethodAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eba9b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RazorWriteMethodAttribute(RazorWriteMethodAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RazorWriteMethodAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RazorWriteMethodAttribute(RazorWriteMethodAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RazorWriteMethodAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorWriteMethodAttribute, 0x10>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorWriteMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorWriteMethodAttribute*, "JetBrains.Annotations", "RazorWriteMethodAttribute");
