#pragma once
#include "Zenject/zzzz__IFactory_7_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory"
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
constexpr  Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::operator ::Zenject::IFactory*() noexcept {
return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
inline TValue Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::Create(TParam1  param1, TParam2  param2, TParam3  param3, TParam4  param4, TParam5  param5, TParam6  param6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, param1, param2, param3, param4, param5, param6);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
