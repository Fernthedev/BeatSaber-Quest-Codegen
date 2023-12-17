#pragma once
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::Pool::PooledObject_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::PooledObject_1<T>::__set_m_ToReturn(T  value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& UnityEngine::Pool::PooledObject_1<T>::__get_m_ToReturn()  {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& UnityEngine::Pool::PooledObject_1<T>::__get_m_ToReturn() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::Pool::PooledObject_1<T>::__set_m_Pool(::UnityEngine::Pool::IObjectPool_1<T>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pool::IObjectPool_1<T>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Pool::IObjectPool_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::Pool::IObjectPool_1<T>* UnityEngine::Pool::PooledObject_1<T>::__get_m_Pool()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pool::IObjectPool_1<T>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Pool::IObjectPool_1<T>*> UnityEngine::Pool::PooledObject_1<T>::__get_m_Pool() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pool::IObjectPool_1<T>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Pool::PooledObject_1<T>::_ctor(T  value, ::UnityEngine::Pool::IObjectPool_1<T>*  pool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pool::IObjectPool_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, pool);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::Pool::PooledObject_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Pool", ty: "::UnityEngine::Pool::IObjectPool_1<T>*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::Pool::PooledObject_1<T>::PooledObject_1(T  m_ToReturn, ::UnityEngine::Pool::IObjectPool_1<T>*  m_Pool) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_ToReturn = m_ToReturn;
this->m_Pool = m_Pool;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
