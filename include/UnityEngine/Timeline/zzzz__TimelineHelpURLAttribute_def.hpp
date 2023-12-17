#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(TimelineHelpURLAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineHelpURLAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineHelpURLAttribute);
// Type: UnityEngine.Timeline::TimelineHelpURLAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13863))
// CS Name: ::UnityEngine.Timeline::TimelineHelpURLAttribute*
class CORDL_TYPE TimelineHelpURLAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::Timeline::TimelineHelpURLAttribute* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor addr 0x2c61a68 size 0x8 virtual false final false
inline void _ctor(::System::Type*  type) ;

// Ctor Parameters [CppParam { name: "", ty: "TimelineHelpURLAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineHelpURLAttribute(TimelineHelpURLAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineHelpURLAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineHelpURLAttribute(TimelineHelpURLAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimelineHelpURLAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineHelpURLAttribute, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineHelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineHelpURLAttribute*, "UnityEngine.Timeline", "TimelineHelpURLAttribute");
