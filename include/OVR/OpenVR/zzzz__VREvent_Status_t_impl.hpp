#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Status_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_Status_t::__set_statusState(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_Status_t::__get_statusState()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_Status_t::__get_statusState() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "statusState", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Status_t::VREvent_Status_t(uint32_t  statusState) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->statusState = statusState;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
