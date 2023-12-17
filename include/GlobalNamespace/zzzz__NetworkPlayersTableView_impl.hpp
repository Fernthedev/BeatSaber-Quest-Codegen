#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersTableView_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerTableCell_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerOptionsTableCell_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersTableView_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackHeaderTableCell_def.hpp"
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::__NetworkPlayersTableView__CellInfo__CellType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType  GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::Header{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType  GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::Player{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType  GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::Options{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__NetworkPlayersTableView__CellInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NetworkPlayersTableView__CellInfo::*)()>(&::GlobalNamespace::__NetworkPlayersTableView__CellInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a958c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo::__set_type(::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType, 0x10>(this, std::forward<::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType>(value));
}
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_type()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType, 0x10>(this);
}
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType, 0x10>(this);
}
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo::__set_headerString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_headerString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_headerString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo::__set_player(::GlobalNamespace::INetworkPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkPlayer*, 0x20>(this, std::forward<::GlobalNamespace::INetworkPlayer*>(value));
}
constexpr ::GlobalNamespace::INetworkPlayer* GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_player()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPlayer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPlayer*, 0x20>(this);
}
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo::__set_lastCellInParty(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_lastCellInParty()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_lastCellInParty() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::__NetworkPlayersTableView__CellInfo* GlobalNamespace::__NetworkPlayersTableView__CellInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>());
}
inline void GlobalNamespace::__NetworkPlayersTableView__CellInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.CellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a87f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a8800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.CellForIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (::GlobalNamespace::NetworkPlayersTableView::*)(::HMUI::TableView*, int32_t)>(&::GlobalNamespace::NetworkPlayersTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x22a8848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.AddPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::StringW)>(&::GlobalNamespace::NetworkPlayersTableView::AddPlayers)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x22a8ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "AddPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.SetParties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::StringW, ::StringW)>(&::GlobalNamespace::NetworkPlayersTableView::SetParties)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x22a98e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "SetParties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.HandleCellWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(::HMUI::TableView*, ::HMUI::TableCell*)>(&::GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a9a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "HandleCellWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.HasVisibleOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::INetworkPlayer*)>(&::GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x22a9594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "HasVisibleOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22a9a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr  GlobalNamespace::NetworkPlayersTableView::operator ::HMUI::__TableView__IDataSource*() noexcept {
return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__tableView(::HMUI::TableView*  value)  {
::cordl_internals::setInstanceField<::HMUI::TableView*, 0x18>(this, std::forward<::HMUI::TableView*>(value));
}
constexpr ::HMUI::TableView* GlobalNamespace::NetworkPlayersTableView::__get__tableView()  {
return ::cordl_internals::getInstanceField<::HMUI::TableView*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> GlobalNamespace::NetworkPlayersTableView::__get__tableView() const {
return ::cordl_internals::getInstanceField<::HMUI::TableView*, 0x18>(this);
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__playerCellPrefab(::GlobalNamespace::NetworkPlayerTableCell*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NetworkPlayerTableCell*, 0x20>(this, std::forward<::GlobalNamespace::NetworkPlayerTableCell*>(value));
}
constexpr ::GlobalNamespace::NetworkPlayerTableCell* GlobalNamespace::NetworkPlayersTableView::__get__playerCellPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPlayerTableCell*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerTableCell*> GlobalNamespace::NetworkPlayersTableView::__get__playerCellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPlayerTableCell*, 0x20>(this);
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__optionsCellPrefab(::GlobalNamespace::NetworkPlayerOptionsTableCell*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NetworkPlayerOptionsTableCell*, 0x28>(this, std::forward<::GlobalNamespace::NetworkPlayerOptionsTableCell*>(value));
}
constexpr ::GlobalNamespace::NetworkPlayerOptionsTableCell* GlobalNamespace::NetworkPlayersTableView::__get__optionsCellPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPlayerOptionsTableCell*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerOptionsTableCell*> GlobalNamespace::NetworkPlayersTableView::__get__optionsCellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPlayerOptionsTableCell*, 0x28>(this);
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__headerCellPrefab(::GlobalNamespace::LevelPackHeaderTableCell*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelPackHeaderTableCell*, 0x30>(this, std::forward<::GlobalNamespace::LevelPackHeaderTableCell*>(value));
}
constexpr ::GlobalNamespace::LevelPackHeaderTableCell* GlobalNamespace::NetworkPlayersTableView::__get__headerCellPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelPackHeaderTableCell*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackHeaderTableCell*> GlobalNamespace::NetworkPlayersTableView::__get__headerCellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelPackHeaderTableCell*, 0x30>(this);
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__rowHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NetworkPlayersTableView::__get__rowHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::NetworkPlayersTableView::__get__rowHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__cellInfo(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*, 0x40>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>* GlobalNamespace::NetworkPlayersTableView::__get__cellInfo()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*> GlobalNamespace::NetworkPlayersTableView::__get__cellInfo() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*, 0x40>(this);
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__selectedCellIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NetworkPlayersTableView::__get__selectedCellIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::NetworkPlayersTableView::__get__selectedCellIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__selectedPlayerID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::NetworkPlayersTableView::__get__selectedPlayerID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::NetworkPlayersTableView::__get__selectedPlayerID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__selectedCellHasOptions(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::NetworkPlayersTableView::__get__selectedCellHasOptions()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& GlobalNamespace::NetworkPlayersTableView::__get__selectedCellHasOptions() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
inline float_t GlobalNamespace::NetworkPlayersTableView::CellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkPlayersTableView::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::HMUI::TableCell* GlobalNamespace::NetworkPlayersTableView::CellForIdx(::HMUI::TableView*  tableView, int32_t  row)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(*this, ___internal_method, tableView, row);
}
inline void GlobalNamespace::NetworkPlayersTableView::AddPlayers(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*  players, ::StringW  title)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "AddPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, players, title);
}
inline void GlobalNamespace::NetworkPlayersTableView::SetParties(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*  partyPlayers, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*  otherPlayers, ::StringW  myPartyTitle, ::StringW  otherPlayersTitle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "SetParties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, partyPlayers, otherPlayers, myPartyTitle, otherPlayersTitle);
}
inline void GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed(::HMUI::TableView*  tableView, ::HMUI::TableCell*  tableCell)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "HandleCellWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tableView, tableCell);
}
inline bool GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions(::GlobalNamespace::INetworkPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            "HasVisibleOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, player);
}
inline ::GlobalNamespace::NetworkPlayersTableView* GlobalNamespace::NetworkPlayersTableView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NetworkPlayersTableView*>());
}
inline void GlobalNamespace::NetworkPlayersTableView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
