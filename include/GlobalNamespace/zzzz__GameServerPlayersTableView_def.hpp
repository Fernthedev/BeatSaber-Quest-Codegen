#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerPlayersTableView)
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class GameServerPlayerTableCell;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayersTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerPlayersTableView);
// Type: ::GameServerPlayersTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5781))
// CS Name: ::GameServerPlayersTableView*
class CORDL_TYPE GameServerPlayersTableView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kCellId offset 0x0
static constexpr ::ConstString  kCellId{u"Cell"};

/// @brief Field kNoSongsCellId offset 0x0
static constexpr ::ConstString  kNoSongsCellId{u"NoSongCell"};

/// @brief Field kNoModifiersCellId offset 0x0
static constexpr ::ConstString  kNoModifiersCellId{u"NoModifierCell"};

/// @brief Field _tableView offset 0x18
 __declspec(property(get=__get__tableView, put=__set__tableView)) ::HMUI::TableView*  _tableView;

/// @brief Field _gameServerPlayerCellPrefab offset 0x20
 __declspec(property(get=__get__gameServerPlayerCellPrefab, put=__set__gameServerPlayerCellPrefab)) ::GlobalNamespace::GameServerPlayerTableCell*  _gameServerPlayerCellPrefab;

/// @brief Field _gameServerPlayerCellWithoutSongsPrefab offset 0x28
 __declspec(property(get=__get__gameServerPlayerCellWithoutSongsPrefab, put=__set__gameServerPlayerCellWithoutSongsPrefab)) ::GlobalNamespace::GameServerPlayerTableCell*  _gameServerPlayerCellWithoutSongsPrefab;

/// @brief Field _gameServerPlayerCellWithoutModifiersPrefab offset 0x30
 __declspec(property(get=__get__gameServerPlayerCellWithoutModifiersPrefab, put=__set__gameServerPlayerCellWithoutModifiersPrefab)) ::GlobalNamespace::GameServerPlayerTableCell*  _gameServerPlayerCellWithoutModifiersPrefab;

/// @brief Field _tableHeaderSongGo offset 0x38
 __declspec(property(get=__get__tableHeaderSongGo, put=__set__tableHeaderSongGo)) ::UnityEngine::GameObject*  _tableHeaderSongGo;

/// @brief Field _tableHeaderModifiersGo offset 0x40
 __declspec(property(get=__get__tableHeaderModifiersGo, put=__set__tableHeaderModifiersGo)) ::UnityEngine::GameObject*  _tableHeaderModifiersGo;

/// @brief Field _container offset 0x48
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _additionalContentModel offset 0x50
 __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel)) ::GlobalNamespace::IAdditionalContentModel*  _additionalContentModel;

/// @brief Field selectSuggestedLevelEvent offset 0x58
 __declspec(property(get=__get_selectSuggestedLevelEvent, put=__set_selectSuggestedLevelEvent)) ::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*  selectSuggestedLevelEvent;

/// @brief Field selectSuggestedGameplayModifiersEvent offset 0x60
 __declspec(property(get=__get_selectSuggestedGameplayModifiersEvent, put=__set_selectSuggestedGameplayModifiersEvent)) ::System::Action_1<::GlobalNamespace::GameplayModifiers*>*  selectSuggestedGameplayModifiersEvent;

/// @brief Field kickPlayerEvent offset 0x68
 __declspec(property(get=__get_kickPlayerEvent, put=__set_kickPlayerEvent)) ::System::Action_1<::StringW>*  kickPlayerEvent;

/// @brief Field _initialized offset 0x70
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Field _hasKickPermissions offset 0x71
 __declspec(property(get=__get__hasKickPermissions, put=__set__hasKickPermissions)) bool  _hasKickPermissions;

/// @brief Field _allowSelection offset 0x72
 __declspec(property(get=__get__allowSelection, put=__set__allowSelection)) bool  _allowSelection;

/// @brief Field _showSongSelection offset 0x73
 __declspec(property(get=__get__showSongSelection, put=__set__showSongSelection)) bool  _showSongSelection;

/// @brief Field _showModifierSelection offset 0x74
 __declspec(property(get=__get__showModifierSelection, put=__set__showModifierSelection)) bool  _showModifierSelection;

