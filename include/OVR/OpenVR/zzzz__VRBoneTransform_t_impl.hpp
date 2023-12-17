#pragma once
#include "OVR/OpenVR/zzzz__VRBoneTransform_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector4_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuaternionf_t_def.hpp"
constexpr void OVR::OpenVR::VRBoneTransform_t::__set_position(::OVR::OpenVR::HmdVector4_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdVector4_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::HmdVector4_t>(value));
}
constexpr ::OVR::OpenVR::HmdVector4_t& OVR::OpenVR::VRBoneTransform_t::__get_position()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector4_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::HmdVector4_t const& OVR::OpenVR::VRBoneTransform_t::__get_position() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector4_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VRBoneTransform_t::__set_orientation(::OVR::OpenVR::HmdQuaternionf_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdQuaternionf_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::HmdQuaternionf_t>(value));
}
constexpr ::OVR::OpenVR::HmdQuaternionf_t& OVR::OpenVR::VRBoneTransform_t::__get_orientation()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdQuaternionf_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::HmdQuaternionf_t const& OVR::OpenVR::VRBoneTransform_t::__get_orientation() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdQuaternionf_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "position", ty: "::OVR::OpenVR::HmdVector4_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "::OVR::OpenVR::HmdQuaternionf_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRBoneTransform_t::VRBoneTransform_t(::OVR::OpenVR::HmdVector4_t  position, ::OVR::OpenVR::HmdQuaternionf_t  orientation) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->position = position;
this->orientation = orientation;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
