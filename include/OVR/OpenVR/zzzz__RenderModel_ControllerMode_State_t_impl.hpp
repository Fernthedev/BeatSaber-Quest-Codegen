#pragma once
#include "OVR/OpenVR/zzzz__RenderModel_ControllerMode_State_t_def.hpp"
constexpr void OVR::OpenVR::RenderModel_ControllerMode_State_t::__set_bScrollWheelVisible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& OVR::OpenVR::RenderModel_ControllerMode_State_t::__get_bScrollWheelVisible()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& OVR::OpenVR::RenderModel_ControllerMode_State_t::__get_bScrollWheelVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "bScrollWheelVisible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_ControllerMode_State_t::RenderModel_ControllerMode_State_t(bool  bScrollWheelVisible) noexcept : ::bs_hook::ValueTypeWrapper<0x1>() {this->bScrollWheelVisible = bScrollWheelVisible;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
