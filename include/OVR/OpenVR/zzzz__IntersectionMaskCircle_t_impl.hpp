#pragma once
#include "OVR/OpenVR/zzzz__IntersectionMaskCircle_t_def.hpp"
constexpr void OVR::OpenVR::IntersectionMaskCircle_t::__set_m_flCenterX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::IntersectionMaskCircle_t::__get_m_flCenterX()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::IntersectionMaskCircle_t::__get_m_flCenterX() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IntersectionMaskCircle_t::__set_m_flCenterY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::IntersectionMaskCircle_t::__get_m_flCenterY()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::IntersectionMaskCircle_t::__get_m_flCenterY() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IntersectionMaskCircle_t::__set_m_flRadius(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::IntersectionMaskCircle_t::__get_m_flRadius()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::IntersectionMaskCircle_t::__get_m_flRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_flCenterX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCenterY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flRadius", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IntersectionMaskCircle_t::IntersectionMaskCircle_t(float_t  m_flCenterX, float_t  m_flCenterY, float_t  m_flRadius) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->m_flCenterX = m_flCenterX;
this->m_flCenterY = m_flCenterY;
this->m_flRadius = m_flRadius;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
