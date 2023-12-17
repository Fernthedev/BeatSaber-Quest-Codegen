#pragma once
#include "OVR/OpenVR/zzzz__SpatialAnchorPose_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
constexpr void OVR::OpenVR::SpatialAnchorPose_t::__set_mAnchorToAbsoluteTracking(::OVR::OpenVR::HmdMatrix34_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr ::OVR::OpenVR::HmdMatrix34_t& OVR::OpenVR::SpatialAnchorPose_t::__get_mAnchorToAbsoluteTracking()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::HmdMatrix34_t const& OVR::OpenVR::SpatialAnchorPose_t::__get_mAnchorToAbsoluteTracking() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "mAnchorToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::SpatialAnchorPose_t::SpatialAnchorPose_t(::OVR::OpenVR::HmdMatrix34_t  mAnchorToAbsoluteTracking) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->mAnchorToAbsoluteTracking = mAnchorToAbsoluteTracking;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
