#pragma once
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
template<typename T>
inline void UnityEngine::Pool::IObjectPool_1<T>::Release(T  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::IObjectPool_1<T>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, element);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
