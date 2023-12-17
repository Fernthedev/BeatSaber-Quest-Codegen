#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::Pool::ObjectPool_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Pool::IObjectPool_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::Pool::ObjectPool_1<T>::operator ::UnityEngine::Pool::IObjectPool_1<T>*() noexcept {
return static_cast<::UnityEngine::Pool::IObjectPool_1<T>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_List(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<T>* UnityEngine::Pool::ObjectPool_1<T>::__get_m_List()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> UnityEngine::Pool::ObjectPool_1<T>::__get_m_List() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_CreateFunc(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x18>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Func_1<T>* UnityEngine::Pool::ObjectPool_1<T>::__get_m_CreateFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> UnityEngine::Pool::ObjectPool_1<T>::__get_m_CreateFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_ActionOnGet(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x20>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnGet()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnGet() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_ActionOnRelease(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x28>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnRelease()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnRelease() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_ActionOnDestroy(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x30>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnDestroy()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnDestroy() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_MaxSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::Pool::ObjectPool_1<T>::__get_m_MaxSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_MaxSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_CollectionCheck(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& UnityEngine::Pool::ObjectPool_1<T>::__get_m_CollectionCheck()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_CollectionCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set__CountAll_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::Pool::ObjectPool_1<T>::__get__CountAll_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::Pool::ObjectPool_1<T>::__get__CountAll_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::Pool::ObjectPool_1<T>::get_CountAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            "get_CountAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Pool::ObjectPool_1<T>::set_CountAll(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            "set_CountAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::Pool::ObjectPool_1<T>::get_CountInactive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            "get_CountInactive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @param actionOnGet: ::System::Action_1<T>* (default: csnull)
/// @param actionOnRelease: ::System::Action_1<T>* (default: csnull)
/// @param actionOnDestroy: ::System::Action_1<T>* (default: csnull)
/// @param collectionCheck: bool (default: true)
/// @param defaultCapacity: int32_t (default: static_cast<int32_t>(0xa))
/// @param maxSize: int32_t (default: static_cast<int32_t>(0x2710))
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::Pool::ObjectPool_1<T>* UnityEngine::Pool::ObjectPool_1<T>::New_ctor(::System::Func_1<T>*  createFunc, ::System::Action_1<T>*  actionOnGet, ::System::Action_1<T>*  actionOnRelease, ::System::Action_1<T>*  actionOnDestroy, bool  collectionCheck, int32_t  defaultCapacity, int32_t  maxSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Pool::ObjectPool_1<T>*>(createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, defaultCapacity, maxSize));
}
/// @param actionOnGet: ::System::Action_1<T>* (default: csnull)
/// @param actionOnRelease: ::System::Action_1<T>* (default: csnull)
/// @param actionOnDestroy: ::System::Action_1<T>* (default: csnull)
/// @param collectionCheck: bool (default: true)
/// @param defaultCapacity: int32_t (default: static_cast<int32_t>(0xa))
/// @param maxSize: int32_t (default: static_cast<int32_t>(0x2710))
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Pool::ObjectPool_1<T>::_ctor(::System::Func_1<T>*  createFunc, ::System::Action_1<T>*  actionOnGet, ::System::Action_1<T>*  actionOnRelease, ::System::Action_1<T>*  actionOnDestroy, bool  collectionCheck, int32_t  defaultCapacity, int32_t  maxSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, defaultCapacity, maxSize);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::Pool::ObjectPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::Pool::PooledObject_1<T> UnityEngine::Pool::ObjectPool_1<T>::Get(ByRef<T>  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<T>, false>(*this, ___internal_method, v);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Pool::ObjectPool_1<T>::Release(T  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, element);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Pool::ObjectPool_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Pool::ObjectPool_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
