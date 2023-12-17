#pragma once
#include "OVR/OpenVR/zzzz__VRTextureWithPose_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
constexpr void OVR::OpenVR::VRTextureWithPose_t::__set_mDeviceToAbsoluteTracking(::OVR::OpenVR::HmdMatrix34_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr ::OVR::OpenVR::HmdMatrix34_t& OVR::OpenVR::VRTextureWithPose_t::__get_mDeviceToAbsoluteTracking()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::HmdMatrix34_t const& OVR::OpenVR::VRTextureWithPose_t::__get_mDeviceToAbsoluteTracking() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRTextureWithPose_t::VRTextureWithPose_t(::OVR::OpenVR::HmdMatrix34_t  mDeviceToAbsoluteTracking) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->mDeviceToAbsoluteTracking = mDeviceToAbsoluteTracking;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
