#pragma once
#include "OVR/OpenVR/zzzz__VREvent_WebConsole_t_def.hpp"
constexpr void OVR::OpenVR::VREvent_WebConsole_t::__set_webConsoleHandle(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& OVR::OpenVR::VREvent_WebConsole_t::__get_webConsoleHandle()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& OVR::OpenVR::VREvent_WebConsole_t::__get_webConsoleHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "webConsoleHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_WebConsole_t::VREvent_WebConsole_t(uint64_t  webConsoleHandle) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->webConsoleHandle = webConsoleHandle;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
