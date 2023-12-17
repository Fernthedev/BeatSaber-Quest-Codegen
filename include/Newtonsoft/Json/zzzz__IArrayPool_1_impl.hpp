#pragma once
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
template<typename T>
inline ::ArrayW<T,::Array<T>*> Newtonsoft::Json::IArrayPool_1<T>::Rent(int32_t  minimumLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::IArrayPool_1<T>*>::get(),
                            "Rent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method, minimumLength);
}
template<typename T>
inline void Newtonsoft::Json::IArrayPool_1<T>::Return(::ArrayW<T,::Array<T>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::IArrayPool_1<T>*>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
