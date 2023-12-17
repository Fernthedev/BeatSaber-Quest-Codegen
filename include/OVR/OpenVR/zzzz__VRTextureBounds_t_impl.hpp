#pragma once
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
constexpr void OVR::OpenVR::VRTextureBounds_t::__set_uMin(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VRTextureBounds_t::__get_uMin()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VRTextureBounds_t::__get_uMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRTextureBounds_t::__set_vMin(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VRTextureBounds_t::__get_vMin()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VRTextureBounds_t::__get_vMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRTextureBounds_t::__set_uMax(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VRTextureBounds_t::__get_uMax()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VRTextureBounds_t::__get_uMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRTextureBounds_t::__set_vMax(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VRTextureBounds_t::__get_vMax()  {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VRTextureBounds_t::__get_vMax() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "uMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uMax", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vMax", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRTextureBounds_t::VRTextureBounds_t(float_t  uMin, float_t  vMin, float_t  uMax, float_t  vMax) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->uMin = uMin;
this->vMin = vMin;
this->uMax = uMax;
this->vMax = vMax;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
