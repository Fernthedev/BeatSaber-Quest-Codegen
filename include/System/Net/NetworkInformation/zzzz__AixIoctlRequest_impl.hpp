#pragma once
#include "System/Net/NetworkInformation/zzzz__AixIoctlRequest_def.hpp"
constexpr void System::Net::NetworkInformation::AixIoctlRequest::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Net::NetworkInformation::AixIoctlRequest::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& System::Net::NetworkInformation::AixIoctlRequest::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixIoctlRequest::AixIoctlRequest(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  System::Net::NetworkInformation::AixIoctlRequest::SIOCGSIZIFCONF{static_cast<uint32_t>(0x4696af0u)};
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFCONF{static_cast<uint32_t>(0x106945f0u)};
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFFLAGS{static_cast<uint32_t>(0x286911f0u)};
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFNETMASK{static_cast<uint32_t>(0x286925f0u)};
constexpr ::System::Net::NetworkInformation::AixIoctlRequest  System::Net::NetworkInformation::AixIoctlRequest::SIOCGIFMTU{static_cast<uint32_t>(0x286956f0u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
