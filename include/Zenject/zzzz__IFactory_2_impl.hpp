#pragma once
#include "Zenject/zzzz__IFactory_2_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory"
template<typename TParam1,typename TValue>
constexpr  Zenject::IFactory_2<TParam1,TValue>::operator ::Zenject::IFactory*() noexcept {
return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template<typename TParam1,typename TValue>
inline TValue Zenject::IFactory_2<TParam1,TValue>::Create(TParam1  param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_2<TParam1,TValue>*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, param);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
