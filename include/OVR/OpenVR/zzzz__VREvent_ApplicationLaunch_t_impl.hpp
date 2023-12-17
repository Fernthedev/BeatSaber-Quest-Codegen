#pragma once
#include "OVR/OpenVR/zzzz__VREvent_ApplicationLaunch_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_ApplicationLaunch_t::__set_pid(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_ApplicationLaunch_t::__get_pid()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_ApplicationLaunch_t::__get_pid() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_ApplicationLaunch_t::__set_unArgsHandle(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_ApplicationLaunch_t::__get_unArgsHandle()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_ApplicationLaunch_t::__get_unArgsHandle() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unArgsHandle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_ApplicationLaunch_t::VREvent_ApplicationLaunch_t(uint32_t  pid, uint32_t  unArgsHandle) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->pid = pid;
this->unArgsHandle = unArgsHandle;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