/// @brief Field _selectedPlayer offset 0x78
 __declspec(property(get=__get__selectedPlayer, put=__set__selectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _selectedPlayer;

/// @brief Field _sortedConnectedPlayers offset 0x80
 __declspec(property(get=__get__sortedConnectedPlayers, put=__set__sortedConnectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*  _sortedConnectedPlayers;

/// @brief Field _lobbyPlayersDataModel offset 0x88
 __declspec(property(get=__get__lobbyPlayersDataModel, put=__set__lobbyPlayersDataModel)) ::GlobalNamespace::ILobbyPlayersDataModel*  _lobbyPlayersDataModel;

 __declspec(property(get=get_currentCellId)) ::StringW  currentCellId;

/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr operator  ::HMUI::__TableView__IDataSource*() noexcept;

constexpr void __set__tableView(::HMUI::TableView*  value) ;

constexpr ::HMUI::TableView* __get__tableView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> __get__tableView() const;

constexpr void __set__gameServerPlayerCellPrefab(::GlobalNamespace::GameServerPlayerTableCell*  value) ;

constexpr ::GlobalNamespace::GameServerPlayerTableCell* __get__gameServerPlayerCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerPlayerTableCell*> __get__gameServerPlayerCellPrefab() const;

constexpr void __set__gameServerPlayerCellWithoutSongsPrefab(::GlobalNamespace::GameServerPlayerTableCell*  value) ;

constexpr ::GlobalNamespace::GameServerPlayerTableCell* __get__gameServerPlayerCellWithoutSongsPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerPlayerTableCell*> __get__gameServerPlayerCellWithoutSongsPrefab() const;

constexpr void __set__gameServerPlayerCellWithoutModifiersPrefab(::GlobalNamespace::GameServerPlayerTableCell*  value) ;

constexpr ::GlobalNamespace::GameServerPlayerTableCell* __get__gameServerPlayerCellWithoutModifiersPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerPlayerTableCell*> __get__gameServerPlayerCellWithoutModifiersPrefab() const;

constexpr void __set__tableHeaderSongGo(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__tableHeaderSongGo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__tableHeaderSongGo() const;

constexpr void __set__tableHeaderModifiersGo(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__tableHeaderModifiersGo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__tableHeaderModifiersGo() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::IAdditionalContentModel* __get__additionalContentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> __get__additionalContentModel() const;

constexpr void __set_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>* __get_selectSuggestedLevelEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*> __get_selectSuggestedLevelEvent() const;

constexpr void __set_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::GameplayModifiers*>* __get_selectSuggestedGameplayModifiersEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*> __get_selectSuggestedGameplayModifiersEvent() const;

constexpr void __set_kickPlayerEvent(::System::Action_1<::StringW>*  value) ;

constexpr ::System::Action_1<::StringW>* __get_kickPlayerEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> __get_kickPlayerEvent() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

constexpr void __set__hasKickPermissions(bool  value) ;

constexpr bool& __get__hasKickPermissions() ;

constexpr bool const& __get__hasKickPermissions() const;

constexpr void __set__allowSelection(bool  value) ;

constexpr bool& __get__allowSelection() ;

constexpr bool const& __get__allowSelection() const;

constexpr void __set__showSongSelection(bool  value) ;

constexpr bool& __get__showSongSelection() ;

constexpr bool const& __get__showSongSelection() const;

constexpr void __set__showModifierSelection(bool  value) ;

constexpr bool& __get__showModifierSelection() ;

constexpr bool const& __get__showModifierSelection() const;

constexpr void __set__selectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__selectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__selectedPlayer() const;

constexpr void __set__sortedConnectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* __get__sortedConnectedPlayers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> __get__sortedConnectedPlayers() const;

constexpr void __set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel*  value) ;

constexpr ::GlobalNamespace::ILobbyPlayersDataModel* __get__lobbyPlayersDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> __get__lobbyPlayersDataModel() const;

/// @brief Method add_selectSuggestedLevelEvent addr 0x22d12e8 size 0xb0 virtual false final false
inline void add_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*  value) ;

/// @brief Method remove_selectSuggestedLevelEvent addr 0x22d1d1c size 0xb0 virtual false final false
inline void remove_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*  value) ;

/// @brief Method add_selectSuggestedGameplayModifiersEvent addr 0x22d1398 size 0xb0 virtual false final false
inline void add_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>*  value) ;

/// @brief Method remove_selectSuggestedGameplayModifiersEvent addr 0x22d1dcc size 0xb0 virtual false final false
inline void remove_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>*  value) ;

/// @brief Method add_kickPlayerEvent addr 0x22d1448 size 0xb0 virtual false final false
inline void add_kickPlayerEvent(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_kickPlayerEvent addr 0x22d1e7c size 0xb0 virtual false final false
inline void remove_kickPlayerEvent(::System::Action_1<::StringW>*  value) ;

/// @brief Method CellSize addr 0x22e10a8 size 0xc virtual true final true
inline float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x22e10b4 size 0x48 virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method get_currentCellId addr 0x22e10fc size 0x84 virtual false final false
inline ::StringW get_currentCellId() ;

/// @brief Method GetCurrentPrefab addr 0x22e1180 size 0x9c virtual false final false
inline ::GlobalNamespace::GameServerPlayerTableCell* GetCurrentPrefab() ;

/// @brief Method CellForIdx addr 0x22e121c size 0x568 virtual true final true
inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView*  tableView, int32_t  idx) ;

/// @brief Method TryGetLobbyPlayerData addr 0x22e1784 size 0x164 virtual false final false
inline bool TryGetLobbyPlayerData(int32_t  idx, ByRef<::GlobalNamespace::IConnectedPlayer*>  player, ByRef<::GlobalNamespace::ILobbyPlayerData*>  playerData) ;

/// @brief Method HandleCellUseBeatmap addr 0x22e18e8 size 0x268 virtual false final false
inline void HandleCellUseBeatmap(int32_t  idx) ;

/// @brief Method HandleCellUseModifiers addr 0x22e1b50 size 0x254 virtual false final false
inline void HandleCellUseModifiers(int32_t  idx) ;

/// @brief Method HandleCellKickPlayer addr 0x22e1da4 size 0xfc virtual false final false
inline void HandleCellKickPlayer(int32_t  idx) ;

/// @brief Method SetData addr 0x22d1f38 size 0xbc virtual false final false
inline void SetData(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*  sortedPlayers, ::GlobalNamespace::ILobbyPlayersDataModel*  lobbyPlayersDataModel, bool  hasKickPermissions, bool  allowSelection, bool  showSongSelection, bool  showModifierSelection, bool  clearSelection) ;

/// @brief Method Init addr 0x22e1ea0 size 0x3c virtual false final false
inline void Init() ;

static inline ::GlobalNamespace::GameServerPlayersTableView* New_ctor() ;

/// @brief Method .ctor addr 0x22e1edc size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayersTableView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServerPlayersTableView(GameServerPlayersTableView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayersTableView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServerPlayersTableView(GameServerPlayersTableView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameServerPlayersTableView()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerPlayersTableView, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerPlayersTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayersTableView*, "", "GameServerPlayersTableView");
