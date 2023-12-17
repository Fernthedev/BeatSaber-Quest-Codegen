#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Ipd_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_Ipd_t::__set_ipdMeters(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::VREvent_Ipd_t::__get_ipdMeters()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::VREvent_Ipd_t::__get_ipdMeters() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "ipdMeters", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Ipd_t::VREvent_Ipd_t(float_t  ipdMeters) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->ipdMeters = ipdMeters;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
