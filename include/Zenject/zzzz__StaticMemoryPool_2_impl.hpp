#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_2<TParam1,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_2<TParam1,TValue>::operator ::Zenject::IMemoryPool_2<TParam1,TValue>*() noexcept {
return static_cast<::Zenject::IMemoryPool_2<TParam1,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_2<TParam1,TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_2<TParam1,TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::StaticMemoryPool_2<TParam1,TValue>::__set__onSpawnMethod(::System::Action_2<TParam1,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TParam1,TValue>*, 0x28>(this, std::forward<::System::Action_2<TParam1,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Action_2<TParam1,TValue>* Zenject::StaticMemoryPool_2<TParam1,TValue>::__get__onSpawnMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TParam1,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TParam1,TValue>*> Zenject::StaticMemoryPool_2<TParam1,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TParam1,TValue>*, 0x28>(this);
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPool_2<TParam1,TValue>* Zenject::StaticMemoryPool_2<TParam1,TValue>::New_ctor(::System::Action_2<TParam1,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_2<TParam1,TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_2<TParam1,TValue>::_ctor(::System::Action_2<TParam1,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2<TParam1,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TParam1,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_2<TParam1,TValue>::set_OnSpawnMethod(::System::Action_2<TParam1,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2<TParam1,TValue>*>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TParam1,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPool_2<TParam1,TValue>::Spawn(TParam1  param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_2<TParam1,TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, param);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
