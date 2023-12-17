#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(FrameRateFieldAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class FrameRateFieldAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::FrameRateFieldAttribute);
// Type: UnityEngine.Timeline::FrameRateFieldAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13923))
// CS Name: ::UnityEngine.Timeline::FrameRateFieldAttribute*
class CORDL_TYPE FrameRateFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::PropertyAttribute)]{};

static inline ::UnityEngine::Timeline::FrameRateFieldAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2c6e790 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FrameRateFieldAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FrameRateFieldAttribute(FrameRateFieldAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrameRateFieldAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrameRateFieldAttribute(FrameRateFieldAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FrameRateFieldAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::FrameRateFieldAttribute, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::FrameRateFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::FrameRateFieldAttribute*, "UnityEngine.Timeline", "FrameRateFieldAttribute");
