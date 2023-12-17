#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalPlayerDisconnectHelper)
namespace GlobalNamespace {
struct __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper);
// Type: ::MultiplayerLocalPlayerDisconnectHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5167))
// CS Name: ::MultiplayerLocalPlayerDisconnectHelper*
class CORDL_TYPE MultiplayerLocalPlayerDisconnectHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field kDisconnectLabel offset 0x0
static constexpr ::ConstString  kDisconnectLabel{u"BUTTON_DISCONNECT"};

/// @brief Field kEndGameLabel offset 0x0
static constexpr ::ConstString  kEndGameLabel{u"BUTTON_END_GAME"};

/// @brief Field _gameplayRpcManager offset 0x10
 __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager)) ::GlobalNamespace::IGameplayRpcManager*  _gameplayRpcManager;

/// @brief Field _multiplayerLevelEndActions offset 0x18
 __declspec(property(get=__get__multiplayerLevelEndActions, put=__set__multiplayerLevelEndActions)) ::GlobalNamespace::IMultiplayerLevelEndActionsListener*  _multiplayerLevelEndActions;

/// @brief Field _lobbyPlayerPermissionsModel offset 0x20
 __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel)) ::GlobalNamespace::LobbyPlayerPermissionsModel*  _lobbyPlayerPermissionsModel;

constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager*  value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager* __get__gameplayRpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> __get__gameplayRpcManager() const;

constexpr void __set__multiplayerLevelEndActions(::GlobalNamespace::IMultiplayerLevelEndActionsListener*  value) ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* __get__multiplayerLevelEndActions() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsListener*> __get__multiplayerLevelEndActions() const;

constexpr void __set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel*  value) ;

constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* __get__lobbyPlayerPermissionsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> __get__lobbyPlayerPermissionsModel() const;

/// @brief Method Disconnect addr 0x23dbef4 size 0x210 virtual false final false
inline void Disconnect(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  playerLevelEndState, ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults) ;

/// @brief Method ResolveDisconnectButtonString addr 0x23ddf38 size 0x70 virtual false final false
inline ::StringW ResolveDisconnectButtonString() ;

static inline ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* New_ctor() ;

/// @brief Method .ctor addr 0x23ddfa8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerDisconnectHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalPlayerDisconnectHelper(MultiplayerLocalPlayerDisconnectHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerDisconnectHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalPlayerDisconnectHelper(MultiplayerLocalPlayerDisconnectHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalPlayerDisconnectHelper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*, "", "MultiplayerLocalPlayerDisconnectHelper");
