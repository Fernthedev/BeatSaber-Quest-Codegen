#pragma once
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<typename TValue>
constexpr  Zenject::IMemoryPool_1<TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<typename TValue>
constexpr  Zenject::IMemoryPool_1<TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<typename TValue>
inline TValue Zenject::IMemoryPool_1<TValue>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IMemoryPool_1<TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
