#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::StaticMemoryPool_1<TValue>::__set__onSpawnMethod(::System::Action_1<TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<TValue>*, 0x28>(this, std::forward<::System::Action_1<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Action_1<TValue>* Zenject::StaticMemoryPool_1<TValue>::__get__onSpawnMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_1<TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TValue>*> Zenject::StaticMemoryPool_1<TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_1<TValue>*, 0x28>(this);
}
/// @param onSpawnMethod: ::System::Action_1<TValue>* (default: csnull)
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
/// @param initialSize: int32_t (default: static_cast<int32_t>(0x0))
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPool_1<TValue>* Zenject::StaticMemoryPool_1<TValue>::New_ctor(::System::Action_1<TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod, int32_t  initialSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_1<TValue>*>(onSpawnMethod, onDespawnedMethod, initialSize));
}
/// @param onSpawnMethod: ::System::Action_1<TValue>* (default: csnull)
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
/// @param initialSize: int32_t (default: static_cast<int32_t>(0x0))
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_1<TValue>::_ctor(::System::Action_1<TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod, int32_t  initialSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1<TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSpawnMethod, onDespawnedMethod, initialSize);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_1<TValue>::set_OnSpawnMethod(::System::Action_1<TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1<TValue>*>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPool_1<TValue>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_1<TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
