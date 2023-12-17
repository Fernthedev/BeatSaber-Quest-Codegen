#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::HMUI::__SegmentedControl__IDataSource.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::__SegmentedControl__IDataSource::*)()>(&::HMUI::__SegmentedControl__IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__SegmentedControl__IDataSource.CellForCellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::SegmentedControlCell* (::HMUI::__SegmentedControl__IDataSource::*)(int32_t)>(&::HMUI::__SegmentedControl__IDataSource::CellForCellNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline int32_t HMUI::__SegmentedControl__IDataSource::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::HMUI::SegmentedControlCell* HMUI::__SegmentedControl__IDataSource::CellForCellNumber(int32_t  cellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                            "CellForCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::SegmentedControlCell*, false>(*this, ___internal_method, cellNumber);
}
//  Writing Method size for method: ::HMUI::SegmentedControl.add_didSelectCellEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::HMUI::SegmentedControl*,int32_t>*)>(&::HMUI::SegmentedControl::add_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211f9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "add_didSelectCellEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.remove_didSelectCellEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::HMUI::SegmentedControl*,int32_t>*)>(&::HMUI::SegmentedControl::remove_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211fa78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "remove_didSelectCellEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_dataSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__SegmentedControl__IDataSource* (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211fb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "get_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.set_dataSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::__SegmentedControl__IDataSource*)>(&::HMUI::SegmentedControl::set_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211efbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "set_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SegmentedControl__IDataSource*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_selectedCellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_selectedCellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211fb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "get_selectedCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_cells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell*>* (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_cells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211fb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "get_cells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.CreateCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::CreateCells)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x211fb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "CreateCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.HandleCellSelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::SelectableCell*, ::HMUI::__SelectableCell__TransitionType, ::System::Object*)>(&::HMUI::SegmentedControl::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2120008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "HandleCellSelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.SetCallbackForCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(int32_t, ::System::Action_1<int32_t>*)>(&::HMUI::SegmentedControl::SetCallbackForCell)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2120158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "SetCallbackForCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.ReloadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::ReloadData)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x211f004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "ReloadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.SelectCellWithNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(int32_t)>(&::HMUI::SegmentedControl::SelectCellWithNumber)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21201c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "SelectCellWithNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x211f844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::SegmentedControl::__set__separatorPrefab(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* HMUI::SegmentedControl::__get__separatorPrefab()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> HMUI::SegmentedControl::__get__separatorPrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void HMUI::SegmentedControl::__set_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl*,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*, 0x20>(this, std::forward<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*>(value));
}
constexpr ::System::Action_2<::HMUI::SegmentedControl*,int32_t>* HMUI::SegmentedControl::__get_didSelectCellEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*> HMUI::SegmentedControl::__get_didSelectCellEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*, 0x20>(this);
}
constexpr void HMUI::SegmentedControl::__set__numberOfCells(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::SegmentedControl::__get__numberOfCells()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& HMUI::SegmentedControl::__get__numberOfCells() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void HMUI::SegmentedControl::__set__cells(::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>* HMUI::SegmentedControl::__get__cells()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*> HMUI::SegmentedControl::__get__cells() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*, 0x30>(this);
}
constexpr void HMUI::SegmentedControl::__set__separators(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* HMUI::SegmentedControl::__get__separators()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> HMUI::SegmentedControl::__get__separators() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, 0x38>(this);
}
constexpr void HMUI::SegmentedControl::__set__dataSource(::HMUI::__SegmentedControl__IDataSource*  value)  {
::cordl_internals::setInstanceField<::HMUI::__SegmentedControl__IDataSource*, 0x40>(this, std::forward<::HMUI::__SegmentedControl__IDataSource*>(value));
}
constexpr ::HMUI::__SegmentedControl__IDataSource* HMUI::SegmentedControl::__get__dataSource()  {
return ::cordl_internals::getInstanceField<::HMUI::__SegmentedControl__IDataSource*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__SegmentedControl__IDataSource*> HMUI::SegmentedControl::__get__dataSource() const {
return ::cordl_internals::getInstanceField<::HMUI::__SegmentedControl__IDataSource*, 0x40>(this);
}
constexpr void HMUI::SegmentedControl::__set__selectedCellNumber(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::SegmentedControl::__get__selectedCellNumber()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& HMUI::SegmentedControl::__get__selectedCellNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void HMUI::SegmentedControl::__set__callbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*, 0x50>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>* HMUI::SegmentedControl::__get__callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*> HMUI::SegmentedControl::__get__callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>*>*, 0x50>(this);
}
inline void HMUI::SegmentedControl::add_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "add_didSelectCellEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::SegmentedControl::remove_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl*,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "remove_didSelectCellEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SegmentedControl*,int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HMUI::__SegmentedControl__IDataSource* HMUI::SegmentedControl::get_dataSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "get_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__SegmentedControl__IDataSource*, false>(*this, ___internal_method);
}
inline void HMUI::SegmentedControl::set_dataSource(::HMUI::__SegmentedControl__IDataSource*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "set_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SegmentedControl__IDataSource*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t HMUI::SegmentedControl::get_selectedCellNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "get_selectedCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell*>* HMUI::SegmentedControl::get_cells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "get_cells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell*>*, false>(*this, ___internal_method);
}
inline void HMUI::SegmentedControl::CreateCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "CreateCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::SegmentedControl::HandleCellSelectionDidChange(::HMUI::SelectableCell*  selectableCell, ::HMUI::__SelectableCell__TransitionType  transitionType, ::System::Object*  changeOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "HandleCellSelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectableCell, transitionType, changeOwner);
}
inline void HMUI::SegmentedControl::SetCallbackForCell(int32_t  cellNumber, ::System::Action_1<int32_t>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "SetCallbackForCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cellNumber, callback);
}
inline void HMUI::SegmentedControl::ReloadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "ReloadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::SegmentedControl::SelectCellWithNumber(int32_t  selectCellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            "SelectCellWithNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, selectCellNumber);
}
inline ::HMUI::SegmentedControl* HMUI::SegmentedControl::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::SegmentedControl*>());
}
inline void HMUI::SegmentedControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
