#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArray_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::SparselyPopulatedArray_1<T>::__set__head(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x10>(this, std::forward<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArray_1<T>::__get__head()  {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> System::Threading::SparselyPopulatedArray_1<T>::__get__head() const {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::SparselyPopulatedArray_1<T>::__set__tail(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x18>(this, std::forward<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArray_1<T>::__get__tail()  {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SparselyPopulatedArrayFragment_1<T>*> System::Threading::SparselyPopulatedArray_1<T>::__get__tail() const {
return ::cordl_internals::getInstanceField<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::SparselyPopulatedArray_1<T>* System::Threading::SparselyPopulatedArray_1<T>::New_ctor(int32_t  initialSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::SparselyPopulatedArray_1<T>*>(initialSize));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::SparselyPopulatedArray_1<T>::_ctor(int32_t  initialSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialSize);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArray_1<T>::get_Tail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(),
                            "get_Tail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::SparselyPopulatedArrayAddInfo_1<T> System::Threading::SparselyPopulatedArray_1<T>::Add(T  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>, false>(*this, ___internal_method, element);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
