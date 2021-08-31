// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NetworkPlayerTableCell
  class NetworkPlayerTableCell;
  // Forward declaring type: NetworkPlayerOptionsTableCell
  class NetworkPlayerOptionsTableCell;
  // Forward declaring type: LevelPackHeaderTableCell
  class LevelPackHeaderTableCell;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: NetworkPlayersTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkPlayersTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: GlobalNamespace::NetworkPlayersTableView::CellInfo
    class CellInfo;
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private NetworkPlayerTableCell _playerCellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetworkPlayerTableCell* playerCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayerTableCell*) == 0x8);
    // private NetworkPlayerOptionsTableCell _optionsCellPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NetworkPlayerOptionsTableCell* optionsCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayerOptionsTableCell*) == 0x8);
    // private LevelPackHeaderTableCell _headerCellPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::LevelPackHeaderTableCell* headerCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelPackHeaderTableCell*) == 0x8);
    // private System.Single _rowHeight
    // Size: 0x4
    // Offset: 0x38
    float rowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rowHeight and: cellInfo
    char __padding4[0x4] = {};
    // private System.Collections.Generic.List`1<NetworkPlayersTableView/CellInfo> _cellInfo
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>* cellInfo;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>*) == 0x8);
    // private System.Int32 _selectedCellIndex
    // Size: 0x4
    // Offset: 0x48
    int selectedCellIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedCellIndex and: selectedPlayerID
    char __padding6[0x4] = {};
    // private System.String _selectedPlayerID
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* selectedPlayerID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _selectedCellHasOptions
    // Size: 0x1
    // Offset: 0x58
    bool selectedCellHasOptions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NetworkPlayersTableView
    NetworkPlayersTableView(HMUI::TableView* tableView_ = {}, GlobalNamespace::NetworkPlayerTableCell* playerCellPrefab_ = {}, GlobalNamespace::NetworkPlayerOptionsTableCell* optionsCellPrefab_ = {}, GlobalNamespace::LevelPackHeaderTableCell* headerCellPrefab_ = {}, float rowHeight_ = {}, System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>* cellInfo_ = {}, int selectedCellIndex_ = {}, ::Il2CppString* selectedPlayerID_ = {}, bool selectedCellHasOptions_ = {}) noexcept : tableView{tableView_}, playerCellPrefab{playerCellPrefab_}, optionsCellPrefab{optionsCellPrefab_}, headerCellPrefab{headerCellPrefab_}, rowHeight{rowHeight_}, cellInfo{cellInfo_}, selectedCellIndex{selectedCellIndex_}, selectedPlayerID{selectedPlayerID_}, selectedCellHasOptions{selectedCellHasOptions_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kPlayerCellIdentifier
    static constexpr const char* kPlayerCellIdentifier = "PlayerCell";
    // Get static field: static private System.String kPlayerCellIdentifier
    static ::Il2CppString* _get_kPlayerCellIdentifier();
    // Set static field: static private System.String kPlayerCellIdentifier
    static void _set_kPlayerCellIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kHeaderCellIdentifier
    static constexpr const char* kHeaderCellIdentifier = "HeaderCell";
    // Get static field: static private System.String kHeaderCellIdentifier
    static ::Il2CppString* _get_kHeaderCellIdentifier();
    // Set static field: static private System.String kHeaderCellIdentifier
    static void _set_kHeaderCellIdentifier(::Il2CppString* value);
    // static field const value: static private System.String kOptionsCellIdentifier
    static constexpr const char* kOptionsCellIdentifier = "OptionsCell";
    // Get static field: static private System.String kOptionsCellIdentifier
    static ::Il2CppString* _get_kOptionsCellIdentifier();
    // Set static field: static private System.String kOptionsCellIdentifier
    static void _set_kOptionsCellIdentifier(::Il2CppString* value);
    // Get instance field: private HMUI.TableView _tableView
    HMUI::TableView* _get__tableView();
    // Set instance field: private HMUI.TableView _tableView
    void _set__tableView(HMUI::TableView* value);
    // Get instance field: private NetworkPlayerTableCell _playerCellPrefab
    GlobalNamespace::NetworkPlayerTableCell* _get__playerCellPrefab();
    // Set instance field: private NetworkPlayerTableCell _playerCellPrefab
    void _set__playerCellPrefab(GlobalNamespace::NetworkPlayerTableCell* value);
    // Get instance field: private NetworkPlayerOptionsTableCell _optionsCellPrefab
    GlobalNamespace::NetworkPlayerOptionsTableCell* _get__optionsCellPrefab();
    // Set instance field: private NetworkPlayerOptionsTableCell _optionsCellPrefab
    void _set__optionsCellPrefab(GlobalNamespace::NetworkPlayerOptionsTableCell* value);
    // Get instance field: private LevelPackHeaderTableCell _headerCellPrefab
    GlobalNamespace::LevelPackHeaderTableCell* _get__headerCellPrefab();
    // Set instance field: private LevelPackHeaderTableCell _headerCellPrefab
    void _set__headerCellPrefab(GlobalNamespace::LevelPackHeaderTableCell* value);
    // Get instance field: private System.Single _rowHeight
    float _get__rowHeight();
    // Set instance field: private System.Single _rowHeight
    void _set__rowHeight(float value);
    // Get instance field: private System.Collections.Generic.List`1<NetworkPlayersTableView/CellInfo> _cellInfo
    System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>* _get__cellInfo();
    // Set instance field: private System.Collections.Generic.List`1<NetworkPlayersTableView/CellInfo> _cellInfo
    void _set__cellInfo(System::Collections::Generic::List_1<GlobalNamespace::NetworkPlayersTableView::CellInfo*>* value);
    // Get instance field: private System.Int32 _selectedCellIndex
    int _get__selectedCellIndex();
    // Set instance field: private System.Int32 _selectedCellIndex
    void _set__selectedCellIndex(int value);
    // Get instance field: private System.String _selectedPlayerID
    ::Il2CppString* _get__selectedPlayerID();
    // Set instance field: private System.String _selectedPlayerID
    void _set__selectedPlayerID(::Il2CppString* value);
    // Get instance field: private System.Boolean _selectedCellHasOptions
    bool _get__selectedCellHasOptions();
    // Set instance field: private System.Boolean _selectedCellHasOptions
    void _set__selectedCellHasOptions(bool value);
    // public System.Single CellSize()
    // Offset: 0x1043014
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x104301C
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x104306C
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // private System.Void AddPlayers(System.Collections.Generic.IEnumerable`1<INetworkPlayer> players, System.String title)
    // Offset: 0x104362C
    void AddPlayers(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* players, ::Il2CppString* title);
    // public System.Void SetParties(System.Collections.Generic.IEnumerable`1<INetworkPlayer> partyPlayers, System.Collections.Generic.IEnumerable`1<INetworkPlayer> otherPlayers, System.String myPartyTitle, System.String otherPlayersTitle)
    // Offset: 0x1043EE0
    void SetParties(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* partyPlayers, System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* otherPlayers, ::Il2CppString* myPartyTitle, ::Il2CppString* otherPlayersTitle);
    // private System.Void HandleCellWasPressed(HMUI.TableView tableView, HMUI.TableCell tableCell)
    // Offset: 0x1044000
    void HandleCellWasPressed(HMUI::TableView* tableView, HMUI::TableCell* tableCell);
    // static private System.Boolean HasVisibleOptions(INetworkPlayer player)
    // Offset: 0x1043B48
    static bool HasVisibleOptions(GlobalNamespace::INetworkPlayer* player);
    // public System.Void .ctor()
    // Offset: 0x1044004
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPlayersTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPlayersTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPlayersTableView*, creationType>()));
    }
  }; // NetworkPlayersTableView
  #pragma pack(pop)
  static check_size<sizeof(NetworkPlayersTableView), 88 + sizeof(bool)> __GlobalNamespace_NetworkPlayersTableViewSizeCheck;
  static_assert(sizeof(NetworkPlayersTableView) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersTableView*, "", "NetworkPlayersTableView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NetworkPlayersTableView::*)()>(&GlobalNamespace::NetworkPlayersTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::NetworkPlayersTableView::*)()>(&GlobalNamespace::NetworkPlayersTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::NetworkPlayersTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::NetworkPlayersTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersTableView::AddPlayers
// Il2CppName: AddPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersTableView::*)(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*, ::Il2CppString*)>(&GlobalNamespace::NetworkPlayersTableView::AddPlayers)> {
  static const MethodInfo* get() {
    static auto* players = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersTableView*), "AddPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{players, title});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersTableView::SetParties
// Il2CppName: SetParties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersTableView::*)(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*, System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::NetworkPlayersTableView::SetParties)> {
  static const MethodInfo* get() {
    static auto* partyPlayers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    static auto* otherPlayers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    static auto* myPartyTitle = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* otherPlayersTitle = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersTableView*), "SetParties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partyPlayers, otherPlayers, myPartyTitle, otherPlayersTitle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed
// Il2CppName: HandleCellWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayersTableView::*)(HMUI::TableView*, HMUI::TableCell*)>(&GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* tableCell = &::il2cpp_utils::GetClassFromName("HMUI", "TableCell")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersTableView*), "HandleCellWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, tableCell});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions
// Il2CppName: HasVisibleOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::INetworkPlayer*)>(&GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("", "INetworkPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayersTableView*), "HasVisibleOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayersTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
