#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__set__elements(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__elements()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__elements() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__set__freeCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__freeCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__freeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__set__next(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x20>(this, std::forward<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__next()  {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__next() const {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__set__prev(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x28>(this, std::forward<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__prev()  {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> System::Threading::SparselyPopulatedArrayFragment_1<T>::__get__prev() const {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::New_ctor(int32_t  size)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(size));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::SparselyPopulatedArrayFragment_1<T>::_ctor(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::New_ctor(int32_t  size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  prev)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(size, prev));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::SparselyPopulatedArrayFragment_1<T>::_ctor(int32_t  size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  prev)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size, prev);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Prev()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                            "get_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Threading::SparselyPopulatedArrayFragment_1<T>::SafeAtomicRemove(int32_t  index, T  expectedElement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                            "SafeAtomicRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, index, expectedElement);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
