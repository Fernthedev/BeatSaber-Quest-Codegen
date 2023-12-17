#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LobbyStateDataModel)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyStateDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyStateDataModel);
// Type: ::LobbyStateDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4510))
// CS Name: ::LobbyStateDataModel*
class CORDL_TYPE LobbyStateDataModel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field _multiplayerSessionManager offset 0x10
 __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _unifiedNetworkPlayerModel offset 0x18
 __declspec(property(get=__get__unifiedNetworkPlayerModel, put=__set__unifiedNetworkPlayerModel)) ::GlobalNamespace::IUnifiedNetworkPlayerModel*  _unifiedNetworkPlayerModel;

/// @brief Field _connectedPlayers offset 0x20
 __declspec(property(get=__get__connectedPlayers, put=__set__connectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*  _connectedPlayers;

/// @brief Field _connectedPlayersById offset 0x28
 __declspec(property(get=__get__connectedPlayersById, put=__set__connectedPlayersById)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IConnectedPlayer*>*  _connectedPlayersById;

/// @brief Field _configuration offset 0x30
 __declspec(property(get=__get__configuration, put=__set__configuration)) ::GlobalNamespace::GameplayServerConfiguration  _configuration;

/// @brief Field playerConnectedEvent offset 0x48
 __declspec(property(get=__get_playerConnectedEvent, put=__set_playerConnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*  playerConnectedEvent;

/// @brief Field playerDisconnectedEvent offset 0x50
 __declspec(property(get=__get_playerDisconnectedEvent, put=__set_playerDisconnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*  playerDisconnectedEvent;

 __declspec(property(get=get_isConnected)) bool  isConnected;

 __declspec(property(get=get_localPlayer)) ::GlobalNamespace::IConnectedPlayer*  localPlayer;

 __declspec(property(get=get_connectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*  connectedPlayers;

 __declspec(property(get=get_rawConnectedPlayers)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*  rawConnectedPlayers;

 __declspec(property(get=get_configuration)) ::GlobalNamespace::GameplayServerConfiguration  configuration;

/// @brief Convert operator to "::GlobalNamespace::ILobbyStateDataModel"
constexpr operator  ::GlobalNamespace::ILobbyStateDataModel*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager* __get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> __get__multiplayerSessionManager() const;

constexpr void __set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel*  value) ;

constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* __get__unifiedNetworkPlayerModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> __get__unifiedNetworkPlayerModel() const;

constexpr void __set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* __get__connectedPlayers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> __get__connectedPlayers() const;

constexpr void __set__connectedPlayersById(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IConnectedPlayer*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IConnectedPlayer*>* __get__connectedPlayersById() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::IConnectedPlayer*>*> __get__connectedPlayersById() const;

constexpr void __set__configuration(::GlobalNamespace::GameplayServerConfiguration  value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration& __get__configuration() ;

constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get__configuration() const;

constexpr void __set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* __get_playerConnectedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> __get_playerConnectedEvent() const;

constexpr void __set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* __get_playerDisconnectedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> __get_playerDisconnectedEvent() const;

/// @brief Method add_playerConnectedEvent addr 0x236032c size 0xb0 virtual true final true
inline void add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*  value) ;

/// @brief Method remove_playerConnectedEvent addr 0x23603dc size 0xb0 virtual true final true
inline void remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*  value) ;

/// @brief Method add_playerDisconnectedEvent addr 0x236048c size 0xb0 virtual true final true
inline void add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*  value) ;

/// @brief Method remove_playerDisconnectedEvent addr 0x236053c size 0xb0 virtual true final true
inline void remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*  value) ;

/// @brief Method get_isConnected addr 0x23605ec size 0xa4 virtual true final true
inline bool get_isConnected() ;

/// @brief Method get_localPlayer addr 0x2360690 size 0xa0 virtual true final true
inline ::GlobalNamespace::IConnectedPlayer* get_localPlayer() ;

/// @brief Method get_connectedPlayers addr 0x2360730 size 0x8 virtual true final true
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers() ;

/// @brief Method get_rawConnectedPlayers addr 0x2360738 size 0xa4 virtual true final true
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* get_rawConnectedPlayers() ;

/// @brief Method get_configuration addr 0x23607dc size 0x14 virtual true final true
inline ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method Activate addr 0x23607f0 size 0x7f0 virtual true final true
inline void Activate() ;

/// @brief Method Deactivate addr 0x2360fe0 size 0x194 virtual true final true
inline void Deactivate() ;

/// @brief Method Dispose addr 0x2361174 size 0x4 virtual true final true
inline void Dispose() ;

/// @brief Method GetPlayerById addr 0x2361178 size 0x94 virtual true final true
inline ::GlobalNamespace::IConnectedPlayer* GetPlayerById(::StringW  userId) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerConnected addr 0x236120c size 0x170 virtual false final false
inline void HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IConnectedPlayer*  player) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerDisconnected addr 0x236137c size 0x120 virtual false final false
inline void HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IConnectedPlayer*  player) ;

static inline ::GlobalNamespace::LobbyStateDataModel* New_ctor() ;

/// @brief Method .ctor addr 0x236149c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LobbyStateDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyStateDataModel(LobbyStateDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyStateDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyStateDataModel(LobbyStateDataModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LobbyStateDataModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyStateDataModel, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyStateDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyStateDataModel*, "", "LobbyStateDataModel");
