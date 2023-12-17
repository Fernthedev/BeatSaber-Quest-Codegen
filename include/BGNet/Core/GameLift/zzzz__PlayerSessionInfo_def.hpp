#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSessionInfo)
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::GameLift::PlayerSessionInfo);
// Type: BGNet.Core.GameLift::PlayerSessionInfo
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13013))
// CS Name: ::BGNet.Core.GameLift::PlayerSessionInfo*
class CORDL_TYPE PlayerSessionInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::Object)]{};

/// @brief Field playerSessionId offset 0x10
 __declspec(property(get=__get_playerSessionId, put=__set_playerSessionId)) ::StringW  playerSessionId;

/// @brief Field gameSessionId offset 0x18
 __declspec(property(get=__get_gameSessionId, put=__set_gameSessionId)) ::StringW  gameSessionId;

/// @brief Field dnsName offset 0x20
 __declspec(property(get=__get_dnsName, put=__set_dnsName)) ::StringW  dnsName;

/// @brief Field port offset 0x28
 __declspec(property(get=__get_port, put=__set_port)) int32_t  port;

/// @brief Field beatmapLevelSelectionMask offset 0x30
 __declspec(property(get=__get_beatmapLevelSelectionMask, put=__set_beatmapLevelSelectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask  beatmapLevelSelectionMask;

/// @brief Field gameplayServerConfiguration offset 0x58
 __declspec(property(get=__get_gameplayServerConfiguration, put=__set_gameplayServerConfiguration)) ::GlobalNamespace::GameplayServerConfiguration  gameplayServerConfiguration;

/// @brief Field privateGameSecret offset 0x70
 __declspec(property(get=__get_privateGameSecret, put=__set_privateGameSecret)) ::StringW  privateGameSecret;

/// @brief Field privateGameCode offset 0x78
 __declspec(property(get=__get_privateGameCode, put=__set_privateGameCode)) ::StringW  privateGameCode;

constexpr void __set_playerSessionId(::StringW  value) ;

constexpr ::StringW& __get_playerSessionId() ;

constexpr ::StringW const& __get_playerSessionId() const;

constexpr void __set_gameSessionId(::StringW  value) ;

constexpr ::StringW& __get_gameSessionId() ;

constexpr ::StringW const& __get_gameSessionId() const;

constexpr void __set_dnsName(::StringW  value) ;

constexpr ::StringW& __get_dnsName() ;

constexpr ::StringW const& __get_dnsName() const;

constexpr void __set_port(int32_t  value) ;

constexpr int32_t& __get_port() ;

constexpr int32_t const& __get_port() const;

constexpr void __set_beatmapLevelSelectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_beatmapLevelSelectionMask() ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_beatmapLevelSelectionMask() const;

constexpr void __set_gameplayServerConfiguration(::GlobalNamespace::GameplayServerConfiguration  value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_gameplayServerConfiguration() ;

constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_gameplayServerConfiguration() const;

constexpr void __set_privateGameSecret(::StringW  value) ;

constexpr ::StringW& __get_privateGameSecret() ;

constexpr ::StringW const& __get_privateGameSecret() const;

constexpr void __set_privateGameCode(::StringW  value) ;

constexpr ::StringW& __get_privateGameCode() ;

constexpr ::StringW const& __get_privateGameCode() const;

static inline ::BGNet::Core::GameLift::PlayerSessionInfo* New_ctor() ;

/// @brief Method .ctor addr 0xe60edc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSessionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSessionInfo(PlayerSessionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSessionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSessionInfo(PlayerSessionInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerSessionInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::GameLift::PlayerSessionInfo, 0x80>, "Size mismatch!");

} // namespace end def BGNet::Core::GameLift
NEED_NO_BOX(::BGNet::Core::GameLift::PlayerSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::PlayerSessionInfo*, "BGNet.Core.GameLift", "PlayerSessionInfo");
