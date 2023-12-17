#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(TubeLightIntensityTrack)
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityTrack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeLightIntensityTrack);
// Type: ::TubeLightIntensityTrack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13862))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6025))
// CS Name: ::TubeLightIntensityTrack*
class CORDL_TYPE TubeLightIntensityTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::Timeline::TrackAsset)]{};

static inline ::GlobalNamespace::TubeLightIntensityTrack* New_ctor() ;

/// @brief Method .ctor addr 0x231886c size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityTrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TubeLightIntensityTrack(TubeLightIntensityTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityTrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TubeLightIntensityTrack(TubeLightIntensityTrack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TubeLightIntensityTrack()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightIntensityTrack, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightIntensityTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightIntensityTrack*, "", "TubeLightIntensityTrack");
