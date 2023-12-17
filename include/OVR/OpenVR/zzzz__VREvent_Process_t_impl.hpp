#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Process_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_Process_t::__set_pid(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_Process_t::__get_pid()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_Process_t::__get_pid() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Process_t::__set_oldPid(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::VREvent_Process_t::__get_oldPid()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::VREvent_Process_t::__get_oldPid() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::VREvent_Process_t::__set_bForced(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& OVR::OpenVR::VREvent_Process_t::__get_bForced()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& OVR::OpenVR::VREvent_Process_t::__get_bForced() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "oldPid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bForced", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Process_t::VREvent_Process_t(uint32_t  pid, uint32_t  oldPid, bool  bForced) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->pid = pid;
this->oldPid = oldPid;
this->bForced = bForced;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
