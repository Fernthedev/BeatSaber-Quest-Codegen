#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcViewComponentAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcViewComponentAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcViewComponentAttribute);
// Type: JetBrains.Annotations::AspMvcViewComponentAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15777))
// CS Name: ::JetBrains.Annotations::AspMvcViewComponentAttribute*
class CORDL_TYPE AspMvcViewComponentAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::JetBrains::Annotations::AspMvcViewComponentAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eba644 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspMvcViewComponentAttribute(AspMvcViewComponentAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspMvcViewComponentAttribute(AspMvcViewComponentAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AspMvcViewComponentAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcViewComponentAttribute, 0x10>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcViewComponentAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcViewComponentAttribute*, "JetBrains.Annotations", "AspMvcViewComponentAttribute");
