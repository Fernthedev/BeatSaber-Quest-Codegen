#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnumTableViewDataSource_1_def.hpp"
#include "GlobalNamespace/zzzz__TextOnlyTableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::EnumTableViewDataSource_1<T>::operator ::HMUI::__TableView__IDataSource*() noexcept {
return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__cellPrefab(::GlobalNamespace::TextOnlyTableCell*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TextOnlyTableCell*, 0x18>(this, std::forward<::GlobalNamespace::TextOnlyTableCell*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::TextOnlyTableCell* GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TextOnlyTableCell*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TextOnlyTableCell*> GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TextOnlyTableCell*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__cellHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr float_t const& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__values(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x28>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__values()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& GlobalNamespace::EnumTableViewDataSource_1<T>::__get__values() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline float_t GlobalNamespace::EnumTableViewDataSource_1<T>::CellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::HMUI::TableCell* GlobalNamespace::EnumTableViewDataSource_1<T>::CellForIdx(::HMUI::TableView*  tableView, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(*this, ___internal_method, tableView, idx);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::GetIdForValue(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                            "GetIdForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                            "GetLabelForId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, id);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::EnumTableViewDataSource_1<T>::GetValueForId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                            "GetValueForId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, id);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForValue(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                            "GetLabelForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::EnumTableViewDataSource_1<T>* GlobalNamespace::EnumTableViewDataSource_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnumTableViewDataSource_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::EnumTableViewDataSource_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnumTableViewDataSource_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
