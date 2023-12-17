#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTreeNode_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
template<typename T>
constexpr void UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__set_intervalStart(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
template<typename T>
constexpr int64_t& UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__get_intervalStart()  {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int64_t const& UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__get_intervalStart() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr void UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__set_intervalEnd(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
template<typename T>
constexpr int64_t& UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__get_intervalEnd()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int64_t const& UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__get_intervalEnd() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr void UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__set_item(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<typename T>
constexpr T& UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__get_item()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr T const& UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__get_item() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "intervalStart", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "intervalEnd", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "item", ty: "T", modifiers: "", def_value: Some("csnull") }]
template<typename T>
constexpr ::UnityEngine::Timeline::__IntervalTree_1__Entry<T>::__IntervalTree_1__Entry(int64_t  intervalStart, int64_t  intervalEnd, T  item) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->intervalStart = intervalStart;
this->intervalEnd = intervalEnd;
this->item = item;
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>* UnityEngine::Timeline::IntervalTree_1<T>::__get_m_Entries()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>*> UnityEngine::Timeline::IntervalTree_1<T>::__get_m_Entries() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__IntervalTree_1__Entry<T>>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* UnityEngine::Timeline::IntervalTree_1<T>::__get_m_Nodes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*> UnityEngine::Timeline::IntervalTree_1<T>::__get_m_Nodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Timeline::IntervalTree_1<T>::__set__dirty_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& UnityEngine::Timeline::IntervalTree_1<T>::__get__dirty_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& UnityEngine::Timeline::IntervalTree_1<T>::__get__dirty_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::Timeline::IntervalTree_1<T>::get_dirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "get_dirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::set_dirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "set_dirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::IntersectsWith(int64_t  value, ::System::Collections::Generic::List_1<T>*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "IntersectsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, results);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::IntersectsWithRange(int64_t  start, int64_t  end, ::System::Collections::Generic::List_1<T>*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "IntersectsWithRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, start, end, results);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::UpdateIntervals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "UpdateIntervals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::Query(::UnityEngine::Timeline::IntervalTreeNode  intervalTreeNode, int64_t  value, ::System::Collections::Generic::List_1<T>*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "Query",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTreeNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, intervalTreeNode, value, results);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::QueryRange(::UnityEngine::Timeline::IntervalTreeNode  intervalTreeNode, int64_t  start, int64_t  end, ::System::Collections::Generic::List_1<T>*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "QueryRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTreeNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, intervalTreeNode, start, end, results);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::Timeline::IntervalTree_1<T>::Rebuild(int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, start, end);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::Timeline::IntervalTree_1<T>* UnityEngine::Timeline::IntervalTree_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::IntervalTree_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Timeline::IntervalTree_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IntervalTree_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
