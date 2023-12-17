#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleMemoryPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__set__activeElements(::GlobalNamespace::LazyCopyHashSet_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T>*, 0x10>(this, std::forward<::GlobalNamespace::LazyCopyHashSet_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::__get__activeElements()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<T>*> GlobalNamespace::SimpleMemoryPool_1<T>::__get__activeElements() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__set__inactiveElements(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::__get__inactiveElements()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> GlobalNamespace::SimpleMemoryPool_1<T>::__get__inactiveElements() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__set__createNewItemFunc(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x20>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Func_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::__get__createNewItemFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> GlobalNamespace::SimpleMemoryPool_1<T>::__get__createNewItemFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::get_items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1<T>*>::get(),
                            "get_items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::SimpleMemoryPool_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::New_ctor(int32_t  startCapacity, ::System::Func_1<T>*  createNewItemFunc)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SimpleMemoryPool_1<T>*>(startCapacity, createNewItemFunc));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::SimpleMemoryPool_1<T>::_ctor(int32_t  startCapacity, ::System::Func_1<T>*  createNewItemFunc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startCapacity, createNewItemFunc);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::SimpleMemoryPool_1<T>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1<T>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::SimpleMemoryPool_1<T>::Despawn(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleMemoryPool_1<T>*>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
