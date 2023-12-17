#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerModeSettings)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerModeSettings);
// Type: ::MultiplayerModeSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4514))
// CS Name: ::MultiplayerModeSettings*
class CORDL_TYPE MultiplayerModeSettings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field createServerPlayersCount offset 0x10
 __declspec(property(get=__get_createServerPlayersCount, put=__set_createServerPlayersCount)) int32_t  createServerPlayersCount;

/// @brief Field quickPlayBeatmapDifficulty offset 0x14
 __declspec(property(get=__get_quickPlayBeatmapDifficulty, put=__set_quickPlayBeatmapDifficulty)) ::GlobalNamespace::BeatmapDifficultyMask  quickPlayBeatmapDifficulty;

/// @brief Field quickPlaySongPackMaskSerializedName offset 0x18
 __declspec(property(get=__get_quickPlaySongPackMaskSerializedName, put=__set_quickPlaySongPackMaskSerializedName)) ::StringW  quickPlaySongPackMaskSerializedName;

/// @brief Field quickPlayEnableLevelSelection offset 0x20
 __declspec(property(get=__get_quickPlayEnableLevelSelection, put=__set_quickPlayEnableLevelSelection)) bool  quickPlayEnableLevelSelection;

constexpr void __set_createServerPlayersCount(int32_t  value) ;

constexpr int32_t& __get_createServerPlayersCount() ;

constexpr int32_t const& __get_createServerPlayersCount() const;

constexpr void __set_quickPlayBeatmapDifficulty(::GlobalNamespace::BeatmapDifficultyMask  value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get_quickPlayBeatmapDifficulty() ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get_quickPlayBeatmapDifficulty() const;

constexpr void __set_quickPlaySongPackMaskSerializedName(::StringW  value) ;

constexpr ::StringW& __get_quickPlaySongPackMaskSerializedName() ;

constexpr ::StringW const& __get_quickPlaySongPackMaskSerializedName() const;

constexpr void __set_quickPlayEnableLevelSelection(bool  value) ;

constexpr bool& __get_quickPlayEnableLevelSelection() ;

constexpr bool const& __get_quickPlayEnableLevelSelection() const;

static inline ::GlobalNamespace::MultiplayerModeSettings* New_ctor() ;

/// @brief Method .ctor addr 0x2362f4c size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerModeSettings(MultiplayerModeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerModeSettings(MultiplayerModeSettings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerModeSettings()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerModeSettings, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSettings*, "", "MultiplayerModeSettings");
