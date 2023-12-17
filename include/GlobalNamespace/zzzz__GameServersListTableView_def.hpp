#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServersListTableView)
namespace Zenject {
class DiContainer;
}
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class __TableViewWithDetailCell__IDataSource;
}
namespace GlobalNamespace {
class GameServerListDetailTableCell;
}
namespace GlobalNamespace {
class TableViewWithDetailCell;
}
namespace GlobalNamespace {
class GameServerListTableCell;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace HMUI {
class TableView;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersListTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServersListTableView);
// Type: ::GameServersListTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5783))
// CS Name: ::GameServersListTableView*
class CORDL_TYPE GameServersListTableView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kCellReuseIdentifier offset 0x0
static constexpr ::ConstString  kCellReuseIdentifier{u"Cell"};

/// @brief Field kDetailCellReuseIdentifier offset 0x0
static constexpr ::ConstString  kDetailCellReuseIdentifier{u"DetailCell"};

/// @brief Field _tableView offset 0x18
 __declspec(property(get=__get__tableView, put=__set__tableView)) ::GlobalNamespace::TableViewWithDetailCell*  _tableView;

/// @brief Field _gameServerListCellPrefab offset 0x20
 __declspec(property(get=__get__gameServerListCellPrefab, put=__set__gameServerListCellPrefab)) ::GlobalNamespace::GameServerListTableCell*  _gameServerListCellPrefab;

/// @brief Field _gameServerDetailCellPrefab offset 0x28
 __declspec(property(get=__get__gameServerDetailCellPrefab, put=__set__gameServerDetailCellPrefab)) ::GlobalNamespace::GameServerListDetailTableCell*  _gameServerDetailCellPrefab;

/// @brief Field _container offset 0x30
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field joinButtonPressedEvent offset 0x38
 __declspec(property(get=__get_joinButtonPressedEvent, put=__set_joinButtonPressedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  joinButtonPressedEvent;

/// @brief Field _isInitialized offset 0x40
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

/// @brief Field _gamesList offset 0x48
 __declspec(property(get=__get__gamesList, put=__set__gamesList)) ::ArrayW<::GlobalNamespace::INetworkPlayer*,::Array<::GlobalNamespace::INetworkPlayer*>*>  _gamesList;

/// @brief Field _selectedServer offset 0x50
 __declspec(property(get=__get__selectedServer, put=__set__selectedServer)) ::GlobalNamespace::INetworkPlayer*  _selectedServer;

/// @brief Convert operator to "::GlobalNamespace::__TableViewWithDetailCell__IDataSource"
constexpr operator  ::GlobalNamespace::__TableViewWithDetailCell__IDataSource*() noexcept;

constexpr void __set__tableView(::GlobalNamespace::TableViewWithDetailCell*  value) ;

constexpr ::GlobalNamespace::TableViewWithDetailCell* __get__tableView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TableViewWithDetailCell*> __get__tableView() const;

constexpr void __set__gameServerListCellPrefab(::GlobalNamespace::GameServerListTableCell*  value) ;

constexpr ::GlobalNamespace::GameServerListTableCell* __get__gameServerListCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerListTableCell*> __get__gameServerListCellPrefab() const;

constexpr void __set__gameServerDetailCellPrefab(::GlobalNamespace::GameServerListDetailTableCell*  value) ;

constexpr ::GlobalNamespace::GameServerListDetailTableCell* __get__gameServerDetailCellPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerListDetailTableCell*> __get__gameServerDetailCellPrefab() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set_joinButtonPressedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* __get_joinButtonPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> __get_joinButtonPressedEvent() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

constexpr void __set__gamesList(::ArrayW<::GlobalNamespace::INetworkPlayer*,::Array<::GlobalNamespace::INetworkPlayer*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::INetworkPlayer*,::Array<::GlobalNamespace::INetworkPlayer*>*>& __get__gamesList() ;

constexpr ::ArrayW<::GlobalNamespace::INetworkPlayer*,::Array<::GlobalNamespace::INetworkPlayer*>*> const& __get__gamesList() const;

constexpr void __set__selectedServer(::GlobalNamespace::INetworkPlayer*  value) ;

constexpr ::GlobalNamespace::INetworkPlayer* __get__selectedServer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> __get__selectedServer() const;

/// @brief Method add_joinButtonPressedEvent addr 0x22e21a4 size 0xb0 virtual false final false
inline void add_joinButtonPressedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

/// @brief Method remove_joinButtonPressedEvent addr 0x22e2254 size 0xb0 virtual false final false
inline void remove_joinButtonPressedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*  value) ;

/// @brief Method CellSize addr 0x22e2304 size 0xc virtual true final true
inline float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x22e2310 size 0x18 virtual true final true
inline int32_t NumberOfCells() ;

/// @brief Method Init addr 0x22e2328 size 0x114 virtual false final false
inline void Init() ;

/// @brief Method CellForContent addr 0x22e243c size 0x164 virtual true final true
inline ::HMUI::TableCell* CellForContent(::GlobalNamespace::TableViewWithDetailCell*  tableView, int32_t  idx, bool  detailOpened) ;

/// @brief Method CellForDetail addr 0x22e25a0 size 0x1bc virtual true final true
inline ::HMUI::TableCell* CellForDetail(::GlobalNamespace::TableViewWithDetailCell*  tableView, int32_t  contentIdx) ;

/// @brief Method SetData addr 0x22e275c size 0x124 virtual false final false
inline void SetData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*  servers, bool  clearSelection) ;

/// @brief Method HandleGameServerListDetailTableCellJoinServerButtonWasPressed addr 0x22e2880 size 0x24 virtual false final false
inline void HandleGameServerListDetailTableCellJoinServerButtonWasPressed() ;

/// @brief Method HandleTableViewDidSelectCellWithIdx addr 0x22e28a4 size 0x34 virtual false final false
inline void HandleTableViewDidSelectCellWithIdx(::HMUI::TableView*  tableView, int32_t  id) ;

/// @brief Method HandleTableViewDidDeselectCellWithIdx addr 0x22e28d8 size 0x8 virtual false final false
inline void HandleTableViewDidDeselectCellWithIdx(::GlobalNamespace::TableViewWithDetailCell*  arg1, int32_t  arg2) ;

/// @brief Method OnDestroy addr 0x22e28e0 size 0xf4 virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::GameServersListTableView* New_ctor() ;

/// @brief Method .ctor addr 0x22e29d4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameServersListTableView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServersListTableView(GameServersListTableView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServersListTableView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServersListTableView(GameServersListTableView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameServersListTableView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServersListTableView, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServersListTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersListTableView*, "", "GameServersListTableView");
