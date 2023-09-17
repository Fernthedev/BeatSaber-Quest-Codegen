#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_Mouse_t_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "button", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Mouse_t::VREvent_Mouse_t(float_t x, float_t y, uint32_t button) noexcept : ::bs_hook::ValueTypeWrapper() {this->x = x;
this->y = y;
this->button = button;
}
constexpr void ::OVR::OpenVR::VREvent_Mouse_t::__set_x(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::VREvent_Mouse_t::__get_x() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_Mouse_t::__set_y(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::VREvent_Mouse_t::__get_y() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_Mouse_t::__set_button(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_Mouse_t::__get_button() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
} // end anonymous namespace
