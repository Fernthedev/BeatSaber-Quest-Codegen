#pragma once
#include "System/Net/zzzz__FtpLoginState_def.hpp"
constexpr void System::Net::FtpLoginState::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Net::FtpLoginState::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Net::FtpLoginState::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::FtpLoginState::FtpLoginState(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::System::Net::FtpLoginState  System::Net::FtpLoginState::NotLoggedIn{static_cast<uint8_t>(0x0u)};
constexpr ::System::Net::FtpLoginState  System::Net::FtpLoginState::LoggedIn{static_cast<uint8_t>(0x1u)};
constexpr ::System::Net::FtpLoginState  System::Net::FtpLoginState::LoggedInButNeedsRelogin{static_cast<uint8_t>(0x2u)};
constexpr ::System::Net::FtpLoginState  System::Net::FtpLoginState::ReloginFailed{static_cast<uint8_t>(0x3u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
