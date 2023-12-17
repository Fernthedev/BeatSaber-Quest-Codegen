#pragma once
#include "UnityEngine/zzzz__HumanLimit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
constexpr void UnityEngine::HumanLimit::__set_m_Min(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::HumanLimit::__get_m_Min()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::HumanLimit::__get_m_Min() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::HumanLimit::__set_m_Max(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::HumanLimit::__get_m_Max()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::HumanLimit::__get_m_Max() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::HumanLimit::__set_m_Center(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::HumanLimit::__get_m_Center()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::HumanLimit::__get_m_Center() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::HumanLimit::__set_m_AxisLength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::HumanLimit::__get_m_AxisLength()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::HumanLimit::__get_m_AxisLength() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::HumanLimit::__set_m_UseDefaultValues(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::HumanLimit::__get_m_UseDefaultValues()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::HumanLimit::__get_m_UseDefaultValues() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_Min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AxisLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UseDefaultValues", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HumanLimit::HumanLimit(::UnityEngine::Vector3  m_Min, ::UnityEngine::Vector3  m_Max, ::UnityEngine::Vector3  m_Center, float_t  m_AxisLength, int32_t  m_UseDefaultValues) noexcept : ::bs_hook::ValueTypeWrapper<0x2c>() {this->m_Min = m_Min;
this->m_Max = m_Max;
this->m_Center = m_Center;
this->m_AxisLength = m_AxisLength;
this->m_UseDefaultValues = m_UseDefaultValues;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
