#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::MemoryPoolContainer_1<T>::__set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T>*, 0x10>(this, std::forward<::GlobalNamespace::LazyCopyHashSet_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>* GlobalNamespace::MemoryPoolContainer_1<T>::__get__activeItems()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<T>*> GlobalNamespace::MemoryPoolContainer_1<T>::__get__activeItems() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::MemoryPoolContainer_1<T>::__set__memoryPool(::Zenject::IMemoryPool_1<T>*  value)  {
::cordl_internals::setInstanceField<::Zenject::IMemoryPool_1<T>*, 0x18>(this, std::forward<::Zenject::IMemoryPool_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Zenject::IMemoryPool_1<T>* GlobalNamespace::MemoryPoolContainer_1<T>::__get__memoryPool()  {
return ::cordl_internals::getInstanceField<::Zenject::IMemoryPool_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T>*> GlobalNamespace::MemoryPoolContainer_1<T>::__get__memoryPool() const {
return ::cordl_internals::getInstanceField<::Zenject::IMemoryPool_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::MemoryPoolContainer_1<T>::get_activeItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::MemoryPoolContainer_1<T>* GlobalNamespace::MemoryPoolContainer_1<T>::New_ctor(::Zenject::IMemoryPool_1<T>*  memoryPool)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MemoryPoolContainer_1<T>*>(memoryPool));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::MemoryPoolContainer_1<T>::_ctor(::Zenject::IMemoryPool_1<T>*  memoryPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IMemoryPool_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, memoryPool);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::MemoryPoolContainer_1<T>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::MemoryPoolContainer_1<T>::Despawn(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::MemoryPoolContainer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MemoryPoolContainer_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
