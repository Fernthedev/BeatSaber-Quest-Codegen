#pragma once
#include "OVR/OpenVR/zzzz__VREvent_SeatedZeroPoseReset_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_SeatedZeroPoseReset_t::__set_bResetBySystemMenu(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& OVR::OpenVR::VREvent_SeatedZeroPoseReset_t::__get_bResetBySystemMenu()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& OVR::OpenVR::VREvent_SeatedZeroPoseReset_t::__get_bResetBySystemMenu() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "bResetBySystemMenu", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t::VREvent_SeatedZeroPoseReset_t(bool  bResetBySystemMenu) noexcept : ::bs_hook::ValueTypeWrapper<0x1>() {this->bResetBySystemMenu = bResetBySystemMenu;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
