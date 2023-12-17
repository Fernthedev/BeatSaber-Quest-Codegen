#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayServerConfiguration)
namespace GlobalNamespace {
struct DiscoveryPolicy;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct GameplayServerControlSettings;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace GlobalNamespace {
struct SongSelectionMode;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct InvitePolicy;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace GlobalNamespace {
struct GameplayServerMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayServerConfiguration);
// Type: ::GameplayServerConfiguration
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12758))
// CS Name: ::GameplayServerConfiguration
struct CORDL_TYPE GameplayServerConfiguration : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field maxPlayerCount offset 0x0
 __declspec(property(get=__get_maxPlayerCount, put=__set_maxPlayerCount)) int32_t  maxPlayerCount;

/// @brief Field discoveryPolicy offset 0x4
 __declspec(property(get=__get_discoveryPolicy, put=__set_discoveryPolicy)) ::GlobalNamespace::DiscoveryPolicy  discoveryPolicy;

/// @brief Field invitePolicy offset 0x8
 __declspec(property(get=__get_invitePolicy, put=__set_invitePolicy)) ::GlobalNamespace::InvitePolicy  invitePolicy;

/// @brief Field gameplayServerMode offset 0xc
 __declspec(property(get=__get_gameplayServerMode, put=__set_gameplayServerMode)) ::GlobalNamespace::GameplayServerMode  gameplayServerMode;

/// @brief Field songSelectionMode offset 0x10
 __declspec(property(get=__get_songSelectionMode, put=__set_songSelectionMode)) ::GlobalNamespace::SongSelectionMode  songSelectionMode;

/// @brief Field gameplayServerControlSettings offset 0x14
 __declspec(property(get=__get_gameplayServerControlSettings, put=__set_gameplayServerControlSettings)) ::GlobalNamespace::GameplayServerControlSettings  gameplayServerControlSettings;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*() ;

/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr operator  ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*() ;

constexpr void __set_maxPlayerCount(int32_t  value) ;

constexpr int32_t& __get_maxPlayerCount() ;

constexpr int32_t const& __get_maxPlayerCount() const;

constexpr void __set_discoveryPolicy(::GlobalNamespace::DiscoveryPolicy  value) ;

constexpr ::GlobalNamespace::DiscoveryPolicy& __get_discoveryPolicy() ;

constexpr ::GlobalNamespace::DiscoveryPolicy const& __get_discoveryPolicy() const;

constexpr void __set_invitePolicy(::GlobalNamespace::InvitePolicy  value) ;

constexpr ::GlobalNamespace::InvitePolicy& __get_invitePolicy() ;

constexpr ::GlobalNamespace::InvitePolicy const& __get_invitePolicy() const;

constexpr void __set_gameplayServerMode(::GlobalNamespace::GameplayServerMode  value) ;

constexpr ::GlobalNamespace::GameplayServerMode& __get_gameplayServerMode() ;

constexpr ::GlobalNamespace::GameplayServerMode const& __get_gameplayServerMode() const;

constexpr void __set_songSelectionMode(::GlobalNamespace::SongSelectionMode  value) ;

constexpr ::GlobalNamespace::SongSelectionMode& __get_songSelectionMode() ;

constexpr ::GlobalNamespace::SongSelectionMode const& __get_songSelectionMode() const;

constexpr void __set_gameplayServerControlSettings(::GlobalNamespace::GameplayServerControlSettings  value) ;

constexpr ::GlobalNamespace::GameplayServerControlSettings& __get_gameplayServerControlSettings() ;

constexpr ::GlobalNamespace::GameplayServerControlSettings const& __get_gameplayServerControlSettings() const;

/// @brief Method .ctor addr 0xe38c60 size 0x14 virtual false final false
inline void _ctor(int32_t  maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy  discoveryPolicy, ::GlobalNamespace::InvitePolicy  invitePolicy, ::GlobalNamespace::GameplayServerMode  gameplayServerMode, ::GlobalNamespace::SongSelectionMode  songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings  gameplayServerControlSettings) ;

/// @brief Method Equals addr 0xe3baec size 0x6c virtual false final false
inline bool Equals(ByRef<::GlobalNamespace::GameplayServerConfiguration>  other) ;

/// @brief Method Equals addr 0xe3bb58 size 0x4 virtual true final true
inline bool Equals(::GlobalNamespace::GameplayServerConfiguration  other) ;

/// @brief Method Equals addr 0xe3bb5c size 0xc8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0xe3bc24 size 0x40 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0xe3bc64 size 0x4 virtual false final false
static inline bool op_Equality(ByRef<::GlobalNamespace::GameplayServerConfiguration>  a, ByRef<::GlobalNamespace::GameplayServerConfiguration>  b) ;

/// @brief Method op_Inequality addr 0xe3bc68 size 0x18 virtual false final false
static inline bool op_Inequality(ByRef<::GlobalNamespace::GameplayServerConfiguration>  a, ByRef<::GlobalNamespace::GameplayServerConfiguration>  b) ;

/// @brief Method Serialize addr 0xe3bc80 size 0x7c virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method CreateFromSerializedData addr 0xe3bcfc size 0x34 virtual true final true
inline ::GlobalNamespace::GameplayServerConfiguration CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Deserialize addr 0xe3bd30 size 0x98 virtual false final false
static inline ::GlobalNamespace::GameplayServerConfiguration Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method WithMaxPlayerCount addr 0xe3bdc8 size 0x1c virtual false final false
inline ::GlobalNamespace::GameplayServerConfiguration WithMaxPlayerCount(int32_t  maxPlayerCount) ;

// Ctor Parameters [CppParam { name: "maxPlayerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "discoveryPolicy", ty: "::GlobalNamespace::DiscoveryPolicy", modifiers: "", def_value: None }, CppParam { name: "invitePolicy", ty: "::GlobalNamespace::InvitePolicy", modifiers: "", def_value: None }, CppParam { name: "gameplayServerMode", ty: "::GlobalNamespace::GameplayServerMode", modifiers: "", def_value: None }, CppParam { name: "songSelectionMode", ty: "::GlobalNamespace::SongSelectionMode", modifiers: "", def_value: None }, CppParam { name: "gameplayServerControlSettings", ty: "::GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: None }]
constexpr GameplayServerConfiguration(int32_t  maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy  discoveryPolicy, ::GlobalNamespace::InvitePolicy  invitePolicy, ::GlobalNamespace::GameplayServerMode  gameplayServerMode, ::GlobalNamespace::SongSelectionMode  songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings  gameplayServerControlSettings) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GameplayServerConfiguration(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GameplayServerConfiguration()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerConfiguration, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerConfiguration, "", "GameplayServerConfiguration");
