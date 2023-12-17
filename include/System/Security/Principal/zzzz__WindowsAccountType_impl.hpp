#pragma once
#include "System/Security/Principal/zzzz__WindowsAccountType_def.hpp"
constexpr void System::Security::Principal::WindowsAccountType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Principal::WindowsAccountType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Principal::WindowsAccountType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Principal::WindowsAccountType::WindowsAccountType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Principal::WindowsAccountType  System::Security::Principal::WindowsAccountType::Normal{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Principal::WindowsAccountType  System::Security::Principal::WindowsAccountType::Guest{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Principal::WindowsAccountType  System::Security::Principal::WindowsAccountType::System{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Principal::WindowsAccountType  System::Security::Principal::WindowsAccountType::Anonymous{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
