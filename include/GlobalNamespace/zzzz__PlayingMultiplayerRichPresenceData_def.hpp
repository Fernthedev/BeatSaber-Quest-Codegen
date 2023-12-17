#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_def.hpp"
CORDL_MODULE_EXPORT(PlayingMultiplayerRichPresenceData)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingMultiplayerRichPresenceData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayingMultiplayerRichPresenceData);
// Type: ::PlayingMultiplayerRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4669))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4670))
// CS Name: ::PlayingMultiplayerRichPresenceData*
class CORDL_TYPE PlayingMultiplayerRichPresenceData : public ::GlobalNamespace::InMultiplayerRichPresenceData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::InMultiplayerRichPresenceData)]{};

/// @brief Field kPlayingMultiplayerLobbyRichPresenceLocalizationKey offset 0x0
static constexpr ::ConstString  kPlayingMultiplayerLobbyRichPresenceLocalizationKey{u"PLAYING_MULTIPLAYER_PRESENCE"};

static inline ::GlobalNamespace::PlayingMultiplayerRichPresenceData* New_ctor(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, bool  atMaxPartySize) ;

/// @brief Method .ctor addr 0x23736d8 size 0x8c virtual false final false
inline void _ctor(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, bool  atMaxPartySize) ;

// Ctor Parameters [CppParam { name: "", ty: "PlayingMultiplayerRichPresenceData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayingMultiplayerRichPresenceData(PlayingMultiplayerRichPresenceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayingMultiplayerRichPresenceData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayingMultiplayerRichPresenceData(PlayingMultiplayerRichPresenceData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayingMultiplayerRichPresenceData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayingMultiplayerRichPresenceData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayingMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingMultiplayerRichPresenceData*, "", "PlayingMultiplayerRichPresenceData");
