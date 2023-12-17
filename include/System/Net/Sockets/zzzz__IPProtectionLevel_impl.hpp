#pragma once
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
constexpr void System::Net::Sockets::IPProtectionLevel::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::Sockets::IPProtectionLevel::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::Sockets::IPProtectionLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::IPProtectionLevel::IPProtectionLevel(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::Sockets::IPProtectionLevel  System::Net::Sockets::IPProtectionLevel::Unspecified{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Net::Sockets::IPProtectionLevel  System::Net::Sockets::IPProtectionLevel::Unrestricted{static_cast<int32_t>(0xa)};
constexpr ::System::Net::Sockets::IPProtectionLevel  System::Net::Sockets::IPProtectionLevel::EdgeRestricted{static_cast<int32_t>(0x14)};
constexpr ::System::Net::Sockets::IPProtectionLevel  System::Net::Sockets::IPProtectionLevel::Restricted{static_cast<int32_t>(0x1e)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
