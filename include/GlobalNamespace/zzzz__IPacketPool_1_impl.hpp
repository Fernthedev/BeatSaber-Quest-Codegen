#pragma once
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IPacketPool"
template<typename T>
constexpr  GlobalNamespace::IPacketPool_1<T>::operator ::GlobalNamespace::IPacketPool*() noexcept {
return static_cast<::GlobalNamespace::IPacketPool*>(static_cast<void*>(this));
}
template<typename T>
inline T GlobalNamespace::IPacketPool_1<T>::Obtain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPacketPool_1<T>*>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::IPacketPool_1<T>::Release(T  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPacketPool_1<T>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
