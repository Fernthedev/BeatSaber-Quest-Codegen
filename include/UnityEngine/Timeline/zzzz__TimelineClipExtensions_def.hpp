#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimelineClipExtensions)
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineClipExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineClipExtensions);
// Type: UnityEngine.Timeline::TimelineClipExtensions
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13936))
// CS Name: ::UnityEngine.Timeline::TimelineClipExtensions*
class CORDL_TYPE TimelineClipExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_k_UndoSetParentTrackText(::StringW  value) ;

static inline ::StringW getStaticF_k_UndoSetParentTrackText() ;

/// @brief Method MoveToTrack addr 0x2c7161c size 0x3c0 virtual false final false
static inline void MoveToTrack(::UnityEngine::Timeline::TimelineClip*  clip, ::UnityEngine::Timeline::TrackAsset*  destinationTrack) ;

/// @brief Method TryMoveToTrack addr 0x2c71afc size 0x1a4 virtual false final false
static inline bool TryMoveToTrack(::UnityEngine::Timeline::TimelineClip*  clip, ::UnityEngine::Timeline::TrackAsset*  destinationTrack) ;

/// @brief Method MoveToTrack_Impl addr 0x2c719dc size 0x120 virtual false final false
static inline void MoveToTrack_Impl(::UnityEngine::Timeline::TimelineClip*  clip, ::UnityEngine::Timeline::TrackAsset*  destinationTrack, ::UnityEngine::Object*  asset, ::UnityEngine::Timeline::TrackAsset*  parentTrack) ;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClipExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineClipExtensions(TimelineClipExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineClipExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineClipExtensions(TimelineClipExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimelineClipExtensions()  = default;
public:


// Fields

// Static field k_UndoSetParentTrackText


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClipExtensions, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClipExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClipExtensions*, "UnityEngine.Timeline", "TimelineClipExtensions");
