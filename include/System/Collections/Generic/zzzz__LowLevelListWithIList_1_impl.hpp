#pragma once
#include "System/Collections/Generic/zzzz__LowLevelList_1_impl.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__set__list(::System::Collections::Generic::LowLevelListWithIList_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::LowLevelListWithIList_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::LowLevelListWithIList_1<T>* System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__get__list()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LowLevelListWithIList_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LowLevelListWithIList_1<T>*> System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__get__list() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::LowLevelListWithIList_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__set__index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__get__index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__set__version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__get__version()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__set__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__get__current()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::_ctor(::System::Collections::Generic::LowLevelListWithIList_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LowLevelListWithIList_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, list);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::MoveNextRare()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "MoveNextRare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LowLevelListWithIList_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__LowLevelListWithIList_1__Enumerator<T>::__LowLevelListWithIList_1__Enumerator(::System::Collections::Generic::LowLevelListWithIList_1<T>*  _list, int32_t  _index, int32_t  _version, T  _current) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->_list = _list;
this->_index = _index;
this->_version = _version;
this->_current = _current;
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::LowLevelListWithIList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LowLevelListWithIList_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelListWithIList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelListWithIList_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::LowLevelListWithIList_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LowLevelListWithIList_1<T>*>(capacity));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelListWithIList_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelListWithIList_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelListWithIList_1<T>*>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelListWithIList_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* System::Collections::Generic::LowLevelListWithIList_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelListWithIList_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
