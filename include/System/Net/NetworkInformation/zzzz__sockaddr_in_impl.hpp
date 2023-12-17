#pragma once
#include "System/Net/NetworkInformation/zzzz__sockaddr_in_def.hpp"
constexpr void System::Net::NetworkInformation::sockaddr_in::__set_sin_family(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& System::Net::NetworkInformation::sockaddr_in::__get_sin_family()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& System::Net::NetworkInformation::sockaddr_in::__get_sin_family() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::NetworkInformation::sockaddr_in::__set_sin_port(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& System::Net::NetworkInformation::sockaddr_in::__get_sin_port()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& System::Net::NetworkInformation::sockaddr_in::__get_sin_port() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::NetworkInformation::sockaddr_in::__set_sin_addr(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Net::NetworkInformation::sockaddr_in::__get_sin_addr()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Net::NetworkInformation::sockaddr_in::__get_sin_addr() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "sin_family", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_addr", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::sockaddr_in::sockaddr_in(uint16_t  sin_family, uint16_t  sin_port, uint32_t  sin_addr) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->sin_family = sin_family;
this->sin_port = sin_port;
this->sin_addr = sin_addr;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
