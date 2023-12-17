#pragma once
#include "System/zzzz__PlatformID_def.hpp"
constexpr void System::PlatformID::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::PlatformID::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::PlatformID::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::PlatformID::PlatformID(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::PlatformID  System::PlatformID::Win32S{static_cast<int32_t>(0x0)};
constexpr ::System::PlatformID  System::PlatformID::Win32Windows{static_cast<int32_t>(0x1)};
constexpr ::System::PlatformID  System::PlatformID::Win32NT{static_cast<int32_t>(0x2)};
constexpr ::System::PlatformID  System::PlatformID::WinCE{static_cast<int32_t>(0x3)};
constexpr ::System::PlatformID  System::PlatformID::Unix{static_cast<int32_t>(0x4)};
constexpr ::System::PlatformID  System::PlatformID::Xbox{static_cast<int32_t>(0x5)};
constexpr ::System::PlatformID  System::PlatformID::MacOSX{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
