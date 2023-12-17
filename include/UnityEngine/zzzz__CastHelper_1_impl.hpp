#pragma once
#include "UnityEngine/zzzz__CastHelper_1_def.hpp"
template<typename T>
constexpr void UnityEngine::CastHelper_1<T>::__set_t(T  value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<typename T>
constexpr T& UnityEngine::CastHelper_1<T>::__get_t()  {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr T const& UnityEngine::CastHelper_1<T>::__get_t() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr void UnityEngine::CastHelper_1<T>::__set_onePointerFurtherThanT(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
template<typename T>
constexpr ::cordl_internals::intptr_t& UnityEngine::CastHelper_1<T>::__get_onePointerFurtherThanT()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr ::cordl_internals::intptr_t const& UnityEngine::CastHelper_1<T>::__get_onePointerFurtherThanT() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "t", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onePointerFurtherThanT", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::UnityEngine::CastHelper_1<T>::CastHelper_1(T  t, ::cordl_internals::intptr_t  onePointerFurtherThanT) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->t = t;
this->onePointerFurtherThanT = onePointerFurtherThanT;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
