#pragma once
#include "Zenject/zzzz__StaticMemoryPool_6_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_6_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>* Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::OnSpawned(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TParam5  p5, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p1, p2, p3, p4, p5, value);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::OnDespawned(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
