#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(AvatarColorTrack)
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorTrack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarColorTrack);
// Type: ::AvatarColorTrack
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13862))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6005))
// CS Name: ::AvatarColorTrack*
class CORDL_TYPE AvatarColorTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::Timeline::TrackAsset)]{};

static inline ::GlobalNamespace::AvatarColorTrack* New_ctor() ;

/// @brief Method .ctor addr 0x2315558 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorTrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarColorTrack(AvatarColorTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorTrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarColorTrack(AvatarColorTrack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarColorTrack()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarColorTrack, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorTrack*, "", "AvatarColorTrack");
