#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateServerFormData)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
struct SongSelectionMode;
}
namespace GlobalNamespace {
struct GameplayServerControlSettings;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct GameplayServerMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct CreateServerFormData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CreateServerFormData);
// Type: ::CreateServerFormData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5565))
// CS Name: ::CreateServerFormData
struct CORDL_TYPE CreateServerFormData : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field usePassword offset 0x0
 __declspec(property(get=__get_usePassword, put=__set_usePassword)) bool  usePassword;

/// @brief Field password offset 0x8
 __declspec(property(get=__get_password, put=__set_password)) ::StringW  password;

/// @brief Field maxPlayers offset 0x10
 __declspec(property(get=__get_maxPlayers, put=__set_maxPlayers)) int32_t  maxPlayers;

/// @brief Field allowInviteOthers offset 0x14
 __declspec(property(get=__get_allowInviteOthers, put=__set_allowInviteOthers)) bool  allowInviteOthers;

/// @brief Field netDiscoverable offset 0x15
 __declspec(property(get=__get_netDiscoverable, put=__set_netDiscoverable)) bool  netDiscoverable;

/// @brief Field difficulties offset 0x16
 __declspec(property(get=__get_difficulties, put=__set_difficulties)) ::GlobalNamespace::BeatmapDifficultyMask  difficulties;

/// @brief Field modifiers offset 0x18
 __declspec(property(get=__get_modifiers, put=__set_modifiers)) ::GlobalNamespace::GameplayModifierMask  modifiers;

/// @brief Field songPacks offset 0x20
 __declspec(property(get=__get_songPacks, put=__set_songPacks)) ::GlobalNamespace::SongPackMask  songPacks;

/// @brief Field gameplayServerMode offset 0x40
 __declspec(property(get=__get_gameplayServerMode, put=__set_gameplayServerMode)) ::GlobalNamespace::GameplayServerMode  gameplayServerMode;

/// @brief Field songSelectionMode offset 0x44
 __declspec(property(get=__get_songSelectionMode, put=__set_songSelectionMode)) ::GlobalNamespace::SongSelectionMode  songSelectionMode;

/// @brief Field gameplayServerControlSettings offset 0x48
 __declspec(property(get=__get_gameplayServerControlSettings, put=__set_gameplayServerControlSettings)) ::GlobalNamespace::GameplayServerControlSettings  gameplayServerControlSettings;

constexpr void __set_usePassword(bool  value) ;

constexpr bool& __get_usePassword() ;

constexpr bool const& __get_usePassword() const;

constexpr void __set_password(::StringW  value) ;

constexpr ::StringW& __get_password() ;

constexpr ::StringW const& __get_password() const;

constexpr void __set_maxPlayers(int32_t  value) ;

constexpr int32_t& __get_maxPlayers() ;

constexpr int32_t const& __get_maxPlayers() const;

constexpr void __set_allowInviteOthers(bool  value) ;

constexpr bool& __get_allowInviteOthers() ;

constexpr bool const& __get_allowInviteOthers() const;

constexpr void __set_netDiscoverable(bool  value) ;

constexpr bool& __get_netDiscoverable() ;

constexpr bool const& __get_netDiscoverable() const;

constexpr void __set_difficulties(::GlobalNamespace::BeatmapDifficultyMask  value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get_difficulties() ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get_difficulties() const;

constexpr void __set_modifiers(::GlobalNamespace::GameplayModifierMask  value) ;

constexpr ::GlobalNamespace::GameplayModifierMask& __get_modifiers() ;

constexpr ::GlobalNamespace::GameplayModifierMask const& __get_modifiers() const;

constexpr void __set_songPacks(::GlobalNamespace::SongPackMask  value) ;

constexpr ::GlobalNamespace::SongPackMask& __get_songPacks() ;

constexpr ::GlobalNamespace::SongPackMask const& __get_songPacks() const;

constexpr void __set_gameplayServerMode(::GlobalNamespace::GameplayServerMode  value) ;

constexpr ::GlobalNamespace::GameplayServerMode& __get_gameplayServerMode() ;

constexpr ::GlobalNamespace::GameplayServerMode const& __get_gameplayServerMode() const;

constexpr void __set_songSelectionMode(::GlobalNamespace::SongSelectionMode  value) ;

constexpr ::GlobalNamespace::SongSelectionMode& __get_songSelectionMode() ;

constexpr ::GlobalNamespace::SongSelectionMode const& __get_songSelectionMode() const;

constexpr void __set_gameplayServerControlSettings(::GlobalNamespace::GameplayServerControlSettings  value) ;

constexpr ::GlobalNamespace::GameplayServerControlSettings& __get_gameplayServerControlSettings() ;

constexpr ::GlobalNamespace::GameplayServerControlSettings const& __get_gameplayServerControlSettings() const;

// Ctor Parameters [CppParam { name: "usePassword", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maxPlayers", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allowInviteOthers", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "netDiscoverable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: None }, CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: None }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "gameplayServerMode", ty: "::GlobalNamespace::GameplayServerMode", modifiers: "", def_value: None }, CppParam { name: "songSelectionMode", ty: "::GlobalNamespace::SongSelectionMode", modifiers: "", def_value: None }, CppParam { name: "gameplayServerControlSettings", ty: "::GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: None }]
constexpr CreateServerFormData(bool  usePassword, ::StringW  password, int32_t  maxPlayers, bool  allowInviteOthers, bool  netDiscoverable, ::GlobalNamespace::BeatmapDifficultyMask  difficulties, ::GlobalNamespace::GameplayModifierMask  modifiers, ::GlobalNamespace::SongPackMask  songPacks, ::GlobalNamespace::GameplayServerMode  gameplayServerMode, ::GlobalNamespace::SongSelectionMode  songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings  gameplayServerControlSettings) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CreateServerFormData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CreateServerFormData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreateServerFormData, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreateServerFormData, "", "CreateServerFormData");
