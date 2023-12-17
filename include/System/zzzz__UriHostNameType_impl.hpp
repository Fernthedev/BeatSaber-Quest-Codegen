#pragma once
#include "System/zzzz__UriHostNameType_def.hpp"
constexpr void System::UriHostNameType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::UriHostNameType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::UriHostNameType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriHostNameType::UriHostNameType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::UriHostNameType  System::UriHostNameType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::UriHostNameType  System::UriHostNameType::Basic{static_cast<int32_t>(0x1)};
constexpr ::System::UriHostNameType  System::UriHostNameType::Dns{static_cast<int32_t>(0x2)};
constexpr ::System::UriHostNameType  System::UriHostNameType::IPv4{static_cast<int32_t>(0x3)};
constexpr ::System::UriHostNameType  System::UriHostNameType::IPv6{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
