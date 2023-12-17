#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimelineClipCapsExtensions)
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineClipCapsExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineClipCapsExtensions);
// Type: UnityEngine.Timeline::TimelineClipCapsExtensions
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13872))
// CS Name: ::UnityEngine.Timeline::TimelineClipCapsExtensions*
class CORDL_TYPE TimelineClipCapsExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SupportsLooping addr 0x2c62da4 size 0x18 virtual false final false
static inline bool SupportsLooping(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method SupportsExtrapolation addr 0x2c62dbc size 0x18 virtual false final false
static inline bool SupportsExtrapolation(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method SupportsClipIn addr 0x2c62dd4 size 0x18 virtual false final false
static inline bool SupportsClipIn(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method SupportsSpeedMultiplier addr 0x2c62dec size 0x18 virtual false final false
static inline bool SupportsSpeedMultiplier(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method SupportsBlending addr 0x2c62e04 size 0x18 virtual false final false
static inline bool SupportsBlending(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method HasAll addr 0x2c62e1c size 0xc virtual false final false
static inline bool HasAll(::UnityEngine::Timeline::ClipCaps  caps, ::UnityEngine::Timeline::ClipCaps  flags) ;

/// @brief Method HasAny addr 0x2c55630 size 0xc virtual false final false
static inline bool HasAny(::UnityEngine::Timeline::ClipCaps  caps, ::UnityEngine::Timeline::ClipCaps  flags) ;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClipCapsExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineClipCapsExtensions(TimelineClipCapsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClipCapsExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineClipCapsExtensions(TimelineClipCapsExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimelineClipCapsExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClipCapsExtensions, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClipCapsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClipCapsExtensions*, "UnityEngine.Timeline", "TimelineClipCapsExtensions");
