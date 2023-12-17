#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__set_m_CreateFunc(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x10>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Func_1<T>* UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get_m_CreateFunc()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get_m_CreateFunc() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__set_m_ResetAction(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x18>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get_m_ResetAction()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get_m_ResetAction() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__set_m_Limit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get_m_Limit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get_m_Limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__set_m_PoolFirst(T  value)  {
::cordl_internals::setInstanceField<T, 0x28>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get_m_PoolFirst()  {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get_m_PoolFirst() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__set__Count_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get__Count_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__get__Count_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
/// @param limit: int32_t (default: static_cast<int32_t>(0x2710))
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::UIR::LinkedPool_1<T>* UnityEngine::UIElements::UIR::LinkedPool_1<T>::New_ctor(::System::Func_1<T>*  createFunc, ::System::Action_1<T>*  resetAction, int32_t  limit)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>(createFunc, resetAction, limit));
}
/// @param limit: int32_t (default: static_cast<int32_t>(0x2710))
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UIR::LinkedPool_1<T>::_ctor(::System::Func_1<T>*  createFunc, ::System::Action_1<T>*  resetAction, int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, createFunc, resetAction, limit);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t UnityEngine::UIElements::UIR::LinkedPool_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UIR::LinkedPool_1<T>::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UIR::LinkedPool_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::UIR::LinkedPool_1<T>::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::UIR::LinkedPool_1<T>::Return(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>::get(),
                            "Return",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
