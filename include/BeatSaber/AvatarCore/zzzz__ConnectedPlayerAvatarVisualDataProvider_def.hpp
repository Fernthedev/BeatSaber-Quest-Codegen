#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerAvatarVisualDataProvider)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerAvatarVisualDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider);
// Type: BeatSaber.AvatarCore::ConnectedPlayerAvatarVisualDataProvider
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15188))
// CS Name: ::BeatSaber.AvatarCore::ConnectedPlayerAvatarVisualDataProvider*
class CORDL_TYPE ConnectedPlayerAvatarVisualDataProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _connectedPlayer offset 0x10
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

 __declspec(property(get=get_avatarsData)) ::GlobalNamespace::MultiplayerAvatarsData  avatarsData;

/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr operator  ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

/// @brief Method get_avatarsData addr 0xe0f47c size 0xc8 virtual true final true
inline ::GlobalNamespace::MultiplayerAvatarsData get_avatarsData() ;

static inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider* New_ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

/// @brief Method .ctor addr 0xe0f544 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::IConnectedPlayer*  connectedPlayer) ;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarVisualDataProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectedPlayerAvatarVisualDataProvider(ConnectedPlayerAvatarVisualDataProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerAvatarVisualDataProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectedPlayerAvatarVisualDataProvider(ConnectedPlayerAvatarVisualDataProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConnectedPlayerAvatarVisualDataProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider, 0x18>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*, "BeatSaber.AvatarCore", "ConnectedPlayerAvatarVisualDataProvider");
