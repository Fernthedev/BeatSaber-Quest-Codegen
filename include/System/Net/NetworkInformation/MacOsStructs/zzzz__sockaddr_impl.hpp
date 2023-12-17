#pragma once
#include "System/Net/NetworkInformation/MacOsStructs/zzzz__sockaddr_def.hpp"
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr::__set_sa_len(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Net::NetworkInformation::MacOsStructs::sockaddr::__get_sa_len()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Net::NetworkInformation::MacOsStructs::sockaddr::__get_sa_len() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::sockaddr::__set_sa_family(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Net::NetworkInformation::MacOsStructs::sockaddr::__get_sa_family()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Net::NetworkInformation::MacOsStructs::sockaddr::__get_sa_family() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "sa_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sa_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::MacOsStructs::sockaddr::sockaddr(uint8_t  sa_len, uint8_t  sa_family) noexcept : ::bs_hook::ValueTypeWrapper<0x2>() {this->sa_len = sa_len;
this->sa_family = sa_family;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
