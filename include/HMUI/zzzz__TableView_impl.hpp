#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
constexpr void HMUI::__TableView__TableType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__TableView__TableType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__TableView__TableType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__TableView__TableType::__TableView__TableType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__TableView__TableType  HMUI::__TableView__TableType::Vertical{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__TableView__TableType  HMUI::__TableView__TableType::Horizontal{static_cast<int32_t>(0x1)};
constexpr void HMUI::__TableView__ScrollPositionType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__TableView__ScrollPositionType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__TableView__ScrollPositionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__TableView__ScrollPositionType::__TableView__ScrollPositionType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__TableView__ScrollPositionType  HMUI::__TableView__ScrollPositionType::Beginning{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__TableView__ScrollPositionType  HMUI::__TableView__ScrollPositionType::Center{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__TableView__ScrollPositionType  HMUI::__TableView__ScrollPositionType::End{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HMUI::__TableView__CellsGroup.get_reuseIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::__TableView__CellsGroup::*)()>(&::HMUI::__TableView__CellsGroup::get_reuseIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214aa14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(),
                            "get_reuseIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__TableView__CellsGroup.get_cells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HMUI::TableCell*>* (::HMUI::__TableView__CellsGroup::*)()>(&::HMUI::__TableView__CellsGroup::get_cells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214aa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(),
                            "get_cells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__TableView__CellsGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__TableView__CellsGroup::*)()>(&::HMUI::__TableView__CellsGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214aa24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::__TableView__CellsGroup::__set__reuseIdentifier(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HMUI::__TableView__CellsGroup::__get__reuseIdentifier()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HMUI::__TableView__CellsGroup::__get__reuseIdentifier() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HMUI::__TableView__CellsGroup::__set__cells(::System::Collections::Generic::List_1<::HMUI::TableCell*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HMUI::TableCell*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::HMUI::TableCell*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HMUI::TableCell*>* HMUI::__TableView__CellsGroup::__get__cells()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HMUI::TableCell*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::TableCell*>*> HMUI::__TableView__CellsGroup::__get__cells() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HMUI::TableCell*>*, 0x18>(this);
}
inline ::StringW HMUI::__TableView__CellsGroup::get_reuseIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(),
                            "get_reuseIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::HMUI::TableCell*>* HMUI::__TableView__CellsGroup::get_cells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(),
                            "get_cells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HMUI::TableCell*>*, false>(*this, ___internal_method);
}
inline ::HMUI::__TableView__CellsGroup* HMUI::__TableView__CellsGroup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__TableView__CellsGroup*>());
}
inline void HMUI::__TableView__CellsGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__TableView__IDataSource.CellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::__TableView__IDataSource::*)()>(&::HMUI::__TableView__IDataSource::CellSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__TableView__IDataSource.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::__TableView__IDataSource::*)()>(&::HMUI::__TableView__IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__TableView__IDataSource.CellForIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (::HMUI::__TableView__IDataSource::*)(::HMUI::TableView*, int32_t)>(&::HMUI::__TableView__IDataSource::CellForIdx)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline float_t HMUI::__TableView__IDataSource::CellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t HMUI::__TableView__IDataSource::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::HMUI::TableCell* HMUI::__TableView__IDataSource::CellForIdx(::HMUI::TableView*  tableView, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(*this, ___internal_method, tableView, idx);
}
//  Writing Method size for method: ::HMUI::TableView.get_selectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableViewSelectionType (::HMUI::TableView::*)()>(&::HMUI::TableView::get_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2148a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.set_selectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableViewSelectionType)>(&::HMUI::TableView::set_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2148a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "set_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableViewSelectionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_canSelectSelectedCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::TableView::*)()>(&::HMUI::TableView::get_canSelectSelectedCell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2148a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_canSelectSelectedCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didSelectCellWithIdxEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_2<::HMUI::TableView*,int32_t>*)>(&::HMUI::TableView::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didSelectCellWithIdxEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::TableView*,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didSelectCellWithIdxEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_2<::HMUI::TableView*,int32_t>*)>(&::HMUI::TableView::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didSelectCellWithIdxEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::TableView*,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didReloadDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::HMUI::TableView*>*)>(&::HMUI::TableView::add_didReloadDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didReloadDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didReloadDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::HMUI::TableView*>*)>(&::HMUI::TableView::remove_didReloadDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didReloadDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didInsertCellsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::HMUI::TableView*>*)>(&::HMUI::TableView::add_didInsertCellsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didInsertCellsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didInsertCellsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::HMUI::TableView*>*)>(&::HMUI::TableView::remove_didInsertCellsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didInsertCellsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didDeleteCellsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::HMUI::TableView*>*)>(&::HMUI::TableView::add_didDeleteCellsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didDeleteCellsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didDeleteCellsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::HMUI::TableView*>*)>(&::HMUI::TableView::remove_didDeleteCellsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didDeleteCellsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didChangeRectSizeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::HMUI::TableView*>*)>(&::HMUI::TableView::add_didChangeRectSizeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2148fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didChangeRectSizeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didChangeRectSizeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::HMUI::TableView*>*)>(&::HMUI::TableView::remove_didChangeRectSizeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x214907c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didChangeRectSizeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_dataSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__TableView__IDataSource* (::HMUI::TableView::*)()>(&::HMUI::TableView::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214912c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.SetDataSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::__TableView__IDataSource*, bool)>(&::HMUI::TableView::SetDataSource)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2149134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "SetDataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__TableView__IDataSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_visibleCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::HMUI::TableCell*>* (::HMUI::TableView::*)()>(&::HMUI::TableView::get_visibleCells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214914c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_visibleCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_viewportTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::HMUI::TableView::*)()>(&::HMUI::TableView::get_viewportTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2149154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_viewportTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_contentTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::HMUI::TableView::*)()>(&::HMUI::TableView::get_contentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214915c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_contentTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_numberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_numberOfCells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2149164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_numberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_cellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_cellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214916c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_cellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_tableType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__TableView__TableType (::HMUI::TableView::*)()>(&::HMUI::TableView::get_tableType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2149174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_tableType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_scrollView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ScrollView* (::HMUI::TableView::*)()>(&::HMUI::TableView::get_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214917c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_scrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2149184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::OnDestroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21494e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x214956c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.LazyInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::LazyInit)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2149194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "LazyInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Hide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Hide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2149d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Show
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Show)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2149d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "Show",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshContentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::RefreshContentSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2149d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "RefreshContentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshCellsContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::RefreshCellsContent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2149da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "RefreshCellsContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.GetVisibleCellsIdRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Tuple_2<int32_t,int32_t>* (::HMUI::TableView::*)()>(&::HMUI::TableView::GetVisibleCellsIdRange)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2149db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "GetVisibleCellsIdRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(bool, bool)>(&::HMUI::TableView::RefreshCells)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x21495c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "RefreshCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.LayoutCellForIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableCell*, int32_t, float_t)>(&::HMUI::TableView::LayoutCellForIdx)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x214a0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "LayoutCellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.AddCellToReusableCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableCell*)>(&::HMUI::TableView::AddCellToReusableCells)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2149f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "AddCellToReusableCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.HandleScrollRectValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(float_t)>(&::HMUI::TableView::HandleScrollRectValueChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x214a284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "HandleScrollRectValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.HandleCellSelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::SelectableCell*, ::HMUI::__SelectableCell__TransitionType, ::System::Object*)>(&::HMUI::TableView::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x214a290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "HandleCellSelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DidSelectCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t)>(&::HMUI::TableView::DidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x214a55c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ReloadDataKeepingPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ReloadDataKeepingPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x214a584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ReloadDataKeepingPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ReloadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ReloadData)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2147860;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.InsertCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t, int32_t)>(&::HMUI::TableView::InsertCells)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x2147e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "InsertCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DeleteCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t, int32_t)>(&::HMUI::TableView::DeleteCells)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x2148280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "DeleteCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DequeueReusableCellForIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (::HMUI::TableView::*)(::StringW)>(&::HMUI::TableView::DequeueReusableCellForIdentifier)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2146834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "DequeueReusableCellForIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.SelectCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t, bool)>(&::HMUI::TableView::SelectCellWithIdx)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x214a5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "SelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ClearSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ClearSelection)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x214a7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ClearHighlights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ClearHighlights)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2149bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ClearHighlights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ScrollToCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t, ::HMUI::__TableView__ScrollPositionType, bool)>(&::HMUI::TableView::ScrollToCellWithIdx)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2148630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ScrollToCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__TableView__ScrollPositionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ChangeRectSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::UnityEngine::__RectTransform__Axis, float_t)>(&::HMUI::TableView::ChangeRectSize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x214a964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ChangeRectSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2148710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::ITableCellOwner"
constexpr  HMUI::TableView::operator ::HMUI::ITableCellOwner*() noexcept {
return static_cast<::HMUI::ITableCellOwner*>(static_cast<void*>(this));
}
constexpr void HMUI::TableView::__set__scrollView(::HMUI::ScrollView*  value)  {
::cordl_internals::setInstanceField<::HMUI::ScrollView*, 0x18>(this, std::forward<::HMUI::ScrollView*>(value));
}
constexpr ::HMUI::ScrollView* HMUI::TableView::__get__scrollView()  {
return ::cordl_internals::getInstanceField<::HMUI::ScrollView*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ScrollView*> HMUI::TableView::__get__scrollView() const {
return ::cordl_internals::getInstanceField<::HMUI::ScrollView*, 0x18>(this);
}
constexpr void HMUI::TableView::__set__scrollToTopOnEnable(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::TableView::__get__scrollToTopOnEnable()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& HMUI::TableView::__get__scrollToTopOnEnable() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void HMUI::TableView::__set__alignToCenter(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::TableView::__get__alignToCenter()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& HMUI::TableView::__get__alignToCenter() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void HMUI::TableView::__set__tableType(::HMUI::__TableView__TableType  value)  {
::cordl_internals::setInstanceField<::HMUI::__TableView__TableType, 0x24>(this, std::forward<::HMUI::__TableView__TableType>(value));
}
constexpr ::HMUI::__TableView__TableType& HMUI::TableView::__get__tableType()  {
return ::cordl_internals::getInstanceField<::HMUI::__TableView__TableType, 0x24>(this);
}
constexpr ::HMUI::__TableView__TableType const& HMUI::TableView::__get__tableType() const {
return ::cordl_internals::getInstanceField<::HMUI::__TableView__TableType, 0x24>(this);
}
constexpr void HMUI::TableView::__set__selectionType(::HMUI::TableViewSelectionType  value)  {
::cordl_internals::setInstanceField<::HMUI::TableViewSelectionType, 0x28>(this, std::forward<::HMUI::TableViewSelectionType>(value));
}
constexpr ::HMUI::TableViewSelectionType& HMUI::TableView::__get__selectionType()  {
return ::cordl_internals::getInstanceField<::HMUI::TableViewSelectionType, 0x28>(this);
}
constexpr ::HMUI::TableViewSelectionType const& HMUI::TableView::__get__selectionType() const {
return ::cordl_internals::getInstanceField<::HMUI::TableViewSelectionType, 0x28>(this);
}
constexpr void HMUI::TableView::__set__canSelectSelectedCell(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::TableView::__get__canSelectSelectedCell()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& HMUI::TableView::__get__canSelectSelectedCell() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void HMUI::TableView::__set__preallocatedCells(::ArrayW<::HMUI::__TableView__CellsGroup*,::Array<::HMUI::__TableView__CellsGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::HMUI::__TableView__CellsGroup*,::Array<::HMUI::__TableView__CellsGroup*>*>, 0x30>(this, std::forward<::ArrayW<::HMUI::__TableView__CellsGroup*,::Array<::HMUI::__TableView__CellsGroup*>*>>(value));
}
constexpr ::ArrayW<::HMUI::__TableView__CellsGroup*,::Array<::HMUI::__TableView__CellsGroup*>*>& HMUI::TableView::__get__preallocatedCells()  {
return ::cordl_internals::getInstanceField<::ArrayW<::HMUI::__TableView__CellsGroup*,::Array<::HMUI::__TableView__CellsGroup*>*>, 0x30>(this);
}
constexpr ::ArrayW<::HMUI::__TableView__CellsGroup*,::Array<::HMUI::__TableView__CellsGroup*>*> const& HMUI::TableView::__get__preallocatedCells() const {
return ::cordl_internals::getInstanceField<::ArrayW<::HMUI::__TableView__CellsGroup*,::Array<::HMUI::__TableView__CellsGroup*>*>, 0x30>(this);
}
constexpr void HMUI::TableView::__set_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::TableView*,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::HMUI::TableView*,int32_t>*, 0x38>(this, std::forward<::System::Action_2<::HMUI::TableView*,int32_t>*>(value));
}
constexpr ::System::Action_2<::HMUI::TableView*,int32_t>* HMUI::TableView::__get_didSelectCellWithIdxEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::TableView*,int32_t>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::TableView*,int32_t>*> HMUI::TableView::__get_didSelectCellWithIdxEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::TableView*,int32_t>*, 0x38>(this);
}
constexpr void HMUI::TableView::__set_didReloadDataEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x40>(this, std::forward<::System::Action_1<::HMUI::TableView*>*>(value));
}
constexpr ::System::Action_1<::HMUI::TableView*>* HMUI::TableView::__get_didReloadDataEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::TableView*>*> HMUI::TableView::__get_didReloadDataEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x40>(this);
}
constexpr void HMUI::TableView::__set_didInsertCellsEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x48>(this, std::forward<::System::Action_1<::HMUI::TableView*>*>(value));
}
constexpr ::System::Action_1<::HMUI::TableView*>* HMUI::TableView::__get_didInsertCellsEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::TableView*>*> HMUI::TableView::__get_didInsertCellsEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x48>(this);
}
constexpr void HMUI::TableView::__set_didDeleteCellsEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x50>(this, std::forward<::System::Action_1<::HMUI::TableView*>*>(value));
}
constexpr ::System::Action_1<::HMUI::TableView*>* HMUI::TableView::__get_didDeleteCellsEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::TableView*>*> HMUI::TableView::__get_didDeleteCellsEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x50>(this);
}
constexpr void HMUI::TableView::__set_didChangeRectSizeEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x58>(this, std::forward<::System::Action_1<::HMUI::TableView*>*>(value));
}
constexpr ::System::Action_1<::HMUI::TableView*>* HMUI::TableView::__get_didChangeRectSizeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::TableView*>*> HMUI::TableView::__get_didChangeRectSizeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::TableView*>*, 0x58>(this);
}
constexpr void HMUI::TableView::__set__contentTransform(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x60>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* HMUI::TableView::__get__contentTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> HMUI::TableView::__get__contentTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x60>(this);
}
constexpr void HMUI::TableView::__set__viewportTransform(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x68>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* HMUI::TableView::__get__viewportTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> HMUI::TableView::__get__viewportTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x68>(this);
}
constexpr void HMUI::TableView::__set__dataSource(::HMUI::__TableView__IDataSource*  value)  {
::cordl_internals::setInstanceField<::HMUI::__TableView__IDataSource*, 0x70>(this, std::forward<::HMUI::__TableView__IDataSource*>(value));
}
constexpr ::HMUI::__TableView__IDataSource* HMUI::TableView::__get__dataSource()  {
return ::cordl_internals::getInstanceField<::HMUI::__TableView__IDataSource*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__TableView__IDataSource*> HMUI::TableView::__get__dataSource() const {
return ::cordl_internals::getInstanceField<::HMUI::__TableView__IDataSource*, 0x70>(this);
}
constexpr void HMUI::TableView::__set__numberOfCells(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::TableView::__get__numberOfCells()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& HMUI::TableView::__get__numberOfCells() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr void HMUI::TableView::__set__cellSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::TableView::__get__cellSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr float_t const& HMUI::TableView::__get__cellSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr void HMUI::TableView::__set__visibleCells(::System::Collections::Generic::List_1<::HMUI::TableCell*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HMUI::TableCell*>*, 0x80>(this, std::forward<::System::Collections::Generic::List_1<::HMUI::TableCell*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HMUI::TableCell*>* HMUI::TableView::__get__visibleCells()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HMUI::TableCell*>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::TableCell*>*> HMUI::TableView::__get__visibleCells() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HMUI::TableCell*>*, 0x80>(this);
}
constexpr void HMUI::TableView::__set__reusableCells(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HMUI::TableCell*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HMUI::TableCell*>*>*, 0x88>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HMUI::TableCell*>*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HMUI::TableCell*>*>* HMUI::TableView::__get__reusableCells()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HMUI::TableCell*>*>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HMUI::TableCell*>*>*> HMUI::TableView::__get__reusableCells() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HMUI::TableCell*>*>*, 0x88>(this);
}
constexpr void HMUI::TableView::__set__selectedCellIdxs(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x90>(this, std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* HMUI::TableView::__get__selectedCellIdxs()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> HMUI::TableView::__get__selectedCellIdxs() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x90>(this);
}
constexpr void HMUI::TableView::__set__prevMinIdx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::TableView::__get__prevMinIdx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr int32_t const& HMUI::TableView::__get__prevMinIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr void HMUI::TableView::__set__prevMaxIdx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::TableView::__get__prevMaxIdx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this);
}
constexpr int32_t const& HMUI::TableView::__get__prevMaxIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this);
}
constexpr void HMUI::TableView::__set__isInitialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::TableView::__get__isInitialized()  {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr bool const& HMUI::TableView::__get__isInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr void HMUI::TableView::__set__refreshCellsOnEnable(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa1>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::TableView::__get__refreshCellsOnEnable()  {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this);
}
constexpr bool const& HMUI::TableView::__get__refreshCellsOnEnable() const {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this);
}
inline ::HMUI::TableViewSelectionType HMUI::TableView::get_selectionType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableViewSelectionType, false>(*this, ___internal_method);
}
inline void HMUI::TableView::set_selectionType(::HMUI::TableViewSelectionType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "set_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableViewSelectionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HMUI::TableView::get_canSelectSelectedCell()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_canSelectSelectedCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HMUI::TableView::add_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::TableView*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didSelectCellWithIdxEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::TableView*,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::TableView*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didSelectCellWithIdxEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::TableView*,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::add_didReloadDataEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didReloadDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didReloadDataEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didReloadDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::add_didInsertCellsEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didInsertCellsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didInsertCellsEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didInsertCellsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::add_didDeleteCellsEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didDeleteCellsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didDeleteCellsEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didDeleteCellsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::add_didChangeRectSizeEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "add_didChangeRectSizeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didChangeRectSizeEvent(::System::Action_1<::HMUI::TableView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "remove_didChangeRectSizeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::TableView*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HMUI::__TableView__IDataSource* HMUI::TableView::get_dataSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__TableView__IDataSource*, false>(*this, ___internal_method);
}
inline void HMUI::TableView::SetDataSource(::HMUI::__TableView__IDataSource*  newDataSource, bool  reloadData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "SetDataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__TableView__IDataSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newDataSource, reloadData);
}
inline ::System::Collections::Generic::IEnumerable_1<::HMUI::TableCell*>* HMUI::TableView::get_visibleCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_visibleCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::HMUI::TableCell*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::RectTransform* HMUI::TableView::get_viewportTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_viewportTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline ::UnityEngine::RectTransform* HMUI::TableView::get_contentTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_contentTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline int32_t HMUI::TableView::get_numberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_numberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t HMUI::TableView::get_cellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_cellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::HMUI::__TableView__TableType HMUI::TableView::get_tableType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_tableType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__TableView__TableType, false>(*this, ___internal_method);
}
inline ::HMUI::ScrollView* HMUI::TableView::get_scrollView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "get_scrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::ScrollView*, false>(*this, ___internal_method);
}
inline void HMUI::TableView::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::LazyInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "LazyInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::Hide()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::Show()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "Show",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::RefreshContentSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "RefreshContentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::RefreshCellsContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "RefreshCellsContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Tuple_2<int32_t,int32_t>* HMUI::TableView::GetVisibleCellsIdRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "GetVisibleCellsIdRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<int32_t,int32_t>*, false>(*this, ___internal_method);
}
inline void HMUI::TableView::RefreshCells(bool  forcedVisualsRefresh, bool  forcedContentRefresh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "RefreshCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, forcedVisualsRefresh, forcedContentRefresh);
}
inline void HMUI::TableView::LayoutCellForIdx(::HMUI::TableCell*  cell, int32_t  idx, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "LayoutCellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cell, idx, offset);
}
inline void HMUI::TableView::AddCellToReusableCells(::HMUI::TableCell*  cell)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "AddCellToReusableCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cell);
}
inline void HMUI::TableView::HandleScrollRectValueChanged(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "HandleScrollRectValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, f);
}
inline void HMUI::TableView::HandleCellSelectionDidChange(::HMUI::SelectableCell*  selectableCell, ::HMUI::__SelectableCell__TransitionType  transitionType, ::System::Object*  changeOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "HandleCellSelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectableCell, transitionType, changeOwner);
}
inline void HMUI::TableView::DidSelectCellWithIdx(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "DidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx);
}
inline void HMUI::TableView::ReloadDataKeepingPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ReloadDataKeepingPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::ReloadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ReloadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::InsertCells(int32_t  idx, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "InsertCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, count);
}
inline void HMUI::TableView::DeleteCells(int32_t  idx, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "DeleteCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, count);
}
inline ::HMUI::TableCell* HMUI::TableView::DequeueReusableCellForIdentifier(::StringW  identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "DequeueReusableCellForIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(*this, ___internal_method, identifier);
}
/// @param callbackTable: bool (default: false)
inline void HMUI::TableView::SelectCellWithIdx(int32_t  idx, bool  callbackTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "SelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, callbackTable);
}
inline void HMUI::TableView::ClearSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::ClearHighlights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ClearHighlights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::TableView::ScrollToCellWithIdx(int32_t  idx, ::HMUI::__TableView__ScrollPositionType  scrollPositionType, bool  animated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ScrollToCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__TableView__ScrollPositionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, scrollPositionType, animated);
}
inline void HMUI::TableView::ChangeRectSize(::UnityEngine::__RectTransform__Axis  axis, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            "ChangeRectSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, axis, size);
}
inline ::HMUI::TableView* HMUI::TableView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::TableView*>());
}
inline void HMUI::TableView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
