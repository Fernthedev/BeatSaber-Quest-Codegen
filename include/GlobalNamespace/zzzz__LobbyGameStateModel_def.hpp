#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LobbyGameStateModel)
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyGameStateModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyGameStateModel);
// Type: ::LobbyGameStateModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4503))
// CS Name: ::LobbyGameStateModel*
class CORDL_TYPE LobbyGameStateModel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field gameStateDidChangeEvent offset 0x10
 __declspec(property(get=__get_gameStateDidChangeEvent, put=__set_gameStateDidChangeEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  gameStateDidChangeEvent;

/// @brief Field gameStateDidChangeAlwaysSentEvent offset 0x18
 __declspec(property(get=__get_gameStateDidChangeAlwaysSentEvent, put=__set_gameStateDidChangeAlwaysSentEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  gameStateDidChangeAlwaysSentEvent;

/// @brief Field _gameState offset 0x20
 __declspec(property(get=__get__gameState, put=__set__gameState)) ::GlobalNamespace::MultiplayerGameState  _gameState;

 __declspec(property(get=get_gameState)) ::GlobalNamespace::MultiplayerGameState  gameState;

constexpr void __set_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>* __get_gameStateDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*> __get_gameStateDidChangeEvent() const;

constexpr void __set_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>* __get_gameStateDidChangeAlwaysSentEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*> __get_gameStateDidChangeAlwaysSentEvent() const;

constexpr void __set__gameState(::GlobalNamespace::MultiplayerGameState  value) ;

constexpr ::GlobalNamespace::MultiplayerGameState& __get__gameState() ;

constexpr ::GlobalNamespace::MultiplayerGameState const& __get__gameState() const;

/// @brief Method get_gameState addr 0x235b51c size 0x8 virtual false final false
inline ::GlobalNamespace::MultiplayerGameState get_gameState() ;

/// @brief Method add_gameStateDidChangeEvent addr 0x235b524 size 0xb0 virtual false final false
inline void add_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

/// @brief Method remove_gameStateDidChangeEvent addr 0x235b5d4 size 0xb0 virtual false final false
inline void remove_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

/// @brief Method add_gameStateDidChangeAlwaysSentEvent addr 0x235b684 size 0xb0 virtual false final false
inline void add_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

/// @brief Method remove_gameStateDidChangeAlwaysSentEvent addr 0x235b734 size 0xb0 virtual false final false
inline void remove_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

/// @brief Method SetGameState addr 0x235a924 size 0x8 virtual false final false
inline void SetGameState(::GlobalNamespace::MultiplayerGameState  newGameState) ;

/// @brief Method SetGameStateWithoutNotification addr 0x23589b0 size 0x2c virtual false final false
inline void SetGameStateWithoutNotification(::GlobalNamespace::MultiplayerGameState  newGameState) ;

/// @brief Method SetGameState addr 0x235b7e4 size 0x70 virtual false final false
inline void SetGameState(::GlobalNamespace::MultiplayerGameState  newGameState, bool  sendNotification) ;

static inline ::GlobalNamespace::LobbyGameStateModel* New_ctor() ;

/// @brief Method .ctor addr 0x235b854 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyGameStateModel(LobbyGameStateModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyGameStateModel(LobbyGameStateModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LobbyGameStateModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyGameStateModel, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyGameStateModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyGameStateModel*, "", "LobbyGameStateModel");
