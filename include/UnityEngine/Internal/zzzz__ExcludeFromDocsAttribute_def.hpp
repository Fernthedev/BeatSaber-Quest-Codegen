#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExcludeFromDocsAttribute)
// Forward declare root types
namespace UnityEngine::Internal {
class ExcludeFromDocsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Internal::ExcludeFromDocsAttribute);
// Type: UnityEngine.Internal::ExcludeFromDocsAttribute
namespace UnityEngine::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10322))
// CS Name: ::UnityEngine.Internal::ExcludeFromDocsAttribute*
class CORDL_TYPE ExcludeFromDocsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::Internal::ExcludeFromDocsAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2ce9e84 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromDocsAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExcludeFromDocsAttribute(ExcludeFromDocsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromDocsAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExcludeFromDocsAttribute(ExcludeFromDocsAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExcludeFromDocsAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Internal::ExcludeFromDocsAttribute, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Internal
NEED_NO_BOX(::UnityEngine::Internal::ExcludeFromDocsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::ExcludeFromDocsAttribute*, "UnityEngine.Internal", "ExcludeFromDocsAttribute");
