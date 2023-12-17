#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::ILazyCopyHashSet_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::LazyCopyHashSet_1<T>::operator ::GlobalNamespace::ILazyCopyHashSet_1<T>*() noexcept {
return static_cast<::GlobalNamespace::ILazyCopyHashSet_1<T>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__itemsCopy(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::__get__itemsCopy()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> GlobalNamespace::LazyCopyHashSet_1<T>::__get__itemsCopy() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__items(::System::Collections::Generic::HashSet_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<T>*, 0x18>(this, std::forward<::System::Collections::Generic::HashSet_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::__get__items()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> GlobalNamespace::LazyCopyHashSet_1<T>::__get__items() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::LazyCopyHashSet_1<T>::__set__dirty(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& GlobalNamespace::LazyCopyHashSet_1<T>::__get__dirty()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& GlobalNamespace::LazyCopyHashSet_1<T>::__get__dirty() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::get_items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(),
                            "get_items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::LazyCopyHashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LazyCopyHashSet_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::LazyCopyHashSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::LazyCopyHashSet_1<T>* GlobalNamespace::LazyCopyHashSet_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LazyCopyHashSet_1<T>*>(capacity));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::LazyCopyHashSet_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::LazyCopyHashSet_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::LazyCopyHashSet_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::LazyCopyHashSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LazyCopyHashSet_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
