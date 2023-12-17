#pragma once
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory"
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
constexpr  Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>::operator ::Zenject::IFactory*() noexcept {
return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
inline TValue Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>::Create(TParam1  param1, TParam2  param2, TParam3  param3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, param1, param2, param3);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
