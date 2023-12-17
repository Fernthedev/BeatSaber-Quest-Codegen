#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Controller_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_Controller_t::__set_button(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_Controller_t::__get_button()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_Controller_t::__get_button() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "button", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Controller_t::VREvent_Controller_t(uint32_t  button) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->button = button;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
