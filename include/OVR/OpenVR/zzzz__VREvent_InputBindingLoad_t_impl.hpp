#pragma once
#include "OVR/OpenVR/zzzz__VREvent_InputBindingLoad_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_InputBindingLoad_t::__set_ulAppContainer(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_InputBindingLoad_t::__get_ulAppContainer()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_InputBindingLoad_t::__get_ulAppContainer() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_InputBindingLoad_t::__set_pathMessage(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathMessage()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathMessage() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_InputBindingLoad_t::__set_pathUrl(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathUrl()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathUrl() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_InputBindingLoad_t::__set_pathControllerType(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathControllerType()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathControllerType() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "ulAppContainer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathUrl", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathControllerType", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_InputBindingLoad_t::VREvent_InputBindingLoad_t(uint64_t  ulAppContainer, uint64_t  pathMessage, uint64_t  pathUrl, uint64_t  pathControllerType) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->ulAppContainer = ulAppContainer;
this->pathMessage = pathMessage;
this->pathUrl = pathUrl;
this->pathControllerType = pathControllerType;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
