#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcTemplateAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcTemplateAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcTemplateAttribute);
// Type: JetBrains.Annotations::AspMvcTemplateAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15775))
// CS Name: ::JetBrains.Annotations::AspMvcTemplateAttribute*
class CORDL_TYPE AspMvcTemplateAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::JetBrains::Annotations::AspMvcTemplateAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eba634 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcTemplateAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspMvcTemplateAttribute(AspMvcTemplateAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcTemplateAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspMvcTemplateAttribute(AspMvcTemplateAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AspMvcTemplateAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcTemplateAttribute, 0x10>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcTemplateAttribute*, "JetBrains.Annotations", "AspMvcTemplateAttribute");
