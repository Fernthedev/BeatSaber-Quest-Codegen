#pragma once
#include "OVR/OpenVR/zzzz__VREvent_InputActionManifestLoad_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_InputActionManifestLoad_t::__set_pathAppKey(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathAppKey()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathAppKey() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_InputActionManifestLoad_t::__set_pathMessage(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathMessage()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathMessage() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_InputActionManifestLoad_t::__set_pathMessageParam(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathMessageParam()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathMessageParam() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_InputActionManifestLoad_t::__set_pathManifestPath(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathManifestPath()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathManifestPath() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "pathAppKey", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessageParam", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathManifestPath", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::VREvent_InputActionManifestLoad_t(uint64_t  pathAppKey, uint64_t  pathMessage, uint64_t  pathMessageParam, uint64_t  pathManifestPath) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->pathAppKey = pathAppKey;
this->pathMessage = pathMessage;
this->pathMessageParam = pathMessageParam;
this->pathManifestPath = pathManifestPath;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
