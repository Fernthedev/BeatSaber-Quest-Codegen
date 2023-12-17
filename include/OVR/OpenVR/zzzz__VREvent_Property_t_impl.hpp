#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Property_t_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
constexpr void OVR::OpenVR::VREvent_Property_t::__set_container(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_Property_t::__get_container()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_Property_t::__get_container() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Property_t::__set_prop(::OVR::OpenVR::ETrackedDeviceProperty  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::ETrackedDeviceProperty, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::ETrackedDeviceProperty>(value));
}
constexpr ::OVR::OpenVR::ETrackedDeviceProperty& OVR::OpenVR::VREvent_Property_t::__get_prop()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::ETrackedDeviceProperty, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::ETrackedDeviceProperty const& OVR::OpenVR::VREvent_Property_t::__get_prop() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::ETrackedDeviceProperty, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prop", ty: "::OVR::OpenVR::ETrackedDeviceProperty", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Property_t::VREvent_Property_t(uint64_t  container, ::OVR::OpenVR::ETrackedDeviceProperty  prop) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->container = container;
this->prop = prop;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
