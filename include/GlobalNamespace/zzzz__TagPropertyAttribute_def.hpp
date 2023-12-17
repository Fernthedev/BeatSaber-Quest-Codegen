#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(TagPropertyAttribute)
// Forward declare root types
namespace GlobalNamespace {
class TagPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TagPropertyAttribute);
// Type: ::TagPropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16255))
// CS Name: ::TagPropertyAttribute*
class CORDL_TYPE TagPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::PropertyAttribute)]{};

static inline ::GlobalNamespace::TagPropertyAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2101290 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TagPropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TagPropertyAttribute(TagPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TagPropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TagPropertyAttribute(TagPropertyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TagPropertyAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TagPropertyAttribute, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TagPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TagPropertyAttribute*, "", "TagPropertyAttribute");
