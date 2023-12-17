#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__LowLevelList_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::LowLevelList_1<T>::__set__items(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& System::Collections::Generic::LowLevelList_1<T>::__get__items()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& System::Collections::Generic::LowLevelList_1<T>::__get__items() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::LowLevelList_1<T>::__set__size(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::LowLevelList_1<T>::__get__size()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::LowLevelList_1<T>::__get__size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::LowLevelList_1<T>::__set__version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::LowLevelList_1<T>::__get__version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::LowLevelList_1<T>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::setStaticF_s_emptyArray(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<T,::Array<T>*>, "s_emptyArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get>(std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> System::Collections::Generic::LowLevelList_1<T>::getStaticF_s_emptyArray()  {
return ::cordl_internals::getStaticField<::ArrayW<T,::Array<T>*>, "s_emptyArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::LowLevelList_1<T>* System::Collections::Generic::LowLevelList_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LowLevelList_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::LowLevelList_1<T>* System::Collections::Generic::LowLevelList_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LowLevelList_1<T>*>(capacity));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Generic::LowLevelList_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "get_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "set_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Generic::LowLevelList_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Collections::Generic::LowLevelList_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::EnsureCapacity(int32_t  min)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "EnsureCapacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, min);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::AddRange(::System::Collections::Generic::IEnumerable_1<T>*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "AddRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collection);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::LowLevelList_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, arrayIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Generic::LowLevelList_1<T>::IndexOf(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::Insert(int32_t  index, T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::InsertRange(int32_t  index, ::System::Collections::Generic::IEnumerable_1<T>*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "InsertRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, collection);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::LowLevelList_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Generic::LowLevelList_1<T>::RemoveAll(::System::Predicate_1<T>*  match)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "RemoveAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, match);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::LowLevelList_1<T>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> System::Collections::Generic::LowLevelList_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelList_1<T>*>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
