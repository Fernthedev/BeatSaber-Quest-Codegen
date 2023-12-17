#pragma once
#include "System/Net/NetworkInformation/zzzz__MacOsArpHardware_def.hpp"
constexpr void System::Net::NetworkInformation::MacOsArpHardware::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::NetworkInformation::MacOsArpHardware::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::NetworkInformation::MacOsArpHardware::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::MacOsArpHardware::MacOsArpHardware(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::ETHER{static_cast<int32_t>(0x6)};
constexpr ::System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::ATM{static_cast<int32_t>(0x25)};
constexpr ::System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::SLIP{static_cast<int32_t>(0x1c)};
constexpr ::System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::PPP{static_cast<int32_t>(0x17)};
constexpr ::System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::LOOPBACK{static_cast<int32_t>(0x18)};
constexpr ::System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::FDDI{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
