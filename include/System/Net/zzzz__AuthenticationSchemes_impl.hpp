#pragma once
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
constexpr void System::Net::AuthenticationSchemes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::AuthenticationSchemes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::AuthenticationSchemes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::AuthenticationSchemes::AuthenticationSchemes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::AuthenticationSchemes  System::Net::AuthenticationSchemes::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::AuthenticationSchemes  System::Net::AuthenticationSchemes::Digest{static_cast<int32_t>(0x1)};
constexpr ::System::Net::AuthenticationSchemes  System::Net::AuthenticationSchemes::Negotiate{static_cast<int32_t>(0x2)};
constexpr ::System::Net::AuthenticationSchemes  System::Net::AuthenticationSchemes::Ntlm{static_cast<int32_t>(0x4)};
constexpr ::System::Net::AuthenticationSchemes  System::Net::AuthenticationSchemes::Basic{static_cast<int32_t>(0x8)};
constexpr ::System::Net::AuthenticationSchemes  System::Net::AuthenticationSchemes::Anonymous{static_cast<int32_t>(0x8000)};
constexpr ::System::Net::AuthenticationSchemes  System::Net::AuthenticationSchemes::IntegratedWindowsAuthentication{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
