#pragma once
#include "Zenject/zzzz__IPoolable_5_def.hpp"
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
inline void Zenject::IPoolable_5<TParam1,TParam2,TParam3,TParam4,TParam5>::OnDespawned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IPoolable_5<TParam1,TParam2,TParam3,TParam4,TParam5>*>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
inline void Zenject::IPoolable_5<TParam1,TParam2,TParam3,TParam4,TParam5>::OnSpawned(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TParam5  p5)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IPoolable_5<TParam1,TParam2,TParam3,TParam4,TParam5>*>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, p1, p2, p3, p4, p5);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
