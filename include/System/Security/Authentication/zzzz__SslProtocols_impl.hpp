#pragma once
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
constexpr void System::Security::Authentication::SslProtocols::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Authentication::SslProtocols::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Authentication::SslProtocols::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Authentication::SslProtocols::SslProtocols(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Ssl2{static_cast<int32_t>(0xc)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Ssl3{static_cast<int32_t>(0x30)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls{static_cast<int32_t>(0xc0)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls11{static_cast<int32_t>(0x300)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls12{static_cast<int32_t>(0xc00)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Tls13{static_cast<int32_t>(0x3000)};
constexpr ::System::Security::Authentication::SslProtocols  System::Security::Authentication::SslProtocols::Default{static_cast<int32_t>(0xf0)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
