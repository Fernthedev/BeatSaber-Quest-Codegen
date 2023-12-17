#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Scroll_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_Scroll_t::__set_xdelta(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VREvent_Scroll_t::__get_xdelta()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VREvent_Scroll_t::__get_xdelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Scroll_t::__set_ydelta(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VREvent_Scroll_t::__get_ydelta()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VREvent_Scroll_t::__get_ydelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Scroll_t::__set_repeatCount(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_Scroll_t::__get_repeatCount()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_Scroll_t::__get_repeatCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "xdelta", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ydelta", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "repeatCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Scroll_t::VREvent_Scroll_t(float_t  xdelta, float_t  ydelta, uint32_t  repeatCount) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->xdelta = xdelta;
this->ydelta = ydelta;
this->repeatCount = repeatCount;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
