#pragma once
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_Data_t_def.hpp"
#include "OVR/OpenVR/zzzz__IntersectionMaskRectangle_t_def.hpp"
#include "OVR/OpenVR/zzzz__IntersectionMaskCircle_t_def.hpp"
constexpr void OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__set_m_Rectangle(::OVR::OpenVR::IntersectionMaskRectangle_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::IntersectionMaskRectangle_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::IntersectionMaskRectangle_t>(value));
}
constexpr ::OVR::OpenVR::IntersectionMaskRectangle_t& OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__get_m_Rectangle()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::IntersectionMaskRectangle_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::IntersectionMaskRectangle_t const& OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__get_m_Rectangle() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::IntersectionMaskRectangle_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__set_m_Circle(::OVR::OpenVR::IntersectionMaskCircle_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::IntersectionMaskCircle_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::IntersectionMaskCircle_t>(value));
}
constexpr ::OVR::OpenVR::IntersectionMaskCircle_t& OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__get_m_Circle()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::IntersectionMaskCircle_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::IntersectionMaskCircle_t const& OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__get_m_Circle() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::IntersectionMaskCircle_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_Rectangle", ty: "::OVR::OpenVR::IntersectionMaskRectangle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Circle", ty: "::OVR::OpenVR::IntersectionMaskCircle_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::VROverlayIntersectionMaskPrimitive_Data_t(::OVR::OpenVR::IntersectionMaskRectangle_t  m_Rectangle, ::OVR::OpenVR::IntersectionMaskCircle_t  m_Circle) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_Rectangle = m_Rectangle;
this->m_Circle = m_Circle;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
