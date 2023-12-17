#pragma once
#include "System/Net/NetworkInformation/zzzz__AixAddressFamily_def.hpp"
constexpr void System::Net::NetworkInformation::AixAddressFamily::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::NetworkInformation::AixAddressFamily::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::NetworkInformation::AixAddressFamily::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixAddressFamily::AixAddressFamily(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::NetworkInformation::AixAddressFamily  System::Net::NetworkInformation::AixAddressFamily::AF_INET{static_cast<int32_t>(0x2)};
constexpr ::System::Net::NetworkInformation::AixAddressFamily  System::Net::NetworkInformation::AixAddressFamily::AF_INET6{static_cast<int32_t>(0x18)};
constexpr ::System::Net::NetworkInformation::AixAddressFamily  System::Net::NetworkInformation::AixAddressFamily::AF_LINK{static_cast<int32_t>(0x12)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
