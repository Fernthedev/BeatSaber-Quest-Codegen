#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_8_def.hpp"
#include "Zenject/zzzz__IMemoryPool_8_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "System/zzzz__Action_8_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::operator ::Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*() noexcept {
return static_cast<::Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::__set__onSpawnMethod(::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*, 0x28>(this, std::forward<::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>* Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::__get__onSpawnMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*> Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*, 0x28>(this);
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>* Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::New_ctor(::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::_ctor(::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::set_OnSpawnMethod(::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>::Spawn(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TParam5  p5, TParam6  p6, TParam7  p7)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam7>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, p1, p2, p3, p4, p5, p6, p7);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
