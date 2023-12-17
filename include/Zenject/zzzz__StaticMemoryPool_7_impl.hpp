#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "System/zzzz__Action_7_def.hpp"
#include "Zenject/zzzz__IMemoryPool_7_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
/// @brief Convert operator to "::Zenject::IMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*() noexcept {
return static_cast<::Zenject::IMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::__set__onSpawnMethod(::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this, std::forward<::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>* Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::__get__onSpawnMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*> Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this);
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>* Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::New_ctor(::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::_ctor(::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::set_OnSpawnMethod(::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>::Spawn(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, TParam3  p3, float_t  p4, TParam5  p5, float_t  p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3,::UnityEngine::Vector3,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, p1, p2, p3, p4, p5, p6);
}
/// @brief Convert operator to "::Zenject::IMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*() noexcept {
return static_cast<::Zenject::IMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::__set__onSpawnMethod(::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this, std::forward<::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>* Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::__get__onSpawnMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*> Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this);
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>* Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::New_ctor(::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::_ctor(::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::set_OnSpawnMethod(::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>::Spawn(::UnityEngine::Vector2  p1, ::UnityEngine::Vector2  p2, TParam3  p3, float_t  p4, TParam5  p5, float_t  p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, p1, p2, p3, p4, p5, p6);
}
/// @brief Convert operator to "::Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*() noexcept {
return static_cast<::Zenject::IMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::__set__onSpawnMethod(::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this, std::forward<::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>* Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::__get__onSpawnMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*> Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this);
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>* Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::New_ctor(::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::_ctor(::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::set_OnSpawnMethod(::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>::Spawn(float_t  p1, float_t  p2, TParam3  p3, float_t  p4, TParam5  p5, float_t  p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<float_t,float_t,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, p1, p2, p3, p4, p5, p6);
}
/// @brief Convert operator to "::Zenject::IMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*() noexcept {
return static_cast<::Zenject::IMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::__set__onSpawnMethod(::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this, std::forward<::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>* Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::__get__onSpawnMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*> Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*, 0x28>(this);
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>* Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::New_ctor(::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::_ctor(::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::set_OnSpawnMethod(::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TParam3,::cordl_internals::is_or_is_backed_by<int32_t> TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>::Spawn(::UnityEngine::Color  p1, ::UnityEngine::Color  p2, TParam3  p3, float_t  p4, TParam5  p5, float_t  p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<::UnityEngine::Color,::UnityEngine::Color,TParam3,float_t,TParam5,float_t,TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, p1, p2, p3, p4, p5, p6);
}
/// @brief Convert operator to "::Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::operator ::Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*() noexcept {
return static_cast<::Zenject::IMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::operator ::Zenject::IMemoryPool*() noexcept {
return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::__set__onSpawnMethod(::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*, 0x28>(this, std::forward<::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>* Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::__get__onSpawnMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*> Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::__get__onSpawnMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*, 0x28>(this);
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>* Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::New_ctor(::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: csnull)
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::_ctor(::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  onSpawnMethod, ::System::Action_1<TValue>*  onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
inline void Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::set_OnSpawnMethod(::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>::get(),
                            "set_OnSpawnMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>::Spawn(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TParam5  p5, TParam6  p6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticMemoryPool_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, p1, p2, p3, p4, p5, p6);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
